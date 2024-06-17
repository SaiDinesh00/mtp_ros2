//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: complementary_filter_ros2.cpp
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
#include "complementary_filter_ros2.h"
#include "complementary_filter_ros2_types.h"
#include "rtwtypes.h"
#include "complementary_filter_ros2_private.h"
#include <cmath>
#include "rmw/qos_profiles.h"
#include <stddef.h>

extern "C"
{

#include "rt_nonfinite.h"

}

#include "rt_defines.h"
#include "complementary_filter_ros2_dt.h"

// Named constants for Chart: '<Root>/Chart'
const uint32_T complementary_filter_IN_Command{ 2U };

const uint32_T complementary_filter_ro_IN_Init{ 3U };

const uint32_T complementary_filter_ro_IN_Kill{ 4U };

const uint32_T complementary_filter_ros_IN_ARM{ 1U };

// Named constants for Chart: '<Root>/Chart1'
const uint32_T complementary_filte_IN_Command1{ 2U };

const uint32_T complementary_filter_r_IN_Init1{ 3U };

const uint32_T complementary_filter_r_IN_Kill1{ 4U };

const uint32_T complementary_filter_ro_IN_ARM1{ 1U };

// Block signals (default storage)
B_complementary_filter_ros2_T complementary_filter_ros2_B;

// Block states (default storage)
DW_complementary_filter_ros2_T complementary_filter_ros2_DW;

// Real-time model
RT_MODEL_complementary_filter_T complementary_filter_ros2_M_{ };

RT_MODEL_complementary_filter_T *const complementary_filter_ros2_M{ &
  complementary_filter_ros2_M_ };

// Forward declaration for local functions
static void complementary__SystemCore_setup(ros_slros2_internal_block_Ser_T *obj);
static void complementar_SystemCore_setup_g(ros_slros2_internal_block_Pub_T *obj);
static void complementa_SystemCore_setup_g0(ros_slros2_internal_block_Ser_T *obj);
static void complement_SystemCore_setup_g0f(ros_slros2_internal_block_Ser_T *obj);
static void complemen_SystemCore_setup_g0fn(ros_slros2_internal_block_Pub_T *obj);
static void compleme_SystemCore_setup_g0fnv(ros_slros2_internal_block_Ser_T *obj);
static void comple_SystemCore_setup_g0fnvwn(ros_slros2_internal_block_Sub_T *obj);
static void complem_SystemCore_setup_g0fnvw(ros_slros2_internal_block_Sub_T *obj);
real_T rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  if (std::isnan(u0) || std::isnan(u1)) {
    y = (rtNaN);
  } else if (std::isinf(u0) && std::isinf(u1)) {
    int32_T tmp;
    int32_T tmp_0;
    if (u0 > 0.0) {
      tmp = 1;
    } else {
      tmp = -1;
    }

    if (u1 > 0.0) {
      tmp_0 = 1;
    } else {
      tmp_0 = -1;
    }

    y = std::atan2(static_cast<real_T>(tmp), static_cast<real_T>(tmp_0));
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = std::atan2(u0, u1);
  }

  return y;
}

static void complementary__SystemCore_setup(ros_slros2_internal_block_Ser_T *obj)
{
  static const char_T b_zeroDelimTopic_0[11]{ "/arm_pitch" };

  rmw_qos_profile_t qos_profile;
  char_T b_zeroDelimTopic[11];

  // Start for MATLABSystem: '<S16>/ServiceCaller'
  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;

  // Start for MATLABSystem: '<S16>/ServiceCaller'
  SET_QOS_VALUES(qos_profile, RMW_QOS_POLICY_HISTORY_KEEP_LAST, (size_t)1.0,
                 RMW_QOS_POLICY_DURABILITY_VOLATILE,
                 RMW_QOS_POLICY_RELIABILITY_RELIABLE);
  for (int32_T i{0}; i < 11; i++) {
    // Start for MATLABSystem: '<S16>/ServiceCaller'
    b_zeroDelimTopic[i] = b_zeroDelimTopic_0[i];
  }

  ServCall_complementary_filter_ros2_134__324.createServiceCaller
    (&b_zeroDelimTopic[0], qos_profile);
  obj->isSetupComplete = true;
}

static void complementar_SystemCore_setup_g(ros_slros2_internal_block_Pub_T *obj)
{
  static const char_T b_zeroDelimTopic_0[14]{ "/esc_command1" };

  rmw_qos_profile_t qos_profile;
  char_T b_zeroDelimTopic[14];

  // Start for MATLABSystem: '<S12>/SinkBlock'
  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;

  // Start for MATLABSystem: '<S12>/SinkBlock'
  SET_QOS_VALUES(qos_profile, RMW_QOS_POLICY_HISTORY_KEEP_LAST, (size_t)10.0,
                 RMW_QOS_POLICY_DURABILITY_VOLATILE,
                 RMW_QOS_POLICY_RELIABILITY_RELIABLE);
  for (int32_T i{0}; i < 14; i++) {
    // Start for MATLABSystem: '<S12>/SinkBlock'
    b_zeroDelimTopic[i] = b_zeroDelimTopic_0[i];
  }

  Pub_complementary_filter_ros2_134__183.createPublisher(&b_zeroDelimTopic[0],
    qos_profile);
  obj->isSetupComplete = true;
}

static void complementa_SystemCore_setup_g0(ros_slros2_internal_block_Ser_T *obj)
{
  static const char_T b_zeroDelimTopic_0[11]{ "/arm_pitch" };

  rmw_qos_profile_t qos_profile;
  char_T b_zeroDelimTopic[11];

  // Start for MATLABSystem: '<S14>/ServiceCaller'
  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;

  // Start for MATLABSystem: '<S14>/ServiceCaller'
  SET_QOS_VALUES(qos_profile, RMW_QOS_POLICY_HISTORY_KEEP_LAST, (size_t)1.0,
                 RMW_QOS_POLICY_DURABILITY_VOLATILE,
                 RMW_QOS_POLICY_RELIABILITY_RELIABLE);
  for (int32_T i{0}; i < 11; i++) {
    // Start for MATLABSystem: '<S14>/ServiceCaller'
    b_zeroDelimTopic[i] = b_zeroDelimTopic_0[i];
  }

  ServCall_complementary_filter_ros2_134__215.createServiceCaller
    (&b_zeroDelimTopic[0], qos_profile);
  obj->isSetupComplete = true;
}

static void complement_SystemCore_setup_g0f(ros_slros2_internal_block_Ser_T *obj)
{
  static const char_T b_zeroDelimTopic_0[9]{ "/arm_yaw" };

  rmw_qos_profile_t qos_profile;
  char_T b_zeroDelimTopic[9];

  // Start for MATLABSystem: '<S25>/ServiceCaller'
  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;

  // Start for MATLABSystem: '<S25>/ServiceCaller'
  SET_QOS_VALUES(qos_profile, RMW_QOS_POLICY_HISTORY_KEEP_LAST, (size_t)1.0,
                 RMW_QOS_POLICY_DURABILITY_VOLATILE,
                 RMW_QOS_POLICY_RELIABILITY_RELIABLE);
  for (int32_T i{0}; i < 9; i++) {
    // Start for MATLABSystem: '<S25>/ServiceCaller'
    b_zeroDelimTopic[i] = b_zeroDelimTopic_0[i];
  }

  ServCall_complementary_filter_ros2_135__135.createServiceCaller
    (&b_zeroDelimTopic[0], qos_profile);
  obj->isSetupComplete = true;
}

