/*
 * float2uint8_code_decode_TEST_private.h
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

#ifndef RTW_HEADER_float2uint8_code_decode_TEST_private_h_
#define RTW_HEADER_float2uint8_code_decode_TEST_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "float2uint8_code_decode_TEST.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

extern real_T rt_powd_snf(real_T u0, real_T u1);
extern void float2uint8_code_decod_BitShift(uint8_T rtu_u,
  B_BitShift_float2uint8_code_d_T *localB);

#endif                                 /* RTW_HEADER_float2uint8_code_decode_TEST_private_h_ */
