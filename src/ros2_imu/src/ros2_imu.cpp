//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: ros2_imu.cpp
//
// Code generated for Simulink model 'ros2_imu'.
//
// Model version                  : 1.17
// Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
// C/C++ source code generated on : Sun Jun 16 23:11:51 2024
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Windows64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "ros2_imu.h"
#include "ros2_imu_types.h"
#include "rtwtypes.h"
#include <math.h>
#include "ros2_imu_private.h"
#include "rmw/qos_profiles.h"
#include <stddef.h>

extern "C"
{

#include "rt_nonfinite.h"

}

#include "rt_defines.h"
#include "ros2_imu_dt.h"

// Named constants for Chart: '<Root>/Chart'
const uint32_T ros2_imu_IN_ARM = 1U;
const uint32_T ros2_imu_IN_Command = 2U;
const uint32_T ros2_imu_IN_Init = 3U;
const uint32_T ros2_imu_IN_Kill = 4U;

// Named constants for Chart: '<Root>/Chart1'
const uint32_T ros2_imu_IN_ARM1 = 1U;
const uint32_T ros2_imu_IN_Command1 = 2U;
const uint32_T ros2_imu_IN_Init1 = 3U;
const uint32_T ros2_imu_IN_Kill1 = 4U;

// Block signals (default storage)
B_ros2_imu_T ros2_imu_B;

// Block states (default storage)
DW_ros2_imu_T ros2_imu_DW;

// Real-time model
RT_MODEL_ros2_imu_T ros2_imu_M_ = RT_MODEL_ros2_imu_T();
RT_MODEL_ros2_imu_T *const ros2_imu_M = &ros2_imu_M_;

// Forward declaration for local functions
static void ros2_imu_SystemCore_setup(ros_slros2_internal_block_Ser_T *obj);
static void ros2_imu_SystemCore_setup_j(ros_slros2_internal_block_Pub_T *obj);
static void ros2_imu_SystemCore_setup_jy(ros_slros2_internal_block_Ser_T *obj);
static void ros2_imu_SystemCore_setup_jy4(ros_slros2_internal_block_Ser_T *obj);
static void ros2_imu_SystemCore_setup_jy4g(ros_slros2_internal_block_Pub_T *obj);
static void ros2_imu_SystemCore_setup_jy4g0(ros_slros2_internal_block_Ser_T *obj);
static void ros2_im_SystemCore_setup_jy4g0d(ros_slros2_internal_block_Sub_T *obj);
static void ros2_i_SystemCore_setup_jy4g0dg(ros_slros2_internal_block_Sub_T *obj);
static void rate_scheduler(void);

//
//         This function updates active task flag for each subrate.
//         The function is called at model base rate, hence the
//         generated code self-manages all its subrates.
//
static void rate_scheduler(void)
{
  // Compute which subrates run during the next base time step.  Subrates
  //  are an integer multiple of the base rate counter.  Therefore, the subtask
  //  counter is reset when it reaches its limit (zero means run).

  (ros2_imu_M->Timing.TaskCounters.TID[1])++;
  if ((ros2_imu_M->Timing.TaskCounters.TID[1]) > 4) {// Sample time: [0.05s, 0.0s] 
    ros2_imu_M->Timing.TaskCounters.TID[1] = 0;
  }
}

real_T rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
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

    y = atan2(static_cast<real_T>(tmp), static_cast<real_T>(tmp_0));
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

static void ros2_imu_SystemCore_setup(ros_slros2_internal_block_Ser_T *obj)
{
  rmw_qos_profile_t qos_profile;
  char_T b_zeroDelimTopic[11];
  static const char_T b_zeroDelimTopic_0[11] = "/arm_pitch";

  // Start for MATLABSystem: '<S12>/ServiceCaller'
  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;

  // Start for MATLABSystem: '<S12>/ServiceCaller'
  SET_QOS_VALUES(qos_profile, RMW_QOS_POLICY_HISTORY_KEEP_LAST, (size_t)1.0,
                 RMW_QOS_POLICY_DURABILITY_VOLATILE,
                 RMW_QOS_POLICY_RELIABILITY_RELIABLE);
  for (int32_T i = 0; i < 11; i++) {
    // Start for MATLABSystem: '<S12>/ServiceCaller'
    b_zeroDelimTopic[i] = b_zeroDelimTopic_0[i];
  }

  ServCall_ros2_imu_41__324.createServiceCaller(&b_zeroDelimTopic[0],
    qos_profile);
  obj->isSetupComplete = true;
}

static void ros2_imu_SystemCore_setup_j(ros_slros2_internal_block_Pub_T *obj)
{
  rmw_qos_profile_t qos_profile;
  char_T b_zeroDelimTopic[14];
  static const char_T b_zeroDelimTopic_0[14] = "/esc_command1";

  // Start for MATLABSystem: '<S8>/SinkBlock'
  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;

  // Start for MATLABSystem: '<S8>/SinkBlock'
  SET_QOS_VALUES(qos_profile, RMW_QOS_POLICY_HISTORY_KEEP_LAST, (size_t)10.0,
                 RMW_QOS_POLICY_DURABILITY_VOLATILE,
                 RMW_QOS_POLICY_RELIABILITY_RELIABLE);
  for (int32_T i = 0; i < 14; i++) {
    // Start for MATLABSystem: '<S8>/SinkBlock'
    b_zeroDelimTopic[i] = b_zeroDelimTopic_0[i];
  }

  Pub_ros2_imu_41__183.createPublisher(&b_zeroDelimTopic[0], qos_profile);
  obj->isSetupComplete = true;
}

