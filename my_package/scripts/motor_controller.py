#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
import serial

class MotorController(Node):
    def __init__(self):
        super().__init__('motor_controller')

        # Serial port configuration (adjust as needed)
        self.serial_port = serial.Serial('/dev/ttyUSB1', 9600, timeout=1)

        # Subscribe to the /cmd_vel topic
        self.subscription = self.create_subscription(
            Twist, '/cmd_vel', self.listener_callback, 10
        )

    def listener_callback(self, msg):
        linear_x = msg.linear.x
        angular_z = msg.angular.z

        # Determine direction and send command via serial
        if linear_x > 0:
            self.serial_port.write(b'f')  # Forward
            print("f")
        elif linear_x < 0:
            self.serial_port.write(b'b')  # Backward
            print("b")
        elif angular_z > 0:
            self.serial_port.write(b'l')  # Left
            print("l")
        elif angular_z < 0:
            self.serial_port.write(b'r')  # Right
            print("r")
        else:
            self.serial_port.write(b's')  # Stop
            print("s")

def main(args=None):
    rclpy.init(args=args)
    motor_controller = MotorController()
    rclpy.spin(motor_controller)
    motor_controller.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
