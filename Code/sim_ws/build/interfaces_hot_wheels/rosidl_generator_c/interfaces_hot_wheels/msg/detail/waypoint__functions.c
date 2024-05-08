// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces_hot_wheels:msg/Waypoint.idl
// generated code does not contain a copyright notice
#include "interfaces_hot_wheels/msg/detail/waypoint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
interfaces_hot_wheels__msg__Waypoint__init(interfaces_hot_wheels__msg__Waypoint * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // theta
  // v
  // arc_length
  // curvature
  // l
  // kp
  return true;
}

void
interfaces_hot_wheels__msg__Waypoint__fini(interfaces_hot_wheels__msg__Waypoint * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // theta
  // v
  // arc_length
  // curvature
  // l
  // kp
}

bool
interfaces_hot_wheels__msg__Waypoint__are_equal(const interfaces_hot_wheels__msg__Waypoint * lhs, const interfaces_hot_wheels__msg__Waypoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // theta
  if (lhs->theta != rhs->theta) {
    return false;
  }
  // v
  if (lhs->v != rhs->v) {
    return false;
  }
  // arc_length
  if (lhs->arc_length != rhs->arc_length) {
    return false;
  }
  // curvature
  if (lhs->curvature != rhs->curvature) {
    return false;
  }
  // l
  if (lhs->l != rhs->l) {
    return false;
  }
  // kp
  if (lhs->kp != rhs->kp) {
    return false;
  }
  return true;
}

bool
interfaces_hot_wheels__msg__Waypoint__copy(
  const interfaces_hot_wheels__msg__Waypoint * input,
  interfaces_hot_wheels__msg__Waypoint * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // theta
  output->theta = input->theta;
  // v
  output->v = input->v;
  // arc_length
  output->arc_length = input->arc_length;
  // curvature
  output->curvature = input->curvature;
  // l
  output->l = input->l;
  // kp
  output->kp = input->kp;
  return true;
}

interfaces_hot_wheels__msg__Waypoint *
interfaces_hot_wheels__msg__Waypoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces_hot_wheels__msg__Waypoint * msg = (interfaces_hot_wheels__msg__Waypoint *)allocator.allocate(sizeof(interfaces_hot_wheels__msg__Waypoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces_hot_wheels__msg__Waypoint));
  bool success = interfaces_hot_wheels__msg__Waypoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces_hot_wheels__msg__Waypoint__destroy(interfaces_hot_wheels__msg__Waypoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces_hot_wheels__msg__Waypoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces_hot_wheels__msg__Waypoint__Sequence__init(interfaces_hot_wheels__msg__Waypoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces_hot_wheels__msg__Waypoint * data = NULL;

  if (size) {
    data = (interfaces_hot_wheels__msg__Waypoint *)allocator.zero_allocate(size, sizeof(interfaces_hot_wheels__msg__Waypoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces_hot_wheels__msg__Waypoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces_hot_wheels__msg__Waypoint__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
interfaces_hot_wheels__msg__Waypoint__Sequence__fini(interfaces_hot_wheels__msg__Waypoint__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces_hot_wheels__msg__Waypoint__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

interfaces_hot_wheels__msg__Waypoint__Sequence *
interfaces_hot_wheels__msg__Waypoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces_hot_wheels__msg__Waypoint__Sequence * array = (interfaces_hot_wheels__msg__Waypoint__Sequence *)allocator.allocate(sizeof(interfaces_hot_wheels__msg__Waypoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces_hot_wheels__msg__Waypoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces_hot_wheels__msg__Waypoint__Sequence__destroy(interfaces_hot_wheels__msg__Waypoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces_hot_wheels__msg__Waypoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces_hot_wheels__msg__Waypoint__Sequence__are_equal(const interfaces_hot_wheels__msg__Waypoint__Sequence * lhs, const interfaces_hot_wheels__msg__Waypoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces_hot_wheels__msg__Waypoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces_hot_wheels__msg__Waypoint__Sequence__copy(
  const interfaces_hot_wheels__msg__Waypoint__Sequence * input,
  interfaces_hot_wheels__msg__Waypoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces_hot_wheels__msg__Waypoint);
    interfaces_hot_wheels__msg__Waypoint * data =
      (interfaces_hot_wheels__msg__Waypoint *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces_hot_wheels__msg__Waypoint__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          interfaces_hot_wheels__msg__Waypoint__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces_hot_wheels__msg__Waypoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
