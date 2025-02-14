#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from getirkurye.srv import SetCoordinates

class TurtleController(Node):
    def __init__(self):
        super().__init__('turtle_controller')
        self.publisher_ = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
        self.srv = self.create_service(SetCoordinates, 'set_coordinates', self.coordinates_callback)
        self.current_x = 0.0
        self.current_y = 0.0
        self.target_x = 0.0
        self.target_y = 0.0
        self.moving = False
        
        self.timer = self.create_timer(0.1, self.move_turtle)

    def coordinates_callback(self, request, response):
        self.target_x = request.x
        self.target_y = request.y
        self.moving = True
        response.success = True
        self.get_logger().info(f'Yeni hedef alındı: X={self.target_x}, Y={self.target_y}')
        return response

    def move_turtle(self):
        if self.moving:
            msg = Twist()
            

            if abs(self.current_x - self.target_x) > 0.1:
                msg.linear.x = 0.5 if self.target_x > self.current_x else -0.5
                self.current_x += msg.linear.x * 0.1
            else:
                msg.linear.x = 0.0

            if abs(self.current_y - self.target_y) > 0.1:
                msg.linear.y = 0.5 if self.target_y > self.current_y else -0.5
                self.current_y += msg.linear.y * 0.1
            else:
                msg.linear.y = 0.0

            if msg.linear.x == 0.0 and msg.linear.y == 0.0:
                self.moving = False
                self.get_logger().info('Hedefe ulaşıldı!')

            self.publisher_.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    controller = TurtleController()
    rclpy.spin(controller)
    rclpy.shutdown()

if __name__ == '__main__':
    main()