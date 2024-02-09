.. _doc_software_nx:


1. Configuring the NVIDIA Jetson NX
=========================================


1. Flash Jetson NX with Software
----------------------------------
NVIDIA offers a comprehensive guide on installing the NVIDIA Jetpack Software on the NVIDIA Jetson NX, which you can find either in their documentation `here <https://developer.nvidia.com/embedded/learn/get-started-jetson-xavier-nx-devkit>` or follow introduction.

1. Click Jetson at NVIDIA Develoeprs Download Center https://developer.nvidia.com/downloads.

        .. figure:: Images/nx-software-step1.png
                :align: center

                NVIDIA Developers Download Center (F1Tenth 2021)

2. Select "Jetson Xavier NX Developer Kit" under the SD Card Image Method.

        .. figure:: Images/nx-software-step2.png
                :align: center

                Jetson Xavier NX Developer Kit downloads. (F1Tenth 2021)

3. Login in with your NVIDIA account.
        .. figure:: Images/nx-software-step3.png
                :align: center

                NVIDIA Developer Program login page. (F1Tenth 2021)

4. Please click this button. "Jetson Xavier NX Developer Kit SD Card Image" 

        .. figure:: Images/nx-software-step4.png
                :align: center

                NVIDIA Developer Program profile page download button. (F1Tenth 2021)

5. After downloading, extract the zip file to create sd-blob.img, containing the software for the NVIDIA Jetson Xavier NX Developer Kit.

6. Put the microSD and SD reader in. 

7. Download, install, and launch SD card image burning software `Etcher <https://www.balena.io/etcher/>`_.

        .. figure:: Images/nx-software-step7.png
                :align: center

                SD card burner software Etcher. (F1Tenth 2021)

8. Opt for "Flash the file" and opt for the NVIDIA-downloaded image. In the file selection window, opt for the previously extracted sd-XXXX.img file.
        .. figure:: Images/nx-software-step8.png
                :align: center

                File selection window. (F1Tenth 2021)

9. Select the microSD card in the microSD card reader/writer as the "target" device.

        .. figure:: Images/nx-software-step9.png
                :align: center

                Target selection window. (F1Tenth 2021)

10. Click the "Flash" button which takes about 30 mins for our device.

        .. figure:: Images/nx-software-step10.png
                :align: center

                Flashing process. (F1Tenth 2021)


11. Now you can use 9-16v external battery (we choose 12v) or the powerboard to start it.

12. A green LED next to the Micro-USB connector will light as soon as the developer kit powers on. When you boot the first time, the Jetson Xavier NX Developer Kit will take you through some initial setup, including:

  * Review and accept NVIDIA Jetson software EULA
  * Select system language, keyboard layout, and time zone
  * Connect to Wireless network
  * Create username, password, and computer name
  * Log in

13. After logging in you should see the following screen. Congratulations, your NVIDIA Jetson NX on your F1TENTH car is ready to go.

        .. figure:: Images/nx_ready.png
                :align: center

                First boot of the NVIDIA Jetson NX. (F1Tenth 2021)

