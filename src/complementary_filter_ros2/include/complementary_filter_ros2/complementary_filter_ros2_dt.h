//
//  complementary_filter_ros2_dt.h
//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  Code generation for model "complementary_filter_ros2".
//
//  Model version              : 1.5
//  Simulink Coder version : 23.2 (R2023b) 01-Aug-2023
//  C++ source code generated on : Mon Jun 17 12:48:49 2024
//
//  Target selection: ert.tlc
//  Embedded hardware selection: ARM Compatible->ARM Cortex-A (64-bit)
//  Emulation hardware selection:
//     Differs from embedded hardware (MATLAB Host)
//  Code generation objective: Execution efficiency
//  Validation result: Not run


#include "ext_types.h"

// data type size table
static uint_T rtDataTypeSizes[]{
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(pointer_T),
  sizeof(action_T),
  2*sizeof(uint32_T),
  sizeof(int32_T),
  sizeof(int64_T),
  sizeof(uint64_T),
  sizeof(SL_Bus_std_msgs_Int64),
  sizeof(SL_Bus_aerobot_interfaces_EscSrvRequest),
  sizeof(SL_Bus_aerobot_interfaces_EscSrvResponse),
  sizeof(SL_Bus_builtin_interfaces_Time),
  sizeof(SL_Bus_ROSVariableLengthArrayInfo),
  sizeof(SL_Bus_std_msgs_Header),
  sizeof(SL_Bus_geometry_msgs_Quaternion),
  sizeof(SL_Bus_geometry_msgs_Vector3),
  sizeof(SL_Bus_sensor_msgs_Imu),
  sizeof(SL_Bus_sensor_msgs_MagneticField),
  sizeof(ros_slros2_internal_block_Pub_T),
  sizeof(ros_slros2_internal_block_Ser_T),
  sizeof(ros_slros2_internal_block_Sub_T),
  sizeof(uint64_T),
  sizeof(int64_T),
  sizeof(uint_T),
  sizeof(char_T),
  sizeof(uchar_T),
  sizeof(time_T)
};

// data type name table
static const char_T * rtDataTypeNames[]{
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T",
  "physical_connection",
  "int64_T",
  "uint64_T",
  "SL_Bus_std_msgs_Int64",
  "SL_Bus_aerobot_interfaces_EscSrvRequest",
  "SL_Bus_aerobot_interfaces_EscSrvResponse",
  "SL_Bus_builtin_interfaces_Time",
  "SL_Bus_ROSVariableLengthArrayInfo",
  "SL_Bus_std_msgs_Header",
  "SL_Bus_geometry_msgs_Quaternion",
  "SL_Bus_geometry_msgs_Vector3",
  "SL_Bus_sensor_msgs_Imu",
  "SL_Bus_sensor_msgs_MagneticField",
  "ros_slros2_internal_block_Pub_T",
  "ros_slros2_internal_block_Ser_T",
  "ros_slros2_internal_block_Sub_T",
  "uint64_T",
  "int64_T",
  "uint_T",
  "char_T",
  "uchar_T",
  "time_T"
};

// data type transitions for block I/O structure
static DataTypeTransition rtBTransitions[]{
  { (char_T *)(&complementary_filter_ros2_B.In1), 25, 0, 1 },

  { (char_T *)(&complementary_filter_ros2_B.In1_i), 26, 0, 1 },

  { (char_T *)(&complementary_filter_ros2_B.x), 0, 0, 14 },

  { (char_T *)(&complementary_filter_ros2_B.ServiceCaller_o2), 3, 0, 1 },

  { (char_T *)(&complementary_filter_ros2_B.Pitchmotor), 8, 0, 3 }
  ,

  { (char_T *)(&complementary_filter_ros2_DW.obj), 27, 0, 2 },

  { (char_T *)(&complementary_filter_ros2_DW.obj_h), 28, 0, 4 },

  { (char_T *)(&complementary_filter_ros2_DW.obj_p), 29, 0, 2 },

  { (char_T *)(&complementary_filter_ros2_DW.DiscreteTimeIntegrator_DSTATE[0]),
    0, 0, 7 },

  { (char_T *)(&complementary_filter_ros2_DW.Scope_PWORK.LoggedData[0]), 11, 0,
    6 },

  { (char_T *)(&complementary_filter_ros2_DW.is_c1_complementary_filter_ros2), 7,
    0, 2 },

  { (char_T *)(&complementary_filter_ros2_DW.Integrator_PrevResetState), 2, 0,
    11 },

  { (char_T *)(&complementary_filter_ros2_DW.DiscreteTimeIntegrator_IC_LOADI), 3,
    0, 4 },

  { (char_T *)(&complementary_filter_ros2_DW.k2), 8, 0, 2 }
};

// data type transition table for block I/O structure
static DataTypeTransitionTable rtBTransTable{
  14U,
  rtBTransitions
};

// data type transitions for Parameters structure
static DataTypeTransition rtPTransitions[]{
  { (char_T *)(&complementary_filter_ros2_P.DiscreteDerivative_ICPrevScaled), 0,
    0, 6 },

  { (char_T *)(&complementary_filter_ros2_P.Out1_Y0), 25, 0, 1 },

  { (char_T *)(&complementary_filter_ros2_P.Constant_Value), 25, 0, 1 },

  { (char_T *)(&complementary_filter_ros2_P.Out1_Y0_d), 26, 0, 1 },

  { (char_T *)(&complementary_filter_ros2_P.Constant_Value_h), 26, 0, 1 },

  { (char_T *)(&complementary_filter_ros2_P.Constant_Value_j), 18, 0, 1 },

  { (char_T *)(&complementary_filter_ros2_P.Constant_Value_i), 18, 0, 1 },

  { (char_T *)(&complementary_filter_ros2_P.Constant_Value_k), 18, 0, 1 },

  { (char_T *)(&complementary_filter_ros2_P.Constant_Value_hu), 18, 0, 1 },

  { (char_T *)(&complementary_filter_ros2_P.Constant_Value_k1), 19, 0, 1 },

  { (char_T *)(&complementary_filter_ros2_P.Constant_Value_c), 19, 0, 1 },

  { (char_T *)(&complementary_filter_ros2_P.Constant_Value_e), 19, 0, 1 },

  { (char_T *)(&complementary_filter_ros2_P.Constant_Value_n), 19, 0, 1 },

  { (char_T *)(&complementary_filter_ros2_P.Constant_Value_ct), 17, 0, 1 },

  { (char_T *)(&complementary_filter_ros2_P.Constant_Value_il), 17, 0, 1 },

  { (char_T *)(&complementary_filter_ros2_P.Constant_Value_j4), 0, 0, 26 },

  { (char_T *)(&complementary_filter_ros2_P.Constant1_Value_e), 8, 0, 6 },

  { (char_T *)(&complementary_filter_ros2_P.Constant_Value_n5), 2, 0, 5 }
};

// data type transition table for Parameters structure
static DataTypeTransitionTable rtPTransTable{
  18U,
  rtPTransitions
};

// [EOF] complementary_filter_ros2_dt.h
