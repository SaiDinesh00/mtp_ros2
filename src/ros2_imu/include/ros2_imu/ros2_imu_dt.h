//
//  ros2_imu_dt.h
//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  Code generation for model "ros2_imu".
//
//  Model version              : 1.6
//  Simulink Coder version : 23.2 (R2023b) 01-Aug-2023
//  C++ source code generated on : Wed Jun 12 03:21:05 2024
//
//  Target selection: ert.tlc
//  Embedded hardware selection: Intel->x86-64 (Windows64)
//  Code generation objectives: Unspecified
//  Validation result: Not run


#include "ext_types.h"

// data type size table
static uint_T rtDataTypeSizes[] = {
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
  sizeof(SL_Bus_geometry_msgs_Vector3),
  sizeof(ros_slros2_internal_block_Sub_T),
  sizeof(uint_T),
  sizeof(char_T),
  sizeof(uchar_T),
  sizeof(time_T)
};

// data type name table
static const char_T * rtDataTypeNames[] = {
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
  "SL_Bus_geometry_msgs_Vector3",
  "ros_slros2_internal_block_Sub_T",
  "uint_T",
  "char_T",
  "uchar_T",
  "time_T"
};

// data type transitions for block I/O structure
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&ros2_imu_B.In1), 15, 0, 1 },

  { (char_T *)(&ros2_imu_B.x), 0, 0, 3 }
  ,

  { (char_T *)(&ros2_imu_DW.obj), 16, 0, 1 },

  { (char_T *)(&ros2_imu_DW.Scope_PWORK.LoggedData[0]), 11, 0, 3 },

  { (char_T *)(&ros2_imu_DW.EnabledSubsystem_SubsysRanBC), 2, 0, 1 }
};

// data type transition table for block I/O structure
static DataTypeTransitionTable rtBTransTable = {
  5U,
  rtBTransitions
};

// data type transitions for Parameters structure
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&ros2_imu_P.Out1_Y0), 15, 0, 1 },

  { (char_T *)(&ros2_imu_P.Constant_Value), 15, 0, 1 }
};

// data type transition table for Parameters structure
static DataTypeTransitionTable rtPTransTable = {
  2U,
  rtPTransitions
};

// [EOF] ros2_imu_dt.h