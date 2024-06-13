//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: ros2_imu.h
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
#ifndef RTW_HEADER_ros2_imu_h_
#define RTW_HEADER_ros2_imu_h_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "dt_info.h"
#include "ext_work.h"
#include "slros2_initialize.h"
#include "ros2_imu_types.h"
#include <float.h>
#include <stddef.h>

// Macros for accessing real-time model data structure
#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWExtModeInfo
#define rtmGetRTWExtModeInfo(rtm)      ((rtm)->extModeInfo)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                (&(rtm)->Timing.taskTime0)
#endif

// Block signals (default storage)
struct B_ros2_imu_T {
  SL_Bus_geometry_msgs_Vector3 In1;    // '<S23>/In1'
  real_T x;
  real_T y;
  real_T z;
  uint8_T ServiceCaller_o2;            // '<S12>/ServiceCaller'
  boolean_T Pitchmotor;                // '<Root>/Pitch motor'
  boolean_T YawMotor;                  // '<Root>/Yaw Motor'
  boolean_T success;
};

// Block states (default storage) for system '<Root>'
struct DW_ros2_imu_T {
  ros_slros2_internal_block_Pub_T obj; // '<S17>/SinkBlock'
  ros_slros2_internal_block_Pub_T obj_i;// '<S8>/SinkBlock'
  ros_slros2_internal_block_Ser_T obj_l;// '<S19>/ServiceCaller'
  ros_slros2_internal_block_Ser_T obj_c;// '<S21>/ServiceCaller'
  ros_slros2_internal_block_Ser_T obj_ly;// '<S10>/ServiceCaller'
  ros_slros2_internal_block_Ser_T obj_m;// '<S12>/ServiceCaller'
  ros_slros2_internal_block_Sub_T obj_l0;// '<S22>/SourceBlock'
  real_T y2;                           // '<Root>/Chart1'
  struct {
    void *LoggedData[3];
  } Scope_PWORK;                       // '<S3>/Scope'

  uint32_T is_c1_ros2_imu;             // '<Root>/Chart1'
  uint32_T is_c3_ros2_imu;             // '<Root>/Chart'
  int8_T EnabledSubsystem_SubsysRanBC; // '<S22>/Enabled Subsystem'
  int8_T killEsc2_SubsysRanBC;         // '<S2>/killEsc2'
  int8_T controlling2_SubsysRanBC;     // '<S2>/controlling2'
  int8_T sendArmSignal2_SubsysRanBC;   // '<S2>/sendArmSignal2'
  int8_T y1;                           // '<Root>/Chart'
  int8_T killEsc1_SubsysRanBC;         // '<S1>/killEsc1'
  int8_T controlling1_SubsysRanBC;     // '<S1>/controlling1'
  int8_T sendArmSignal1_SubsysRanBC;   // '<S1>/sendArmSignal1'
  uint8_T is_active_c1_ros2_imu;       // '<Root>/Chart1'
  uint8_T is_active_c3_ros2_imu;       // '<Root>/Chart'
  boolean_T k2;                        // '<Root>/Chart1'
  boolean_T k1;                        // '<Root>/Chart'
};

// Parameters (default storage)
struct P_ros2_imu_T_ {
  SL_Bus_geometry_msgs_Vector3 Out1_Y0;// Computed Parameter: Out1_Y0
                                          //  Referenced by: '<S23>/Out1'

  SL_Bus_geometry_msgs_Vector3 Constant_Value;// Computed Parameter: Constant_Value
                                                 //  Referenced by: '<S22>/Constant'

  SL_Bus_aerobot_interfaces_EscMsg Constant_Value_f;// Computed Parameter: Constant_Value_f
                                                       //  Referenced by: '<S7>/Constant'

  SL_Bus_aerobot_interfaces_EscMsg Constant_Value_k;// Computed Parameter: Constant_Value_k
                                                       //  Referenced by: '<S16>/Constant'

  SL_Bus_aerobot_interfaces_EscSrvRequest Constant_Value_fd;// Computed Parameter: Constant_Value_fd
                                                               //  Referenced by: '<S11>/Constant'

  SL_Bus_aerobot_interfaces_EscSrvRequest Constant_Value_a;// Computed Parameter: Constant_Value_a
                                                              //  Referenced by: '<S9>/Constant'

  SL_Bus_aerobot_interfaces_EscSrvRequest Constant_Value_i;// Computed Parameter: Constant_Value_i
                                                              //  Referenced by: '<S20>/Constant'

  SL_Bus_aerobot_interfaces_EscSrvRequest Constant_Value_g;// Computed Parameter: Constant_Value_g
                                                              //  Referenced by: '<S18>/Constant'

  SL_Bus_aerobot_interfaces_EscSrvResponse Constant_Value_d;// Computed Parameter: Constant_Value_d
                                                               //  Referenced by: '<S12>/Constant'

  SL_Bus_aerobot_interfaces_EscSrvResponse Constant_Value_k5;// Computed Parameter: Constant_Value_k5
                                                                //  Referenced by: '<S10>/Constant'

  SL_Bus_aerobot_interfaces_EscSrvResponse Constant_Value_n;// Computed Parameter: Constant_Value_n
                                                               //  Referenced by: '<S21>/Constant'

  SL_Bus_aerobot_interfaces_EscSrvResponse Constant_Value_n5;// Computed Parameter: Constant_Value_n5
                                                                //  Referenced by: '<S19>/Constant'

  real_T Constant1_Value;              // Expression: 0
                                          //  Referenced by: '<S4>/Constant1'

  real_T Constant2_Value;              // Expression: 1500
                                          //  Referenced by: '<S4>/Constant2'

