//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: ros2_imu_types.h
//
// Code generated for Simulink model 'ros2_imu'.
//
// Model version                  : 1.9
// Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
// C/C++ source code generated on : Thu Jun 13 16:25:09 2024
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Windows64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_ros2_imu_types_h_
#define RTW_HEADER_ros2_imu_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_geometry_msgs_Vector3_
#define DEFINED_TYPEDEF_FOR_SL_Bus_geometry_msgs_Vector3_

// MsgType=geometry_msgs/Vector3
struct SL_Bus_geometry_msgs_Vector3
{
  real_T x;
  real_T y;
  real_T z;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_aerobot_interfaces_EscMsg_
#define DEFINED_TYPEDEF_FOR_SL_Bus_aerobot_interfaces_EscMsg_

// MsgType=aerobot_interfaces/EscMsg
struct SL_Bus_aerobot_interfaces_EscMsg
{
  int8_T pin_number;

  // Int64Type=int64
  real_T pulse_width;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_aerobot_interfaces_EscSrvRequest_
#define DEFINED_TYPEDEF_FOR_SL_Bus_aerobot_interfaces_EscSrvRequest_

// MsgType=aerobot_interfaces/EscSrvRequest
struct SL_Bus_aerobot_interfaces_EscSrvRequest
{
  int8_T pin_number;
  boolean_T state;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_aerobot_interfaces_EscSrvResponse_
#define DEFINED_TYPEDEF_FOR_SL_Bus_aerobot_interfaces_EscSrvResponse_

// MsgType=aerobot_interfaces/EscSrvResponse
struct SL_Bus_aerobot_interfaces_EscSrvResponse
{
  boolean_T success;
};

#endif

// Custom Type definition for MATLABSystem: '<S22>/SourceBlock'
#include "rmw/qos_profiles.h"
#ifndef struct_ros_slros2_internal_block_Ser_T
#define struct_ros_slros2_internal_block_Ser_T

struct ros_slros2_internal_block_Ser_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                // struct_ros_slros2_internal_block_Ser_T

#ifndef struct_ros_slros2_internal_block_Pub_T
#define struct_ros_slros2_internal_block_Pub_T

struct ros_slros2_internal_block_Pub_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                // struct_ros_slros2_internal_block_Pub_T

#ifndef struct_ros_slros2_internal_block_Sub_T
#define struct_ros_slros2_internal_block_Sub_T

struct ros_slros2_internal_block_Sub_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                // struct_ros_slros2_internal_block_Sub_T

#ifndef typedef_c_ros_slros_internal_block_Se_T
#define typedef_c_ros_slros_internal_block_Se_T

typedef uint8_T c_ros_slros_internal_block_Se_T;

#endif                               // typedef_c_ros_slros_internal_block_Se_T

#ifndef ros_slros_internal_block_ServiceCallErrorCode_constants
#define ros_slros_internal_block_ServiceCallErrorCode_constants

// enum ros_slros_internal_block_ServiceCallErrorCode
const c_ros_slros_internal_block_Se_T SLSuccess = 0U;
const c_ros_slros_internal_block_Se_T SLConnectionTimeout = 1U;
const c_ros_slros_internal_block_Se_T SLCallFailure = 2U;
const c_ros_slros_internal_block_Se_T SLOtherError = 3U;

#endif               // ros_slros_internal_block_ServiceCallErrorCode_constants

// Parameters (default storage)
typedef struct P_ros2_imu_T_ P_ros2_imu_T;

// Forward declaration for rtModel
typedef struct tag_RTM_ros2_imu_T RT_MODEL_ros2_imu_T;

#endif                                 // RTW_HEADER_ros2_imu_types_h_

//
// File trailer for generated code.
//
// [EOF]
//