static void ros2_imu_SystemCore_setup_jy(ros_slros2_internal_block_Ser_T *obj)
{
  rmw_qos_profile_t qos_profile;
  char_T b_zeroDelimTopic[11];
  static const char_T b_zeroDelimTopic_0[11] = "/arm_pitch";

  // Start for MATLABSystem: '<S10>/ServiceCaller'
  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;

  // Start for MATLABSystem: '<S10>/ServiceCaller'
  SET_QOS_VALUES(qos_profile, RMW_QOS_POLICY_HISTORY_KEEP_LAST, (size_t)1.0,
                 RMW_QOS_POLICY_DURABILITY_VOLATILE,
                 RMW_QOS_POLICY_RELIABILITY_RELIABLE);
  for (int32_T i = 0; i < 11; i++) {
    // Start for MATLABSystem: '<S10>/ServiceCaller'
    b_zeroDelimTopic[i] = b_zeroDelimTopic_0[i];
  }

  ServCall_ros2_imu_41__215.createServiceCaller(&b_zeroDelimTopic[0],
    qos_profile);
  obj->isSetupComplete = true;
}

static void ros2_imu_SystemCore_setup_jy4(ros_slros2_internal_block_Ser_T *obj)
{
  rmw_qos_profile_t qos_profile;
  char_T b_zeroDelimTopic[9];
  static const char_T b_zeroDelimTopic_0[9] = "/arm_yaw";

  // Start for MATLABSystem: '<S21>/ServiceCaller'
  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;

  // Start for MATLABSystem: '<S21>/ServiceCaller'
  SET_QOS_VALUES(qos_profile, RMW_QOS_POLICY_HISTORY_KEEP_LAST, (size_t)1.0,
                 RMW_QOS_POLICY_DURABILITY_VOLATILE,
                 RMW_QOS_POLICY_RELIABILITY_RELIABLE);
  for (int32_T i = 0; i < 9; i++) {
    // Start for MATLABSystem: '<S21>/ServiceCaller'
    b_zeroDelimTopic[i] = b_zeroDelimTopic_0[i];
  }

  ServCall_ros2_imu_119__135.createServiceCaller(&b_zeroDelimTopic[0],
    qos_profile);
  obj->isSetupComplete = true;
}

static void ros2_imu_SystemCore_setup_jy4g(ros_slros2_internal_block_Pub_T *obj)
{
  rmw_qos_profile_t qos_profile;
  char_T b_zeroDelimTopic[14];
  static const char_T b_zeroDelimTopic_0[14] = "/esc_command2";

  // Start for MATLABSystem: '<S17>/SinkBlock'
  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;

  // Start for MATLABSystem: '<S17>/SinkBlock'
  SET_QOS_VALUES(qos_profile, RMW_QOS_POLICY_HISTORY_KEEP_LAST, (size_t)10.0,
                 RMW_QOS_POLICY_DURABILITY_VOLATILE,
                 RMW_QOS_POLICY_RELIABILITY_RELIABLE);
  for (int32_T i = 0; i < 14; i++) {
    // Start for MATLABSystem: '<S17>/SinkBlock'
    b_zeroDelimTopic[i] = b_zeroDelimTopic_0[i];
  }

  Pub_ros2_imu_119__185.createPublisher(&b_zeroDelimTopic[0], qos_profile);
  obj->isSetupComplete = true;
}

static void ros2_imu_SystemCore_setup_jy4g0(ros_slros2_internal_block_Ser_T *obj)
{
  rmw_qos_profile_t qos_profile;
  char_T b_zeroDelimTopic[9];
  static const char_T b_zeroDelimTopic_0[9] = "/arm_yaw";

  // Start for MATLABSystem: '<S19>/ServiceCaller'
  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;

  // Start for MATLABSystem: '<S19>/ServiceCaller'
  SET_QOS_VALUES(qos_profile, RMW_QOS_POLICY_HISTORY_KEEP_LAST, (size_t)1.0,
                 RMW_QOS_POLICY_DURABILITY_VOLATILE,
                 RMW_QOS_POLICY_RELIABILITY_RELIABLE);
  for (int32_T i = 0; i < 9; i++) {
    // Start for MATLABSystem: '<S19>/ServiceCaller'
    b_zeroDelimTopic[i] = b_zeroDelimTopic_0[i];
  }

  ServCall_ros2_imu_119__126.createServiceCaller(&b_zeroDelimTopic[0],
    qos_profile);
  obj->isSetupComplete = true;
}

