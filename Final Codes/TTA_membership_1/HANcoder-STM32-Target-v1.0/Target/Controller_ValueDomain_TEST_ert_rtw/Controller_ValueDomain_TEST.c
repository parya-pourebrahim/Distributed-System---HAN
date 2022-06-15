/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Controller_ValueDomain_TEST.c
 *
 * Code generated for Simulink model 'Controller_ValueDomain_TEST'.
 *
 * Model version                  : 1.82
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Feb 15 09:06:24 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->32-bit Embedded Processor
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Controller_ValueDomain_TEST.h"
#include "Controller_ValueDomain_TEST_private.h"

/* Exported block signals */
real_T LT_s;                           /* '<S8>/Data Store Read' */
real_T simulation_time;                /* '<S8>/Digital Clock' */
real_T theta_fr_s;                     /* '<S48>/Minus2' */
real_T theta_fl_s;                     /* '<S47>/Minus2' */
real_T theta_ar_s;                     /* '<S46>/Minus2' */
real_T theta_al_s;                     /* '<S45>/Minus2' */
real_T rx_data_time_s;                 /* '<S27>/Gain' */
real_T theta_fr_stored_s;              /* '<S23>/Data Store Read1' */
real_T theta_fl_stored_s;              /* '<S23>/Data Store Read' */
real_T delta_dot_f_s;                  /* '<S23>/Gain4' */
real_T theta_ar_stored_s;              /* '<S23>/Data Store Read2' */
real_T theta_al_stored_s;              /* '<S23>/Data Store Read3' */
real_T delta_dot_a_s;                  /* '<S23>/Gain5' */
real_T delta_f_est_current_s;          /* '<S23>/Data Store Read20' */
real_T delta_dot_f_prev_s;             /* '<S23>/Data Store Read22' */
real_T rx_data_t_steerF_s;             /* '<S23>/Data Store Read16' */
real_T rx_data_prev_t_steerF_s;        /* '<S23>/Data Store Read17' */
real_T delta_f_est_s;                  /* '<S37>/Minus2' */
real_T delta_a_est_current_s;          /* '<S23>/Data Store Read21' */
real_T delta_dot_a_prev_s;             /* '<S23>/Data Store Read23' */
real_T rx_data_t_steerA_s;             /* '<S23>/Data Store Read18' */
real_T rx_data_prev_t_steerA_s;        /* '<S23>/Data Store Read19' */
real_T delta_a_est_s;                  /* '<S36>/Minus2' */
real_T v_est_s;                        /* '<S22>/Gain4' */
real_T v_integral_s;                   /* '<S31>/Minus2' */
real_T v_ctreff_s;                     /* '<S22>/Sum2' */
real_T torque_fr_set_s;                /* '<S22>/Sum3' */
real_T torque_fl_set_s;                /* '<S22>/Sum4' */
real_T torque_ar_set_s;                /* '<S22>/Sum5' */
real_T torque_al_set_s;                /* '<S22>/Sum6' */
uint32_T SI_FreeHeap;                  /* '<S19>/Level-2 M-file S-Function' */
uint32_T SI_FreeStack;                 /* '<S20>/Level-2 M-file S-Function' */
uint8_T SI_CPUload;                    /* '<S18>/Level-2 M-file S-Function' */
boolean_T LedValue;                    /* '<S2>/Data Type Conversion' */

/* Exported block parameters */
real_T delta_a_set = 0.0;              /* Variable: delta_a_set
                                        * Referenced by: '<S28>/Constant2'
                                        */
real_T delta_f_set = 0.0;              /* Variable: delta_f_set
                                        * Referenced by: '<S28>/Constant1'
                                        */
real_T speed_k_d = 0.0;                /* Variable: speed_k_d
                                        * Referenced by: '<S22>/Gain7'
                                        */
real_T speed_k_i = 0.0;                /* Variable: speed_k_i
                                        * Referenced by: '<S22>/Gain6'
                                        */
real_T speed_k_p = 0.0;                /* Variable: speed_k_p
                                        * Referenced by: '<S22>/Gain5'
                                        */
real_T torque_a_k_d = 0.0;             /* Variable: torque_a_k_d
                                        * Referenced by: '<S24>/Gain7'
                                        */
real_T torque_a_k_i = 0.0;             /* Variable: torque_a_k_i
                                        * Referenced by: '<S24>/Gain6'
                                        */
real_T torque_a_k_p = 0.0;             /* Variable: torque_a_k_p
                                        * Referenced by: '<S24>/Gain5'
                                        */
real_T torque_f_k_d = 0.0;             /* Variable: torque_f_k_d
                                        * Referenced by: '<S24>/Gain4'
                                        */
real_T torque_f_k_i = 0.0;             /* Variable: torque_f_k_i
                                        * Referenced by: '<S24>/Gain3'
                                        */
real_T torque_f_k_p = 0.0;             /* Variable: torque_f_k_p
                                        * Referenced by: '<S24>/Gain2'
                                        */
real_T v_set = 0.0;                    /* Variable: v_set
                                        * Referenced by: '<S28>/Constant'
                                        */
boolean_T HANtuneOverride = 0;         /* Variable: HANtuneOverride
                                        * Referenced by: '<S2>/Constant'
                                        */

/* Block signals (default storage) */
BlockIO rtB;

/* Block states (default storage) */
D_Work rtDWork;

/* Real-time model */
RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;
static void rate_scheduler(void);

/*
 *   This function updates active task flag for each subrate.
 * The function is called at model base rate, hence the
 * generated code self-manages all its subrates.
 */
static void rate_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (rtM->Timing.TaskCounters.TID[1])++;
  if ((rtM->Timing.TaskCounters.TID[1]) > 99) {/* Sample time: [0.1s, 0.0s] */
    rtM->Timing.TaskCounters.TID[1] = 0;
  }

  (rtM->Timing.TaskCounters.TID[2])++;
  if ((rtM->Timing.TaskCounters.TID[2]) > 199) {/* Sample time: [0.2s, 0.0s] */
    rtM->Timing.TaskCounters.TID[2] = 0;
  }

  (rtM->Timing.TaskCounters.TID[3])++;
  if ((rtM->Timing.TaskCounters.TID[3]) > 999) {/* Sample time: [1.0s, 0.0s] */
    rtM->Timing.TaskCounters.TID[3] = 0;
  }
}

