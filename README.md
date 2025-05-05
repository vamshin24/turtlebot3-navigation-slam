
# TurtleBot3 with ROS2 - SLAM and Teleoperation

This project demonstrates the setup of **TurtleBot3** in a **ROS2** environment with **SLAM** (Simultaneous Localization and Mapping) and **Teleoperation** using **Gazebo**. The project utilizes the **TurtleBot3 simulation**, **Cartographer for SLAM**, and a custom **Python-based teleoperation GUI** for controlling the robot.

## Table of Contents
- [Introduction](#introduction)
- [Installation](#installation)
  - [Clone the Required Repositories](#clone-the-required-repositories)
- [Project Setup](#project-setup)
  - [Simulation Setup](#simulation-setup)
  - [Real TurtleBot3 Setup](#real-turtlebot3-setup)
- [Usage](#usage)
  - [Teleoperation](#teleoperation)
  - [SLAM](#slam)

## Introduction

This project involves setting up **TurtleBot3** for **robot simulation** and **SLAM** in a **ROS2 environment**. We use **Cartographer** for SLAM and a **Python-based GUI** for teleoperation. The goal is to navigate TurtleBot3 in a **mapped environment** and control its movements remotely.

The key technologies involved are:
- **ROS2** for robot communication and control.
- **Cartographer** for creating maps of the environment using **LiDAR**.
- **Gazebo** for simulating the TurtleBot3 robot in a virtual world.
- A custom **Python teleoperation GUI** for controlling the robot remotely.

## Installation

### Clone the Required Repositories

To get started with this project, you need to clone the required repositories into your **ROS2 workspace**.

1. **Clone the main project repository**:
   If you haven't already, create a workspace and clone this main repository:

   ```bash
   mkdir -p ~/turtlebot3_ws/src
   cd ~/turtlebot3_ws/src
   git clone https://github.com/your-username/your-main-repository.git
   ```

2. **Clone the required submodules for simulation and TurtleBot3**:
   You will need to clone the following repositories to run the simulation and teleoperation:

   ```bash
   cd ~/turtlebot3_ws/src

   # Clone TurtleBot3 simulation repository
   git clone https://github.com/ROBOTIS-GIT/turtlebot3_simulations.git

   # Clone the TurtleBot3 repository
   git clone https://github.com/ROBOTIS-GIT/turtlebot3.git

   # Clone the Cartographer ROS2 repository (if needed)
   git clone https://github.com/ros-perception/cartographer_ros.git
   ```

3. **Initialize and update the submodules**:
   After cloning the repositories, make sure the submodules are initialized and updated:

   ```bash
   git submodule update --init --recursive
   ```

4. **Install dependencies**:
   You may need to install additional dependencies to run the simulation and teleoperation. Run the following commands to install the necessary packages:

   ```bash
   sudo apt update
   sudo apt install ros-humble-cartographer-ros ros-humble-turtlebot3-gazebo
   ```

### Build the Workspace

Once all the repositories are cloned and dependencies installed, build your workspace using `colcon`:

```bash
cd ~/turtlebot3_ws
colcon build
```

Source your workspace:

```bash
source ~/turtlebot3_ws/install/setup.bash
```

---

## Project Setup

### Simulation Setup

To set up the **TurtleBot3 simulation** in **Gazebo**, use the following launch command:

```bash
ros2 launch turtlebot3_gazebo turtlebot3_world.launch.py
```

This will start the **TurtleBot3 simulation** in **Gazebo**. You can control the robot using the **teleoperation GUI** or a **keyboard**.

### Real TurtleBot3 Setup

If you're using a **real TurtleBot3**, follow the steps to set up the robot with **Cartographer** for SLAM:

1. Install the **Cartographer ROS2 package**:

   ```bash
   sudo apt install ros-humble-cartographer-ros
   ```

2. Launch **Cartographer** for SLAM:

   ```bash
   ros2 launch turtlebot3_cartographer cartographer.launch.py
   ```

   This will start **SLAM** on the TurtleBot3, mapping the environment using **LiDAR**.

3. To save the generated map:

   ```bash
   ros2 run nav2_map_server map_saver_cli -f ~/maps/turtlebot3_map
   ```

---

## Usage

### Teleoperation

To control **TurtleBot3** using a **Python GUI**, use the following command to start the **teleoperation node**:

```bash
python3 ~/turtlebot3_ws/src/mfg598_teleop_gui_project.py
```

You can control the robot's **linear** and **angular velocities** using the GUI. The GUI will publish **Twist messages** to the `/cmd_vel` topic to control the robot.

### SLAM

To run **SLAM** (Simultaneous Localization and Mapping), you can either use **Gazebo** simulation or a **real TurtleBot3**. The steps for SLAM are outlined above in the **Real TurtleBot3 Setup** section.


### Notes:

1. Replace `your-username` and `your-main-repository` with your actual **GitHub username** and **repository name**.
2. Make sure all necessary dependencies are installed.
3. If you run into any issues with the submodules or dependencies, make sure to check that the submodules are initialized properly and that all required ROS2 packages are installed.