static void ros2_im_SystemCore_setup_jy4g0d(ros_slros2_internal_block_Sub_T *obj)
{
  rmw_qos_profile_t qos_profile;
  char_T b_zeroDelimTopic[10];
  static const char_T b_zeroDelimTopic_0[10] = "/imu/data";

  // Start for MATLABSystem: '<S23>/SourceBlock'
  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;

  // Start for MATLABSystem: '<S23>/SourceBlock'
  SET_QOS_VALUES(qos_profile, RMW_QOS_POLICY_HISTORY_KEEP_LAST, (size_t)1.0,
                 RMW_QOS_POLICY_DURABILITY_VOLATILE,
                 RMW_QOS_POLICY_RELIABILITY_RELIABLE);
  for (int32_T i = 0; i < 10; i++) {
    // Start for MATLABSystem: '<S23>/SourceBlock'
    b_zeroDelimTopic[i] = b_zeroDelimTopic_0[i];
  }

  Sub_ros2_imu_162.createSubscriber(&b_zeroDelimTopic[0], qos_profile);
  obj->isSetupComplete = true;
}

static void ros2_i_SystemCore_setup_jy4g0dg(ros_slros2_internal_block_Sub_T *obj)
{
  rmw_qos_profile_t qos_profile;
  char_T b_zeroDelimTopic[10];
  static const char_T b_zeroDelimTopic_0[10] = "/mag/data";

  // Start for MATLABSystem: '<S24>/SourceBlock'
  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;

  // Start for MATLABSystem: '<S24>/SourceBlock'
  SET_QOS_VALUES(qos_profile, RMW_QOS_POLICY_HISTORY_KEEP_LAST, (size_t)1.0,
                 RMW_QOS_POLICY_DURABILITY_VOLATILE,
                 RMW_QOS_POLICY_RELIABILITY_RELIABLE);
  for (int32_T i = 0; i < 10; i++) {
    // Start for MATLABSystem: '<S24>/SourceBlock'
    b_zeroDelimTopic[i] = b_zeroDelimTopic_0[i];
  }

  Sub_ros2_imu_163.createSubscriber(&b_zeroDelimTopic[0], qos_profile);
  obj->isSetupComplete = true;
}

