Driver Stack Setup
=================================
**Equipment Required:**
	* Fully built F1TENTH  vehicle
	* Pit/Host computer OR
	* External monitor/display, HDMI cable, keyboard, mouse


.. warning:: This instruction only for Jetson Xaviers NX, which has JetPack versions after 5.0 and ROS2 only. 

Overview
----------
Since the release of `JetPack 5.0 Developer Preview <https://developer.nvidia.com/jetpack-sdk-50dp>`_ the Jetson can now run on Ubuntu 20.04, and we can install ROS 2 natively and conveniently.
We use ROS 2 Foxy for communication and run the car. You can find a tutorial on ROS 2 `here <https://docs.ros.org/en/foxy/Tutorials.html>`_.

In the following section, we'll go over how to set up the **drivers** for sensors and the motor control:

#. Setting up : `udev rules <udev_rules>`_udev_rules for our sensors.
#. Installing : `ROS 2 and its utilities <install_ros2>`_install_ros2.
#. Setting up the `driver stack <software_stack>`_software_stack.
#. Launch : `teleoperation and the LiDAR <teleop_setup>`_teleop_setup.

.. We'll need to set up the :ref:`ROS workspace <ros_workspace>`, set up some :ref:`udev rules <udev_rules>`, and :ref:`test the lidar connection <lidar_setup>`.

Everything in this section is done on the **Jetson NX** so you will need to connect to it via SSH from the Pit laptop or plug in the monitor, keyboard, and mouse.

.. _udev_rules:

1. udev Rules Setup
----------------------
When you connect the VESC and a USB lidar to the Jetson, the operating system will assign them device names of the form ``/dev/ttyACMx``, where ``x`` is a number that depends on the order in which they were plugged in. For example, if you plug in the lidar before you plug in the VESC, the lidar will be assigned the name ``/dev/ttyACM0``, and the VESC will be assigned ``/dev/ttyACM1``. This is a problem, as the car’s configuration needs to know which device names the lidar and VESC are assigned, and these can vary every time we reboot the Jetson, depending on the order in which the devices are initialized.

Fortunately, Linux has a utility named udev that allows us to assign each device a “virtual” name based on its vendor and product IDs. For example, if we plug a USB device in and its vendor ID matches the ID for Hokuyo laser scanners (15d1), udev could assign the device the name ``/dev/sensors/hokuyo`` instead of the more generic ``/dev/ttyACMx``. This allows our configuration scripts to refer to things like ``/dev/sensors/hokuyo`` and ``/dev/sensors/vesc``, which do not depend on the order in which the devices were initialized. We will use udev to assign persistent device names to the lidar, VESC, and joypad by creating three configuration files (“rules”) in the directory ``/etc/udev/rules.d``.

First, **as root**, open ``/etc/udev/rules.d/99-hokuyo.rules`` in a text editor to create a new rules file for the Hokuyo. Copy the following rule exactly as it appears below in a single line and save it:

.. code-block:: bash

	KERNEL=="ttyACM[0-9]*", ACTION=="add", ATTRS{idVendor}=="15d1", MODE="0666", GROUP="dialout", SYMLINK+="sensors/hokuyo"

Next, open ``/etc/udev/rules.d/99-vesc.rules`` and copy in the following rule for the VESC:

.. code-block:: bash

	KERNEL=="ttyACM[0-9]*", ACTION=="add", ATTRS{idVendor}=="0483", ATTRS{idProduct}=="5740", MODE="0666", GROUP="dialout", SYMLINK+="sensors/vesc"

Then open ``/etc/udev/rules.d/99-joypad-f710.rules`` and add this rule for the joypad:

.. code-block:: bash

	KERNEL=="js[0-9]*", ACTION=="add", ATTRS{idVendor}=="046d", ATTRS{idProduct}=="c219", SYMLINK+="input/joypad-f710"

Finally, trigger (activate) the rules by running

.. code-block:: bash

	sudo udevadm control --reload-rules
	sudo udevadm trigger

Reboot your system, and you should find three new devices by running

.. code-block:: bash

	ls /dev/sensors

and:

.. code-block:: bash

	ls /dev/input

If you want to add additional devices and don’t know their vendor or product IDs, you can use the command

.. code-block:: bash

	sudo udevadm info --name=<your_device_name> --attribute-walk

