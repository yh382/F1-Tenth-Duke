.. _Model Predictive Control :

Model Predictive Control Lab
=============================


**Vehicle Model**
-----------------

The vehicle's motion is modeled using a kinematic model:

-  State: ``z = [x, y, θ, v]`` where ``x, y`` are coordinates, ``θ`` is heading, and ``v`` is velocity.
-  Input: ``u = [a, δ]`` where ``a`` is acceleration and ``δ`` is steering angle.

The model is governed by:

.. math::

   \dot{x} = v \cos(\theta), \quad \dot{y} = v \sin(\theta), \quad \dot{v} = a, \quad \dot{\theta} = \frac{v \tan(\delta)}{L}

where ``L`` is the wheelbase of the vehicle.

**Objective Function**
----------------------

The goal is to minimize:

1. Deviation from the trajectory.
2. Control input magnitudes.
3. Variations in control input between steps.

Mathematically, it is expressed as:

.. math::

   \text{minimize} \quad Q_f(z_{T,ref} - z_T)^2 + \sum_{t=0}^{T-1} Q(z_{t,ref} - z_t)^2 + R\sum_{t=0}^{T} u_t^2 + R_d\sum_{t=0}^{T-1} (u_{t+1} - u_t)^2

**Constraints**
---------------

The optimization is subject to:

1. Future states must adhere to the linearized dynamics.
2. Initial state must reflect the current vehicle state.
3. Inputs must stay within vehicle capabilities.

**Linearization and Discretization**
-------------------------------------

To solve using Quadratic Programming (QP), the system is discretized and linearized:

- **Discretization**: Forward Euler method is used.
- **Linearization**: A first-order Taylor expansion around a nominal state and input is employed.

**Reference Trajectory**
------------------------

1. **Data-Driven Method:**
   You can generate a reference trajectory by physically driving a vehicle on a track and recording the necessary state information such as position and velocity at regular intervals. This real-world data can be processed to create a series of waypoints that the MPC can aim to follow.

2. **Synthetic Generation:**
   Alternatively, you can design a reference trajectory by defining a path through a series of points that you specify manually or generate using curve fitting techniques. Popular methods for generating smooth curves include polynomial regression, spline interpolation (such as cubic splines), and Bezier curves. These methods allow for the adjustment of the trajectory’s curvature, which is crucial for controlling the velocity profile based on the vehicle's dynamics and handling characteristics.

In either approach, it’s vital to ensure that the velocity profile along the trajectory is feasible. This can be done by adjusting velocities based on the curvature of the path, where tighter curves necessitate slower speeds to maintain control and stability. Use the curvature information at each waypoint to interpolate between a calculated maximum and minimum velocity to ensure the reference trajectory is both aggressive and safe.


**Setting Up the Optimization**
-------------------------------

Use CVXPY and OSQP solver in Python to define the optimization problem. Setup the objective and constraints based on the MPC formulation.