..
  13. Connect the USB micro end of the USB micro cable to the USB micro port on the NVIDIA Jetson Xavier NX carrier board. Connect the USB A end of the USB micro cable to the host PC.

          .. figure:: Images/nx-attach-usb.jpg
                  :align: center

                  Attaching USB micro end of cable. (F1Tenth 2021)

  14. Connect the battery on the F1TENTH vehicle.
  15. Flip the switch on the power distribution board to the ON position.
  16. After several minutes, you should see a new drive become available on the host PC called "L4T-README." If you do not see this then either the flashing of the microSD card failed or your USB cable is bad or incorrect in some way (e.g. missing data lines).
  17. In addition to the new drive, you should also have a new Serial, COM, or TTY device available. On Linux and MacOS, this will be in the form of /dev/ttyACMx where x is a number. On Windows, this will be a new COM port. Open your terminal emulator software and connect to this new port using the following settings:

  * Baud rate: 115200 bps
  * Data bits: 8
  * Stop bits: 1
  * Parity: None
  * Flow control: None

  18. Once connected, you may not see any output on the terminal. Hitting the space bar should show you the license agreement for the NVIDIA software.

          .. figure:: Images/nx-software-step18.png
                  :align: center

                  NVIDIA license agreement. (F1Tenth 2021)

  19. Hit TAB to select the ``<Ok>`` button. Hit ENTER to accept the license agreement.
  20. On the next screen, choose your language of choice and hit ENTER.

          .. figure:: Images/nx-software-step20.png
                  :align: center

                  Language selection. (F1Tenth 2021)

  21. On the next screen, select your region to properly set the time zone and hit ENTER.

          .. figure:: Images/nx-software-step21.png
                  :align: center

                  Region selection. (F1Tenth 2021)

  22. On the next screen, choose your time zone and hit ENTER.

          .. figure:: Images/nx-software-step22.png
                  :align: center

                  Time zone selection. (F1Tenth 2021)

  23. On the next screen, you will be asked if the system clock is set to UTC. Choose <Yes> and hit ENTER.

          .. figure:: Images/nx-software-step23.png
                  :align: center

                  System clock base selection. (F1Tenth 2021)

  24. On the next screen, you will be asked to enter a name for the new user account. Enter ``f1tenth``, hit TAB to select the ``<Ok>`` button, and then hit ENTER.

          .. figure:: Images/nx-software-step24.png
                  :align: center

                  User account full name selection. (F1Tenth 2021)

  25. On the next screen, you will be asked to enter a username for the new user account. Leave the default of ``f1tenth``, hit TAB to select the ``<Ok>`` button, and hit ENTER.

          .. figure:: Images/nx-software-step25.png
                  :align: center

                  Username selection. (F1Tenth 2021)

  26. On the next screen, you will be asked to enter a password for the new user. Enter the password ``G0Fast!`` (with a zero instead of the letter o). Hit TAB to select the ``<Ok>`` button, and hit ENTER.

          .. figure:: Images/nx-software-step26.png
                  :align: center

                  Password selection. (F1Tenth 2021)

  27. On the next screen, you will be asked to re-enter the password. Enter the password again, hit TAB to select the ``<Ok>`` button, and then hit ENTER.

          .. figure:: Images/nx-software-step27.png
                  :align: center

                  Password re-enetry. (F1Tenth 2021)

  28. On the next screen, you will receive a warning that the selected password is "too weak" due to the lenth. Hit TAB to select <Yes> and then hit ENTER.

          .. figure:: Images/nx-software-step28.png
                  :align: center
 
                  Weak password confirmation. (F1Tenth 2021)

  29. On the next screen, you will be asked to select the desired size of the APP partition. Leave the default, hit TAB to select the ``<Ok>`` button, and then hit ENTER.

          .. figure:: Images/nx-software-step29.png
                  :align: center

                  APP partition size selection. (F1Tenth 2021)

  30. On the next screen, you will be asked to select a primary network interface. Use the arrow keys to select ``eth0``, hit the TAB key to select the ``<Ok>`` button, and then hit ENTER (we will change this after setup is complete).

          .. figure:: Images/nx-software-step30.png
                  :align: center

                  Primary network interface selection. (F1Tenth 2021)

  31. The next several screens will show the status of connecting to the network. Since there is no Ethernet cable connected to ``eth0``, this is expected to fail. Hit ENTER to continue.

          .. figure:: Images/nx-software-step31.png
                  :align: center

                  Network connection failure. (F1Tenth 2021)

  32. On the next screen, you will be given several options on how to proceed with connecting to a network. Use the arrow keys to select ``Do not configure the network at this time``, hit the TAB key to select the ``<Ok>`` button, and then hit ENTER.

          .. figure:: Images/nx-software-step32.png
                  :align: center

                  Network configuration selection. (F1Tenth 2021)

  33. On the next screen, you will be asked to enter the hostname for the NVIDIA Jetson Xavier NX. Erase the current text and type ``jetson-nx``. Hit TAB to select the ``<Ok>`` button, and then hit ENTER.

          .. figure:: Images/nx-software-step33.png
                  :align: center

                  Hostname selection. (F1Tenth 2021)

  34. The next several screens will show the status of the installation and configuration of the NVIDIA Jetson Xavier NX system. During this process, your terminal session will likely be interrupted and the L4T-README drive will be removed and reconnected.
  35. Wait at least 30 seconds and then reconnect your terminal session using the same settings as before. This time you should be prompted with a login for the device. Enter the username ``f1tenth`` and then hit ENTER.

          .. figure:: Images/nx-software-step35.png
                  :align: center

                  Terminal login. (F1Tenth 2021)

  36. You will then be prompted for the password. Enter the password ``G0Fast!`` and hit ENTER. Note that you will not be able to see the characters being entered as you type.
  37. You should now be logged in to the NVIDIA Jetson Xavier NX Developer Kit.

          .. figure:: Images/nx-software-step37.png
                  :align: center

                  Logged in! (F1Tenth 2021)

2. Run Jetson NX from SSD
---------------------------
We equip the Jetson NX with an NVMe SSD and will now configure the device to use the SSD as the primary storage by redirecting the root file system to it.

Please follow this tutorial `here <https://www.jetsonhacks.com/2020/05/29/jetson-xavier-nx-run-from-ssd/>`_ that has both video and commands integrated to enable your Jetson NX to run from the SSD


