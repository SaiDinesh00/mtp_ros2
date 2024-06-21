// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aerobot_interfaces:srv/Calibrate.idl
// generated code does not contain a copyright notice

#ifndef AEROBOT_INTERFACES__SRV__DETAIL__CALIBRATE__STRUCT_H_
#define AEROBOT_INTERFACES__SRV__DETAIL__CALIBRATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Calibrate in the package aerobot_interfaces.
typedef struct aerobot_interfaces__srv__Calibrate_Request
{
  bool get_calibration_parameters;
} aerobot_interfaces__srv__Calibrate_Request;

// Struct for a sequence of aerobot_interfaces__srv__Calibrate_Request.
typedef struct aerobot_interfaces__srv__Calibrate_Request__Sequence
{
  aerobot_interfaces__srv__Calibrate_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aerobot_interfaces__srv__Calibrate_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Calibrate in the package aerobot_interfaces.
typedef struct aerobot_interfaces__srv__Calibrate_Response
{
  double x;
  double y;
  double z;
} aerobot_interfaces__srv__Calibrate_Response;

// Struct for a sequence of aerobot_interfaces__srv__Calibrate_Response.
typedef struct aerobot_interfaces__srv__Calibrate_Response__Sequence
{
  aerobot_interfaces__srv__Calibrate_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aerobot_interfaces__srv__Calibrate_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AEROBOT_INTERFACES__SRV__DETAIL__CALIBRATE__STRUCT_H_
