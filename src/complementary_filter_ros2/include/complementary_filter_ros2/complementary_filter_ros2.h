//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: complementary_filter_ros2.h
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
#ifndef RTW_HEADER_complementary_filter_ros2_h_
#define RTW_HEADER_complementary_filter_ros2_h_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "dt_info.h"
#include "ext_work.h"
#include "slros2_initialize.h"
#include "complementary_filter_ros2_types.h"

extern "C"
{

#include "rtGetNaN.h"

}

#include <cfloat>

extern "C"
{

#include "rt_nonfinite.h"

}

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
struct B_complementary_filter_ros2_T {
  SL_Bus_sensor_msgs_Imu In1;          // '<S34>/In1'
  SL_Bus_sensor_msgs_Imu b_varargout_2;
  SL_Bus_sensor_msgs_MagneticField In1_i;// '<S35>/In1'
  SL_Bus_sensor_msgs_MagneticField b_varargout_2_m;
  real_T VectorConcatenate[9];         // '<S37>/Vector Concatenate'
  real_T Add1_a[3];                    // '<S7>/Add1'
  real_T x;       // '<S7>/BusConversion_InsertedFor_Bus Selector4_at_inport_0'
  real_T y;       // '<S7>/BusConversion_InsertedFor_Bus Selector4_at_inport_0'
  real_T z;       // '<S7>/BusConversion_InsertedFor_Bus Selector4_at_inport_0'
  real_T y_n;      // '<S7>/BusConversion_InsertedFor_Bus Selector_at_inport_0'
  real_T z_p;      // '<S7>/BusConversion_InsertedFor_Bus Selector_at_inport_0'
  real_T x_c;      // '<S7>/BusConversion_InsertedFor_Bus Selector_at_inport_0'
  real_T x_cd;    // '<S7>/BusConversion_InsertedFor_Bus Selector1_at_inport_0'
  real_T y_nb;    // '<S7>/BusConversion_InsertedFor_Bus Selector1_at_inport_0'
  real_T z_p1;    // '<S7>/BusConversion_InsertedFor_Bus Selector1_at_inport_0'
  real_T Probe[2];                     // '<S26>/Probe'
  real_T Gain;                         // '<Root>/Gain'
  real_T Constant;                     // '<Root>/Constant'
  real_T Add;                          // '<S4>/Add'
  real_T theta_am_x;                   // '<S7>/Atan2'
  real_T theta_am_y;                   // '<S7>/Atan1'
  real_T Atan3;                        // '<S7>/Atan3'
  uint8_T ServiceCaller_o2;            // '<S16>/ServiceCaller'
  boolean_T Pitchmotor;                // '<Root>/Pitch motor'
  boolean_T YawMotor;                  // '<Root>/Yaw Motor'
  boolean_T success;
};

// Block states (default storage) for system '<Root>'
struct DW_complementary_filter_ros2_T {
  ros_slros2_internal_block_Pub_T obj; // '<S21>/SinkBlock'
  ros_slros2_internal_block_Pub_T obj_b;// '<S12>/SinkBlock'
  ros_slros2_internal_block_Ser_T obj_h;// '<S23>/ServiceCaller'
  ros_slros2_internal_block_Ser_T obj_m;// '<S25>/ServiceCaller'
  ros_slros2_internal_block_Ser_T obj_a;// '<S14>/ServiceCaller'
  ros_slros2_internal_block_Ser_T obj_hk;// '<S16>/ServiceCaller'
  ros_slros2_internal_block_Sub_T obj_p;// '<S6>/SourceBlock'
  ros_slros2_internal_block_Sub_T obj_g;// '<S5>/SourceBlock'
  real_T DiscreteTimeIntegrator_DSTATE[3];// '<S7>/Discrete-Time Integrator'
  real_T Integrator_DSTATE;            // '<S32>/Integrator'
  real_T DiscreteTimeIntegrator_DSTATE_c;// '<S4>/Discrete-Time Integrator'
  real_T UD_DSTATE;                    // '<S33>/UD'
  real_T y2;                           // '<Root>/Chart1'
  struct {
    void *LoggedData[3];
  } Scope_PWORK;                       // '<Root>/Scope'

