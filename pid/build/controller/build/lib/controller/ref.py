#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from messages.msg import Refsignal

class ref(Node):
    def __init__(self):
        super().__init__("referencenode")
        self.publisher = self.create_publisher(Refsignal, "/reference", 10)
        self.timer = self.create_timer(.5, self.send_reference)

    def send_reference(self):
        self.get_logger().info("Reference is working")
        msg = Refsignal()
        msg.setpoint = 1
        self.publisher.publish(msg)

def main(args = None):
    rclpy.init(args = args)
    node = ref()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == 'main':
    main()