// Model step function
void ros2_imu_step(void)
{
  SL_Bus_aerobot_interfaces_EscSrvRequest rtb_BusAssignment1;
  SL_Bus_aerobot_interfaces_EscSrvRequest rtb_BusAssignment_h;
  SL_Bus_aerobot_interfaces_EscSrvResponse b_varargout_1;
  SL_Bus_std_msgs_Int64 rtb_BusAssignment;
  SL_Bus_std_msgs_Int64 rtb_BusAssignment_hl;
  real_T rtb_MathFunction1;
  real_T rtb_Switch_idx_1;
  real_T rtb_Switch_idx_2;
  boolean_T serverAvailableOnTime;

  // Reset subsysRan breadcrumbs
  srClearBC(ros2_imu_DW.sendArmSignal1_SubsysRanBC);

  // Reset subsysRan breadcrumbs
  srClearBC(ros2_imu_DW.controlling1_SubsysRanBC);

  // Reset subsysRan breadcrumbs
  srClearBC(ros2_imu_DW.killEsc1_SubsysRanBC);

  // Reset subsysRan breadcrumbs
  srClearBC(ros2_imu_DW.sendArmSignal2_SubsysRanBC);

  // Reset subsysRan breadcrumbs
  srClearBC(ros2_imu_DW.controlling2_SubsysRanBC);

  // Reset subsysRan breadcrumbs
  srClearBC(ros2_imu_DW.killEsc2_SubsysRanBC);

  // Reset subsysRan breadcrumbs
  srClearBC(ros2_imu_DW.EnabledSubsystem_SubsysRanBC_a);

  // Reset subsysRan breadcrumbs
  srClearBC(ros2_imu_DW.EnabledSubsystem_SubsysRanBC);

  // MATLABSystem: '<S23>/SourceBlock'
  serverAvailableOnTime = Sub_ros2_imu_162.getLatestMessage
    (&ros2_imu_B.b_varargout_2);

  // Outputs for Enabled SubSystem: '<S23>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S26>/Enable'

  // Start for MATLABSystem: '<S23>/SourceBlock'
  if (serverAvailableOnTime) {
    // SignalConversion generated from: '<S26>/In1'
    ros2_imu_B.In1 = ros2_imu_B.b_varargout_2;
    srUpdateBC(ros2_imu_DW.EnabledSubsystem_SubsysRanBC_a);
  }

  // End of Start for MATLABSystem: '<S23>/SourceBlock'
  // End of Outputs for SubSystem: '<S23>/Enabled Subsystem'

  // Sum: '<S29>/Sum of Elements' incorporates:
  //   Math: '<S29>/Math Function'
  //   SignalConversion generated from: '<S29>/Math Function'

  rtb_MathFunction1 = (ros2_imu_B.In1.linear_acceleration.x *
                       ros2_imu_B.In1.linear_acceleration.x +
                       ros2_imu_B.In1.linear_acceleration.y *
                       ros2_imu_B.In1.linear_acceleration.y) +
    ros2_imu_B.In1.linear_acceleration.z * ros2_imu_B.In1.linear_acceleration.z;

  // Math: '<S29>/Math Function1' incorporates:
  //   Sum: '<S29>/Sum of Elements'
  //
  //  About '<S29>/Math Function1':
  //   Operator: sqrt

  if (rtb_MathFunction1 < 0.0) {
    rtb_MathFunction1 = -sqrt(fabs(rtb_MathFunction1));
  } else {
    rtb_MathFunction1 = sqrt(rtb_MathFunction1);
  }

  // End of Math: '<S29>/Math Function1'

  // Switch: '<S29>/Switch' incorporates:
  //   Constant: '<S29>/Constant'
  //   Product: '<S29>/Product'
  //   SignalConversion generated from: '<S29>/Math Function'

  if (rtb_MathFunction1 > ros2_imu_P.NormalizeVector_maxzero) {
    rtb_Switch_idx_1 = ros2_imu_B.In1.linear_acceleration.y;
    rtb_Switch_idx_2 = ros2_imu_B.In1.linear_acceleration.z;
  } else {
    rtb_Switch_idx_1 = ros2_imu_B.In1.linear_acceleration.y * 0.0;
    rtb_Switch_idx_2 = ros2_imu_B.In1.linear_acceleration.z * 0.0;
    rtb_MathFunction1 = ros2_imu_P.Constant_Value_n1;
  }

  // End of Switch: '<S29>/Switch'

  // Trigonometry: '<S28>/Atan2' incorporates:
  //   Product: '<S29>/Divide'

  ros2_imu_B.Theta = rt_atan2d_snf(rtb_Switch_idx_1 / rtb_MathFunction1,
    rtb_Switch_idx_2 / rtb_MathFunction1);

  // Constant: '<Root>/Pitch motor'
  ros2_imu_B.Pitchmotor = ros2_imu_P.Pitchmotor_Value;

  // Chart: '<Root>/Chart'
  if (ros2_imu_DW.is_active_c3_ros2_imu == 0U) {
    ros2_imu_DW.is_active_c3_ros2_imu = 1U;
    ros2_imu_DW.is_c3_ros2_imu = ros2_imu_IN_Init;
    ros2_imu_DW.k1 = ros2_imu_B.Pitchmotor;
  } else {
    switch (ros2_imu_DW.is_c3_ros2_imu) {
     case ros2_imu_IN_ARM:
      if (ros2_imu_DW.y1 == 1) {
        ros2_imu_DW.is_c3_ros2_imu = ros2_imu_IN_Command;
      } else {
        // Outputs for Function Call SubSystem: '<S1>/sendArmSignal1'
        // BusAssignment: '<S6>/Bus Assignment' incorporates:
        //   Constant: '<S6>/Constant'
        //   Constant: '<S6>/Constant1'

        rtb_BusAssignment_h.pin_number = ros2_imu_P.Constant_Value_iy;
        rtb_BusAssignment_h.state = ros2_imu_P.Constant1_Value_k;

        // Outputs for Atomic SubSystem: '<S6>/Call Service'
        // MATLABSystem: '<S12>/ServiceCaller'
        serverAvailableOnTime = ServCall_ros2_imu_41__324.waitForServer(5.0);
        if (!serverAvailableOnTime) {
          // MATLABSystem: '<S12>/ServiceCaller'
          ros2_imu_B.ServiceCaller_o2 = SLConnectionTimeout;
        } else {
          // MATLABSystem: '<S12>/ServiceCaller'
          ros2_imu_B.ServiceCaller_o2 = ServCall_ros2_imu_41__324.call
            (&rtb_BusAssignment_h, &b_varargout_1);
        }

        // SignalConversion generated from: '<S6>/Bus Selector' incorporates:
        //   MATLABSystem: '<S12>/ServiceCaller'
        //
        ros2_imu_B.success = b_varargout_1.success;

        // End of Outputs for SubSystem: '<S6>/Call Service'
        ros2_imu_DW.sendArmSignal1_SubsysRanBC = 4;

        // End of Outputs for SubSystem: '<S1>/sendArmSignal1'
        ros2_imu_DW.y1 = 1;
      }
      break;

     case ros2_imu_IN_Command:
      if (!ros2_imu_B.Pitchmotor) {
        ros2_imu_DW.is_c3_ros2_imu = ros2_imu_IN_Kill;

        // Outputs for Function Call SubSystem: '<S1>/killEsc1'
        // BusAssignment: '<S5>/Bus Assignment' incorporates:
        //   Constant: '<S5>/Constant'
        //   Constant: '<S5>/Constant1'

        rtb_BusAssignment_h.pin_number = ros2_imu_P.Constant_Value_p;
        rtb_BusAssignment_h.state = ros2_imu_P.Constant1_Value_e;

        // Outputs for Atomic SubSystem: '<S5>/Call Service'
        // MATLABSystem: '<S10>/ServiceCaller'
        serverAvailableOnTime = ServCall_ros2_imu_41__215.waitForServer(5.0);
        if (serverAvailableOnTime) {
          ServCall_ros2_imu_41__215.call(&rtb_BusAssignment_h, &b_varargout_1);
        }

        // End of MATLABSystem: '<S10>/ServiceCaller'
        // End of Outputs for SubSystem: '<S5>/Call Service'
        ros2_imu_DW.killEsc1_SubsysRanBC = 4;

        // End of Outputs for SubSystem: '<S1>/killEsc1'
      } else {
        // Outputs for Function Call SubSystem: '<S1>/controlling1'
        // BusAssignment: '<S4>/Bus Assignment' incorporates:
        //   Constant: '<S4>/Constant'
        //   Constant: '<S4>/control1'
        //   Constant: '<S4>/pitch perturb'
        //   Gain: '<S4>/Gain'
        //   Sum: '<S4>/Add'
        //   Sum: '<S4>/Add1'
        //   Trigonometry: '<S4>/Sin'

        rtb_BusAssignment_hl.data = ros2_imu_P.Constant_Value_o -
          ((ros2_imu_P.pitchperturb_Value + ros2_imu_P.control1_Value) + sin
           (ros2_imu_P.Gain_Gain * ros2_imu_B.Theta));

        // MATLABSystem: '<S8>/SinkBlock'
        Pub_ros2_imu_41__183.publish(&rtb_BusAssignment_hl);
        ros2_imu_DW.controlling1_SubsysRanBC = 4;

        // End of Outputs for SubSystem: '<S1>/controlling1'
      }
      break;

     case ros2_imu_IN_Init:
      if (ros2_imu_DW.k1) {
        ros2_imu_DW.is_c3_ros2_imu = ros2_imu_IN_ARM;
      } else {
        ros2_imu_DW.k1 = ros2_imu_B.Pitchmotor;
      }
      break;

     default:
      // case IN_Kill:
      if (ros2_imu_B.Pitchmotor) {
        ros2_imu_DW.is_c3_ros2_imu = ros2_imu_IN_ARM;
      }
      break;
    }
  }

  // End of Chart: '<Root>/Chart'
  // Constant: '<Root>/Yaw Motor'
  ros2_imu_B.YawMotor = ros2_imu_P.YawMotor_Value;

  // Chart: '<Root>/Chart1'
  if (ros2_imu_DW.is_active_c1_ros2_imu == 0U) {
    ros2_imu_DW.is_active_c1_ros2_imu = 1U;
    ros2_imu_DW.is_c1_ros2_imu = ros2_imu_IN_Init1;
    ros2_imu_DW.k2 = ros2_imu_B.YawMotor;
  } else {
    switch (ros2_imu_DW.is_c1_ros2_imu) {
     case ros2_imu_IN_ARM1:
      if (ros2_imu_DW.y2 == 1.0) {
        ros2_imu_DW.is_c1_ros2_imu = ros2_imu_IN_Command1;
      } else {
        // Outputs for Function Call SubSystem: '<S2>/sendArmSignal2'
        // BusAssignment: '<S15>/Bus Assignment1' incorporates:
        //   Constant: '<S15>/Constant1'
        //   Constant: '<S15>/Constant2'

        rtb_BusAssignment1.pin_number = ros2_imu_P.Constant1_Value_o;
        rtb_BusAssignment1.state = ros2_imu_P.Constant2_Value_a;

        // Outputs for Atomic SubSystem: '<S15>/Call Service1'
        // MATLABSystem: '<S21>/ServiceCaller'
        serverAvailableOnTime = ServCall_ros2_imu_119__135.waitForServer(5.0);
        if (serverAvailableOnTime) {
          ServCall_ros2_imu_119__135.call(&rtb_BusAssignment1, &b_varargout_1);
        }

        // End of MATLABSystem: '<S21>/ServiceCaller'
        // End of Outputs for SubSystem: '<S15>/Call Service1'
        ros2_imu_DW.sendArmSignal2_SubsysRanBC = 4;

        // End of Outputs for SubSystem: '<S2>/sendArmSignal2'
        ros2_imu_DW.y2 = 1.0;
      }
      break;

     case ros2_imu_IN_Command1:
      if (!ros2_imu_B.YawMotor) {
        ros2_imu_DW.is_c1_ros2_imu = ros2_imu_IN_Kill1;

        // Outputs for Function Call SubSystem: '<S2>/killEsc2'
        // BusAssignment: '<S14>/Bus Assignment' incorporates:
        //   Constant: '<S14>/Constant'
        //   Constant: '<S14>/Constant1'

        rtb_BusAssignment1.pin_number = ros2_imu_P.Constant_Value_pf;
        rtb_BusAssignment1.state = ros2_imu_P.Constant1_Value_j;

        // Outputs for Atomic SubSystem: '<S14>/Call Service'
        // MATLABSystem: '<S19>/ServiceCaller'
        serverAvailableOnTime = ServCall_ros2_imu_119__126.waitForServer(5.0);
        if (serverAvailableOnTime) {
          ServCall_ros2_imu_119__126.call(&rtb_BusAssignment1, &b_varargout_1);
        }

        // End of MATLABSystem: '<S19>/ServiceCaller'
        // End of Outputs for SubSystem: '<S14>/Call Service'
        ros2_imu_DW.killEsc2_SubsysRanBC = 4;

        // End of Outputs for SubSystem: '<S2>/killEsc2'
      } else {
        // Outputs for Function Call SubSystem: '<S2>/controlling2'
        // BusAssignment: '<S13>/Bus Assignment' incorporates:
        //   Constant: '<S13>/Constant1'
        //   Constant: '<S13>/Constant2'
        //   Constant: '<S13>/yaw perturb'
        //   Sum: '<S13>/Add'
        //   Sum: '<S13>/Add1'

        rtb_BusAssignment.data = (ros2_imu_P.yawperturb_Value +
          ros2_imu_P.Constant2_Value) + ros2_imu_P.Constant1_Value;

        // MATLABSystem: '<S17>/SinkBlock'
        Pub_ros2_imu_119__185.publish(&rtb_BusAssignment);
        ros2_imu_DW.controlling2_SubsysRanBC = 4;

        // End of Outputs for SubSystem: '<S2>/controlling2'
      }
      break;

     case ros2_imu_IN_Init1:
      if (ros2_imu_DW.k2) {
        ros2_imu_DW.is_c1_ros2_imu = ros2_imu_IN_ARM1;
      } else {
        ros2_imu_DW.k2 = ros2_imu_B.YawMotor;
      }
      break;

     default:
      // case IN_Kill1:
      if (ros2_imu_B.YawMotor) {
        ros2_imu_DW.is_c1_ros2_imu = ros2_imu_IN_ARM1;
      }
      break;
    }
  }

  // End of Chart: '<Root>/Chart1'
  if (ros2_imu_M->Timing.TaskCounters.TID[1] == 0) {
    // MATLABSystem: '<S24>/SourceBlock'
    serverAvailableOnTime = Sub_ros2_imu_163.getLatestMessage
      (&ros2_imu_B.b_varargout_2_m);

    // Outputs for Enabled SubSystem: '<S24>/Enabled Subsystem' incorporates:
    //   EnablePort: '<S27>/Enable'

    // Start for MATLABSystem: '<S24>/SourceBlock'
    if (serverAvailableOnTime) {
      // SignalConversion generated from: '<S27>/In1'
      ros2_imu_B.In1_b = ros2_imu_B.b_varargout_2_m;
      srUpdateBC(ros2_imu_DW.EnabledSubsystem_SubsysRanBC);
    }

    // End of Start for MATLABSystem: '<S24>/SourceBlock'
    // End of Outputs for SubSystem: '<S24>/Enabled Subsystem'

    // Trigonometry: '<S22>/Atan2'
    ros2_imu_B.Atan2 = rt_atan2d_snf(ros2_imu_B.In1_b.magnetic_field.x,
      ros2_imu_B.In1_b.magnetic_field.y);
  }

  // External mode
  rtExtModeUploadCheckTrigger(2);

  {                                    // Sample time: [0.01s, 0.0s]
    rtExtModeUpload(0, (real_T)ros2_imu_M->Timing.taskTime0);
  }

  if (ros2_imu_M->Timing.TaskCounters.TID[1] == 0) {// Sample time: [0.05s, 0.0s] 
    rtExtModeUpload(1, (real_T)((ros2_imu_M->Timing.clockTick1) * 0.05));
  }

  // signal main to stop simulation
  {                                    // Sample time: [0.01s, 0.0s]
    if ((rtmGetTFinal(ros2_imu_M)!=-1) &&
        !((rtmGetTFinal(ros2_imu_M)-ros2_imu_M->Timing.taskTime0) >
          ros2_imu_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(ros2_imu_M, "Simulation finished");
    }

    if (rtmGetStopRequested(ros2_imu_M)) {
      rtmSetErrorStatus(ros2_imu_M, "Simulation finished");
    }
  }

  // Update absolute time for base rate
  // The "clockTick0" counts the number of times the code of this task has
  //  been executed. The absolute time is the multiplication of "clockTick0"
  //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
  //  overflow during the application lifespan selected.

  ros2_imu_M->Timing.taskTime0 =
    ((time_T)(++ros2_imu_M->Timing.clockTick0)) * ros2_imu_M->Timing.stepSize0;
  if (ros2_imu_M->Timing.TaskCounters.TID[1] == 0) {
    // Update absolute timer for sample time: [0.05s, 0.0s]
    // The "clockTick1" counts the number of times the code of this task has
    //  been executed. The resolution of this integer timer is 0.05, which is the step size
    //  of the task. Size of "clockTick1" ensures timer will not overflow during the
    //  application lifespan selected.

    ros2_imu_M->Timing.clockTick1++;
  }

  rate_scheduler();
}

// Model initialize function
void ros2_imu_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));
  rtmSetTFinal(ros2_imu_M, -1);
  ros2_imu_M->Timing.stepSize0 = 0.01;

  // External mode info
  ros2_imu_M->Sizes.checksums[0] = (2199806912U);
  ros2_imu_M->Sizes.checksums[1] = (1308447422U);
  ros2_imu_M->Sizes.checksums[2] = (2948224293U);
  ros2_imu_M->Sizes.checksums[3] = (2105424795U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[24];
    ros2_imu_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = (sysRanDType *)&ros2_imu_DW.controlling1_SubsysRanBC;
    systemRan[2] = (sysRanDType *)&ros2_imu_DW.controlling1_SubsysRanBC;
    systemRan[3] = (sysRanDType *)&ros2_imu_DW.killEsc1_SubsysRanBC;
    systemRan[4] = (sysRanDType *)&ros2_imu_DW.killEsc1_SubsysRanBC;
    systemRan[5] = (sysRanDType *)&ros2_imu_DW.killEsc1_SubsysRanBC;
    systemRan[6] = (sysRanDType *)&ros2_imu_DW.sendArmSignal1_SubsysRanBC;
    systemRan[7] = (sysRanDType *)&ros2_imu_DW.sendArmSignal1_SubsysRanBC;
    systemRan[8] = (sysRanDType *)&ros2_imu_DW.sendArmSignal1_SubsysRanBC;
    systemRan[9] = &rtAlwaysEnabled;
    systemRan[10] = (sysRanDType *)&ros2_imu_DW.controlling2_SubsysRanBC;
    systemRan[11] = (sysRanDType *)&ros2_imu_DW.controlling2_SubsysRanBC;
    systemRan[12] = (sysRanDType *)&ros2_imu_DW.killEsc2_SubsysRanBC;
    systemRan[13] = (sysRanDType *)&ros2_imu_DW.killEsc2_SubsysRanBC;
    systemRan[14] = (sysRanDType *)&ros2_imu_DW.killEsc2_SubsysRanBC;
    systemRan[15] = (sysRanDType *)&ros2_imu_DW.sendArmSignal2_SubsysRanBC;
    systemRan[16] = (sysRanDType *)&ros2_imu_DW.sendArmSignal2_SubsysRanBC;
    systemRan[17] = (sysRanDType *)&ros2_imu_DW.sendArmSignal2_SubsysRanBC;
    systemRan[18] = &rtAlwaysEnabled;
    systemRan[19] = (sysRanDType *)&ros2_imu_DW.EnabledSubsystem_SubsysRanBC_a;
    systemRan[20] = &rtAlwaysEnabled;
    systemRan[21] = (sysRanDType *)&ros2_imu_DW.EnabledSubsystem_SubsysRanBC;
    systemRan[22] = &rtAlwaysEnabled;
    systemRan[23] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(ros2_imu_M->extModeInfo,
      &ros2_imu_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(ros2_imu_M->extModeInfo, ros2_imu_M->Sizes.checksums);
    rteiSetTPtr(ros2_imu_M->extModeInfo, rtmGetTPtr(ros2_imu_M));
  }

  // data type transition information
  {
    static DataTypeTransInfo dtInfo;
    ros2_imu_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 32;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    // Block I/O transition table
    dtInfo.BTransTable = &rtBTransTable;

    // Parameters transition table
    dtInfo.PTransTable = &rtPTransTable;
  }

  // Start for Constant: '<Root>/Pitch motor'
  ros2_imu_B.Pitchmotor = ros2_imu_P.Pitchmotor_Value;

  // Start for Constant: '<Root>/Yaw Motor'
  ros2_imu_B.YawMotor = ros2_imu_P.YawMotor_Value;

  // SystemInitialize for Enabled SubSystem: '<S23>/Enabled Subsystem'
  // SystemInitialize for SignalConversion generated from: '<S26>/In1' incorporates:
  //   Outport: '<S26>/Out1'

  ros2_imu_B.In1 = ros2_imu_P.Out1_Y0;

  // End of SystemInitialize for SubSystem: '<S23>/Enabled Subsystem'
  ros2_imu_DW.y1 = ros2_imu_P.Chart_y1;

  // SystemInitialize for Chart: '<Root>/Chart' incorporates:
  //   SubSystem: '<S1>/sendArmSignal1'

  // SystemInitialize for Atomic SubSystem: '<S6>/Call Service'
  // Start for MATLABSystem: '<S12>/ServiceCaller'
  ros2_imu_SystemCore_setup(&ros2_imu_DW.obj_m);

  // End of SystemInitialize for SubSystem: '<S6>/Call Service'

  // SystemInitialize for Chart: '<Root>/Chart' incorporates:
  //   SubSystem: '<S1>/controlling1'

  // Start for MATLABSystem: '<S8>/SinkBlock'
  ros2_imu_SystemCore_setup_j(&ros2_imu_DW.obj_i);

  // SystemInitialize for Chart: '<Root>/Chart' incorporates:
  //   SubSystem: '<S1>/killEsc1'

  // SystemInitialize for Atomic SubSystem: '<S5>/Call Service'
  // Start for MATLABSystem: '<S10>/ServiceCaller'
  ros2_imu_SystemCore_setup_jy(&ros2_imu_DW.obj_ly);

  // End of SystemInitialize for SubSystem: '<S5>/Call Service'

  // SystemInitialize for Chart: '<Root>/Chart1' incorporates:
  //   SubSystem: '<S2>/sendArmSignal2'

  // SystemInitialize for Atomic SubSystem: '<S15>/Call Service1'
  // Start for MATLABSystem: '<S21>/ServiceCaller'
  ros2_imu_SystemCore_setup_jy4(&ros2_imu_DW.obj_c);

  // End of SystemInitialize for SubSystem: '<S15>/Call Service1'

  // SystemInitialize for Chart: '<Root>/Chart1' incorporates:
  //   SubSystem: '<S2>/controlling2'

  // Start for MATLABSystem: '<S17>/SinkBlock'
  ros2_imu_SystemCore_setup_jy4g(&ros2_imu_DW.obj);

  // SystemInitialize for Chart: '<Root>/Chart1' incorporates:
  //   SubSystem: '<S2>/killEsc2'

  // SystemInitialize for Atomic SubSystem: '<S14>/Call Service'
  // Start for MATLABSystem: '<S19>/ServiceCaller'
  ros2_imu_SystemCore_setup_jy4g0(&ros2_imu_DW.obj_l);

  // End of SystemInitialize for SubSystem: '<S14>/Call Service'

  // SystemInitialize for Enabled SubSystem: '<S24>/Enabled Subsystem'
  // SystemInitialize for SignalConversion generated from: '<S27>/In1' incorporates:
  //   Outport: '<S27>/Out1'

  ros2_imu_B.In1_b = ros2_imu_P.Out1_Y0_k;

  // End of SystemInitialize for SubSystem: '<S24>/Enabled Subsystem'

  // Start for MATLABSystem: '<S23>/SourceBlock'
  ros2_im_SystemCore_setup_jy4g0d(&ros2_imu_DW.obj_lg);

  // Start for MATLABSystem: '<S24>/SourceBlock'
  ros2_i_SystemCore_setup_jy4g0dg(&ros2_imu_DW.obj_lh);
}

