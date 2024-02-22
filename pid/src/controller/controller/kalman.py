#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from messages.msg import Filter
from messages.msg import Systemsignal
import numpy as np

# Mass spring system parameters!
m = 1
b = 10
k = 100

# Mass spring system dynamics!
A = np.array([
    [0,1],
    [-k/m,-b/m]
])
B = np.array([
    [0],
    [1/m]
])
C = np.array([
    [1,0],
    [0,1]
])
D = np.zeros((2,1))

# Kalman filter parameters
L = [] # Kalman gain

# Process and sensor noise covariance!
q = 0.001
r = 0.1
Q = np.eye(2) * q 
R = np.eye(2) * r

# Error Covariance
P = [np.zeros((2,2))]
delta_t = 0.001

# Declaring arrays to store the outputs.
x_filtered = [np.zeros((2,1))]
x_non_noisy = [np.zeros((2,1))]
correction_time = []
correction_x = []

class kalman(Node):
    def __init__(self):
        super().__init__("Kalman_filter")
        self.subsriber = self.create_subscription(Systemsignal, "/system", self.kalman_filter, 10)
        self.publisher = self.create_publisher(Filter, "/kalman_filter", 10)

    def kalman_filter(self,signal:Systemsignal):
        msg = Filter()
        x_actual = np.array([
            [float(signal.position)],
            [float(signal.velocity)]
            ])
        L.append(P[-1] @ C.T @ np.linalg.inv( C @ P[-1] @ C.T + R))
        x_filtered.append(x_filtered[-1] + L[-1] @ ( x_actual - C @ x_filtered [-1]))
        P.append((np.eye(2) - L[-1] @ C) @ P[-1] @ (np.eye(2) - L[-1] @ C).T + L[-1]@R@L[-1].T)
        msg.position = float(x_filtered[-1][0])
        msg.velocity = float(x_filtered[-1][1])
        self.publisher.publish(msg)


def main(args = None):
    rclpy.init(args = args)
    node = kalman()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == 'main':
    main()

