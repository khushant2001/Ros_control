#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from messages.msg import Pidsignal
from messages.msg import Refsignal
from messages.msg import Systemsignal
import numpy as np
from numpy import float32

kp = 1
ki = 1
kd = 0.2

integral = [0]
error = [0]
time_step = .01
class pid(Node):
    def __init__(self):
        super().__init__("Pid")
        self.publisher = self.create_publisher(Pidsignal, "/pid_controller", 10)
        self.subscriber = self.create_subscription(Refsignal, "/reference", self.ref_update, 10)
        self.subsriber = self.create_subscription(Systemsignal, "/system", self.feedback,10)
        self.ref = None

    def ref_update(self, ref:Refsignal):
        self.get_logger().info("Reference updated")
        self.ref = ref.setpoint

    def feedback(self, signal:Systemsignal):
        self.get_logger().info("Controller is working")
        msg = Pidsignal()
        pos = signal.position
        msg.actuation = float(pid_controller(self.ref,pos))
        self.publisher.publish(msg)

def pid_controller(setpoint, signal):
    error.append(setpoint - signal)
    integral.append(error[-1]*time_step + integral[-1])
    derivative = (error[-1] - error[-2]) / time_step if len(error) > 1 else 0
    control = kp * error[-1] + ki * integral[-1] + kd * derivative
    return control

def main(args = None):
    rclpy.init(args = args)
    node = pid()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == 'main':
    main()