  real_T Constant1_Value_c;            // Expression: 0
                                          //  Referenced by: '<S13>/Constant1'

  real_T Constant2_Value_g;            // Expression: 1500
                                          //  Referenced by: '<S13>/Constant2'

  boolean_T Constant1_Value_k;         // Computed Parameter: Constant1_Value_k
                                          //  Referenced by: '<S6>/Constant1'

  boolean_T Constant1_Value_e;         // Computed Parameter: Constant1_Value_e
                                          //  Referenced by: '<S5>/Constant1'

  boolean_T Constant2_Value_a;         // Computed Parameter: Constant2_Value_a
                                          //  Referenced by: '<S15>/Constant2'

  boolean_T Constant1_Value_j;         // Computed Parameter: Constant1_Value_j
                                          //  Referenced by: '<S14>/Constant1'

  boolean_T Pitchmotor_Value;          // Computed Parameter: Pitchmotor_Value
                                          //  Referenced by: '<Root>/Pitch motor'

  boolean_T YawMotor_Value;            // Computed Parameter: YawMotor_Value
                                          //  Referenced by: '<Root>/Yaw Motor'

  int8_T Constant_Value_iy;            // Computed Parameter: Constant_Value_iy
                                          //  Referenced by: '<S6>/Constant'

  int8_T Constant_Value_p;             // Computed Parameter: Constant_Value_p
                                          //  Referenced by: '<S4>/Constant'

  int8_T Constant_Value_p0;            // Computed Parameter: Constant_Value_p0
                                          //  Referenced by: '<S5>/Constant'

  int8_T Chart_y1;                     // Computed Parameter: Chart_y1
                                          //  Referenced by: '<Root>/Chart'

  int8_T Constant1_Value_o;            // Computed Parameter: Constant1_Value_o
                                          //  Referenced by: '<S15>/Constant1'

  int8_T Constant_Value_l;             // Computed Parameter: Constant_Value_l
                                          //  Referenced by: '<S13>/Constant'

  int8_T Constant_Value_pf;            // Computed Parameter: Constant_Value_pf
                                          //  Referenced by: '<S14>/Constant'

};

// Real-time Model Data Structure
struct tag_RTM_ros2_imu_T {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;

  //
  //  Sizes:
  //  The following substructure contains sizes information
  //  for many of the model attributes such as inputs, outputs,
  //  dwork, sample times, etc.

  struct {
    uint32_T checksums[4];
  } Sizes;

  //
  //  SpecialInfo:
  //  The following substructure contains special information
  //  related to other components that are dependent on RTW.

  struct {
    const void *mappingInfo;
  } SpecialInfo;

  //
  //  Timing:
  //  The following substructure contains information regarding
  //  the timing information for the model.

  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C"
{

#endif

  extern P_ros2_imu_T ros2_imu_P;

#ifdef __cplusplus

}

#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C"
{

#endif

  extern struct B_ros2_imu_T ros2_imu_B;

#ifdef __cplusplus

}

#endif

// Block states (default storage)
extern struct DW_ros2_imu_T ros2_imu_DW;

#ifdef __cplusplus

extern "C"
{

#endif

  // Model entry point functions
  extern void ros2_imu_initialize(void);
  extern void ros2_imu_step(void);
  extern void ros2_imu_terminate(void);

#ifdef __cplusplus

}

#endif

// Real-time Model object
#ifdef __cplusplus

extern "C"
{

#endif

  extern RT_MODEL_ros2_imu_T *const ros2_imu_M;

#ifdef __cplusplus

}

#endif

extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'ros2_imu'
//  '<S1>'   : 'ros2_imu/Chart'
//  '<S2>'   : 'ros2_imu/Chart1'
//  '<S3>'   : 'ros2_imu/Sensor'
//  '<S4>'   : 'ros2_imu/Chart/controlling1'
//  '<S5>'   : 'ros2_imu/Chart/killEsc1'
//  '<S6>'   : 'ros2_imu/Chart/sendArmSignal1'
//  '<S7>'   : 'ros2_imu/Chart/controlling1/Blank Message'
//  '<S8>'   : 'ros2_imu/Chart/controlling1/Publish'
//  '<S9>'   : 'ros2_imu/Chart/killEsc1/Blank Message'
//  '<S10>'  : 'ros2_imu/Chart/killEsc1/Call Service'
//  '<S11>'  : 'ros2_imu/Chart/sendArmSignal1/Blank Message'
//  '<S12>'  : 'ros2_imu/Chart/sendArmSignal1/Call Service'
//  '<S13>'  : 'ros2_imu/Chart1/controlling2'
//  '<S14>'  : 'ros2_imu/Chart1/killEsc2'
//  '<S15>'  : 'ros2_imu/Chart1/sendArmSignal2'
//  '<S16>'  : 'ros2_imu/Chart1/controlling2/Blank Message1'
//  '<S17>'  : 'ros2_imu/Chart1/controlling2/Publish1'
//  '<S18>'  : 'ros2_imu/Chart1/killEsc2/Blank Message'
//  '<S19>'  : 'ros2_imu/Chart1/killEsc2/Call Service'
//  '<S20>'  : 'ros2_imu/Chart1/sendArmSignal2/Blank Message1'
//  '<S21>'  : 'ros2_imu/Chart1/sendArmSignal2/Call Service1'
//  '<S22>'  : 'ros2_imu/Sensor/Subscribe'
//  '<S23>'  : 'ros2_imu/Sensor/Subscribe/Enabled Subsystem'

#endif                                 // RTW_HEADER_ros2_imu_h_

//
// File trailer for generated code.
//
// [EOF]
//
