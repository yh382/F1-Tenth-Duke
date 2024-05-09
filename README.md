# F1-Tenth-Duke
The repository contains all documentation belonging to the F1 Tenth team at Duke University, located in NC, USA. Copyright is held by Duke University, specifically for instructions and other accompanying materials. However, the code is open-source. :)  

This repo is bulit for students who would use the car we currently using the F1 Tenth car which is belonged Mechanical Engineering and Material Science department in Duke University, NC, USA. However, it is more than welcome to all other users to use our code!

This project is based on F1 Tenth project from X-LAB, University of Pennsylvania. Check https://f1tenth.org/index.html for more information. STRONGLY RECOMMENDED everyone to finish the "Learn" section on the website.

### **Please read this repo carefully, all details might help you to avoid error!**

# **Things to Keep in Mind For All Future Users**
1. SLOW DOWN! At the time point we built the car, this car values around $4000 and 100+ hours work. The Hokuyo LiDar is $1600, Jetson without SSD and Wifi module is $660, VESC is $300. Therefore, SLOW DOWN and be CAREFUL! We fully understand robotics guys are "crazy" like us. :)
2. Check the environment first. Avoid GLASS, CHAIRS, ANYTHING IT MIGHT GO UNDER! Those things are LiDar killer, because LiDar is using laser and it is almost a 2D sensor. 
3. Understand what are you doing and what will happen. Simulation is your best friend! If something didn't work on simulation, it would not work in reality. If the behavior of the car is totally different with your expection, you need to study more!

## Information of NX User Account
Account on NX: f1tenth  
PIN: 123456  
Registered IP address with Dukeblue Wifi：10.197.0.48

## Version of Software and Hardware
OS: Ubuntu 20.04LTS  
ROS: ROS2 Foxy  
Processor on car: Jetson Xavier NX 8GB (J2021)  
JetPack: 5.1.2  
LiDar: Hokuyo 10LX  
Chassis: Traxxas Slash 4x4 Platinum Edition; 1/10 Scale Brushless Pro 4WD  
Power board: V4  
ESC：FSESC based on VESC6

## Achievements and Future Work
Since we spent most of our time on hardware, we only selected some of tasks to do and we left all documentations we have. We try to make this project is fairly easy to take over. You don't have to follow the same track we did, and we suggest everyone follow the order we listed.  


## Instruction Navigation
### Vehicle Setup
- [Build](/Build.md)
- [Configuring the NVIDIA Jetson NX](/configuring_nx.rst)
- [Connecting the Pit/Host and the NVIDIA Jetson NX](/connecting_host.rst)
- [Hokuyo 10LX Ethernet Connection Setup](/Hokuyo_Lidar/Hokuyo.md)
- [Configuring the VESC](/VESC/VESC_config.md)
- [Driver Stack Setup](/driver_stack_setup.rst)
- [Manual Control](/drive_manual.rst)
- [Calibrating the Odometry](/drive_calib_odom.rst)
- [Autonomous Control](/drive_autonomous.rst)
### Tasks
- [Drive A Distance](/drive_autonomous.rst)
- [AEB]()
- [PID wall follower]()
- [SLAM]
- [Particle Filter]()
- [Pure Pursuit]()
- [RRT]()
- [Vision Detection]()
- [Raceline Optimization]()
- [MPC]()



