Under this ongoing project, a discrete PID controller along with a Kalman Filter is developed to control the position of a traditional mass spring damper system. The entire architecture is laid out using ROS 2 (distro = "Iron"). Accordingly, there are 5 nodes: "system" (which includes the state space equations), "noise" (to model the random normal external disturbance), "pid" (control law), "ref" (setpoint for the position), and "kalman" (which provides statistical estimation for the position). The nodes use pub-sub method for communication and do so through custom topics and messages. The rqt_graph of the overall architecture is shown in the figure above. 

![image](https://github.com/khushant2001/Ros_control/assets/70731991/47790a61-0bb1-407f-9d17-96a4d74102a6)

