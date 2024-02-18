#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
import numpy as np
from numpy import float32
from messages.msg import Pidsignal
from messages.msg import Systemsignal
from messages.msg import Noise
# Things to worry about: how to get time element. 

# Mass spring system
m = 1
b = 10
k = 100

A = np.array([
    [0,1],
    [-k/m,-b/m]
])
B = np.array([
    [0],
    [1/m]
])
C = np.array([
    [1,0]
])
D = np.zeros((1,1))

time_step = .01
pos = [0]
vel = [0]

class system(Node):
    def __init__(self):
        super().__init__("systemnode")
        self.subsriber = self.create_subscription(Pidsignal, "/pid_controller", self.system_dynamics, 10)
        self.publisher = self.create_publisher(Systemsignal, "/system", 10)
        self.timer = self.create_timer(1, self.first_msg)
        self.noise_pub = self.create_subscription(Noise, "/add_noise", self.noise_value,10)
        self.n = None

    def noise_value(self,Noise):
        self.get_logger().info("Adding noise")
        self.n = Noise.noise

    def first_msg(self):    
        cmd = Systemsignal()
        cmd.position = float(0)
        cmd.velocity = float(0)
        self.publisher.publish(cmd)
        self.get_logger().info("First command published")
        self.timer.cancel()
        
    def system_dynamics(self,signal:Pidsignal):
        self.get_logger().info("System is running")
        cmd = Systemsignal()
        state = np.array([
        [pos[-1]],
        [vel[-1]]
        ])

        force = np.array([
        [signal.actuation + float(self.n)]
            ])
        x_dot = A@state + B@force
        pos.append(pos[-1] + x_dot.item(0)*time_step + float(self.n))
        vel.append(vel[-1] + x_dot.item(1)*time_step + float(self.n))
        cmd.position = float(pos[-1])
        cmd.velocity = float(vel[-1])
        self.publisher.publish(cmd)

def main(args = None):
    rclpy.init(args = args)
    node = system()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