  struct {
    void *LoggedData;
  } Scope1_PWORK;                      // '<S7>/Scope1'

  struct {
    void *LoggedData;
  } Scope_PWORK_f;                     // '<S7>/Scope'

  struct {
    void *LoggedData;
  } Scope2_PWORK;                      // '<S7>/Scope2'

  uint32_T is_c1_complementary_filter_ros2;// '<Root>/Chart1'
  uint32_T is_c3_complementary_filter_ros2;// '<Root>/Chart'
  int8_T Integrator_PrevResetState;    // '<S32>/Integrator'
  int8_T EnabledSubsystem_SubsysRanBC; // '<S6>/Enabled Subsystem'
  int8_T EnabledSubsystem_SubsysRanBC_j;// '<S5>/Enabled Subsystem'
  int8_T PIDPItch_SubsysRanBC;         // '<Root>/PID PItch'
  int8_T killEsc2_SubsysRanBC;         // '<S2>/killEsc2'
  int8_T controlling2_SubsysRanBC;     // '<S2>/controlling2'
  int8_T sendArmSignal2_SubsysRanBC;   // '<S2>/sendArmSignal2'
  int8_T y1;                           // '<Root>/Chart'
  int8_T killEsc1_SubsysRanBC;         // '<S1>/killEsc1'
  int8_T controlling1_SubsysRanBC;     // '<S1>/controlling1'
  int8_T sendArmSignal1_SubsysRanBC;   // '<S1>/sendArmSignal1'
  uint8_T DiscreteTimeIntegrator_IC_LOADI;// '<S7>/Discrete-Time Integrator'
  uint8_T Integrator_IC_LOADING;       // '<S32>/Integrator'
  uint8_T is_active_c1_complementary_filt;// '<Root>/Chart1'
  uint8_T is_active_c3_complementary_filt;// '<Root>/Chart'
  boolean_T k2;                        // '<Root>/Chart1'
  boolean_T k1;                        // '<Root>/Chart'
};

// Parameters (default storage)
struct P_complementary_filter_ros2_T_ {
  real_T DiscreteDerivative_ICPrevScaled;
                              // Mask Parameter: DiscreteDerivative_ICPrevScaled
                                 //  Referenced by: '<S33>/UD'

  real_T LowPassFilterDiscreteorContinuo;
                              // Mask Parameter: LowPassFilterDiscreteorContinuo
                                 //  Referenced by: '<S3>/K'

  real_T LowPassFilterDiscreteorContin_m;
                              // Mask Parameter: LowPassFilterDiscreteorContin_m
                                 //  Referenced by: '<S26>/Time constant'

  real_T Subsystem_alpha;              // Mask Parameter: Subsystem_alpha
                                          //  Referenced by:
                                          //    '<S7>/alpha'
                                          //    '<S7>/alpha1'

  real_T CompareToConstant_const;     // Mask Parameter: CompareToConstant_const
                                         //  Referenced by: '<S29>/Constant'

  real_T LowPassFilterDiscreteorConti_my;
                              // Mask Parameter: LowPassFilterDiscreteorConti_my
                                 //  Referenced by: '<S26>/Constant'

  SL_Bus_sensor_msgs_Imu Out1_Y0;      // Computed Parameter: Out1_Y0
                                          //  Referenced by: '<S34>/Out1'

  SL_Bus_sensor_msgs_Imu Constant_Value;// Computed Parameter: Constant_Value
                                           //  Referenced by: '<S5>/Constant'

  SL_Bus_sensor_msgs_MagneticField Out1_Y0_d;// Computed Parameter: Out1_Y0_d
                                                //  Referenced by: '<S35>/Out1'

