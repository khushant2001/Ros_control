from launch import LaunchDescription
from launch_ros.actions import Node 

def generate_launch_description():
    ld = LaunchDescription()

    noise_node = Node(
        package = "controller",
        executable = "noise",
    )
    kalman_node = Node(
        package = "controller",
        executable = "kalman",
    )
    system_node = Node(
        package = "controller",
        executable = "system",
    )
    pid_node = Node(
        package = "controller",
        executable = "pid",
    )
    ref_node = Node(
        package = "controller",
        executable = "ref",
    )
    ld.add_action(noise_node)
    ld.add_action(pid_node)
    ld.add_action(ref_node)
    ld.add_action(system_node)
    ld.add_action(kalman_node)
    return ld
