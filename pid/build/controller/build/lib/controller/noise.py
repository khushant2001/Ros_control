#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from numpy.random import normal
from messages.msg import Noise 
class noise(Node):
    def __init__(self):
        super().__init__("Noise")
        self.publisher = self.create_publisher(Noise, "/add_noise", 10)
        self.timer = self.create_timer(.5, self.add_noise)
    def add_noise(self):
        self.get_logger().info("Adding noise")
        msg = Noise()
        msg.noise = normal(0,1)
        self.publisher.publish(msg)
def main(args = None):
    rclpy.init(args = args)
    node = noise()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == 'main':
    main()