  SL_Bus_sensor_msgs_MagneticField Constant_Value_h;// Computed Parameter: Constant_Value_h
                                                       //  Referenced by: '<S6>/Constant'

  SL_Bus_aerobot_interfaces_EscSrvRequest Constant_Value_j;// Computed Parameter: Constant_Value_j
                                                              //  Referenced by: '<S15>/Constant'

  SL_Bus_aerobot_interfaces_EscSrvRequest Constant_Value_i;// Computed Parameter: Constant_Value_i
                                                              //  Referenced by: '<S13>/Constant'

  SL_Bus_aerobot_interfaces_EscSrvRequest Constant_Value_k;// Computed Parameter: Constant_Value_k
                                                              //  Referenced by: '<S24>/Constant'

  SL_Bus_aerobot_interfaces_EscSrvRequest Constant_Value_hu;// Computed Parameter: Constant_Value_hu
                                                               //  Referenced by: '<S22>/Constant'

  SL_Bus_aerobot_interfaces_EscSrvResponse Constant_Value_k1;// Computed Parameter: Constant_Value_k1
                                                                //  Referenced by: '<S16>/Constant'

  SL_Bus_aerobot_interfaces_EscSrvResponse Constant_Value_c;// Computed Parameter: Constant_Value_c
                                                               //  Referenced by: '<S14>/Constant'

  SL_Bus_aerobot_interfaces_EscSrvResponse Constant_Value_e;// Computed Parameter: Constant_Value_e
                                                               //  Referenced by: '<S25>/Constant'

  SL_Bus_aerobot_interfaces_EscSrvResponse Constant_Value_n;// Computed Parameter: Constant_Value_n
                                                               //  Referenced by: '<S23>/Constant'

  SL_Bus_std_msgs_Int64 Constant_Value_ct;// Computed Parameter: Constant_Value_ct
                                             //  Referenced by: '<S11>/Constant'

  SL_Bus_std_msgs_Int64 Constant_Value_il;// Computed Parameter: Constant_Value_il
                                             //  Referenced by: '<S20>/Constant'

  real_T Constant_Value_j4;            // Expression: 1500
                                          //  Referenced by: '<S8>/Constant'

  real_T control1_Value;               // Expression: 125
                                          //  Referenced by: '<S8>/control1'

  real_T Gain_Gain;                    // Expression: -5
                                          //  Referenced by: '<S8>/Gain'

  real_T yawperturb_Value;             // Expression: -0.2275736490885407
                                          //  Referenced by: '<S17>/yaw perturb'

  real_T Constant2_Value;              // Expression: 80
                                          //  Referenced by: '<S17>/Constant2'

  real_T Constant1_Value;              // Expression: 1500
                                          //  Referenced by: '<S17>/Constant1'

  real_T Out1_Y0_i;                    // Computed Parameter: Out1_Y0_i
                                          //  Referenced by: '<S4>/Out1'

  real_T Gain_Gain_d;                  // Expression: 2.5
                                          //  Referenced by: '<S4>/Gain'

  real_T DiscreteTimeIntegrator_gainval;
                           // Computed Parameter: DiscreteTimeIntegrator_gainval
                              //  Referenced by: '<S4>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator_IC;    // Expression: 0
                                          //  Referenced by: '<S4>/Discrete-Time Integrator'

  real_T TSamp_WtEt;                   // Computed Parameter: TSamp_WtEt
                                          //  Referenced by: '<S33>/TSamp'

  real_T Constant_Value_nn;            // Expression: 0
                                          //  Referenced by: '<S30>/Constant'

  real_T Gain2_Gain;                   // Expression: 1e-3
                                          //  Referenced by: '<S7>/Gain2'

  real_T Gain3_Gain;                   // Expression: 1e-3
                                          //  Referenced by: '<S7>/Gain3'

  real_T Gain4_Gain;                   // Expression: 1e-3
                                          //  Referenced by: '<S7>/Gain4'

