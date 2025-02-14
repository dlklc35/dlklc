#!/usr/bin/env python3
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='turtlesim',
            executable='turtlesim_node',
            name='turtlesim',
            output='screen',
        ),
        Node(
            package='dlklc',
            executable='turtle_move',
            name='turtle_controller',
            output='screen',
            parameters=[{'x': 1.0, 'y': 2.0}],
        ),
    ])