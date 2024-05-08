Automatic Emergency Braking (AEB)
=================================

Overview
--------

The goal of this lab is to develop a safety node for the race cars that will stop the car from colliding when travelling at higher velocities. We will implement Instantaneous Time to Collision (iTTC) using the ``LaserScan`` message in the simulator.

The TTC Calculation
-------------------

Time to Collision (TTC) is the time it would take for the car to collide with an obstacle if it maintained its current heading and velocity. We approximate the time to collision using Instantaneous Time to Collision (iTTC), which is the ratio of instantaneous range to range rate calculated from current range measurements and velocity measurements of the vehicle.

As discussed in the lecture, we can calculate the iTTC as:

.. math::

   iTTC = \frac{r}{\{- \dot{r}\}_{+}}

where:

- :math:`r` is the instantaneous range measurements.
- :math:`\dot{r}` is the current range rate for that measurement.
- :math:`\{\}_{+}` is defined as :math:`\{x\}_{+} = \text{max}(x, 0)`.

The instantaneous range :math:`r` to an obstacle is easily obtained by using the current measurements from the ``LaserScan`` message, as the LiDAR effectively measures the distance from the sensor to an obstacle. The range rate :math:`\dot{r}`, the rate of change along each scan beam, can be calculated in two ways:

1. By mapping the vehicle's current longitudinal velocity onto each scan beam's angle using :math:`v_x \cos{\theta_{i}}`. Be careful with assigning the range rate a positive or a negative value. The angles can also be determined by the information in ``LaserScan`` messages.

2. By taking the difference between the previous range measurement and the current one, dividing it by how much time has passed in between (timestamps are available in message headers), to calculate the range rate.

Note the negation in the calculation. This is to correctly interpret whether the range measurement should be decreasing or increasing. For a vehicle travelling forward towards an obstacle, the corresponding range rate for the beam right in front of the vehicle should be negative, as the range measurement should be shrinking. Conversely, the range rate corresponding to the vehicle travelling away from an obstacle should be positive, as the range measurement should be increasing. The operator is in place so the iTTC calculation will be meaningful. When the range rate is positive, the operator will ensure iTTC for that angle goes to infinity.

After your calculations, you should end up with an array of iTTCs that correspond to each angle. When a time to collision drops below a certain threshold, it means a collision is imminent.

Automatic Emergency Braking with iTTC
-------------------------------------
