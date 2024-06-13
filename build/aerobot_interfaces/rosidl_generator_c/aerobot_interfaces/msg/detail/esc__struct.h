// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aerobot_interfaces:msg/Esc.idl
// generated code does not contain a copyright notice

#ifndef AEROBOT_INTERFACES__MSG__DETAIL__ESC__STRUCT_H_
#define AEROBOT_INTERFACES__MSG__DETAIL__ESC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Esc in the package aerobot_interfaces.
typedef struct aerobot_interfaces__msg__Esc
{
  int8_t pin_number;
  double pulse_width;
} aerobot_interfaces__msg__Esc;

// Struct for a sequence of aerobot_interfaces__msg__Esc.
typedef struct aerobot_interfaces__msg__Esc__Sequence
{
  aerobot_interfaces__msg__Esc * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aerobot_interfaces__msg__Esc__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AEROBOT_INTERFACES__MSG__DETAIL__ESC__STRUCT_H_
