// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces_hot_wheels:msg/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_HOT_WHEELS__MSG__DETAIL__WAYPOINT__STRUCT_HPP_
#define INTERFACES_HOT_WHEELS__MSG__DETAIL__WAYPOINT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__interfaces_hot_wheels__msg__Waypoint __attribute__((deprecated))
#else
# define DEPRECATED__interfaces_hot_wheels__msg__Waypoint __declspec(deprecated)
#endif

namespace interfaces_hot_wheels
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Waypoint_
{
  using Type = Waypoint_<ContainerAllocator>;

  explicit Waypoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->theta = 0.0f;
      this->v = 0.0f;
      this->arc_length = 0.0f;
      this->curvature = 0.0f;
      this->l = 0.0f;
      this->kp = 0.0f;
    }
  }

  explicit Waypoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->theta = 0.0f;
      this->v = 0.0f;
      this->arc_length = 0.0f;
      this->curvature = 0.0f;
      this->l = 0.0f;
      this->kp = 0.0f;
    }
  }

  // field types and members
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _theta_type =
    float;
  _theta_type theta;
  using _v_type =
    float;
  _v_type v;
  using _arc_length_type =
    float;
  _arc_length_type arc_length;
  using _curvature_type =
    float;
  _curvature_type curvature;
  using _l_type =
    float;
  _l_type l;
  using _kp_type =
    float;
  _kp_type kp;

  // setters for named parameter idiom
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__theta(
    const float & _arg)
  {
    this->theta = _arg;
    return *this;
  }
  Type & set__v(
    const float & _arg)
  {
    this->v = _arg;
    return *this;
  }
  Type & set__arc_length(
    const float & _arg)
  {
    this->arc_length = _arg;
    return *this;
  }
  Type & set__curvature(
    const float & _arg)
  {
    this->curvature = _arg;
    return *this;
  }
  Type & set__l(
    const float & _arg)
  {
    this->l = _arg;
    return *this;
  }
  Type & set__kp(
    const float & _arg)
  {
    this->kp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces_hot_wheels::msg::Waypoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces_hot_wheels::msg::Waypoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces_hot_wheels::msg::Waypoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces_hot_wheels::msg::Waypoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces_hot_wheels::msg::Waypoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces_hot_wheels::msg::Waypoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces_hot_wheels::msg::Waypoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces_hot_wheels::msg::Waypoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces_hot_wheels::msg::Waypoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces_hot_wheels::msg::Waypoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces_hot_wheels__msg__Waypoint
    std::shared_ptr<interfaces_hot_wheels::msg::Waypoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces_hot_wheels__msg__Waypoint
    std::shared_ptr<interfaces_hot_wheels::msg::Waypoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Waypoint_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->theta != other.theta) {
      return false;
    }
    if (this->v != other.v) {
      return false;
    }
    if (this->arc_length != other.arc_length) {
      return false;
    }
    if (this->curvature != other.curvature) {
      return false;
    }
    if (this->l != other.l) {
      return false;
    }
    if (this->kp != other.kp) {
      return false;
    }
    return true;
  }
  bool operator!=(const Waypoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Waypoint_

// alias to use template instance with default allocator
using Waypoint =
  interfaces_hot_wheels::msg::Waypoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces_hot_wheels

#endif  // INTERFACES_HOT_WHEELS__MSG__DETAIL__WAYPOINT__STRUCT_HPP_
