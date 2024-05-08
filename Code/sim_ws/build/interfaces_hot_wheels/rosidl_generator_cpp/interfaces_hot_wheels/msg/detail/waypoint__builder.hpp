// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces_hot_wheels:msg/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_HOT_WHEELS__MSG__DETAIL__WAYPOINT__BUILDER_HPP_
#define INTERFACES_HOT_WHEELS__MSG__DETAIL__WAYPOINT__BUILDER_HPP_

#include "interfaces_hot_wheels/msg/detail/waypoint__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interfaces_hot_wheels
{

namespace msg
{

namespace builder
{

class Init_Waypoint_kp
{
public:
  explicit Init_Waypoint_kp(::interfaces_hot_wheels::msg::Waypoint & msg)
  : msg_(msg)
  {}
  ::interfaces_hot_wheels::msg::Waypoint kp(::interfaces_hot_wheels::msg::Waypoint::_kp_type arg)
  {
    msg_.kp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces_hot_wheels::msg::Waypoint msg_;
};

class Init_Waypoint_l
{
public:
  explicit Init_Waypoint_l(::interfaces_hot_wheels::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_kp l(::interfaces_hot_wheels::msg::Waypoint::_l_type arg)
  {
    msg_.l = std::move(arg);
    return Init_Waypoint_kp(msg_);
  }

private:
  ::interfaces_hot_wheels::msg::Waypoint msg_;
};

class Init_Waypoint_curvature
{
public:
  explicit Init_Waypoint_curvature(::interfaces_hot_wheels::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_l curvature(::interfaces_hot_wheels::msg::Waypoint::_curvature_type arg)
  {
    msg_.curvature = std::move(arg);
    return Init_Waypoint_l(msg_);
  }

private:
  ::interfaces_hot_wheels::msg::Waypoint msg_;
};

class Init_Waypoint_arc_length
{
public:
  explicit Init_Waypoint_arc_length(::interfaces_hot_wheels::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_curvature arc_length(::interfaces_hot_wheels::msg::Waypoint::_arc_length_type arg)
  {
    msg_.arc_length = std::move(arg);
    return Init_Waypoint_curvature(msg_);
  }

private:
  ::interfaces_hot_wheels::msg::Waypoint msg_;
};

class Init_Waypoint_v
{
public:
  explicit Init_Waypoint_v(::interfaces_hot_wheels::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_arc_length v(::interfaces_hot_wheels::msg::Waypoint::_v_type arg)
  {
    msg_.v = std::move(arg);
    return Init_Waypoint_arc_length(msg_);
  }

private:
  ::interfaces_hot_wheels::msg::Waypoint msg_;
};

class Init_Waypoint_theta
{
public:
  explicit Init_Waypoint_theta(::interfaces_hot_wheels::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_v theta(::interfaces_hot_wheels::msg::Waypoint::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return Init_Waypoint_v(msg_);
  }

private:
  ::interfaces_hot_wheels::msg::Waypoint msg_;
};

class Init_Waypoint_y
{
public:
  explicit Init_Waypoint_y(::interfaces_hot_wheels::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_theta y(::interfaces_hot_wheels::msg::Waypoint::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Waypoint_theta(msg_);
  }

private:
  ::interfaces_hot_wheels::msg::Waypoint msg_;
};

class Init_Waypoint_x
{
public:
  Init_Waypoint_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Waypoint_y x(::interfaces_hot_wheels::msg::Waypoint::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Waypoint_y(msg_);
  }

private:
  ::interfaces_hot_wheels::msg::Waypoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces_hot_wheels::msg::Waypoint>()
{
  return interfaces_hot_wheels::msg::builder::Init_Waypoint_x();
}

}  // namespace interfaces_hot_wheels

#endif  // INTERFACES_HOT_WHEELS__MSG__DETAIL__WAYPOINT__BUILDER_HPP_