making sure to replace ``<your_device_name>`` with the name of your device (e.g. ttyACM0 if that’s what the OS assigned it. The Unix utility dmesg can help you find that). The topmost entry will be the entry for your device; lower entries are for the device’s parents.


.. _install_ros2:
2. Installing ROS 2 and its Utilities
---------------------------------------
First, follow the instructions from `the official ROS 2 Foxy Installation Guide <https://docs.ros.org/en/foxy/Installation/Ubuntu-Install-Debians.html>`_ to install ROS 2 via Debian Packages.

Next, we'll need ``colcon`` as the main build tool for ROS 2. Install it following the `instructions here <https://docs.ros.org/en/foxy/Tutorials/Colcon-Tutorial.html?highlight=colcon#install-colcon>`_.

Lastly, we'll need ``rosdep`` as the dependency resolution tool. Install it following the `instructions here <https://docs.ros.org/en/foxy/How-To-Guides/Building-a-Custom-Debian-Package.html?highlight=rosdep#install-dependencies>`_ and initialize it following the `instructions here <https://docs.ros.org/en/foxy/How-To-Guides/Building-a-Custom-Debian-Package.html?highlight=rosdep#install-dependencies>`_.

.. _software_stack:
3. Setting up the Driver Stack
----------------------------------

First, we'll create a ROS 2 workspace for our driver stack with the following commands. We'll be using ``f1tenth_ws`` as the name of our workspace going forward in this section.

.. code-block:: bash

	cd $HOME
	mkdir -p f1tenth_ws/src

Then, make this into a ROS 2 workspace by running:

.. code-block:: bash

	cd f1tenth_ws
	colcon build

Next, we'll clone the repo into the ``src`` directory of our workspace:

.. code-block:: bash

	cd src
	git clone https://github.com/f1tenth/f1tenth_system.git

Then we'll update the git submodules and pull in all the necessary packages

.. code-block:: bash

	cd f1tenth_system
	git submodule update --init --force --remote

After git finishes cloning, we can now install all dependencies for our packages with ``rosdep``:

.. code-block:: bash

	cd $HOME/f1tenth_ws
	rosdep update
	rosdep install --from-paths src -i -y

Lastly, after dependencies are installed, we can build our workspace again with the driver stack pacakges:

.. code-block:: bash

	colcon build

You can find more details on how the drivers are set up in the README of the `f1tenth_system repo <https://github.com/f1tenth/f1tenth_system>`_.

.. _teleop_setup:

4. Launching Teleop and Testing the LiDAR
----------------------------------------------
This section assumes that the lidar has already been plugged in (either to the USB hub or to the ethernet port). If you are using the Hokuyo 10LX or a lidar that is connected via the ethernet port of the Orbitty, make sure that you have completed the :ref:`Hokuyo 10LX Ethernet Connection <doc_firmware_hokuyo10>` section before preceding.

Before the bringup launch, you'll have to set the correct parameters according to which LiDAR you're using in the params file ``sensors.yaml``. All parameter files are located in the following location:

.. code-block:: bash

	$HOME/f1tenth_ws/src/f1tenth_system/f1tenth_stack/config/

A. If you're using an ethernet based LiDAR, set the ``ip_address`` field to the corresponding ip address of your LiDAR.

B. If you're using a USB based LiDAR, comment out the ``ip_address`` field, and uncomment the line with the ``serial_port`` field. And set the value to the correct udev name from :ref:`udev rules set up <udev_rules>`.

In your running container, run the following commands to source the ROS 2 underlay and our workspace's overlay:

.. code-block:: bash

	source /opt/ros/foxy/setup.bash
	cd $HOME/f1tenth_ws
	source install/setup.bash

Then, you can launch the bring up with:

.. code-block:: bash

	ros2 launch f1tenth_stack bringup_launch.py

Running the bringup launch will start the VESC drivers, the LiDAR drivers, the joystick drivers, and all necessary packages for running the car. To see the LaserScan messages, in a new terminal window, run

.. code-block:: bash

	source /opt/ros/foxy/setup.bash
	cd $HOME/f1tenth_ws
	source install/setup.bash
	rviz2

The rviz window should show up. Then you can add a LaserScan visualization in rviz on the ``/scan`` topic.

**Reference:**

xLab at the University of Pennsylvania. (2021). Build. https://f1tenth.org/build