static void complemen_SystemCore_setup_g0fn(ros_slros2_internal_block_Pub_T *obj)
{
  static const char_T b_zeroDelimTopic_0[14]{ "/esc_command2" };

  rmw_qos_profile_t qos_profile;
  char_T b_zeroDelimTopic[14];

  // Start for MATLABSystem: '<S21>/SinkBlock'
  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;

  // Start for MATLABSystem: '<S21>/SinkBlock'
  SET_QOS_VALUES(qos_profile, RMW_QOS_POLICY_HISTORY_KEEP_LAST, (size_t)10.0,
                 RMW_QOS_POLICY_DURABILITY_VOLATILE,
                 RMW_QOS_POLICY_RELIABILITY_RELIABLE);
  for (int32_T i{0}; i < 14; i++) {
    // Start for MATLABSystem: '<S21>/SinkBlock'
    b_zeroDelimTopic[i] = b_zeroDelimTopic_0[i];
  }

  Pub_complementary_filter_ros2_135__185.createPublisher(&b_zeroDelimTopic[0],
    qos_profile);
  obj->isSetupComplete = true;
}

static void compleme_SystemCore_setup_g0fnv(ros_slros2_internal_block_Ser_T *obj)
{
  static const char_T b_zeroDelimTopic_0[9]{ "/arm_yaw" };

  rmw_qos_profile_t qos_profile;
  char_T b_zeroDelimTopic[9];

  // Start for MATLABSystem: '<S23>/ServiceCaller'
  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;

  // Start for MATLABSystem: '<S23>/ServiceCaller'
  SET_QOS_VALUES(qos_profile, RMW_QOS_POLICY_HISTORY_KEEP_LAST, (size_t)1.0,
                 RMW_QOS_POLICY_DURABILITY_VOLATILE,
                 RMW_QOS_POLICY_RELIABILITY_RELIABLE);
  for (int32_T i{0}; i < 9; i++) {
    // Start for MATLABSystem: '<S23>/ServiceCaller'
    b_zeroDelimTopic[i] = b_zeroDelimTopic_0[i];
  }

  ServCall_complementary_filter_ros2_135__126.createServiceCaller
    (&b_zeroDelimTopic[0], qos_profile);
  obj->isSetupComplete = true;
}

static void comple_SystemCore_setup_g0fnvwn(ros_slros2_internal_block_Sub_T *obj)
{
  static const char_T b_zeroDelimTopic_0[10]{ "/mag/data" };

  rmw_qos_profile_t qos_profile;
  char_T b_zeroDelimTopic[10];

  // Start for MATLABSystem: '<S6>/SourceBlock'
  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;

  // Start for MATLABSystem: '<S6>/SourceBlock'
  SET_QOS_VALUES(qos_profile, RMW_QOS_POLICY_HISTORY_KEEP_LAST, (size_t)10.0,
                 RMW_QOS_POLICY_DURABILITY_VOLATILE,
                 RMW_QOS_POLICY_RELIABILITY_RELIABLE);
  for (int32_T i{0}; i < 10; i++) {
    // Start for MATLABSystem: '<S6>/SourceBlock'
    b_zeroDelimTopic[i] = b_zeroDelimTopic_0[i];
  }

  Sub_complementary_filter_ros2_16.createSubscriber(&b_zeroDelimTopic[0],
    qos_profile);
  obj->isSetupComplete = true;
}

static void complem_SystemCore_setup_g0fnvw(ros_slros2_internal_block_Sub_T *obj)
{
  static const char_T b_zeroDelimTopic_0[10]{ "/imu/data" };

  rmw_qos_profile_t qos_profile;
  char_T b_zeroDelimTopic[10];

  // Start for MATLABSystem: '<S5>/SourceBlock'
  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;

  // Start for MATLABSystem: '<S5>/SourceBlock'
  SET_QOS_VALUES(qos_profile, RMW_QOS_POLICY_HISTORY_KEEP_LAST, (size_t)10.0,
                 RMW_QOS_POLICY_DURABILITY_VOLATILE,
                 RMW_QOS_POLICY_RELIABILITY_RELIABLE);
  for (int32_T i{0}; i < 10; i++) {
    // Start for MATLABSystem: '<S5>/SourceBlock'
    b_zeroDelimTopic[i] = b_zeroDelimTopic_0[i];
  }

  Sub_complementary_filter_ros2_2.createSubscriber(&b_zeroDelimTopic[0],
    qos_profile);
  obj->isSetupComplete = true;
}

