/*
 * float2uint8_code_decode_TEST.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "float2uint8_code_decode_TEST".
 *
 * Model version              : 1.4
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Tue Feb 15 08:42:01 2022
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "float2uint8_code_decode_TEST.h"
#include "float2uint8_code_decode_TEST_private.h"

/* Block signals (default storage) */
B_float2uint8_code_decode_TES_T float2uint8_code_decode_TEST_B;

/* Real-time model */
RT_MODEL_float2uint8_code_dec_T float2uint8_code_decode_TEST_M_;
RT_MODEL_float2uint8_code_dec_T *const float2uint8_code_decode_TEST_M =
  &float2uint8_code_decode_TEST_M_;

/*
 * Output and update for atomic system:
 *    '<S1>/Bit Shift'
 *    '<S2>/Bit Shift1'
 */
void float2uint8_code_decod_BitShift(uint8_T rtu_u,
  B_BitShift_float2uint8_code_d_T *localB)
{
  /* MATLAB Function: '<S3>/bit_shift' */
  localB->y = (uint8_T)(rtu_u << 7);
}

real_T rt_powd_snf(real_T u0, real_T u1)
{
  real_T y;
  real_T tmp;
  real_T tmp_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else {
    tmp = fabs(u0);
    tmp_0 = fabs(u1);
    if (rtIsInf(u1)) {
      if (tmp == 1.0) {
        y = 1.0;
      } else if (tmp > 1.0) {
        if (u1 > 0.0) {
          y = (rtInf);
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = (rtInf);
      }
    } else if (tmp_0 == 0.0) {
      y = 1.0;
    } else if (tmp_0 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = (rtNaN);
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

/* Model step function */
void float2uint8_code_decode_TEST_step(void)
{
  boolean_T rtb_LessThanOrEqual2;
  real_T rtb_Fix1;
  real_T rtb_Multiply;
  real_T rtb_Minus;

  /* Switch: '<S1>/Switch2' incorporates:
   *  Constant: '<Root>/Constant1'
   *  Constant: '<Root>/Constant2'
   *  Constant: '<Root>/magnitude'
   *  RelationalOperator: '<S1>/LessThanOrEqual1'
   *  RelationalOperator: '<S1>/LessThanOrEqual2'
   *  Switch: '<S1>/Switch1'
   */
  if (float2uint8_code_decode_TEST_P.Constant1_Value <
      float2uint8_code_decode_TEST_P.magnitude_Value) {
    /* Switch: '<S1>/Switch' */
    rtb_Fix1 = float2uint8_code_decode_TEST_P.Constant1_Value;
  } else if (float2uint8_code_decode_TEST_P.magnitude_Value >=
             float2uint8_code_decode_TEST_P.Constant2_Value) {
    /* Switch: '<S1>/Switch1' */
    rtb_Fix1 = float2uint8_code_decode_TEST_P.magnitude_Value;
  } else {
    rtb_Fix1 = float2uint8_code_decode_TEST_P.Constant2_Value;
  }

  /* End of Switch: '<S1>/Switch2' */

  /* RelationalOperator: '<S1>/GreaterThan' incorporates:
   *  Constant: '<S1>/Constant'
   */
  rtb_LessThanOrEqual2 = (rtb_Fix1 <
    float2uint8_code_decode_TEST_P.Constant_Value_f);

  /* Abs: '<S1>/Abs' */
  rtb_Fix1 = fabs(rtb_Fix1);

  /* Rounding: '<S1>/Fix' */
  rtb_Multiply = trunc(rtb_Fix1);

  /* Sum: '<S1>/Minus' */
  rtb_Minus = rtb_Fix1 - rtb_Multiply;

  /* Gain: '<S1>/Gain' incorporates:
   *  Constant: '<Root>/Constant'
   */
  rtb_Fix1 = float2uint8_code_decode_TEST_P.Gain_Gain *
    float2uint8_code_decode_TEST_P.Constant_Value;

  /* Math: '<S1>/Power' incorporates:
   *  Constant: '<S1>/Constant1'
   */
  if ((float2uint8_code_decode_TEST_P.Constant1_Value_n < 0.0) && (rtb_Fix1 >
       floor(rtb_Fix1))) {
    rtb_Fix1 = -rt_powd_snf(-float2uint8_code_decode_TEST_P.Constant1_Value_n,
      rtb_Fix1);
  } else {
    rtb_Fix1 = rt_powd_snf(float2uint8_code_decode_TEST_P.Constant1_Value_n,
      rtb_Fix1);
  }

  /* End of Math: '<S1>/Power' */

  /* Product: '<S1>/Divide' */
  rtb_Fix1 = rtb_Minus / rtb_Fix1;

  /* Rounding: '<S1>/Fix1' */
  rtb_Fix1 = trunc(rtb_Fix1);

  /* Outputs for Atomic SubSystem: '<S1>/Bit Shift' */
  /* DataTypeConversion: '<S1>/Cast' */
  float2uint8_code_decod_BitShift((uint8_T)rtb_LessThanOrEqual2,
    &float2uint8_code_decode_TEST_B.BitShift);

  /* End of Outputs for SubSystem: '<S1>/Bit Shift' */

  /* Math: '<S1>/Power1' incorporates:
   *  Constant: '<Root>/Constant'
   *  Constant: '<S1>/Constant2'
   */
  if ((float2uint8_code_decode_TEST_P.Constant2_Value_b < 0.0) &&
      (float2uint8_code_decode_TEST_P.Constant_Value > floor
       (float2uint8_code_decode_TEST_P.Constant_Value))) {
    rtb_Minus = -rt_powd_snf(-float2uint8_code_decode_TEST_P.Constant2_Value_b,
      float2uint8_code_decode_TEST_P.Constant_Value);
  } else {
    rtb_Minus = rt_powd_snf(float2uint8_code_decode_TEST_P.Constant2_Value_b,
      float2uint8_code_decode_TEST_P.Constant_Value);
  }

  /* End of Math: '<S1>/Power1' */

  /* Product: '<S1>/Multiply' */
  rtb_Multiply *= rtb_Minus;

  /* DataTypeConversion: '<S1>/Cast1' */
  rtb_Minus = floor(rtb_Multiply);
  if (rtIsNaN(rtb_Minus) || rtIsInf(rtb_Minus)) {
    rtb_Minus = 0.0;
  } else {
    rtb_Minus = fmod(rtb_Minus, 256.0);
  }

  /* DataTypeConversion: '<S1>/Cast2' */
  if (rtIsNaN(rtb_Fix1) || rtIsInf(rtb_Fix1)) {
    rtb_Fix1 = 0.0;
  } else {
    rtb_Fix1 = fmod(rtb_Fix1, 256.0);
  }

  /* Outputs for Atomic SubSystem: '<S2>/Bit Shift1' */
  /* Outputs for Atomic SubSystem: '<S2>/Bit Shift' */
  /* MATLAB Function: '<S5>/bit_shift' incorporates:
   *  DataTypeConversion: '<S1>/Cast1'
   *  DataTypeConversion: '<S1>/Cast2'
   *  Sum: '<S1>/Plus'
   */
  float2uint8_code_decod_BitShift((uint8_T)((uint32_T)(uint8_T)((uint32_T)
    (uint8_T)((uint32_T)float2uint8_code_decode_TEST_B.BitShift.y + (rtb_Minus <
    0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-rtb_Minus : (int32_T)(uint8_T)
    rtb_Minus)) + (rtb_Fix1 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)
                   -rtb_Fix1 : (int32_T)(uint8_T)rtb_Fix1)) >> 7),
    &float2uint8_code_decode_TEST_B.BitShift1);

  /* End of Outputs for SubSystem: '<S2>/Bit Shift' */
  /* End of Outputs for SubSystem: '<S2>/Bit Shift1' */

  /* Matfile logging */
  rt_UpdateTXYLogVars(float2uint8_code_decode_TEST_M->rtwLogInfo,
                      (&float2uint8_code_decode_TEST_M->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.2s, 0.0s] */
    if ((rtmGetTFinal(float2uint8_code_decode_TEST_M)!=-1) &&
        !((rtmGetTFinal(float2uint8_code_decode_TEST_M)-
           float2uint8_code_decode_TEST_M->Timing.taskTime0) >
          float2uint8_code_decode_TEST_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(float2uint8_code_decode_TEST_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++float2uint8_code_decode_TEST_M->Timing.clockTick0)) {
    ++float2uint8_code_decode_TEST_M->Timing.clockTickH0;
  }

  float2uint8_code_decode_TEST_M->Timing.taskTime0 =
    float2uint8_code_decode_TEST_M->Timing.clockTick0 *
    float2uint8_code_decode_TEST_M->Timing.stepSize0 +
    float2uint8_code_decode_TEST_M->Timing.clockTickH0 *
    float2uint8_code_decode_TEST_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void float2uint8_code_decode_TEST_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)float2uint8_code_decode_TEST_M, 0,
                sizeof(RT_MODEL_float2uint8_code_dec_T));
  rtmSetTFinal(float2uint8_code_decode_TEST_M, 10.0);
  float2uint8_code_decode_TEST_M->Timing.stepSize0 = 0.2;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    float2uint8_code_decode_TEST_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(float2uint8_code_decode_TEST_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(float2uint8_code_decode_TEST_M->rtwLogInfo, (NULL));
    rtliSetLogT(float2uint8_code_decode_TEST_M->rtwLogInfo, "tout");
    rtliSetLogX(float2uint8_code_decode_TEST_M->rtwLogInfo, "");
    rtliSetLogXFinal(float2uint8_code_decode_TEST_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(float2uint8_code_decode_TEST_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(float2uint8_code_decode_TEST_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(float2uint8_code_decode_TEST_M->rtwLogInfo, 0);
    rtliSetLogDecimation(float2uint8_code_decode_TEST_M->rtwLogInfo, 1);
    rtliSetLogY(float2uint8_code_decode_TEST_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(float2uint8_code_decode_TEST_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(float2uint8_code_decode_TEST_M->rtwLogInfo, (NULL));
  }

  /* block I/O */
  (void) memset(((void *) &float2uint8_code_decode_TEST_B), 0,
                sizeof(B_float2uint8_code_decode_TES_T));

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(float2uint8_code_decode_TEST_M->rtwLogInfo,
    0.0, rtmGetTFinal(float2uint8_code_decode_TEST_M),
    float2uint8_code_decode_TEST_M->Timing.stepSize0, (&rtmGetErrorStatus
    (float2uint8_code_decode_TEST_M)));
}

/* Model terminate function */
void float2uint8_code_decode_TEST_terminate(void)
{
  /* (no terminate code required) */
}