/* Model step function */
void Controller_ValueDomain_TEST_step(void)
{
  /* local block i/o variables */
  boolean_T rtb_Level2MfileSFunction;
  uint8_T rtb_Output;
  real_T rtb_Gain5_h;
  uint8_T rtb_FixPtSum1;
  uint8_T rtb_FixPtSum1_b;
  real_T speed_derivative;
  real_T torque_fr_derivative;
  real_T torque_ar_derivative;
  real_T v_integral_s_tmp;

  /* DataStoreWrite: '<S25>/Data Store Write' incorporates:
   *  Constant: '<S25>/Constant'
   *  DataStoreRead: '<S25>/Data Store Read'
   *  Sum: '<S25>/Minus'
   */
  rtDWork.Local_Ticks += 1.0;

  /* DataStoreRead: '<S8>/Data Store Read' */
  LT_s = rtDWork.Local_Ticks;

  /* Outputs for Enabled SubSystem: '<S8>/Basic_Cycle_Manager' incorporates:
   *  EnablePort: '<S21>/Enable'
   */
  /* RelationalOperator: '<S8>/GreaterThan' incorporates:
   *  Constant: '<S8>/Constant'
   */
  if (LT_s > 500.0) {
    /* DataStoreWrite: '<S21>/Data Store Write' incorporates:
     *  Constant: '<S21>/Constant'
     */
    rtDWork.Local_Ticks = 0.0;
  }

  /* End of RelationalOperator: '<S8>/GreaterThan' */
  /* End of Outputs for SubSystem: '<S8>/Basic_Cycle_Manager' */

  /* Outputs for Enabled SubSystem: '<S8>/Calculate speed' incorporates:
   *  EnablePort: '<S22>/Enable'
   */
  /* RelationalOperator: '<S8>/Equal4' incorporates:
   *  Constant: '<S8>/Constant5'
   *  DataStoreRead: '<S8>/Data Store Read5'
   */
  if (rtDWork.Local_Ticks == 144.0) {
    /* Gain: '<S22>/Gain4' incorporates:
     *  DataStoreRead: '<S22>/Data Store Read'
     *  DataStoreRead: '<S22>/Data Store Read1'
     *  DataStoreRead: '<S22>/Data Store Read2'
     *  DataStoreRead: '<S22>/Data Store Read3'
     *  Gain: '<S22>/Gain'
     *  Gain: '<S22>/Gain1'
     *  Gain: '<S22>/Gain2'
     *  Gain: '<S22>/Gain3'
     *  Sum: '<S22>/Sum'
     */
    v_est_s = (((0.1 * rtDWork.theta_dot_fr + 0.1 * rtDWork.theta_dot_fl) + 0.1 *
                rtDWork.theta_dot_ar) + 0.1 * rtDWork.theta_dot_al) * 0.25;

    /* Sum: '<S22>/Sum1' incorporates:
     *  DataStoreRead: '<S22>/Data Store Read5'
     *  DataStoreWrite: '<S22>/Data Store Write'
     */
    rtb_Gain5_h = rtDWork.v_set_stored - v_est_s;

    /* Sum: '<S31>/Minus1' incorporates:
     *  DataStoreRead: '<S22>/Data Store Read7'
     *  DataStoreRead: '<S22>/Data Store Read8'
     *  Sum: '<S30>/Minus1'
     */
    v_integral_s_tmp = rtDWork.rx_data_time - rtDWork.rx_data_prev_time;

    /* Sum: '<S31>/Minus2' incorporates:
     *  DataStoreRead: '<S22>/Data Store Read6'
     *  DataStoreRead: '<S22>/Data Store Read9'
     *  Gain: '<S31>/Gain'
     *  Product: '<S31>/Multiply'
     *  Sum: '<S31>/Minus'
     *  Sum: '<S31>/Minus1'
     */
    v_integral_s = (rtb_Gain5_h + rtDWork.speed_error_prev) * 0.5 *
      v_integral_s_tmp + rtDWork.speed_integral;

    /* DataStoreWrite: '<S22>/Data Store Write2' */
    rtDWork.speed_integral = v_integral_s;

    /* Product: '<S30>/Divide' incorporates:
     *  DataStoreRead: '<S22>/Data Store Read6'
     *  DataStoreWrite: '<S22>/Data Store Write3'
     *  Sum: '<S30>/Minus'
     */
    speed_derivative = (rtb_Gain5_h - rtDWork.speed_error_prev) /
      v_integral_s_tmp;

    /* DataStoreWrite: '<S22>/Data Store Write1' */
    rtDWork.speed_error_prev = rtb_Gain5_h;

    /* Sum: '<S22>/Sum2' incorporates:
     *  DataStoreRead: '<S22>/Data Store Read10'
     *  DataStoreRead: '<S22>/Data Store Read11'
     *  Gain: '<S22>/Gain5'
     *  Gain: '<S22>/Gain6'
     *  Gain: '<S22>/Gain7'
     */
    v_ctreff_s = (speed_k_p * rtb_Gain5_h + speed_k_i * rtDWork.speed_integral)
      + speed_k_d * speed_derivative;

    /* Sum: '<S22>/Sum3' incorporates:
     *  DataStoreRead: '<S22>/Data Store Read12'
     *  DataStoreWrite: '<S22>/Data Store Write4'
     */
    torque_fr_set_s = v_ctreff_s + rtDWork.torque_fr_out;

    /* DataStoreWrite: '<S22>/Data Store Write6' */
    rtDWork.torque_fr_set = torque_fr_set_s;

    /* Sum: '<S22>/Sum4' incorporates:
     *  DataStoreRead: '<S22>/Data Store Read14'
     *  DataStoreWrite: '<S22>/Data Store Write4'
     */
    torque_fl_set_s = v_ctreff_s + rtDWork.torque_fl_out;

    /* DataStoreWrite: '<S22>/Data Store Write5' */
    rtDWork.torque_fl_set = torque_fl_set_s;

    /* Sum: '<S22>/Sum5' incorporates:
     *  DataStoreRead: '<S22>/Data Store Read15'
     *  DataStoreWrite: '<S22>/Data Store Write4'
     */
    torque_ar_set_s = v_ctreff_s + rtDWork.torque_ar_out;

    /* DataStoreWrite: '<S22>/Data Store Write7' */
    rtDWork.torque_ar_set = torque_ar_set_s;

    /* Sum: '<S22>/Sum6' incorporates:
     *  DataStoreRead: '<S22>/Data Store Read16'
     *  DataStoreWrite: '<S22>/Data Store Write4'
     */
    torque_al_set_s = v_ctreff_s + rtDWork.torque_al_out;

    /* DataStoreWrite: '<S22>/Data Store Write8' */
    rtDWork.torque_al_set = torque_al_set_s;
  }

  /* End of RelationalOperator: '<S8>/Equal4' */
  /* End of Outputs for SubSystem: '<S8>/Calculate speed' */

  /* Outputs for Enabled SubSystem: '<S8>/Calculate steering' incorporates:
   *  EnablePort: '<S23>/Enable'
   */
  /* RelationalOperator: '<S8>/Equal2' incorporates:
   *  Constant: '<S8>/Constant3'
   *  DataStoreRead: '<S8>/Data Store Read3'
   */
  if (rtDWork.Local_Ticks == 136.0) {
    /* DataStoreRead: '<S23>/Data Store Read1' */
    theta_fr_stored_s = rtDWork.theta_fr_stored;

    /* Product: '<S35>/Divide' incorporates:
     *  Constant: '<S23>/Constant'
     *  DataStoreRead: '<S23>/Data Store Read5'
     *  DataStoreRead: '<S23>/Data Store Read6'
     *  DataStoreWrite: '<S23>/Data Store Write4'
     *  Sum: '<S35>/Minus'
     *  Sum: '<S35>/Minus1'
     */
    rtDWork.theta_dot_fr = (theta_fr_stored_s - 0.0) / (rtDWork.rx_data_time -
      rtDWork.rx_data_prev_time);

    /* DataStoreRead: '<S23>/Data Store Read' */
    theta_fl_stored_s = rtDWork.theta_fl_stored;

    /* Product: '<S34>/Divide' incorporates:
     *  Constant: '<S23>/Constant1'
     *  DataStoreRead: '<S23>/Data Store Read7'
     *  DataStoreRead: '<S23>/Data Store Read8'
     *  DataStoreWrite: '<S23>/Data Store Write5'
     *  Sum: '<S34>/Minus'
     *  Sum: '<S34>/Minus1'
     */
    rtDWork.theta_dot_fl = (theta_fl_stored_s - 0.0) / (rtDWork.rx_data_time -
      rtDWork.rx_data_prev_time);

    /* Gain: '<S23>/Gain4' incorporates:
     *  DataStoreWrite: '<S23>/Data Store Write4'
     *  DataStoreWrite: '<S23>/Data Store Write5'
     *  Gain: '<S23>/Gain'
     *  Gain: '<S23>/Gain1'
     *  Sum: '<S23>/Minus'
     */
    delta_dot_f_s = (0.1 * rtDWork.theta_dot_fr - 0.1 * rtDWork.theta_dot_fl) *
      1.6666666666666667;

    /* DataStoreRead: '<S23>/Data Store Read2' */
    theta_ar_stored_s = rtDWork.theta_ar_stored;

    /* Product: '<S33>/Divide' incorporates:
     *  Constant: '<S23>/Constant2'
     *  DataStoreRead: '<S23>/Data Store Read10'
     *  DataStoreRead: '<S23>/Data Store Read9'
     *  DataStoreWrite: '<S23>/Data Store Write6'
     *  Sum: '<S33>/Minus'
     *  Sum: '<S33>/Minus1'
     */
    rtDWork.theta_dot_ar = (theta_ar_stored_s - 0.0) / (rtDWork.rx_data_time -
      rtDWork.rx_data_prev_time);

    /* DataStoreRead: '<S23>/Data Store Read3' */
    theta_al_stored_s = rtDWork.theta_al_stored;

    /* Product: '<S32>/Divide' incorporates:
     *  Constant: '<S23>/Constant3'
     *  DataStoreRead: '<S23>/Data Store Read11'
     *  DataStoreRead: '<S23>/Data Store Read12'
     *  DataStoreWrite: '<S23>/Data Store Write7'
     *  Sum: '<S32>/Minus'
     *  Sum: '<S32>/Minus1'
     */
    rtDWork.theta_dot_al = (theta_al_stored_s - 0.0) / (rtDWork.rx_data_time -
      rtDWork.rx_data_prev_time);

    /* Gain: '<S23>/Gain5' incorporates:
     *  DataStoreWrite: '<S23>/Data Store Write6'
     *  DataStoreWrite: '<S23>/Data Store Write7'
     *  Gain: '<S23>/Gain2'
     *  Gain: '<S23>/Gain3'
     *  Sum: '<S23>/Minus1'
     */
    delta_dot_a_s = (0.1 * rtDWork.theta_dot_ar - 0.1 * rtDWork.theta_dot_al) *
      1.6666666666666667;

    /* DataStoreRead: '<S23>/Data Store Read20' */
    delta_f_est_current_s = rtDWork.delta_f_est;

    /* DataStoreRead: '<S23>/Data Store Read22' */
    delta_dot_f_prev_s = rtDWork.delta_dot_f_prev;

    /* DataStoreRead: '<S23>/Data Store Read16' */
    rx_data_t_steerF_s = rtDWork.rx_data_time;

    /* DataStoreRead: '<S23>/Data Store Read17' */
    rx_data_prev_t_steerF_s = rtDWork.rx_data_prev_time;

    /* Sum: '<S37>/Minus2' incorporates:
     *  Gain: '<S37>/Gain'
     *  Product: '<S37>/Multiply'
     *  Sum: '<S37>/Minus'
     *  Sum: '<S37>/Minus1'
     */
    delta_f_est_s = (delta_dot_f_s + delta_dot_f_prev_s) * 0.5 *
      (rx_data_t_steerF_s - rx_data_prev_t_steerF_s) + delta_f_est_current_s;

    /* DataStoreWrite: '<S23>/Data Store Write' */
    rtDWork.delta_f_est = delta_f_est_s;

    /* DataStoreWrite: '<S23>/Data Store Write2' */
    rtDWork.delta_dot_f_prev = delta_dot_f_s;

    /* DataStoreRead: '<S23>/Data Store Read21' */
    delta_a_est_current_s = rtDWork.delta_a_est;

    /* DataStoreRead: '<S23>/Data Store Read23' */
    delta_dot_a_prev_s = rtDWork.delta_dot_a_prev;

    /* DataStoreRead: '<S23>/Data Store Read18' */
    rx_data_t_steerA_s = rtDWork.rx_data_time;

    /* DataStoreRead: '<S23>/Data Store Read19' */
    rx_data_prev_t_steerA_s = rtDWork.rx_data_prev_time;

    /* Sum: '<S36>/Minus2' incorporates:
     *  Gain: '<S36>/Gain'
     *  Product: '<S36>/Multiply'
     *  Sum: '<S36>/Minus'
     *  Sum: '<S36>/Minus1'
     */
    delta_a_est_s = (delta_dot_a_s + delta_dot_a_prev_s) * 0.5 *
      (rx_data_t_steerA_s - rx_data_prev_t_steerA_s) + delta_a_est_current_s;

    /* DataStoreWrite: '<S23>/Data Store Write1' */
    rtDWork.delta_a_est = delta_a_est_s;

    /* DataStoreWrite: '<S23>/Data Store Write3' */
    rtDWork.delta_dot_a_prev = delta_dot_a_s;
  }

  /* End of RelationalOperator: '<S8>/Equal2' */
  /* End of Outputs for SubSystem: '<S8>/Calculate steering' */

  /* Outputs for Enabled SubSystem: '<S8>/Calculate torque' incorporates:
   *  EnablePort: '<S24>/Enable'
   */
  /* RelationalOperator: '<S8>/Equal3' incorporates:
   *  Constant: '<S8>/Constant4'
   *  DataStoreRead: '<S8>/Data Store Read4'
   */
  if (rtDWork.Local_Ticks == 140.0) {
    /* Sum: '<S24>/Minus' incorporates:
     *  DataStoreRead: '<S24>/Data Store Read2'
     *  DataStoreRead: '<S24>/Data Store Read3'
     */
    rtb_Gain5_h = rtDWork.delta_f_set_stored - rtDWork.delta_f_est;

    /* Sum: '<S24>/Minus1' incorporates:
     *  DataStoreRead: '<S24>/Data Store Read4'
     *  DataStoreRead: '<S24>/Data Store Read5'
     */
    speed_derivative = rtDWork.delta_a_set_stored - rtDWork.delta_a_est;

    /* DataStoreWrite: '<S24>/Data Store Write4' incorporates:
     *  DataStoreRead: '<S24>/Data Store Read6'
     *  DataStoreRead: '<S24>/Data Store Read7'
     *  DataStoreRead: '<S24>/Data Store Read8'
     *  DataStoreRead: '<S24>/Data Store Read9'
     *  Gain: '<S41>/Gain'
     *  Product: '<S41>/Multiply'
     *  Sum: '<S41>/Minus'
     *  Sum: '<S41>/Minus1'
     *  Sum: '<S41>/Minus2'
     */
    rtDWork.torque_fr_integral += (rtb_Gain5_h + rtDWork.delta_f_error_prev) *
      0.5 * (rtDWork.rx_data_time - rtDWork.rx_data_prev_time);

    /* Product: '<S39>/Divide' incorporates:
     *  DataStoreRead: '<S24>/Data Store Read6'
     *  DataStoreRead: '<S24>/Data Store Read7'
     *  DataStoreRead: '<S24>/Data Store Read9'
     *  DataStoreWrite: '<S24>/Data Store Write6'
     *  Sum: '<S39>/Minus'
     *  Sum: '<S39>/Minus1'
     */
    torque_fr_derivative = (rtb_Gain5_h - rtDWork.delta_f_error_prev) /
      (rtDWork.rx_data_time - rtDWork.rx_data_prev_time);

    /* DataStoreWrite: '<S24>/Data Store Write7' incorporates:
     *  DataStoreRead: '<S24>/Data Store Read10'
     *  DataStoreRead: '<S24>/Data Store Read11'
     *  DataStoreRead: '<S24>/Data Store Read6'
     *  DataStoreRead: '<S24>/Data Store Read7'
     *  Gain: '<S40>/Gain'
     *  Product: '<S40>/Multiply'
     *  Sum: '<S40>/Minus'
     *  Sum: '<S40>/Minus1'
     *  Sum: '<S40>/Minus2'
     */
    rtDWork.torque_ar_integral += (speed_derivative + rtDWork.delta_a_error_prev)
      * 0.5 * (rtDWork.rx_data_time - rtDWork.rx_data_prev_time);

    /* Product: '<S38>/Divide' incorporates:
     *  DataStoreRead: '<S24>/Data Store Read11'
     *  DataStoreRead: '<S24>/Data Store Read6'
     *  DataStoreRead: '<S24>/Data Store Read7'
     *  DataStoreWrite: '<S24>/Data Store Write8'
     *  Sum: '<S38>/Minus'
     *  Sum: '<S38>/Minus1'
     */
    torque_ar_derivative = (speed_derivative - rtDWork.delta_a_error_prev) /
      (rtDWork.rx_data_time - rtDWork.rx_data_prev_time);

    /* DataStoreWrite: '<S24>/Data Store Write5' */
    rtDWork.delta_f_error_prev = rtb_Gain5_h;

    /* DataStoreWrite: '<S24>/Data Store Write9' */
    rtDWork.delta_a_error_prev = speed_derivative;

    /* Sum: '<S24>/Sum' incorporates:
     *  DataStoreRead: '<S24>/Data Store Read12'
     *  DataStoreRead: '<S24>/Data Store Read13'
     *  DataStoreWrite: '<S24>/Data Store Write'
     *  Gain: '<S24>/Gain2'
     *  Gain: '<S24>/Gain3'
     *  Gain: '<S24>/Gain4'
     */
    rtDWork.torque_fr_out = (torque_f_k_p * rtb_Gain5_h + torque_f_k_i *
      rtDWork.torque_fr_integral) + torque_f_k_d * torque_fr_derivative;

    /* Sum: '<S24>/Sum1' incorporates:
     *  DataStoreRead: '<S24>/Data Store Read14'
     *  DataStoreRead: '<S24>/Data Store Read15'
     *  DataStoreWrite: '<S24>/Data Store Write2'
     *  Gain: '<S24>/Gain5'
     *  Gain: '<S24>/Gain6'
     *  Gain: '<S24>/Gain7'
     */
    rtDWork.torque_ar_out = (torque_a_k_p * speed_derivative + torque_a_k_i *
      rtDWork.torque_ar_integral) + torque_a_k_d * torque_ar_derivative;

    /* Gain: '<S24>/Gain' incorporates:
     *  DataStoreRead: '<S24>/Data Store Read'
     *  DataStoreWrite: '<S24>/Data Store Write1'
     */
    rtDWork.torque_fl_out = (-1.0) * rtDWork.torque_fr_out;

    /* Gain: '<S24>/Gain1' incorporates:
     *  DataStoreRead: '<S24>/Data Store Read1'
     *  DataStoreWrite: '<S24>/Data Store Write3'
     */
    rtDWork.torque_al_out = (-1.0) * rtDWork.torque_ar_out;
  }

  /* End of RelationalOperator: '<S8>/Equal3' */
  /* End of Outputs for SubSystem: '<S8>/Calculate torque' */

  /* Outputs for Enabled SubSystem: '<S8>/Rx_Set_Values' incorporates:
   *  EnablePort: '<S28>/Enable'
   */
  /* RelationalOperator: '<S8>/Equal' incorporates:
   *  Constant: '<S8>/Constant1'
   *  DataStoreRead: '<S8>/Data Store Read1'
   */
  if (rtDWork.Local_Ticks == 48.0) {
    /* DataStoreWrite: '<S28>/Data Store Write' incorporates:
     *  Constant: '<S28>/Constant'
     */
    rtDWork.v_set_stored = v_set;

    /* DataStoreWrite: '<S28>/Data Store Write1' incorporates:
     *  Constant: '<S28>/Constant1'
     */
    rtDWork.delta_f_set_stored = delta_f_set;

    /* DataStoreWrite: '<S28>/Data Store Write2' incorporates:
     *  Constant: '<S28>/Constant2'
     */
    rtDWork.delta_a_set_stored = delta_a_set;
  }

  /* End of RelationalOperator: '<S8>/Equal' */
  /* End of Outputs for SubSystem: '<S8>/Rx_Set_Values' */

  /* Outputs for Enabled SubSystem: '<S8>/Rx_Sensor_Values' incorporates:
   *  EnablePort: '<S27>/Enable'
   */
  /* RelationalOperator: '<S8>/Equal1' incorporates:
   *  Constant: '<S8>/Constant2'
   *  DataStoreRead: '<S8>/Data Store Read2'
   */
  if (rtDWork.Local_Ticks == 92.0) {
    /* Gain: '<S27>/Gain' incorporates:
     *  DataStoreRead: '<S27>/Data Store Read4'
     */
    rx_data_time_s = 0.0001 * rtDWork.Local_Ticks;

    /* DataStoreWrite: '<S27>/Data Store Write9' */
    rtDWork.rx_data_prev_time = rx_data_time_s;

    /* DataStoreWrite: '<S27>/Data Store Write' incorporates:
     *  DataStoreRead: '<S27>/Data Store Read8'
     */
    rtDWork.theta_fr_stored = rtDWork.theta_fr_incr;

    /* DataStoreWrite: '<S27>/Data Store Write1' incorporates:
     *  DataStoreRead: '<S27>/Data Store Read9'
     */
    rtDWork.theta_fl_stored = rtDWork.theta_fl_incr;

    /* DataStoreWrite: '<S27>/Data Store Write2' incorporates:
     *  DataStoreRead: '<S27>/Data Store Read10'
     */
    rtDWork.theta_ar_stored = rtDWork.theta_ar_incr;

    /* DataStoreWrite: '<S27>/Data Store Write3' incorporates:
     *  DataStoreRead: '<S27>/Data Store Read11'
     */
    rtDWork.theta_al_stored = rtDWork.theta_al_incr;

    /* Sum: '<S27>/Sum' incorporates:
     *  DataStoreWrite: '<S27>/Data Store Write8'
     */
    rtDWork.rx_data_time = rx_data_time_s + rtConstB.Gain1;
  }

  /* End of RelationalOperator: '<S8>/Equal1' */
  /* End of Outputs for SubSystem: '<S8>/Rx_Sensor_Values' */

  /* Outputs for Enabled SubSystem: '<S8>/Output torques' incorporates:
   *  EnablePort: '<S26>/Enable'
   */
  /* RelationalOperator: '<S8>/Equal5' incorporates:
   *  Constant: '<S8>/Constant6'
   *  DataStoreRead: '<S8>/Data Store Read6'
   */
  if (rtDWork.Local_Ticks == 240.0) {
    /* Saturate: '<S26>/Saturation' incorporates:
     *  DataStoreRead: '<S26>/Data Store Read'
     */
    if (rtDWork.torque_fr_set > 5.0) {
      rtDWork.torque_fr = 5.0;
    } else if (rtDWork.torque_fr_set < (-5.0)) {
      rtDWork.torque_fr = (-5.0);
    } else {
      rtDWork.torque_fr = rtDWork.torque_fr_set;
    }

    /* End of Saturate: '<S26>/Saturation' */

    /* Saturate: '<S26>/Saturation2' incorporates:
     *  DataStoreRead: '<S26>/Data Store Read1'
     */
    if (rtDWork.torque_ar_set > 5.0) {
      rtDWork.torque_ar = 5.0;
    } else if (rtDWork.torque_ar_set < (-5.0)) {
      rtDWork.torque_ar = (-5.0);
    } else {
      rtDWork.torque_ar = rtDWork.torque_ar_set;
    }

    /* End of Saturate: '<S26>/Saturation2' */

    /* Saturate: '<S26>/Saturation1' incorporates:
     *  DataStoreRead: '<S26>/Data Store Read2'
     */
    if (rtDWork.torque_fl_set > 5.0) {
      rtDWork.torque_fl = 5.0;
    } else if (rtDWork.torque_fl_set < (-5.0)) {
      rtDWork.torque_fl = (-5.0);
    } else {
      rtDWork.torque_fl = rtDWork.torque_fl_set;
    }

    /* End of Saturate: '<S26>/Saturation1' */

    /* Saturate: '<S26>/Saturation3' incorporates:
     *  DataStoreRead: '<S26>/Data Store Read3'
     */
    if (rtDWork.torque_al_set > 5.0) {
      rtDWork.torque_al = 5.0;
    } else if (rtDWork.torque_al_set < (-5.0)) {
      rtDWork.torque_al = (-5.0);
    } else {
      rtDWork.torque_al = rtDWork.torque_al_set;
    }

    /* End of Saturate: '<S26>/Saturation3' */
  }

  /* End of RelationalOperator: '<S8>/Equal5' */
  /* End of Outputs for SubSystem: '<S8>/Output torques' */

  /* Outputs for Enabled SubSystem: '<S8>/Vehicle emulator' incorporates:
   *  EnablePort: '<S29>/Enable'
   */
  /* RelationalOperator: '<S8>/Equal6' incorporates:
   *  Constant: '<S8>/Constant7'
   *  DataStoreRead: '<S8>/Data Store Read7'
   */
  if (rtDWork.Local_Ticks == 280.0) {
    /* Gain: '<S29>/Gain' incorporates:
     *  DataStoreRead: '<S29>/Data Store Read'
     *  Gain: '<S29>/Gain12'
     */
    torque_fr_derivative = 10.0 * rtDWork.torque_fr;

    /* Gain: '<S29>/Gain2' incorporates:
     *  DataStoreRead: '<S29>/Data Store Read1'
     *  Gain: '<S29>/Gain'
     *  Gain: '<S29>/Gain1'
     *  Sum: '<S29>/Minus'
     */
    speed_derivative = (torque_fr_derivative - 10.0 * rtDWork.torque_fl) *
      0.26666666666666666;

    /* Gain: '<S29>/Gain5' incorporates:
     *  DataStoreRead: '<S29>/Data Store Read2'
     *  DataStoreRead: '<S29>/Data Store Read3'
     *  Gain: '<S29>/Gain3'
     *  Gain: '<S29>/Gain4'
     *  Sum: '<S29>/Minus1'
     */
    rtb_Gain5_h = (10.0 * rtDWork.torque_ar - 10.0 * rtDWork.torque_al) *
      0.26666666666666666;

    /* Sum: '<S43>/Minus1' incorporates:
     *  DataStoreRead: '<S29>/Data Store Read10'
     *  DataStoreRead: '<S29>/Data Store Read11'
     *  Sum: '<S42>/Minus1'
     *  Sum: '<S44>/Minus1'
     *  Sum: '<S45>/Minus1'
     *  Sum: '<S46>/Minus1'
     *  Sum: '<S47>/Minus1'
     *  Sum: '<S48>/Minus1'
     */
    v_integral_s_tmp = rtDWork.rx_data_time - rtDWork.rx_data_prev_time;

    /* DataStoreWrite: '<S29>/Data Store Write4' incorporates:
     *  DataStoreRead: '<S29>/Data Store Read4'
     *  DataStoreRead: '<S29>/Data Store Read6'
     *  Gain: '<S43>/Gain'
     *  Product: '<S43>/Multiply'
     *  Sum: '<S43>/Minus'
     *  Sum: '<S43>/Minus1'
     *  Sum: '<S43>/Minus2'
     */
    rtDWork.delta_dot_f += (speed_derivative + rtDWork.delta_double_dot_f_prev) *
      0.5 * v_integral_s_tmp;

    /* DataStoreWrite: '<S29>/Data Store Write5' incorporates:
     *  DataStoreRead: '<S29>/Data Store Read5'
     *  DataStoreRead: '<S29>/Data Store Read7'
     *  Gain: '<S42>/Gain'
     *  Product: '<S42>/Multiply'
     *  Sum: '<S42>/Minus'
     *  Sum: '<S42>/Minus2'
     */
    rtDWork.delta_dot_a += (rtb_Gain5_h + rtDWork.delta_double_dot_a_prev) * 0.5
      * v_integral_s_tmp;

    /* DataStoreWrite: '<S29>/Data Store Write7' */
    rtDWork.delta_double_dot_f_prev = speed_derivative;

    /* DataStoreWrite: '<S29>/Data Store Write6' */
    rtDWork.delta_double_dot_a_prev = rtb_Gain5_h;

    /* Gain: '<S29>/Gain16' incorporates:
     *  DataStoreRead: '<S29>/Data Store Read20'
     *  DataStoreRead: '<S29>/Data Store Read21'
     *  DataStoreRead: '<S29>/Data Store Read22'
     *  DataStoreWrite: '<S29>/Data Store Write9'
     *  Gain: '<S29>/Gain13'
     *  Gain: '<S29>/Gain14'
     *  Gain: '<S29>/Gain15'
     *  Sum: '<S29>/Sum'
     */
    rtb_Gain5_h = (((torque_fr_derivative + 10.0 * rtDWork.torque_fl) + 10.0 *
                    rtDWork.torque_ar) + 10.0 * rtDWork.torque_al) * 0.01;

    /* DataStoreWrite: '<S29>/Data Store Write8' incorporates:
     *  DataStoreRead: '<S29>/Data Store Read16'
     *  DataStoreRead: '<S29>/Data Store Read23'
     *  DataStoreRead: '<S29>/Data Store Read24'
     *  Gain: '<S44>/Gain'
     *  Product: '<S44>/Multiply'
     *  Sum: '<S44>/Minus'
     *  Sum: '<S44>/Minus2'
     */
    rtDWork.speed_act += (rtb_Gain5_h + rtDWork.avg_force_prev) * 0.5 *
      v_integral_s_tmp;

    /* DataStoreWrite: '<S29>/Data Store Write10' incorporates:
     *  DataStoreRead: '<S29>/Data Store Read25'
     */
    rtDWork.avg_force_prev = rtb_Gain5_h;

    /* Gain: '<S29>/Gain17' incorporates:
     *  DataStoreRead: '<S29>/Data Store Read27'
     *  Gain: '<S29>/Gain18'
     */
    speed_derivative = 0.3 * rtDWork.delta_dot_f;

    /* Gain: '<S29>/Gain21' incorporates:
     *  DataStoreRead: '<S29>/Data Store Read26'
     *  DataStoreWrite: '<S29>/Data Store Write11'
     *  Gain: '<S29>/Gain17'
     *  Sum: '<S29>/Sum1'
     */
    rtb_Gain5_h = (speed_derivative + rtDWork.speed_act) * 10.0;

    /* Gain: '<S29>/Gain22' incorporates:
     *  DataStoreRead: '<S29>/Data Store Read26'
     *  DataStoreWrite: '<S29>/Data Store Write12'
     *  Sum: '<S29>/Sum2'
     */
    speed_derivative = (rtDWork.speed_act - speed_derivative) * 10.0;

    /* Gain: '<S29>/Gain19' incorporates:
     *  DataStoreRead: '<S29>/Data Store Read29'
     *  Gain: '<S29>/Gain20'
     */
    torque_ar_derivative = 0.3 * rtDWork.delta_dot_a;

    /* Gain: '<S29>/Gain24' incorporates:
     *  DataStoreRead: '<S29>/Data Store Read26'
     *  DataStoreWrite: '<S29>/Data Store Write13'
     *  Gain: '<S29>/Gain19'
     *  Sum: '<S29>/Sum3'
     */
    torque_fr_derivative = (torque_ar_derivative + rtDWork.speed_act) * 10.0;

    /* Gain: '<S29>/Gain23' incorporates:
     *  DataStoreRead: '<S29>/Data Store Read26'
     *  DataStoreWrite: '<S29>/Data Store Write14'
     *  Sum: '<S29>/Sum4'
     */
    torque_ar_derivative = (rtDWork.speed_act - torque_ar_derivative) * 10.0;

    /* Sum: '<S48>/Minus2' incorporates:
     *  DataStoreRead: '<S29>/Data Store Read31'
     *  DataStoreRead: '<S29>/Data Store Read32'
     *  DataStoreRead: '<S29>/Data Store Read33'
     *  Gain: '<S48>/Gain'
     *  Product: '<S48>/Multiply'
     *  Sum: '<S48>/Minus'
     */
    theta_fr_s = (rtb_Gain5_h + rtDWork.theta_dot_fr_prev_ve) * 0.5 *
      v_integral_s_tmp + rtDWork.theta_fr;

    /* DataStoreWrite: '<S29>/Data Store Write' */
    rtDWork.theta_fr = theta_fr_s;

    /* Sum: '<S47>/Minus2' incorporates:
     *  DataStoreRead: '<S29>/Data Store Read34'
     *  DataStoreRead: '<S29>/Data Store Read35'
     *  DataStoreRead: '<S29>/Data Store Read36'
     *  Gain: '<S47>/Gain'
     *  Product: '<S47>/Multiply'
     *  Sum: '<S47>/Minus'
     */
    theta_fl_s = (speed_derivative + rtDWork.theta_dot_fl_prev_ve) * 0.5 *
      v_integral_s_tmp + rtDWork.theta_fl;

    /* DataStoreWrite: '<S29>/Data Store Write1' */
    rtDWork.theta_fl = theta_fl_s;

    /* Sum: '<S46>/Minus2' incorporates:
     *  DataStoreRead: '<S29>/Data Store Read37'
     *  DataStoreRead: '<S29>/Data Store Read38'
     *  DataStoreRead: '<S29>/Data Store Read39'
     *  Gain: '<S46>/Gain'
     *  Product: '<S46>/Multiply'
     *  Sum: '<S46>/Minus'
     */
    theta_ar_s = (torque_fr_derivative + rtDWork.theta_dot_ar_prev_ve) * 0.5 *
      v_integral_s_tmp + rtDWork.theta_ar;

    /* DataStoreWrite: '<S29>/Data Store Write2' */
    rtDWork.theta_ar = theta_ar_s;

    /* Sum: '<S45>/Minus2' incorporates:
     *  DataStoreRead: '<S29>/Data Store Read40'
     *  DataStoreRead: '<S29>/Data Store Read41'
     *  DataStoreRead: '<S29>/Data Store Read42'
     *  Gain: '<S45>/Gain'
     *  Product: '<S45>/Multiply'
     *  Sum: '<S45>/Minus'
     */
    theta_al_s = (torque_ar_derivative + rtDWork.theta_dot_al_prev_ve) * 0.5 *
      v_integral_s_tmp + rtDWork.theta_al;

    /* DataStoreWrite: '<S29>/Data Store Write3' */
    rtDWork.theta_al = theta_al_s;

    /* DataStoreWrite: '<S29>/Data Store Write15' incorporates:
     *  DataStoreRead: '<S29>/Data Store Read43'
     */
    rtDWork.theta_dot_fr_prev_ve = rtb_Gain5_h;

    /* DataStoreWrite: '<S29>/Data Store Write16' incorporates:
     *  DataStoreRead: '<S29>/Data Store Read44'
     */
    rtDWork.theta_dot_fl_prev_ve = speed_derivative;

    /* DataStoreWrite: '<S29>/Data Store Write17' incorporates:
     *  DataStoreRead: '<S29>/Data Store Read45'
     */
    rtDWork.theta_dot_ar_prev_ve = torque_fr_derivative;

    /* DataStoreWrite: '<S29>/Data Store Write18' incorporates:
     *  DataStoreRead: '<S29>/Data Store Read46'
     */
    rtDWork.theta_dot_al_prev_ve = torque_ar_derivative;

    /* Sum: '<S29>/Minus2' incorporates:
     *  DataStoreRead: '<S29>/Data Store Read17'
     *  DataStoreRead: '<S29>/Data Store Read9'
     *  DataStoreWrite: '<S29>/Data Store Write20'
     */
    rtDWork.theta_fr_incr = rtDWork.theta_fr - rtDWork.theta_fr_prev;

    /* Sum: '<S29>/Minus3' incorporates:
     *  DataStoreRead: '<S29>/Data Store Read18'
     *  DataStoreRead: '<S29>/Data Store Read48'
     *  DataStoreWrite: '<S29>/Data Store Write22'
     */
    rtDWork.theta_fl_incr = rtDWork.theta_fl - rtDWork.theta_fl_prev;

    /* Sum: '<S29>/Minus4' incorporates:
     *  DataStoreRead: '<S29>/Data Store Read49'
     *  DataStoreRead: '<S29>/Data Store Read51'
     *  DataStoreWrite: '<S29>/Data Store Write24'
     */
    rtDWork.theta_ar_incr = rtDWork.theta_ar - rtDWork.theta_ar_prev;

    /* Sum: '<S29>/Minus5' incorporates:
     *  DataStoreRead: '<S29>/Data Store Read52'
     *  DataStoreRead: '<S29>/Data Store Read54'
     *  DataStoreWrite: '<S29>/Data Store Write26'
     */
    rtDWork.theta_al_incr = rtDWork.theta_al - rtDWork.theta_al_prev;

    /* DataStoreWrite: '<S29>/Data Store Write19' incorporates:
     *  DataStoreRead: '<S29>/Data Store Read8'
     */
    rtDWork.theta_fr_prev = rtDWork.theta_fr;

    /* DataStoreWrite: '<S29>/Data Store Write21' incorporates:
     *  DataStoreRead: '<S29>/Data Store Read47'
     */
    rtDWork.theta_fl_prev = rtDWork.theta_fl;

    /* DataStoreWrite: '<S29>/Data Store Write23' incorporates:
     *  DataStoreRead: '<S29>/Data Store Read50'
     */
    rtDWork.theta_ar_prev = rtDWork.theta_ar;

    /* DataStoreWrite: '<S29>/Data Store Write25' incorporates:
     *  DataStoreRead: '<S29>/Data Store Read53'
     */
    rtDWork.theta_al_prev = rtDWork.theta_al;
  }

  /* End of RelationalOperator: '<S8>/Equal6' */
  /* End of Outputs for SubSystem: '<S8>/Vehicle emulator' */
  if (rtM->Timing.TaskCounters.TID[3] == 0) {
    /* DigitalClock: '<S8>/Digital Clock' */
    simulation_time = (((rtM->Timing.clockTick3+rtM->Timing.clockTickH3*
                         4294967296.0)) * 1.0);
  }

  if (rtM->Timing.TaskCounters.TID[1] == 0) {
    /* UnitDelay: '<S10>/Output' */
    rtb_Output = rtDWork.Output_DSTATE;

    /* Sum: '<S12>/FixPt Sum1' incorporates:
     *  Constant: '<S12>/FixPt Constant'
     *  UnitDelay: '<S10>/Output'
     */
    rtb_FixPtSum1 = (uint8_T)((uint32_T)rtDWork.Output_DSTATE + ((uint8_T)1U));

    /* Switch: '<S13>/FixPt Switch' incorporates:
     *  Constant: '<S13>/Constant'
     */
    if (rtb_FixPtSum1 > ((uint8_T)1U)) {
      rtb_FixPtSum1 = ((uint8_T)0U);
    }

    /* End of Switch: '<S13>/FixPt Switch' */
  }

  if (rtM->Timing.TaskCounters.TID[2] == 0) {
    /* UnitDelay: '<S11>/Output' */
    rtB.Output = rtDWork.Output_DSTATE_k;

    /* Sum: '<S14>/FixPt Sum1' incorporates:
     *  Constant: '<S14>/FixPt Constant'
     */
    rtb_FixPtSum1_b = (uint8_T)((uint32_T)rtB.Output + ((uint8_T)1U));

    /* Switch: '<S15>/FixPt Switch' incorporates:
     *  Constant: '<S15>/Constant'
     */
    if (rtb_FixPtSum1_b > ((uint8_T)1U)) {
      rtb_FixPtSum1_b = ((uint8_T)0U);
    }

    /* End of Switch: '<S15>/FixPt Switch' */
  }

  if (rtM->Timing.TaskCounters.TID[1] == 0) {
    /* M-S-Function: '<S16>/Level-2 M-file S-Function' */
    /* read from digital input */
    rtb_Level2MfileSFunction = DiginGet(DIGIN_PORTA_PIN0);

    /* Switch: '<S2>/Switch' incorporates:
     *  Constant: '<S2>/Constant'
     *  Logic: '<S2>/Logical Operator'
     */
    if (HANtuneOverride || rtb_Level2MfileSFunction) {
      /* DataTypeConversion: '<S2>/Data Type Conversion' */
      LedValue = (rtb_Output != 0);
    } else {
      /* DataTypeConversion: '<S2>/Data Type Conversion' */
      LedValue = (rtB.Output != 0);
    }

    /* End of Switch: '<S2>/Switch' */
  }

  /* M-S-Function: '<S18>/Level-2 M-file S-Function' */
  /* read the current CPU load */
  SI_CPUload = OsGetCpuLoad();

  /* M-S-Function: '<S19>/Level-2 M-file S-Function' */
  /* read the free heap size */
  SI_FreeHeap = OsGetFreeHeapSize();

  /* M-S-Function: '<S20>/Level-2 M-file S-Function' */
  /* read the task's free stack size */
  SI_FreeStack = OsGetTaskFreeStackSize("AppCtrlTask");
  if (rtM->Timing.TaskCounters.TID[1] == 0) {
    /* Update for M-S-Function: '<S17>/Level-2 M-file S-Function' */
    /* update digital output */
    if (LedValue == 0) {
      DigoutSet(DIGOUT_PORTC_PIN13, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTC_PIN13, DIGOUT_HIGH);
    }

    /* Update for UnitDelay: '<S10>/Output' */
    rtDWork.Output_DSTATE = rtb_FixPtSum1;
  }

  if (rtM->Timing.TaskCounters.TID[2] == 0) {
    /* Update for UnitDelay: '<S11>/Output' */
    rtDWork.Output_DSTATE_k = rtb_FixPtSum1_b;
  }

  if (rtM->Timing.TaskCounters.TID[3] == 0) {
    /* Update absolute timer for sample time: [1.0s, 0.0s] */
    /* The "clockTick3" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 1.0, which is the step size
     * of the task. Size of "clockTick3" ensures timer will not overflow during the
     * application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick3 and the high bits
     * Timing.clockTickH3. When the low bit overflows to 0, the high bits increment.
     */
    rtM->Timing.clockTick3++;
    if (!rtM->Timing.clockTick3) {
      rtM->Timing.clockTickH3++;
    }
  }

  rate_scheduler();
}

/* Model initialize function */
void Controller_ValueDomain_TEST_initialize(void)
{
  /* Start for DataStoreMemory: '<S8>/Data Store Memory18' */
  rtDWork.rx_data_time = 1.0;

  /* Start for M-S-Function: '<S17>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTC_PIN13, DIGOUT_CFG_PUSHPULL);

  /* Start for M-S-Function: '<S16>/Level-2 M-file S-Function' */

  /* configure the digital input */
  DiginConfigure(DIGIN_PORTA_PIN0, DIGIN_CFG_PULLDOWN);

  /* Start for M-S-Function: '<S3>/Level-2 M-file S-Function' */

  /* configure the stack size for the task that executes the model */
  AppCtrlTaskSetStackSize((configMINIMAL_STACK_SIZE*sizeof(portBASE_TYPE)) + 0);

  /* configure the sample time of the model in microseconds */
  AppCtrlTaskSetPeriod(1000);

  /* Run the ADC conversions ten times faster than the Simulink model */
  ADCconversionTaskSetPeriod(1000/10);

  /* Start for M-S-Function: '<S9>/Level-2 M-file S-Function' */

  /* initialize the measurement and calibration interface */
  MacUsbComInit();
  MacInit();
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
