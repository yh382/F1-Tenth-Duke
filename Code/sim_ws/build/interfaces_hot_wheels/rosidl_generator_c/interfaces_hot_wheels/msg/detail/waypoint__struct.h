// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces_hot_wheels:msg/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_HOT_WHEELS__MSG__DETAIL__WAYPOINT__STRUCT_H_
#define INTERFACES_HOT_WHEELS__MSG__DETAIL__WAYPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Waypoint in the package interfaces_hot_wheels.
typedef struct interfaces_hot_wheels__msg__Waypoint
{
  float x;
  float y;
  float theta;
  float v;
  float arc_length;
  float curvature;
  float l;
  float kp;
} interfaces_hot_wheels__msg__Waypoint;

// Struct for a sequence of interfaces_hot_wheels__msg__Waypoint.
typedef struct interfaces_hot_wheels__msg__Waypoint__Sequence
{
  interfaces_hot_wheels__msg__Waypoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces_hot_wheels__msg__Waypoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES_HOT_WHEELS__MSG__DETAIL__WAYPOINT__STRUCT_H_
