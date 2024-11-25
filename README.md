# ROS2 Vision Rover

### Technologies
- ROS2
- Python
- C++
- OpenCV
- Arduino
- Raspberry Pi

---

This is a project aimed at developing a four-wheel robot for environment mapping and vision-based tasks. The robot integrates:

- **LiDAR** for environment mapping
- **Camera** for vision processing
- **Remote control** capabilities


---

### Final Robot Video Demonstration - https://youtu.be/dcy8bRz3WHk
[![Final Robot Video](https://img.youtube.com/vi/dcy8bRz3WHk/0.jpg)](https://youtu.be/dcy8bRz3WHk)

---


## Project Stages:




### Stage 11: Future Work
#### Objective:
Plan potential improvements and extensions to the project.
#### Ideas for Future Development:
- **Add SLAM:** Integrate SLAM algorithms for autonomous navigation.
- **Implement Object Detection:** Use the camera stream for computer vision tasks.
- **Path Planning:** Add a path-planning algorithm for obstacle avoidance.
- **Autonomous Modes:** Develop fully autonomous behaviors using LIDAR and camera data.
_______________


### Stage 10: Documentation and GitHub Setup
Objective: Document the entire project and publish it to GitHub.

### Stage 9: Troubleshooting and Optimization
Objective: Identify and resolve any issues related to hardware or software integration.

### Stage 8: System Testing and Integration
Objective: Run all components together to ensure seamless communication and control.

### Stage 7: Adding the Camera Integration
Objective: Set up a camera to stream live video and integrate it into the ROS2 ecosystem.

### Stage 6: Integrating RPLIDAR A1 with ROS2
Objective: Configure and launch the RPLIDAR driver to publish LIDAR data on ROS2 topics.

### Stage 5: Arduino Motor Control Setup
Objective: Upload motor control logic to the Arduino for communication with the Raspberry Pi.

### Stage 4: ROS2 Setup on Raspberry Pi
Objective: Install ROS2 and configure the workspace for communication between components.

### Stage 3: Testing Robot Movements After Assembly (Completed)
Objective: Verify that the motors and wheels function correctly before integrating additional sensors and software.
- The robot successfully moves, controlled by an Arduino.
![Stage 2 - Robot movement demonstration](Documentation/gifs/stage_02.gif)

### Stage 2: Robot Assembly (Completed)
#### The current assembly includes a four-wheel chassis with the following components:
- The motors are connected to the Arduino via the L298N motor driver module
- LiDAR module for mapping the environment
- Camera module for real-time vision processing
- Raspberry Pi to run ROS2 and manage communication between the modules
- Power system: The robot uses a rechargeable battery pack to power all electronics.
- Wiring & Electronics: Wires are routed neatly, ensuring safe connections between the Raspberry Pi, Arduino, motor drivers, and sensors.
- Mounting: All components are securely mounted on the robot chassis, leaving space for future upgrades.

### Stage 1: Project Planning and Hardware Selection (Completed)
#### Objective:
Define the project scope, select components, and prepare for hardware and software integration.
#### Tasks:
##### Set Project Goals:
- Build a remotely controlled mobile robot using ROS2.
- Integrate RPLIDAR for obstacle detection and mapping.
- Add a camera for real-time video streaming.
##### Select Components:
- Raspberry Pi: Host ROS2 and manage sensors.
- PC Workstation: Host ROS2 for development and remote control.
- Arduino: Control motors via an L298N driver.
- RPLIDAR A1: Provide realtime 2D scans of the environment.
- Camera (Pi Camera 1.3): Stream live video.
- Power Suply 1: 5V for Raspberry Pi and Arduino
- Power Suply 2: 14.8V for motors and motor driver
- Motors, wheels, chassis, and USB cables.
##### Software:
- ROS2 Humble: ROS Distributive istalled on Pi and PC Workstation
- Ubuntu Server 22.04: Raspberry Pi OS
- Ubuntu Desktop 22.04: Workstation OS
- RViz2: For LIDAR visualization and data monitoring.
- Arduino IDE: For programming and uploading code to the Arduino.
- Visual Studio Code: For writing and managing ROS2 nodes.


---

Feel free to follow along and stay tuned for updates as the project progresses!