// Model step function
void complementary_filter_ros2_step(void)
{
  SL_Bus_aerobot_interfaces_EscSrvRequest rtb_BusAssignment1;
  SL_Bus_aerobot_interfaces_EscSrvRequest rtb_BusAssignment_fq;
  SL_Bus_aerobot_interfaces_EscSrvResponse b_varargout_1;
  SL_Bus_std_msgs_Int64 rtb_BusAssignment;
  SL_Bus_std_msgs_Int64 rtb_BusAssignment_l;
  real_T rtb_Sum;
  real_T rtb_TSamp;
  real_T rtb_sincos_o1_idx_1;
  int32_T i;
  boolean_T rtb_LogicalOperator;
  boolean_T serverAvailableOnTime;

  // Reset subsysRan breadcrumbs
  srClearBC(complementary_filter_ros2_DW.sendArmSignal1_SubsysRanBC);

  // Reset subsysRan breadcrumbs
  srClearBC(complementary_filter_ros2_DW.controlling1_SubsysRanBC);

  // Reset subsysRan breadcrumbs
  srClearBC(complementary_filter_ros2_DW.killEsc1_SubsysRanBC);

  // Reset subsysRan breadcrumbs
  srClearBC(complementary_filter_ros2_DW.sendArmSignal2_SubsysRanBC);

  // Reset subsysRan breadcrumbs
  srClearBC(complementary_filter_ros2_DW.controlling2_SubsysRanBC);

  // Reset subsysRan breadcrumbs
  srClearBC(complementary_filter_ros2_DW.killEsc2_SubsysRanBC);

  // Reset subsysRan breadcrumbs
  srClearBC(complementary_filter_ros2_DW.PIDPItch_SubsysRanBC);

  // Reset subsysRan breadcrumbs
  srClearBC(complementary_filter_ros2_DW.EnabledSubsystem_SubsysRanBC_j);

  // Reset subsysRan breadcrumbs
  srClearBC(complementary_filter_ros2_DW.EnabledSubsystem_SubsysRanBC);

  // MATLABSystem: '<S6>/SourceBlock'
  rtb_LogicalOperator = Sub_complementary_filter_ros2_16.getLatestMessage
    (&complementary_filter_ros2_B.b_varargout_2_m);

  // Outputs for Enabled SubSystem: '<S6>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S35>/Enable'

  // Start for MATLABSystem: '<S6>/SourceBlock'
  if (rtb_LogicalOperator) {
    // SignalConversion generated from: '<S35>/In1'
    complementary_filter_ros2_B.In1_i =
      complementary_filter_ros2_B.b_varargout_2_m;
    srUpdateBC(complementary_filter_ros2_DW.EnabledSubsystem_SubsysRanBC);
  }

  // End of Start for MATLABSystem: '<S6>/SourceBlock'
  // End of Outputs for SubSystem: '<S6>/Enabled Subsystem'

  // SignalConversion generated from: '<S7>/Bus Selector4'
  complementary_filter_ros2_B.x =
    complementary_filter_ros2_B.In1_i.magnetic_field.x;

  // SignalConversion generated from: '<S7>/Bus Selector4'
  complementary_filter_ros2_B.y =
    complementary_filter_ros2_B.In1_i.magnetic_field.y;

  // SignalConversion generated from: '<S7>/Bus Selector4'
  complementary_filter_ros2_B.z =
    complementary_filter_ros2_B.In1_i.magnetic_field.z;

  // MATLABSystem: '<S5>/SourceBlock'
  rtb_LogicalOperator = Sub_complementary_filter_ros2_2.getLatestMessage
    (&complementary_filter_ros2_B.b_varargout_2);

  // Outputs for Enabled SubSystem: '<S5>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S34>/Enable'

  // Start for MATLABSystem: '<S5>/SourceBlock'
  if (rtb_LogicalOperator) {
    // SignalConversion generated from: '<S34>/In1'
    complementary_filter_ros2_B.In1 = complementary_filter_ros2_B.b_varargout_2;
    srUpdateBC(complementary_filter_ros2_DW.EnabledSubsystem_SubsysRanBC_j);
  }

  // End of Start for MATLABSystem: '<S5>/SourceBlock'
  // End of Outputs for SubSystem: '<S5>/Enabled Subsystem'

  // SignalConversion generated from: '<S7>/Bus Selector'
  complementary_filter_ros2_B.y_n =
    complementary_filter_ros2_B.In1.linear_acceleration.y;

  // SignalConversion generated from: '<S7>/Bus Selector'
  complementary_filter_ros2_B.z_p =
    complementary_filter_ros2_B.In1.linear_acceleration.z;

  // Trigonometry: '<S7>/Atan2'
  complementary_filter_ros2_B.theta_am_x = rt_atan2d_snf
    (complementary_filter_ros2_B.y_n, complementary_filter_ros2_B.z_p);

  // SignalConversion generated from: '<S7>/Bus Selector'
  complementary_filter_ros2_B.x_c =
    complementary_filter_ros2_B.In1.linear_acceleration.x;

  // Trigonometry: '<S7>/Atan1' incorporates:
  //   Gain: '<S7>/Gain'
  //   Math: '<S7>/Square'
  //   Math: '<S7>/Square1'
  //   Sqrt: '<S7>/Sqrt'
  //   Sum: '<S7>/Add'

  complementary_filter_ros2_B.theta_am_y = rt_atan2d_snf
    (complementary_filter_ros2_P.Gain_Gain_o * complementary_filter_ros2_B.x_c,
     std::sqrt(complementary_filter_ros2_B.y_n * complementary_filter_ros2_B.y_n
               + complementary_filter_ros2_B.z_p *
               complementary_filter_ros2_B.z_p));

  // Trigonometry: '<S36>/sincos' incorporates:
  //   Constant: '<S7>/Constant'
  //   SignalConversion generated from: '<S36>/sincos'

  complementary_filter_ros2_B.Add1_a[0] = std::cos
    (complementary_filter_ros2_B.theta_am_x);
  rtb_sincos_o1_idx_1 = std::sin(complementary_filter_ros2_B.theta_am_x);
  complementary_filter_ros2_B.Add1_a[1] = std::cos
    (complementary_filter_ros2_B.theta_am_y);
  complementary_filter_ros2_B.Atan3 = std::sin
    (complementary_filter_ros2_B.theta_am_y);
  complementary_filter_ros2_B.Add1_a[2] = std::cos
    (complementary_filter_ros2_P.Constant_Value_cv);
  rtb_Sum = std::sin(complementary_filter_ros2_P.Constant_Value_cv);

  // Fcn: '<S36>/Fcn11' incorporates:
  //   Fcn: '<S36>/Fcn21'
  //   Trigonometry: '<S36>/sincos'

  rtb_TSamp = rtb_sincos_o1_idx_1 * complementary_filter_ros2_B.Atan3;
  complementary_filter_ros2_B.VectorConcatenate[0] = rtb_TSamp * rtb_Sum +
    complementary_filter_ros2_B.Add1_a[0] * complementary_filter_ros2_B.Add1_a[2];

  // Fcn: '<S36>/Fcn21' incorporates:
  //   Trigonometry: '<S36>/sincos'

  complementary_filter_ros2_B.VectorConcatenate[1] = rtb_TSamp *
    complementary_filter_ros2_B.Add1_a[2] + -complementary_filter_ros2_B.Add1_a
    [0] * rtb_Sum;

  // Fcn: '<S36>/Fcn31' incorporates:
  //   Trigonometry: '<S36>/sincos'

  complementary_filter_ros2_B.VectorConcatenate[2] = rtb_sincos_o1_idx_1 *
    complementary_filter_ros2_B.Add1_a[1];

  // Fcn: '<S36>/Fcn12' incorporates:
  //   Trigonometry: '<S36>/sincos'

  complementary_filter_ros2_B.VectorConcatenate[3] =
    complementary_filter_ros2_B.Add1_a[1] * rtb_Sum;

  // Fcn: '<S36>/Fcn22'
  complementary_filter_ros2_B.VectorConcatenate[4] =
    complementary_filter_ros2_B.Add1_a[1] * complementary_filter_ros2_B.Add1_a[2];

  // Fcn: '<S36>/Fcn32' incorporates:
  //   Trigonometry: '<S36>/sincos'

  complementary_filter_ros2_B.VectorConcatenate[5] =
    -complementary_filter_ros2_B.Atan3;

  // Fcn: '<S36>/Fcn13' incorporates:
  //   Fcn: '<S36>/Fcn23'
  //   Trigonometry: '<S36>/sincos'

  rtb_TSamp = complementary_filter_ros2_B.Add1_a[0] *
    complementary_filter_ros2_B.Atan3;
  complementary_filter_ros2_B.VectorConcatenate[6] = rtb_TSamp * rtb_Sum +
    -rtb_sincos_o1_idx_1 * complementary_filter_ros2_B.Add1_a[2];

  // Fcn: '<S36>/Fcn23' incorporates:
  //   Trigonometry: '<S36>/sincos'

  complementary_filter_ros2_B.VectorConcatenate[7] = rtb_TSamp *
    complementary_filter_ros2_B.Add1_a[2] + rtb_sincos_o1_idx_1 * rtb_Sum;

  // Fcn: '<S36>/Fcn33'
  complementary_filter_ros2_B.VectorConcatenate[8] =
    complementary_filter_ros2_B.Add1_a[0] * complementary_filter_ros2_B.Add1_a[1];

  // SignalConversion generated from: '<S7>/Product' incorporates:
  //   Gain: '<S7>/Gain2'
  //   Gain: '<S7>/Gain3'
  //   Gain: '<S7>/Gain4'

  rtb_sincos_o1_idx_1 = complementary_filter_ros2_P.Gain2_Gain *
    complementary_filter_ros2_B.x;
  complementary_filter_ros2_B.Atan3 = complementary_filter_ros2_P.Gain3_Gain *
    complementary_filter_ros2_B.y;
  rtb_Sum = complementary_filter_ros2_P.Gain4_Gain *
    complementary_filter_ros2_B.z;

  // Product: '<S7>/Product' incorporates:
  //   Concatenate: '<S37>/Vector Concatenate'

  for (i = 0; i < 3; i++) {
    complementary_filter_ros2_B.Add1_a[i] =
      (complementary_filter_ros2_B.VectorConcatenate[i + 3] *
       complementary_filter_ros2_B.Atan3 +
       complementary_filter_ros2_B.VectorConcatenate[i] * rtb_sincos_o1_idx_1) +
      complementary_filter_ros2_B.VectorConcatenate[i + 6] * rtb_Sum;
  }

  // End of Product: '<S7>/Product'

  // SignalConversion generated from: '<S7>/Bus Selector1'
  complementary_filter_ros2_B.x_cd =
    complementary_filter_ros2_B.In1.angular_velocity.x;

  // SignalConversion generated from: '<S7>/Bus Selector1'
  complementary_filter_ros2_B.y_nb =
    complementary_filter_ros2_B.In1.angular_velocity.y;

  // SignalConversion generated from: '<S7>/Bus Selector1'
  complementary_filter_ros2_B.z_p1 =
    complementary_filter_ros2_B.In1.angular_velocity.z;

  // DiscreteIntegrator: '<S7>/Discrete-Time Integrator' incorporates:
  //   Gain: '<S7>/Gain1'
  //   Trigonometry: '<S7>/Atan3'

  if (complementary_filter_ros2_DW.DiscreteTimeIntegrator_IC_LOADI != 0) {
    complementary_filter_ros2_DW.DiscreteTimeIntegrator_DSTATE[0] =
      complementary_filter_ros2_B.theta_am_x;
    complementary_filter_ros2_DW.DiscreteTimeIntegrator_DSTATE[1] =
      complementary_filter_ros2_B.theta_am_y;
    complementary_filter_ros2_DW.DiscreteTimeIntegrator_DSTATE[2] =
      rt_atan2d_snf(complementary_filter_ros2_P.Gain1_Gain *
                    complementary_filter_ros2_B.Add1_a[1],
                    complementary_filter_ros2_B.Add1_a[0]);
  }

  // DiscreteIntegrator: '<S7>/Discrete-Time Integrator'
  rtb_sincos_o1_idx_1 =
    complementary_filter_ros2_P.DiscreteTimeIntegrator_gainva_j *
    complementary_filter_ros2_B.y_nb +
    complementary_filter_ros2_DW.DiscreteTimeIntegrator_DSTATE[1];

  // Logic: '<S26>/Logical Operator' incorporates:
  //   Constant: '<S26>/Constant'
  //   Constant: '<S26>/Time constant'
  //   Constant: '<S29>/Constant'
  //   Constant: '<S30>/Constant'
  //   RelationalOperator: '<S29>/Compare'
  //   RelationalOperator: '<S30>/Compare'
  //   Sum: '<S26>/Sum1'

  rtb_LogicalOperator =
    ((complementary_filter_ros2_P.LowPassFilterDiscreteorContin_m -
      complementary_filter_ros2_B.Probe[0] <=
      complementary_filter_ros2_P.Constant_Value_nn) &&
     (complementary_filter_ros2_P.LowPassFilterDiscreteorConti_my <
      complementary_filter_ros2_P.CompareToConstant_const));

  // Gain: '<S3>/K' incorporates:
  //   Gain: '<S7>/alpha'
  //   Gain: '<S7>/alpha1'
  //   Sum: '<S7>/Add1'

  complementary_filter_ros2_B.theta_am_x = ((1.0 -
    complementary_filter_ros2_P.Subsystem_alpha) *
    complementary_filter_ros2_B.theta_am_y +
    complementary_filter_ros2_P.Subsystem_alpha * rtb_sincos_o1_idx_1) *
    complementary_filter_ros2_P.LowPassFilterDiscreteorContinuo;

  // DiscreteIntegrator: '<S32>/Integrator'
  if (complementary_filter_ros2_DW.Integrator_IC_LOADING != 0) {
    complementary_filter_ros2_DW.Integrator_DSTATE =
      complementary_filter_ros2_B.theta_am_x;
    if (complementary_filter_ros2_DW.Integrator_DSTATE >
        complementary_filter_ros2_P.Integrator_UpperSat) {
      complementary_filter_ros2_DW.Integrator_DSTATE =
        complementary_filter_ros2_P.Integrator_UpperSat;
    } else if (complementary_filter_ros2_DW.Integrator_DSTATE <
               complementary_filter_ros2_P.Integrator_LowerSat) {
      complementary_filter_ros2_DW.Integrator_DSTATE =
        complementary_filter_ros2_P.Integrator_LowerSat;
    }
  }

  if (rtb_LogicalOperator ||
      (complementary_filter_ros2_DW.Integrator_PrevResetState != 0)) {
    complementary_filter_ros2_DW.Integrator_DSTATE =
      complementary_filter_ros2_B.theta_am_x;
    if (complementary_filter_ros2_DW.Integrator_DSTATE >
        complementary_filter_ros2_P.Integrator_UpperSat) {
      complementary_filter_ros2_DW.Integrator_DSTATE =
        complementary_filter_ros2_P.Integrator_UpperSat;
    } else if (complementary_filter_ros2_DW.Integrator_DSTATE <
               complementary_filter_ros2_P.Integrator_LowerSat) {
      complementary_filter_ros2_DW.Integrator_DSTATE =
        complementary_filter_ros2_P.Integrator_LowerSat;
    }
  }

  // Saturate: '<S32>/Saturation' incorporates:
  //   DiscreteIntegrator: '<S32>/Integrator'

  if (complementary_filter_ros2_DW.Integrator_DSTATE >
      complementary_filter_ros2_P.Saturation_UpperSat) {
    complementary_filter_ros2_B.theta_am_y =
      complementary_filter_ros2_P.Saturation_UpperSat;
  } else if (complementary_filter_ros2_DW.Integrator_DSTATE <
             complementary_filter_ros2_P.Saturation_LowerSat) {
    complementary_filter_ros2_B.theta_am_y =
      complementary_filter_ros2_P.Saturation_LowerSat;
  } else {
    complementary_filter_ros2_B.theta_am_y =
      complementary_filter_ros2_DW.Integrator_DSTATE;
  }

  // End of Saturate: '<S32>/Saturation'

  // MinMax: '<S26>/Max' incorporates:
  //   Constant: '<S26>/Time constant'

  complementary_filter_ros2_B.Atan3 = std::fmax
    (complementary_filter_ros2_B.Probe[0],
     complementary_filter_ros2_P.LowPassFilterDiscreteorContin_m);

  // Gain: '<Root>/Gain'
  complementary_filter_ros2_B.Gain = complementary_filter_ros2_P.Gain_Gain_p *
    complementary_filter_ros2_B.theta_am_y;

  // Constant: '<Root>/Pitch motor'
  complementary_filter_ros2_B.Pitchmotor =
    complementary_filter_ros2_P.Pitchmotor_Value;

  // Constant: '<Root>/Constant'
  complementary_filter_ros2_B.Constant =
    complementary_filter_ros2_P.Constant_Value_ij;

  // Outputs for Enabled SubSystem: '<Root>/PID PItch' incorporates:
  //   EnablePort: '<S4>/Enable'

  if (complementary_filter_ros2_B.Pitchmotor) {
    // Sum: '<S4>/Sum'
    rtb_Sum = complementary_filter_ros2_B.Constant -
      complementary_filter_ros2_B.Gain;

    // SampleTimeMath: '<S33>/TSamp'
    //
    //  About '<S33>/TSamp':
    //   y = u * K where K = 1 / ( w * Ts )

    rtb_TSamp = rtb_Sum * complementary_filter_ros2_P.TSamp_WtEt;

    // Sum: '<S4>/Add' incorporates:
    //   DiscreteIntegrator: '<S4>/Discrete-Time Integrator'
    //   Gain: '<S4>/Gain'
    //   Sum: '<S33>/Diff'
    //   UnitDelay: '<S33>/UD'
    //
    //  Block description for '<S33>/Diff':
    //
    //   Add in CPU
    //
    //  Block description for '<S33>/UD':
    //
    //   Store in Global RAM

    complementary_filter_ros2_B.Add = (complementary_filter_ros2_P.Gain_Gain_d *
      rtb_Sum + complementary_filter_ros2_DW.DiscreteTimeIntegrator_DSTATE_c) +
      (rtb_TSamp - complementary_filter_ros2_DW.UD_DSTATE);

    // Update for DiscreteIntegrator: '<S4>/Discrete-Time Integrator'
    complementary_filter_ros2_DW.DiscreteTimeIntegrator_DSTATE_c +=
      complementary_filter_ros2_P.DiscreteTimeIntegrator_gainval * rtb_Sum;

    // Update for UnitDelay: '<S33>/UD'
    //
    //  Block description for '<S33>/UD':
    //
    //   Store in Global RAM

    complementary_filter_ros2_DW.UD_DSTATE = rtb_TSamp;
    srUpdateBC(complementary_filter_ros2_DW.PIDPItch_SubsysRanBC);
  }

  // End of Outputs for SubSystem: '<Root>/PID PItch'

  // Chart: '<Root>/Chart'
  if (complementary_filter_ros2_DW.is_active_c3_complementary_filt == 0U) {
    complementary_filter_ros2_DW.is_active_c3_complementary_filt = 1U;
    complementary_filter_ros2_DW.is_c3_complementary_filter_ros2 =
      complementary_filter_ro_IN_Init;
    complementary_filter_ros2_DW.k1 = complementary_filter_ros2_B.Pitchmotor;
  } else {
    switch (complementary_filter_ros2_DW.is_c3_complementary_filter_ros2) {
     case complementary_filter_ros_IN_ARM:
      if (complementary_filter_ros2_DW.y1 == 1) {
        complementary_filter_ros2_DW.is_c3_complementary_filter_ros2 =
          complementary_filter_IN_Command;
      } else {
        // Outputs for Function Call SubSystem: '<S1>/sendArmSignal1'
        // BusAssignment: '<S10>/Bus Assignment' incorporates:
        //   Constant: '<S10>/Constant'
        //   Constant: '<S10>/Constant1'

        rtb_BusAssignment_fq.pin_number =
          complementary_filter_ros2_P.Constant_Value_n5;
        rtb_BusAssignment_fq.state =
          complementary_filter_ros2_P.Constant1_Value_e;

        // Outputs for Atomic SubSystem: '<S10>/Call Service'
        // MATLABSystem: '<S16>/ServiceCaller'
        serverAvailableOnTime =
          ServCall_complementary_filter_ros2_134__324.waitForServer(5.0);
        if (!serverAvailableOnTime) {
          // MATLABSystem: '<S16>/ServiceCaller'
          complementary_filter_ros2_B.ServiceCaller_o2 = static_cast<uint8_T>
            (SLConnectionTimeout);
        } else {
          // MATLABSystem: '<S16>/ServiceCaller'
          complementary_filter_ros2_B.ServiceCaller_o2 =
            ServCall_complementary_filter_ros2_134__324.call
            (&rtb_BusAssignment_fq, &b_varargout_1);
        }

        // SignalConversion generated from: '<S10>/Bus Selector' incorporates:
        //   MATLABSystem: '<S16>/ServiceCaller'
        //
        complementary_filter_ros2_B.success = b_varargout_1.success;

        // End of Outputs for SubSystem: '<S10>/Call Service'
        complementary_filter_ros2_DW.sendArmSignal1_SubsysRanBC = 4;

        // End of Outputs for SubSystem: '<S1>/sendArmSignal1'
        complementary_filter_ros2_DW.y1 = 1;
      }
      break;

     case complementary_filter_IN_Command:
      if (!complementary_filter_ros2_B.Pitchmotor) {
        complementary_filter_ros2_DW.is_c3_complementary_filter_ros2 =
          complementary_filter_ro_IN_Kill;

        // Outputs for Function Call SubSystem: '<S1>/killEsc1'
        // BusAssignment: '<S9>/Bus Assignment' incorporates:
        //   Constant: '<S9>/Constant'
        //   Constant: '<S9>/Constant1'

        rtb_BusAssignment_fq.pin_number =
          complementary_filter_ros2_P.Constant_Value_l;
        rtb_BusAssignment_fq.state =
          complementary_filter_ros2_P.Constant1_Value_b;

        // Outputs for Atomic SubSystem: '<S9>/Call Service'
        // MATLABSystem: '<S14>/ServiceCaller'
        serverAvailableOnTime =
          ServCall_complementary_filter_ros2_134__215.waitForServer(5.0);
        if (serverAvailableOnTime) {
          ServCall_complementary_filter_ros2_134__215.call(&rtb_BusAssignment_fq,
            &b_varargout_1);
        }

        // End of MATLABSystem: '<S14>/ServiceCaller'
        // End of Outputs for SubSystem: '<S9>/Call Service'
        complementary_filter_ros2_DW.killEsc1_SubsysRanBC = 4;

        // End of Outputs for SubSystem: '<S1>/killEsc1'
      } else {
        // Outputs for Function Call SubSystem: '<S1>/controlling1'
        // BusAssignment: '<S8>/Bus Assignment' incorporates:
        //   Constant: '<S8>/Constant'
        //   Constant: '<S8>/control1'
        //   Gain: '<S8>/Gain'
        //   Sum: '<S8>/Add'
        //   Sum: '<S8>/Add1'
        //   Trigonometry: '<S8>/Sin'

        rtb_BusAssignment_l.data = complementary_filter_ros2_P.Constant_Value_j4
          - ((complementary_filter_ros2_B.Add +
              complementary_filter_ros2_P.control1_Value) + std::sin
             (complementary_filter_ros2_P.Gain_Gain *
              complementary_filter_ros2_B.Gain));

        // MATLABSystem: '<S12>/SinkBlock'
        Pub_complementary_filter_ros2_134__183.publish(&rtb_BusAssignment_l);
        complementary_filter_ros2_DW.controlling1_SubsysRanBC = 4;

        // End of Outputs for SubSystem: '<S1>/controlling1'
      }
      break;

     case complementary_filter_ro_IN_Init:
      if (complementary_filter_ros2_DW.k1) {
        complementary_filter_ros2_DW.is_c3_complementary_filter_ros2 =
          complementary_filter_ros_IN_ARM;
      } else {
        complementary_filter_ros2_DW.k1 = complementary_filter_ros2_B.Pitchmotor;
      }
      break;

     default:
      // case IN_Kill:
      if (complementary_filter_ros2_B.Pitchmotor) {
        complementary_filter_ros2_DW.is_c3_complementary_filter_ros2 =
          complementary_filter_ros_IN_ARM;
      }
      break;
    }
  }

  // End of Chart: '<Root>/Chart'
  // Constant: '<Root>/Yaw Motor'
  complementary_filter_ros2_B.YawMotor =
    complementary_filter_ros2_P.YawMotor_Value;

  // Chart: '<Root>/Chart1'
  if (complementary_filter_ros2_DW.is_active_c1_complementary_filt == 0U) {
    complementary_filter_ros2_DW.is_active_c1_complementary_filt = 1U;
    complementary_filter_ros2_DW.is_c1_complementary_filter_ros2 =
      complementary_filter_r_IN_Init1;
    complementary_filter_ros2_DW.k2 = complementary_filter_ros2_B.YawMotor;
  } else {
    switch (complementary_filter_ros2_DW.is_c1_complementary_filter_ros2) {
     case complementary_filter_ro_IN_ARM1:
      if (complementary_filter_ros2_DW.y2 == 1.0) {
        complementary_filter_ros2_DW.is_c1_complementary_filter_ros2 =
          complementary_filte_IN_Command1;
      } else {
        // Outputs for Function Call SubSystem: '<S2>/sendArmSignal2'
        // BusAssignment: '<S19>/Bus Assignment1' incorporates:
        //   Constant: '<S19>/Constant1'
        //   Constant: '<S19>/Constant2'

        rtb_BusAssignment1.pin_number =
          complementary_filter_ros2_P.Constant1_Value_n;
        rtb_BusAssignment1.state = complementary_filter_ros2_P.Constant2_Value_i;

        // Outputs for Atomic SubSystem: '<S19>/Call Service1'
        // MATLABSystem: '<S25>/ServiceCaller'
        serverAvailableOnTime =
          ServCall_complementary_filter_ros2_135__135.waitForServer(5.0);
        if (serverAvailableOnTime) {
          ServCall_complementary_filter_ros2_135__135.call(&rtb_BusAssignment1,
            &b_varargout_1);
        }

        // End of MATLABSystem: '<S25>/ServiceCaller'
        // End of Outputs for SubSystem: '<S19>/Call Service1'
        complementary_filter_ros2_DW.sendArmSignal2_SubsysRanBC = 4;

        // End of Outputs for SubSystem: '<S2>/sendArmSignal2'
        complementary_filter_ros2_DW.y2 = 1.0;
      }
      break;

     case complementary_filte_IN_Command1:
      if (!complementary_filter_ros2_B.YawMotor) {
        complementary_filter_ros2_DW.is_c1_complementary_filter_ros2 =
          complementary_filter_r_IN_Kill1;

        // Outputs for Function Call SubSystem: '<S2>/killEsc2'
        // BusAssignment: '<S18>/Bus Assignment' incorporates:
        //   Constant: '<S18>/Constant'
        //   Constant: '<S18>/Constant1'

        rtb_BusAssignment1.pin_number =
          complementary_filter_ros2_P.Constant_Value_m;
        rtb_BusAssignment1.state = complementary_filter_ros2_P.Constant1_Value_f;

        // Outputs for Atomic SubSystem: '<S18>/Call Service'
        // MATLABSystem: '<S23>/ServiceCaller'
        serverAvailableOnTime =
          ServCall_complementary_filter_ros2_135__126.waitForServer(5.0);
        if (serverAvailableOnTime) {
          ServCall_complementary_filter_ros2_135__126.call(&rtb_BusAssignment1,
            &b_varargout_1);
        }

        // End of MATLABSystem: '<S23>/ServiceCaller'
        // End of Outputs for SubSystem: '<S18>/Call Service'
        complementary_filter_ros2_DW.killEsc2_SubsysRanBC = 4;

        // End of Outputs for SubSystem: '<S2>/killEsc2'
      } else {
        // Outputs for Function Call SubSystem: '<S2>/controlling2'
        // BusAssignment: '<S17>/Bus Assignment' incorporates:
        //   Constant: '<S17>/Constant1'
        //   Constant: '<S17>/Constant2'
        //   Constant: '<S17>/yaw perturb'
        //   Sum: '<S17>/Add'
        //   Sum: '<S17>/Add1'

        rtb_BusAssignment.data = (complementary_filter_ros2_P.yawperturb_Value +
          complementary_filter_ros2_P.Constant2_Value) +
          complementary_filter_ros2_P.Constant1_Value;

        // MATLABSystem: '<S21>/SinkBlock'
        Pub_complementary_filter_ros2_135__185.publish(&rtb_BusAssignment);
        complementary_filter_ros2_DW.controlling2_SubsysRanBC = 4;

        // End of Outputs for SubSystem: '<S2>/controlling2'
      }
      break;

     case complementary_filter_r_IN_Init1:
      if (complementary_filter_ros2_DW.k2) {
        complementary_filter_ros2_DW.is_c1_complementary_filter_ros2 =
          complementary_filter_ro_IN_ARM1;
      } else {
        complementary_filter_ros2_DW.k2 = complementary_filter_ros2_B.YawMotor;
      }
      break;

     default:
      // case IN_Kill1:
      if (complementary_filter_ros2_B.YawMotor) {
        complementary_filter_ros2_DW.is_c1_complementary_filter_ros2 =
          complementary_filter_ro_IN_ARM1;
      }
      break;
    }
  }

  // End of Chart: '<Root>/Chart1'

  // Update for DiscreteIntegrator: '<S7>/Discrete-Time Integrator'
  complementary_filter_ros2_DW.DiscreteTimeIntegrator_IC_LOADI = 0U;
  complementary_filter_ros2_DW.DiscreteTimeIntegrator_DSTATE[0] +=
    complementary_filter_ros2_P.DiscreteTimeIntegrator_gainva_j *
    complementary_filter_ros2_B.x_cd;
  complementary_filter_ros2_DW.DiscreteTimeIntegrator_DSTATE[1] =
    rtb_sincos_o1_idx_1;
  complementary_filter_ros2_DW.DiscreteTimeIntegrator_DSTATE[2] +=
    complementary_filter_ros2_P.DiscreteTimeIntegrator_gainva_j *
    complementary_filter_ros2_B.z_p1;

  // Update for DiscreteIntegrator: '<S32>/Integrator' incorporates:
  //   Fcn: '<S26>/Avoid Divide by Zero'
  //   Product: '<S3>/1//T'
  //   Sum: '<S3>/Sum1'

  complementary_filter_ros2_DW.Integrator_IC_LOADING = 0U;
  complementary_filter_ros2_DW.Integrator_DSTATE += 1.0 / (static_cast<real_T>
    (complementary_filter_ros2_B.Atan3 == 0.0) * 2.2204460492503131e-16 +
    complementary_filter_ros2_B.Atan3) * (complementary_filter_ros2_B.theta_am_x
    - complementary_filter_ros2_B.theta_am_y) *
    complementary_filter_ros2_P.Integrator_gainval;
  if (complementary_filter_ros2_DW.Integrator_DSTATE >
      complementary_filter_ros2_P.Integrator_UpperSat) {
    complementary_filter_ros2_DW.Integrator_DSTATE =
      complementary_filter_ros2_P.Integrator_UpperSat;
  } else if (complementary_filter_ros2_DW.Integrator_DSTATE <
             complementary_filter_ros2_P.Integrator_LowerSat) {
    complementary_filter_ros2_DW.Integrator_DSTATE =
      complementary_filter_ros2_P.Integrator_LowerSat;
  }

  complementary_filter_ros2_DW.Integrator_PrevResetState = static_cast<int8_T>
    (rtb_LogicalOperator);

  // End of Update for DiscreteIntegrator: '<S32>/Integrator'

  // External mode
  rtExtModeUploadCheckTrigger(1);

  {                              // Sample time: [0.0096153846153846159s, 0.0s]
    rtExtModeUpload(0, (real_T)complementary_filter_ros2_M->Timing.taskTime0);
  }

  // signal main to stop simulation
  {                              // Sample time: [0.0096153846153846159s, 0.0s]
    if ((rtmGetTFinal(complementary_filter_ros2_M)!=-1) &&
        !((rtmGetTFinal(complementary_filter_ros2_M)-
           complementary_filter_ros2_M->Timing.taskTime0) >
          complementary_filter_ros2_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(complementary_filter_ros2_M, "Simulation finished");
    }

    if (rtmGetStopRequested(complementary_filter_ros2_M)) {
      rtmSetErrorStatus(complementary_filter_ros2_M, "Simulation finished");
    }
  }

  // Update absolute time for base rate
  // The "clockTick0" counts the number of times the code of this task has
  //  been executed. The absolute time is the multiplication of "clockTick0"
  //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
  //  overflow during the application lifespan selected.

  complementary_filter_ros2_M->Timing.taskTime0 =
    ((time_T)(++complementary_filter_ros2_M->Timing.clockTick0)) *
    complementary_filter_ros2_M->Timing.stepSize0;
}

// Model initialize function
void complementary_filter_ros2_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  // non-finite (run-time) assignments
  complementary_filter_ros2_P.Integrator_UpperSat = rtInf;
  complementary_filter_ros2_P.Integrator_LowerSat = rtMinusInf;
  complementary_filter_ros2_P.Saturation_UpperSat = rtInf;
  complementary_filter_ros2_P.Saturation_LowerSat = rtMinusInf;
  rtmSetTFinal(complementary_filter_ros2_M, -1);
  complementary_filter_ros2_M->Timing.stepSize0 = 0.0096153846153846159;

  // External mode info
  complementary_filter_ros2_M->Sizes.checksums[0] = (1661273387U);
  complementary_filter_ros2_M->Sizes.checksums[1] = (1038695398U);
  complementary_filter_ros2_M->Sizes.checksums[2] = (899863988U);
  complementary_filter_ros2_M->Sizes.checksums[3] = (2409657170U);

  {
    static const sysRanDType rtAlwaysEnabled{ SUBSYS_RAN_BC_ENABLE };

    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[24];
    complementary_filter_ros2_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = (sysRanDType *)
      &complementary_filter_ros2_DW.controlling1_SubsysRanBC;
    systemRan[2] = (sysRanDType *)
      &complementary_filter_ros2_DW.controlling1_SubsysRanBC;
    systemRan[3] = (sysRanDType *)
      &complementary_filter_ros2_DW.killEsc1_SubsysRanBC;
    systemRan[4] = (sysRanDType *)
      &complementary_filter_ros2_DW.killEsc1_SubsysRanBC;
    systemRan[5] = (sysRanDType *)
      &complementary_filter_ros2_DW.killEsc1_SubsysRanBC;
    systemRan[6] = (sysRanDType *)
      &complementary_filter_ros2_DW.sendArmSignal1_SubsysRanBC;
    systemRan[7] = (sysRanDType *)
      &complementary_filter_ros2_DW.sendArmSignal1_SubsysRanBC;
    systemRan[8] = (sysRanDType *)
      &complementary_filter_ros2_DW.sendArmSignal1_SubsysRanBC;
    systemRan[9] = &rtAlwaysEnabled;
    systemRan[10] = (sysRanDType *)
      &complementary_filter_ros2_DW.controlling2_SubsysRanBC;
    systemRan[11] = (sysRanDType *)
      &complementary_filter_ros2_DW.controlling2_SubsysRanBC;
    systemRan[12] = (sysRanDType *)
      &complementary_filter_ros2_DW.killEsc2_SubsysRanBC;
    systemRan[13] = (sysRanDType *)
      &complementary_filter_ros2_DW.killEsc2_SubsysRanBC;
    systemRan[14] = (sysRanDType *)
      &complementary_filter_ros2_DW.killEsc2_SubsysRanBC;
    systemRan[15] = (sysRanDType *)
      &complementary_filter_ros2_DW.sendArmSignal2_SubsysRanBC;
    systemRan[16] = (sysRanDType *)
      &complementary_filter_ros2_DW.sendArmSignal2_SubsysRanBC;
    systemRan[17] = (sysRanDType *)
      &complementary_filter_ros2_DW.sendArmSignal2_SubsysRanBC;
    systemRan[18] = &rtAlwaysEnabled;
    systemRan[19] = (sysRanDType *)
      &complementary_filter_ros2_DW.PIDPItch_SubsysRanBC;
    systemRan[20] = (sysRanDType *)
      &complementary_filter_ros2_DW.EnabledSubsystem_SubsysRanBC_j;
    systemRan[21] = &rtAlwaysEnabled;
    systemRan[22] = (sysRanDType *)
      &complementary_filter_ros2_DW.EnabledSubsystem_SubsysRanBC;
    systemRan[23] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(complementary_filter_ros2_M->extModeInfo,
      &complementary_filter_ros2_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(complementary_filter_ros2_M->extModeInfo,
                        complementary_filter_ros2_M->Sizes.checksums);
    rteiSetTPtr(complementary_filter_ros2_M->extModeInfo, rtmGetTPtr
                (complementary_filter_ros2_M));
  }

  // data type transition information
  {
    static DataTypeTransInfo dtInfo;
    complementary_filter_ros2_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 36;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    // Block I/O transition table
    dtInfo.BTransTable = &rtBTransTable;

    // Parameters transition table
    dtInfo.PTransTable = &rtPTransTable;
  }

  // Start for Probe: '<S26>/Probe'
  complementary_filter_ros2_B.Probe[0] = 0.0096153846153846159;
  complementary_filter_ros2_B.Probe[1] = 0.0;

  // Start for Constant: '<Root>/Pitch motor'
  complementary_filter_ros2_B.Pitchmotor =
    complementary_filter_ros2_P.Pitchmotor_Value;

  // Start for Constant: '<Root>/Yaw Motor'
  complementary_filter_ros2_B.YawMotor =
    complementary_filter_ros2_P.YawMotor_Value;

  // InitializeConditions for DiscreteIntegrator: '<S7>/Discrete-Time Integrator' 
  complementary_filter_ros2_DW.DiscreteTimeIntegrator_IC_LOADI = 1U;

  // InitializeConditions for DiscreteIntegrator: '<S32>/Integrator'
  complementary_filter_ros2_DW.Integrator_IC_LOADING = 1U;

  // SystemInitialize for Enabled SubSystem: '<S6>/Enabled Subsystem'
  // SystemInitialize for SignalConversion generated from: '<S35>/In1' incorporates:
  //   Outport: '<S35>/Out1'

  complementary_filter_ros2_B.In1_i = complementary_filter_ros2_P.Out1_Y0_d;

  // End of SystemInitialize for SubSystem: '<S6>/Enabled Subsystem'

  // SystemInitialize for Enabled SubSystem: '<S5>/Enabled Subsystem'
  // SystemInitialize for SignalConversion generated from: '<S34>/In1' incorporates:
  //   Outport: '<S34>/Out1'

  complementary_filter_ros2_B.In1 = complementary_filter_ros2_P.Out1_Y0;

  // End of SystemInitialize for SubSystem: '<S5>/Enabled Subsystem'

  // SystemInitialize for Enabled SubSystem: '<Root>/PID PItch'
  // InitializeConditions for DiscreteIntegrator: '<S4>/Discrete-Time Integrator' 
  complementary_filter_ros2_DW.DiscreteTimeIntegrator_DSTATE_c =
    complementary_filter_ros2_P.DiscreteTimeIntegrator_IC;

  // InitializeConditions for UnitDelay: '<S33>/UD'
  //
  //  Block description for '<S33>/UD':
  //
  //   Store in Global RAM

  complementary_filter_ros2_DW.UD_DSTATE =
    complementary_filter_ros2_P.DiscreteDerivative_ICPrevScaled;

  // SystemInitialize for Sum: '<S4>/Add' incorporates:
  //   Outport: '<S4>/Out1'

  complementary_filter_ros2_B.Add = complementary_filter_ros2_P.Out1_Y0_i;

  // End of SystemInitialize for SubSystem: '<Root>/PID PItch'
  complementary_filter_ros2_DW.y1 = complementary_filter_ros2_P.Chart_y1;

  // SystemInitialize for Chart: '<Root>/Chart' incorporates:
  //   SubSystem: '<S1>/sendArmSignal1'

  // SystemInitialize for Atomic SubSystem: '<S10>/Call Service'
  // Start for MATLABSystem: '<S16>/ServiceCaller'
  complementary__SystemCore_setup(&complementary_filter_ros2_DW.obj_hk);

  // End of SystemInitialize for SubSystem: '<S10>/Call Service'

  // SystemInitialize for Chart: '<Root>/Chart' incorporates:
  //   SubSystem: '<S1>/controlling1'

  // Start for MATLABSystem: '<S12>/SinkBlock'
  complementar_SystemCore_setup_g(&complementary_filter_ros2_DW.obj_b);

  // SystemInitialize for Chart: '<Root>/Chart' incorporates:
  //   SubSystem: '<S1>/killEsc1'

  // SystemInitialize for Atomic SubSystem: '<S9>/Call Service'
  // Start for MATLABSystem: '<S14>/ServiceCaller'
  complementa_SystemCore_setup_g0(&complementary_filter_ros2_DW.obj_a);

  // End of SystemInitialize for SubSystem: '<S9>/Call Service'

  // SystemInitialize for Chart: '<Root>/Chart1' incorporates:
  //   SubSystem: '<S2>/sendArmSignal2'

  // SystemInitialize for Atomic SubSystem: '<S19>/Call Service1'
  // Start for MATLABSystem: '<S25>/ServiceCaller'
  complement_SystemCore_setup_g0f(&complementary_filter_ros2_DW.obj_m);

  // End of SystemInitialize for SubSystem: '<S19>/Call Service1'

  // SystemInitialize for Chart: '<Root>/Chart1' incorporates:
  //   SubSystem: '<S2>/controlling2'

  // Start for MATLABSystem: '<S21>/SinkBlock'
  complemen_SystemCore_setup_g0fn(&complementary_filter_ros2_DW.obj);

  // SystemInitialize for Chart: '<Root>/Chart1' incorporates:
  //   SubSystem: '<S2>/killEsc2'

  // SystemInitialize for Atomic SubSystem: '<S18>/Call Service'
  // Start for MATLABSystem: '<S23>/ServiceCaller'
  compleme_SystemCore_setup_g0fnv(&complementary_filter_ros2_DW.obj_h);

  // End of SystemInitialize for SubSystem: '<S18>/Call Service'

  // Start for MATLABSystem: '<S6>/SourceBlock'
  comple_SystemCore_setup_g0fnvwn(&complementary_filter_ros2_DW.obj_p);

  // Start for MATLABSystem: '<S5>/SourceBlock'
  complem_SystemCore_setup_g0fnvw(&complementary_filter_ros2_DW.obj_g);
}

// Model terminate function
void complementary_filter_ros2_terminate(void)
{
  // Terminate for MATLABSystem: '<S6>/SourceBlock'
  if (!complementary_filter_ros2_DW.obj_p.matlabCodegenIsDeleted) {
    complementary_filter_ros2_DW.obj_p.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S6>/SourceBlock'

  // Terminate for MATLABSystem: '<S5>/SourceBlock'
  if (!complementary_filter_ros2_DW.obj_g.matlabCodegenIsDeleted) {
    complementary_filter_ros2_DW.obj_g.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S5>/SourceBlock'

  // Terminate for Chart: '<Root>/Chart' incorporates:
  //   SubSystem: '<S1>/sendArmSignal1'

  // Terminate for Atomic SubSystem: '<S10>/Call Service'
  // Terminate for MATLABSystem: '<S16>/ServiceCaller'
  if (!complementary_filter_ros2_DW.obj_hk.matlabCodegenIsDeleted) {
    complementary_filter_ros2_DW.obj_hk.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S16>/ServiceCaller'
  // End of Terminate for SubSystem: '<S10>/Call Service'

  // Terminate for Chart: '<Root>/Chart' incorporates:
  //   SubSystem: '<S1>/controlling1'

  // Terminate for MATLABSystem: '<S12>/SinkBlock'
  if (!complementary_filter_ros2_DW.obj_b.matlabCodegenIsDeleted) {
    complementary_filter_ros2_DW.obj_b.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S12>/SinkBlock'

  // Terminate for Chart: '<Root>/Chart' incorporates:
  //   SubSystem: '<S1>/killEsc1'

  // Terminate for Atomic SubSystem: '<S9>/Call Service'
  // Terminate for MATLABSystem: '<S14>/ServiceCaller'
  if (!complementary_filter_ros2_DW.obj_a.matlabCodegenIsDeleted) {
    complementary_filter_ros2_DW.obj_a.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S14>/ServiceCaller'
  // End of Terminate for SubSystem: '<S9>/Call Service'

  // Terminate for Chart: '<Root>/Chart1' incorporates:
  //   SubSystem: '<S2>/sendArmSignal2'

  // Terminate for Atomic SubSystem: '<S19>/Call Service1'
  // Terminate for MATLABSystem: '<S25>/ServiceCaller'
  if (!complementary_filter_ros2_DW.obj_m.matlabCodegenIsDeleted) {
    complementary_filter_ros2_DW.obj_m.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S25>/ServiceCaller'
  // End of Terminate for SubSystem: '<S19>/Call Service1'

  // Terminate for Chart: '<Root>/Chart1' incorporates:
  //   SubSystem: '<S2>/controlling2'

  // Terminate for MATLABSystem: '<S21>/SinkBlock'
  if (!complementary_filter_ros2_DW.obj.matlabCodegenIsDeleted) {
    complementary_filter_ros2_DW.obj.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S21>/SinkBlock'

  // Terminate for Chart: '<Root>/Chart1' incorporates:
  //   SubSystem: '<S2>/killEsc2'

  // Terminate for Atomic SubSystem: '<S18>/Call Service'
  // Terminate for MATLABSystem: '<S23>/ServiceCaller'
  if (!complementary_filter_ros2_DW.obj_h.matlabCodegenIsDeleted) {
    complementary_filter_ros2_DW.obj_h.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S23>/ServiceCaller'
  // End of Terminate for SubSystem: '<S18>/Call Service'
}

//
// File trailer for generated code.
//
// [EOF]
//
