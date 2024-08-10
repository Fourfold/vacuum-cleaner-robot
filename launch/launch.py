from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='vacuum_cleaner_robot',
            executable='navigator_node',
            name='navigator_node'
        ),
        Node(
            package='vacuum_cleaner_robot',
            executable='avoidance_server',
            name='avoidance_server'
        ),
    ])