// Model terminate function
void ros2_imu_terminate(void)
{
  // Terminate for MATLABSystem: '<S23>/SourceBlock'
  if (!ros2_imu_DW.obj_lg.matlabCodegenIsDeleted) {
    ros2_imu_DW.obj_lg.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S23>/SourceBlock'

  // Terminate for Chart: '<Root>/Chart' incorporates:
  //   SubSystem: '<S1>/sendArmSignal1'

  // Terminate for Atomic SubSystem: '<S6>/Call Service'
  // Terminate for MATLABSystem: '<S12>/ServiceCaller'
  if (!ros2_imu_DW.obj_m.matlabCodegenIsDeleted) {
    ros2_imu_DW.obj_m.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S12>/ServiceCaller'
  // End of Terminate for SubSystem: '<S6>/Call Service'

  // Terminate for Chart: '<Root>/Chart' incorporates:
  //   SubSystem: '<S1>/controlling1'

  // Terminate for MATLABSystem: '<S8>/SinkBlock'
  if (!ros2_imu_DW.obj_i.matlabCodegenIsDeleted) {
    ros2_imu_DW.obj_i.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S8>/SinkBlock'

  // Terminate for Chart: '<Root>/Chart' incorporates:
  //   SubSystem: '<S1>/killEsc1'

  // Terminate for Atomic SubSystem: '<S5>/Call Service'
  // Terminate for MATLABSystem: '<S10>/ServiceCaller'
  if (!ros2_imu_DW.obj_ly.matlabCodegenIsDeleted) {
    ros2_imu_DW.obj_ly.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S10>/ServiceCaller'
  // End of Terminate for SubSystem: '<S5>/Call Service'

  // Terminate for Chart: '<Root>/Chart1' incorporates:
  //   SubSystem: '<S2>/sendArmSignal2'

  // Terminate for Atomic SubSystem: '<S15>/Call Service1'
  // Terminate for MATLABSystem: '<S21>/ServiceCaller'
  if (!ros2_imu_DW.obj_c.matlabCodegenIsDeleted) {
    ros2_imu_DW.obj_c.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S21>/ServiceCaller'
  // End of Terminate for SubSystem: '<S15>/Call Service1'

  // Terminate for Chart: '<Root>/Chart1' incorporates:
  //   SubSystem: '<S2>/controlling2'

  // Terminate for MATLABSystem: '<S17>/SinkBlock'
  if (!ros2_imu_DW.obj.matlabCodegenIsDeleted) {
    ros2_imu_DW.obj.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S17>/SinkBlock'

  // Terminate for Chart: '<Root>/Chart1' incorporates:
  //   SubSystem: '<S2>/killEsc2'

  // Terminate for Atomic SubSystem: '<S14>/Call Service'
  // Terminate for MATLABSystem: '<S19>/ServiceCaller'
  if (!ros2_imu_DW.obj_l.matlabCodegenIsDeleted) {
    ros2_imu_DW.obj_l.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S19>/ServiceCaller'
  // End of Terminate for SubSystem: '<S14>/Call Service'

  // Terminate for MATLABSystem: '<S24>/SourceBlock'
  if (!ros2_imu_DW.obj_lh.matlabCodegenIsDeleted) {
    ros2_imu_DW.obj_lh.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S24>/SourceBlock'
}

//
// File trailer for generated code.
//
// [EOF]
//
