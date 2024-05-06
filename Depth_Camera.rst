Depth_Camera_D415 Configuration
=========================================
You can follow the instructions on the website https://www.intelrealsense.com/get-started-depth-camera/ to configure, or you can follow the instructions in this document.  


Connect Device
------------
Firstly, you need to mount the camera on the bracket, then use the provided USB-C cable to connect the camera to the computer.

Installing necessary packages
------------

Add the public key of the server to the registry： 

.. code-block:: bash

   sudo mkdir -p /etc/apt/keyrings
   curl -sSf https://librealsense.intel.com/Debian/librealsense.pgp | sudo tee /etc/apt/keyrings/librealsense.pgp > /dev/null


Ensure that the system has support for HTTPS in apt：  
.. code-block:: bash

   sudo mkdir -p /etc/apt/keyrings
   sudo apt-get install apt-transport-https
   
