// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aerobot_interfaces:msg/EscMsg.idl
// generated code does not contain a copyright notice

#ifndef AEROBOT_INTERFACES__MSG__DETAIL__ESC_MSG__STRUCT_H_
#define AEROBOT_INTERFACES__MSG__DETAIL__ESC_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/EscMsg in the package aerobot_interfaces.
typedef struct aerobot_interfaces__msg__EscMsg
{
  int8_t pin_number;
  double pulse_width;
} aerobot_interfaces__msg__EscMsg;

// Struct for a sequence of aerobot_interfaces__msg__EscMsg.
typedef struct aerobot_interfaces__msg__EscMsg__Sequence
{
  aerobot_interfaces__msg__EscMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aerobot_interfaces__msg__EscMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AEROBOT_INTERFACES__MSG__DETAIL__ESC_MSG__STRUCT_H_
