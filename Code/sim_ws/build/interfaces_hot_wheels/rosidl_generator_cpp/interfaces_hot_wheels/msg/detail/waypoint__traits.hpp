// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces_hot_wheels:msg/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_HOT_WHEELS__MSG__DETAIL__WAYPOINT__TRAITS_HPP_
#define INTERFACES_HOT_WHEELS__MSG__DETAIL__WAYPOINT__TRAITS_HPP_

#include "interfaces_hot_wheels/msg/detail/waypoint__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces_hot_wheels::msg::Waypoint>()
{
  return "interfaces_hot_wheels::msg::Waypoint";
}

template<>
inline const char * name<interfaces_hot_wheels::msg::Waypoint>()
{
  return "interfaces_hot_wheels/msg/Waypoint";
}

template<>
struct has_fixed_size<interfaces_hot_wheels::msg::Waypoint>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces_hot_wheels::msg::Waypoint>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces_hot_wheels::msg::Waypoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES_HOT_WHEELS__MSG__DETAIL__WAYPOINT__TRAITS_HPP_
