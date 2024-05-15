==========================
Object Detection System
==========================

Introduction
============
This repository hosts a Yolo V5-based object detection system designed to identify obstacles and measure their distance from the origin in a vehicle's coordinate system, as well as the width of the obstacles. Utilizing the Intel RealSense D415 depth camera, the system provides accurate depth information that is integrated with the object detection capabilities of Yolo V5 to enhance autonomous navigation tasks and environmental awareness for robotic applications.

This system integrates advanced image processing techniques with deep learning and 3D sensing technologies. By leveraging the high-resolution color and depth data from the RealSense D415 camera, the system can accurately detect objects and calculate their distances and dimensions, which are crucial for tasks such as autonomous driving and robotic navigation.

Code Overview
=============
The main components of the code include:

- **RealSense Camera Integration**: Manages the data streams from the Intel RealSense D415 camera, capturing both RGB and depth information.
- **Yolo V5 Object Detection**: Utilizes a pre-trained Yolo V5 model to detect objects in the RGB images. The model is configured through a YAML file, which defines parameters such as input size, model weights, and detection thresholds.
- **Image Processing**: Processes both the depth and RGB images to align them and scale the depth data for visualization and further analysis.
- **Detection and Measurement**: After detecting objects, the system calculates their distances from the camera and estimates their dimensions using the depth data provided by the RealSense camera.
- **Visualization**: Displays the detection results in real-time, overlaying bounding boxes and measurements on the video feed.

Usage
=====
To use the object detection system, navigate to the system's directory and run the Python script:

.. code-block:: bash

    cd Yolov5/RealSenseD415/obstacle_detection
    python3 obstacle_detect.py

This will start the system, and you will begin to see the video feed with detected objects. Each object will be highlighted, and its distance from the camera along with its dimensions will be displayed.

Conclusion
==========
The integration of Yolo V5 with RealSense technology provides a powerful tool for understanding and interacting with the environment in robotic applications. We invite developers and researchers to use and modify this system to suit their unique requirements in the field of autonomous navigation and robotic systems.
