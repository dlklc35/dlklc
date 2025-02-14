#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from turtlesim.srv import Spawn
import random

class TurtleSpawner(Node):
    def __init__(self):
        super().__init__('turtle_spawner')

        self.spawn_turtle_client = self.create_client(Spawn, 'spawn')

        while not self.spawn_turtle_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service is not available, waiting...')

        self.timer = self.create_timer(0.5, self.spawn_turtle_callback)

    def spawn_turtle_callback(self):
        x = random.uniform(2.0, 9.0)
        y = random.uniform(2.0, 9.0)
        theta = random.uniform(0.0, 1.5 * 3.14159)
        name = f'turtle_{int(self.get_clock().now().nanoseconds / 1e9)}'

        request = Spawn.Request()
        request.x = x
        request.y = y
        request.theta = theta
        request.name = name

        future = self.spawn_turtle_client.call_async(request)
        future.add_done_callback(self.spawn_turtle_result_callback)

    def spawn_turtle_result_callback(self, future):
        try:
            response = future.result()
            self.get_logger().info(f'Turtle created successfully at ({response.x}, {response.y}) with name {response.name}')
        except Exception as e:
            self.get_logger().error(f'Failed to spawn turtle: {e}')

def main(args=None):
    rclpy.init(args=args)
    turtle_spawner = TurtleSpawner()
    rclpy.spin(turtle_spawner)
    rclpy.shutdown()
