from launch import LaunchDescription
from launch_ros.actions import Node

# sdfsf
# print ("Test")

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='demo_nodes_cpp',
            executable='talker'
        )

    ])