  real_T Gain_Gain_o;                  // Expression: -1
                                          //  Referenced by: '<S7>/Gain'

  real_T Constant_Value_cv;            // Expression: 0
                                          //  Referenced by: '<S7>/Constant'

  real_T Gain1_Gain;                   // Expression: -1
                                          //  Referenced by: '<S7>/Gain1'

  real_T DiscreteTimeIntegrator_gainva_j;
                          // Computed Parameter: DiscreteTimeIntegrator_gainva_j
                             //  Referenced by: '<S7>/Discrete-Time Integrator'

  real_T Integrator_gainval;           // Computed Parameter: Integrator_gainval
                                          //  Referenced by: '<S32>/Integrator'

  real_T Integrator_UpperSat;          // Expression: antiwindupUpperLimit
                                          //  Referenced by: '<S32>/Integrator'

  real_T Integrator_LowerSat;          // Expression: antiwindupLowerLimit
                                          //  Referenced by: '<S32>/Integrator'

  real_T Saturation_UpperSat;          // Expression: windupUpperLimit
                                          //  Referenced by: '<S32>/Saturation'

  real_T Saturation_LowerSat;          // Expression: windupLowerLimit
                                          //  Referenced by: '<S32>/Saturation'

  real_T Gain_Gain_p;                  // Expression: -1
                                          //  Referenced by: '<Root>/Gain'

  real_T Constant_Value_ij;            // Expression: 0
                                          //  Referenced by: '<Root>/Constant'

  boolean_T Constant1_Value_e;         // Computed Parameter: Constant1_Value_e
                                          //  Referenced by: '<S10>/Constant1'

  boolean_T Constant1_Value_b;         // Computed Parameter: Constant1_Value_b
                                          //  Referenced by: '<S9>/Constant1'

  boolean_T Constant2_Value_i;         // Computed Parameter: Constant2_Value_i
                                          //  Referenced by: '<S19>/Constant2'

  boolean_T Constant1_Value_f;         // Computed Parameter: Constant1_Value_f
                                          //  Referenced by: '<S18>/Constant1'

  boolean_T Pitchmotor_Value;          // Computed Parameter: Pitchmotor_Value
                                          //  Referenced by: '<Root>/Pitch motor'

  boolean_T YawMotor_Value;            // Computed Parameter: YawMotor_Value
                                          //  Referenced by: '<Root>/Yaw Motor'

  int8_T Constant_Value_n5;            // Computed Parameter: Constant_Value_n5
                                          //  Referenced by: '<S10>/Constant'

  int8_T Constant_Value_l;             // Computed Parameter: Constant_Value_l
                                          //  Referenced by: '<S9>/Constant'

  int8_T Chart_y1;                     // Computed Parameter: Chart_y1
                                          //  Referenced by: '<Root>/Chart'

  int8_T Constant1_Value_n;            // Computed Parameter: Constant1_Value_n
                                          //  Referenced by: '<S19>/Constant1'

  int8_T Constant_Value_m;             // Computed Parameter: Constant_Value_m
                                          //  Referenced by: '<S18>/Constant'

};

// Real-time Model Data Structure
struct tag_RTM_complementary_filter__T {
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

  extern P_complementary_filter_ros2_T complementary_filter_ros2_P;

#ifdef __cplusplus

}

#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C"
{

#endif

  extern struct B_complementary_filter_ros2_T complementary_filter_ros2_B;

#ifdef __cplusplus

}

#endif

// Block states (default storage)
extern struct DW_complementary_filter_ros2_T complementary_filter_ros2_DW;

#ifdef __cplusplus

extern "C"
{

#endif

  // Model entry point functions
  extern void complementary_filter_ros2_initialize(void);
  extern void complementary_filter_ros2_step(void);
  extern void complementary_filter_ros2_terminate(void);

#ifdef __cplusplus

}

#endif

// Real-time Model object
#ifdef __cplusplus

