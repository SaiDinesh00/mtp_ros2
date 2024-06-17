//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: complementary_filter_ros2_types.h
//
// Code generated for Simulink model 'complementary_filter_ros2'.
//
// Model version                  : 1.5
// Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
// C/C++ source code generated on : Mon Jun 17 12:48:49 2024
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex-A (64-bit)
// Emulation hardware selection:
//    Differs from embedded hardware (MATLAB Host)
// Code generation objective: Execution efficiency
// Validation result: Not run
//
#ifndef RTW_HEADER_complementary_filter_ros2_types_h_
#define RTW_HEADER_complementary_filter_ros2_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_std_msgs_Int64_
#define DEFINED_TYPEDEF_FOR_SL_Bus_std_msgs_Int64_

// MsgType=std_msgs/Int64
struct SL_Bus_std_msgs_Int64
{
  // Int64Type=int64
  real_T data;
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

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_builtin_interfaces_Time_
#define DEFINED_TYPEDEF_FOR_SL_Bus_builtin_interfaces_Time_

// MsgType=builtin_interfaces/Time
struct SL_Bus_builtin_interfaces_Time
{
  int32_T sec;
  uint32_T nanosec;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_

struct SL_Bus_ROSVariableLengthArrayInfo
{
  uint32_T CurrentLength;
  uint32_T ReceivedLength;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_std_msgs_Header_
#define DEFINED_TYPEDEF_FOR_SL_Bus_std_msgs_Header_

// MsgType=std_msgs/Header
struct SL_Bus_std_msgs_Header
{
  // MsgType=builtin_interfaces/Time
  SL_Bus_builtin_interfaces_Time stamp;

  // PrimitiveROSType=string:IsVarLen=1:VarLenCategory=data:VarLenElem=frame_id_SL_Info:TruncateAction=warn 
  uint8_T frame_id[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=frame_id
  SL_Bus_ROSVariableLengthArrayInfo frame_id_SL_Info;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_geometry_msgs_Quaternion_
#define DEFINED_TYPEDEF_FOR_SL_Bus_geometry_msgs_Quaternion_

// MsgType=geometry_msgs/Quaternion
struct SL_Bus_geometry_msgs_Quaternion
{
  real_T x;
  real_T y;
  real_T z;
  real_T w;
};

#endif

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

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_sensor_msgs_Imu_
#define DEFINED_TYPEDEF_FOR_SL_Bus_sensor_msgs_Imu_

// MsgType=sensor_msgs/Imu
struct SL_Bus_sensor_msgs_Imu
{
  // MsgType=std_msgs/Header
  SL_Bus_std_msgs_Header header;

  // MsgType=geometry_msgs/Quaternion
  SL_Bus_geometry_msgs_Quaternion orientation;
  real_T orientation_covariance[9];

  // MsgType=geometry_msgs/Vector3
  SL_Bus_geometry_msgs_Vector3 angular_velocity;
  real_T angular_velocity_covariance[9];

  // MsgType=geometry_msgs/Vector3
  SL_Bus_geometry_msgs_Vector3 linear_acceleration;
  real_T linear_acceleration_covariance[9];
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_sensor_msgs_MagneticField_
#define DEFINED_TYPEDEF_FOR_SL_Bus_sensor_msgs_MagneticField_

// MsgType=sensor_msgs/MagneticField
struct SL_Bus_sensor_msgs_MagneticField
{
  // MsgType=std_msgs/Header
  SL_Bus_std_msgs_Header header;

  // MsgType=geometry_msgs/Vector3
  SL_Bus_geometry_msgs_Vector3 magnetic_field;
  real_T magnetic_field_covariance[9];
};

#endif

// Custom Type definition for MATLABSystem: '<S6>/SourceBlock'
#include "rmw/qos_profiles.h"
#ifndef enum_ros_slros_internal_block_ServiceCallErrorCode
#define enum_ros_slros_internal_block_ServiceCallErrorCode

enum ros_slros_internal_block_ServiceCallErrorCode
{
  SLSuccess = 0,                       // Default value
  SLConnectionTimeout,
  SLCallFailure,
  SLOtherError
};

#endif                    // enum_ros_slros_internal_block_ServiceCallErrorCode

#ifndef typedef_c_ros_slros_internal_block_Se_T
#define typedef_c_ros_slros_internal_block_Se_T

using c_ros_slros_internal_block_Se_T =
  ros_slros_internal_block_ServiceCallErrorCode;

#endif                               // typedef_c_ros_slros_internal_block_Se_T

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

// Parameters (default storage)
typedef struct P_complementary_filter_ros2_T_ P_complementary_filter_ros2_T;

// Forward declaration for rtModel
typedef struct tag_RTM_complementary_filter__T RT_MODEL_complementary_filter_T;

#endif                         // RTW_HEADER_complementary_filter_ros2_types_h_

//
// File trailer for generated code.
//
// [EOF]
//