3. Configuring WiFi and SSH
-------------------------------

1. Follow the command to configure the WiFi. To determine your WiFi adapter's interface name, run nmcli d. Use the displayed name (e.g., wlan0) in upcoming commands, replacing it with your actual interface name as required.

        .. figure:: Images/nx-wifi-step-1.png
                :align: center

                WiFi network selection. (F1Tenth 2021)

2. To activate your WiFi radio, enter `nmcli r wifi on` in the terminal. There won’t be any output if the command is successful.

        .. figure:: Images/nx-wifi-step-2.png
                :align: center

                Enable WiFi radio. (F1Tenth 2021)

3. To see the list of WiFi SSIDs that your WiFi adapter can see, type ``nmcli d wifi list`` and hit ENTER. After the list is printed, hit ``q`` to continue.

        .. figure:: Images/nx-wifi-step-3.png
                :align: center

                WiFi SSID selection. (F1Tenth 2021)

4. To connect to a specific WiFi SSID, use the command ``sudo nmcli d wifi connect [SSID] password [PASSWORD]`` where ``[SSID]`` is replaced with the SSID with which you want to connect and ``[PASSWORD]`` is replaced with the password to connect to that SSID. Hit ENTER.


5. If the connection was successful, you should see the message ``Device 'wlan0' successfully activated with [GUID]``.
6. WiFi defaults to DHCP, giving a new IP on each reboot. We'll set a static IP instead, needing your network's subnet, IP range, and gateway.
7. To get the currently-assigned IP address use the command ``ip addr show dev wlan0``.

        .. figure:: Images/nx-wifi-step-7.png
                :align: center

                Currently-connected WiFi IP address. (F1Tenth 2021)

8. To set a static IP address, you will also need to know the name of the connection. This is usually the same as the SSID of the WiFi network but not always. To see the list of current connections, use the command ``nmcli c show``.

        .. figure:: Images/nx-wifi-step-8.png
                :align: center

                List of connections. (F1Tenth 2021)

9. To configure a static IP, use sudo nmcli c mod [CONNECTION_NAME] ipv4.address [NEW_ADDRESS]/[CIDR]. Replace [CONNECTION_NAME] with your WiFi name from step 8, [NEW_ADDRESS] with your desired static IP, and [CIDR] with your subnet's CIDR (often 24).

        .. figure:: Images/nx-wifi-step-9.png
                :align: center

                Setting static IP address. (F1Tenth 2021)

10. Set the connection's gateway with sudo nmcli c mod [CONNECTION_NAME] ipv4.gateway [GATEWAY_IP], replacing [CONNECTION_NAME] with your WiFi name from step 8 and [GATEWAY_IP] with your router's IP.

        .. figure:: Images/nx-wifi-step-10.png
                :align: center

                Setting IP gateway. (F1Tenth 2021)
 
11. Set DNS servers via `sudo nmcli c mod [CONNECTION_NAME] ipv4.dns "[DNS_SERVERS]"`, substituting `[CONNECTION_NAME]` with your WiFi name from step 8 and `[DNS_SERVERS]` with DNS IPs, e.g., 8.8.8.8, 8.8.4.4.
12. Disable DHCP for a static IP with `sudo nmcli c mod [CONNECTION_NAME] ipv4.method manual`, replacing `[CONNECTION_NAME]` with your WiFi connection name from step 8. If you are trying to use DUKEBLUE，you can ask help from OIT to give a static IP. Otherwise, you need to set it up everytime.

        .. figure:: Images/nx-wifi-step-12.png
                :align: center

                Setting connection to always use static IP. (F1Tenth 2021)

13. To save the changes you've made, run the command ``sudo nmcli c up [CONNECTION_NAME]`` where ``[CONNECTION_NAME]`` is replaced with the name of your WiFi connection that you got from step 8.

14. To test SSH into the NVIDIA Jetson Xavier NX, ensure it's on the same network as the Host PC. Use `ssh f1tenth@[IP_ADDRESS]` with the Developer Kit's static IP. Once SSH is confirmed, close the terminal.

4. Updating Packages
------------------------

All further steps assume that your NVIDIA Jetson Xavier NX Developer Kit is connected to the internet. You can execute all the commands directly in the terminal application of the NVIDIA Jetson. Now we are updating the Ubuntu system on the Jetson NX.

1. To update the list of available packages, run ``sudo apt update``.
2. To install all available updates, run ``sudo apt full-upgrade``.
3. Once all packages have been upgraded run ``sudo reboot`` to restart the Developer Kit and apply any changes.

**Reference:** 
## Reference
[F1 Tenth Official website](https://f1tenth.org/build)