extern "C"
{

#endif

  extern RT_MODEL_complementary_filter_T *const complementary_filter_ros2_M;

#ifdef __cplusplus

}

#endif

extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S33>/Data Type Duplicate' : Unused code path elimination
//  Block '<S37>/Reshape (9) to [3x3] column-major' : Reshape block reduction


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
//  '<Root>' : 'complementary_filter_ros2'
//  '<S1>'   : 'complementary_filter_ros2/Chart'
//  '<S2>'   : 'complementary_filter_ros2/Chart1'
//  '<S3>'   : 'complementary_filter_ros2/Low-Pass Filter (Discrete or Continuous)'
//  '<S4>'   : 'complementary_filter_ros2/PID PItch'
//  '<S5>'   : 'complementary_filter_ros2/Subscribe'
//  '<S6>'   : 'complementary_filter_ros2/Subscribe1'
//  '<S7>'   : 'complementary_filter_ros2/Subsystem'
//  '<S8>'   : 'complementary_filter_ros2/Chart/controlling1'
//  '<S9>'   : 'complementary_filter_ros2/Chart/killEsc1'
//  '<S10>'  : 'complementary_filter_ros2/Chart/sendArmSignal1'
//  '<S11>'  : 'complementary_filter_ros2/Chart/controlling1/Blank Message'
//  '<S12>'  : 'complementary_filter_ros2/Chart/controlling1/Publish'
//  '<S13>'  : 'complementary_filter_ros2/Chart/killEsc1/Blank Message'
//  '<S14>'  : 'complementary_filter_ros2/Chart/killEsc1/Call Service'
//  '<S15>'  : 'complementary_filter_ros2/Chart/sendArmSignal1/Blank Message'
//  '<S16>'  : 'complementary_filter_ros2/Chart/sendArmSignal1/Call Service'
//  '<S17>'  : 'complementary_filter_ros2/Chart1/controlling2'
//  '<S18>'  : 'complementary_filter_ros2/Chart1/killEsc2'
//  '<S19>'  : 'complementary_filter_ros2/Chart1/sendArmSignal2'
//  '<S20>'  : 'complementary_filter_ros2/Chart1/controlling2/Blank Message'
//  '<S21>'  : 'complementary_filter_ros2/Chart1/controlling2/Publish'
//  '<S22>'  : 'complementary_filter_ros2/Chart1/killEsc2/Blank Message'
//  '<S23>'  : 'complementary_filter_ros2/Chart1/killEsc2/Call Service'
//  '<S24>'  : 'complementary_filter_ros2/Chart1/sendArmSignal2/Blank Message1'
//  '<S25>'  : 'complementary_filter_ros2/Chart1/sendArmSignal2/Call Service1'
//  '<S26>'  : 'complementary_filter_ros2/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant'
//  '<S27>'  : 'complementary_filter_ros2/Low-Pass Filter (Discrete or Continuous)/Initialization'
//  '<S28>'  : 'complementary_filter_ros2/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)'
//  '<S29>'  : 'complementary_filter_ros2/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Compare To Constant'
//  '<S30>'  : 'complementary_filter_ros2/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Compare To Zero'
//  '<S31>'  : 'complementary_filter_ros2/Low-Pass Filter (Discrete or Continuous)/Initialization/Init_u'
//  '<S32>'  : 'complementary_filter_ros2/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete'
//  '<S33>'  : 'complementary_filter_ros2/PID PItch/Discrete Derivative'
//  '<S34>'  : 'complementary_filter_ros2/Subscribe/Enabled Subsystem'
//  '<S35>'  : 'complementary_filter_ros2/Subscribe1/Enabled Subsystem'
//  '<S36>'  : 'complementary_filter_ros2/Subsystem/Rotation Angles to Direction Cosine Matrix'
//  '<S37>'  : 'complementary_filter_ros2/Subsystem/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix'

#endif                               // RTW_HEADER_complementary_filter_ros2_h_

//
// File trailer for generated code.
//
// [EOF]
//
