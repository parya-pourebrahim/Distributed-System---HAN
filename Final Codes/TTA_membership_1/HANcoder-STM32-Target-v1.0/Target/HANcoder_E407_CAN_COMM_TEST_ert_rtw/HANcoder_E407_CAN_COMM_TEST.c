/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_CAN_COMM_TEST.c
 *
 * Code generated for Simulink model 'HANcoder_E407_CAN_COMM_TEST'.
 *
 * Model version                  : 1.124
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Feb 15 08:35:59 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->32-bit Embedded Processor
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "HANcoder_E407_CAN_COMM_TEST.h"
#include "HANcoder_E407_CAN_COMM_TEST_private.h"

/* map ByteSwap function */
#define ByteSwap(x)                    (ByteSwap_x((uint8_t *) &x, sizeof(x)))

/* Exported block signals */
real_T Rx_Buffer_1_CAN1;               /* '<S25>/Switch' */
real_T Rx_Buffer_8_CAN1;               /* '<S32>/Switch' */
real_T Rx_Buffer_2_CAN1;               /* '<S33>/Switch' */
real_T Rx_Buffer_3_CAN1;               /* '<S34>/Switch' */
real_T Rx_Buffer_4_CAN1;               /* '<S35>/Switch' */
real_T Rx_Buffer_5_CAN1;               /* '<S36>/Switch' */
real_T Rx_Buffer_6_CAN1;               /* '<S37>/Switch' */
real_T Rx_Buffer_7_CAN1;               /* '<S38>/Switch' */
real_T Rx_Buffer_5_CAN2;               /* '<S26>/Switch' */
real_T Rx_Buffer_4_CAN2;               /* '<S27>/Switch' */
real_T Rx_Buffer_3_CAN2;               /* '<S28>/Switch' */
real_T Rx_Buffer_2_CAN2;               /* '<S29>/Switch' */
real_T Rx_Buffer_7_CAN2;               /* '<S30>/Switch' */
real_T Rx_Buffer_1_CAN2;               /* '<S31>/Switch' */
real_T Rx_Buffer_8_CAN2;               /* '<S39>/Switch' */
real_T Rx_Buffer_6_CAN2;               /* '<S40>/Switch' */
uint32_T SI_FreeHeap;                  /* '<S108>/Level-2 M-file S-Function' */
uint32_T SI_FreeStack;                 /* '<S109>/Level-2 M-file S-Function' */
uint32_T constant_ID_TXCAN1;           /* '<S12>/Data Type Conversion3' */
uint32_T constant_ID_TXCAN2;           /* '<S12>/Data Type Conversion4' */
uint32_T Tx_ID_CAN1_s;                 /* '<S12>/Data Type Conversion1' */
uint32_T Tx_ID_CAN2_s;                 /* '<S12>/Data Type Conversion2' */
uint32_T constant_ID_RXCAN1;           /* '<S10>/Cast' */
uint32_T constant_ID_RXCAN2;           /* '<S10>/Cast1' */
uint32_T Rx_ID_CAN2_s;                 /* '<S10>/Constant1' */
uint32_T Rx_ID_CAN1_s;                 /* '<S10>/Constant2' */
uint8_T SI_CPUload;                    /* '<S107>/Level-2 M-file S-Function' */
uint8_T Tx_coded5_CAN1;                /* '<S112>/Plus' */
uint8_T Tx_coded6_CAN1;                /* '<S120>/Plus' */
uint8_T Tx_coded4_CAN1;                /* '<S121>/Plus' */
uint8_T Tx_coded7_CAN1;                /* '<S122>/Plus' */
uint8_T Tx_coded8_CAN1;                /* '<S123>/Plus' */
uint8_T Tx_coded3_CAN1;                /* '<S124>/Plus' */
uint8_T Tx_coded2_CAN1;                /* '<S125>/Plus' */
uint8_T Tx_coded1_CAN1;                /* '<S126>/Plus' */
uint8_T Tx_coded2_CAN2;                /* '<S113>/Plus' */
uint8_T Tx_coded3_CAN2;                /* '<S114>/Plus' */
uint8_T Tx_coded4_CAN2;                /* '<S115>/Plus' */
uint8_T Tx_coded5_CAN2;                /* '<S116>/Plus' */
uint8_T Tx_coded6_CAN2;                /* '<S117>/Plus' */
uint8_T Tx_coded7_CAN2;                /* '<S118>/Plus' */
uint8_T Tx_coded8_CAN2;                /* '<S119>/Plus' */
uint8_T Tx_coded1_CAN2;                /* '<S127>/Plus' */
uint8_T Rx_coded1_CAN2;                /* '<S42>/In1' */
uint8_T Rx_coded2_CAN2;                /* '<S42>/In2' */
uint8_T Rx_coded3_CAN2;                /* '<S42>/In3' */
uint8_T Rx_coded4_CAN2;                /* '<S42>/In4' */
uint8_T Rx_coded5_CAN2;                /* '<S42>/In5' */
uint8_T Rx_coded6_CAN2;                /* '<S42>/In6' */
uint8_T Rx_coded7_CAN2;                /* '<S42>/In7' */
uint8_T Rx_coded8_CAN2;                /* '<S42>/In8' */
uint8_T Rx_coded1_CAN1;                /* '<S41>/In1' */
uint8_T Rx_coded2_CAN1;                /* '<S41>/In2' */
uint8_T Rx_coded3_CAN1;                /* '<S41>/In3' */
uint8_T Rx_coded4_CAN1;                /* '<S41>/In4' */
uint8_T Rx_coded5_CAN1;                /* '<S41>/In5' */
uint8_T Rx_coded6_CAN1;                /* '<S41>/In6' */
uint8_T Rx_coded7_CAN1;                /* '<S41>/In7' */
uint8_T Rx_coded8_CAN1;                /* '<S41>/In8' */
int8_T new_CAN1;                       /* '<S23>/S-Function' */
int8_T new_CAN2;                       /* '<S24>/S-Function' */
boolean_T WKUP_button;                 /* '<S21>/Level-2 M-file S-Function' */
boolean_T receiver_id;                 /* '<S7>/Level-2 M-file S-Function' */
boolean_T sender_id;                   /* '<S6>/Level-2 M-file S-Function' */
boolean_T LedValue;                    /* '<S2>/Data Type Conversion' */
boolean_T OF5_CAN1;                    /* '<S112>/LessThanOrEqual' */
boolean_T OF6_CAN1;                    /* '<S120>/LessThanOrEqual' */
boolean_T OF4_CAN1;                    /* '<S121>/LessThanOrEqual' */
boolean_T OF7_CAN1;                    /* '<S122>/LessThanOrEqual' */
boolean_T OF8_CAN1;                    /* '<S123>/LessThanOrEqual' */
boolean_T OF3_CAN1;                    /* '<S124>/LessThanOrEqual' */
boolean_T OF2_CAN1;                    /* '<S125>/LessThanOrEqual' */
boolean_T OF1_CAN1;                    /* '<S126>/LessThanOrEqual' */
boolean_T OF2_CAN2;                    /* '<S113>/LessThanOrEqual' */
boolean_T OF3_CAN2;                    /* '<S114>/LessThanOrEqual' */
boolean_T OF4_CAN2;                    /* '<S115>/LessThanOrEqual' */
boolean_T OF5_CAN2;                    /* '<S116>/LessThanOrEqual' */
boolean_T OF6_CAN2;                    /* '<S117>/LessThanOrEqual' */
boolean_T OF7_CAN2;                    /* '<S118>/LessThanOrEqual' */
boolean_T OF8_CAN2;                    /* '<S119>/LessThanOrEqual' */
boolean_T OF1_CAN2;                    /* '<S127>/LessThanOrEqual' */

/* Exported block parameters */
real_T Tx_Buffer_1_CAN1 = 0.0;         /* Variable: Tx_Buffer_1_CAN1
                                        * Referenced by: '<S12>/magnitude'
                                        */
real_T Tx_Buffer_1_CAN2 = 0.0;         /* Variable: Tx_Buffer_1_CAN2
                                        * Referenced by: '<S12>/magnitude8'
                                        */
real_T Tx_Buffer_2_CAN1 = 0.0;         /* Variable: Tx_Buffer_2_CAN1
                                        * Referenced by: '<S12>/magnitude1'
                                        */
real_T Tx_Buffer_2_CAN2 = 0.0;         /* Variable: Tx_Buffer_2_CAN2
                                        * Referenced by: '<S12>/magnitude9'
                                        */
real_T Tx_Buffer_3_CAN1 = 0.0;         /* Variable: Tx_Buffer_3_CAN1
                                        * Referenced by: '<S12>/magnitude2'
                                        */
real_T Tx_Buffer_3_CAN2 = 0.0;         /* Variable: Tx_Buffer_3_CAN2
                                        * Referenced by: '<S12>/magnitude10'
                                        */
real_T Tx_Buffer_4_CAN1 = 0.0;         /* Variable: Tx_Buffer_4_CAN1
                                        * Referenced by: '<S12>/magnitude3'
                                        */
real_T Tx_Buffer_4_CAN2 = 0.0;         /* Variable: Tx_Buffer_4_CAN2
                                        * Referenced by: '<S12>/magnitude11'
                                        */
real_T Tx_Buffer_5_CAN1 = 0.0;         /* Variable: Tx_Buffer_5_CAN1
                                        * Referenced by: '<S12>/magnitude4'
                                        */
real_T Tx_Buffer_5_CAN2 = 0.0;         /* Variable: Tx_Buffer_5_CAN2
                                        * Referenced by: '<S12>/magnitude12'
                                        */
real_T Tx_Buffer_6_CAN1 = 0.0;         /* Variable: Tx_Buffer_6_CAN1
                                        * Referenced by: '<S12>/magnitude5'
                                        */
real_T Tx_Buffer_6_CAN2 = 0.0;         /* Variable: Tx_Buffer_6_CAN2
                                        * Referenced by: '<S12>/magnitude13'
                                        */
real_T Tx_Buffer_7_CAN1 = 0.0;         /* Variable: Tx_Buffer_7_CAN1
                                        * Referenced by: '<S12>/magnitude6'
                                        */
real_T Tx_Buffer_7_CAN2 = 0.0;         /* Variable: Tx_Buffer_7_CAN2
                                        * Referenced by: '<S12>/magnitude14'
                                        */
real_T Tx_Buffer_8_CAN1 = 0.0;         /* Variable: Tx_Buffer_8_CAN1
                                        * Referenced by: '<S12>/magnitude7'
                                        */
real_T Tx_Buffer_8_CAN2 = 0.0;         /* Variable: Tx_Buffer_8_CAN2
                                        * Referenced by: '<S12>/magnitude15'
                                        */
real_T Tx_ID_CAN1 = 0.0;               /* Variable: Tx_ID_CAN1
                                        * Referenced by: '<S12>/Constant'
                                        */
real_T Tx_ID_CAN2 = 0.0;               /* Variable: Tx_ID_CAN2
                                        * Referenced by: '<S12>/Constant1'
                                        */
real_T Tx_Max_CAN1 = 0.0;              /* Variable: Tx_Max_CAN1
                                        * Referenced by: '<S12>/Constant2'
                                        */
real_T Tx_Max_CAN2 = 0.0;              /* Variable: Tx_Max_CAN2
                                        * Referenced by: '<S12>/Constant5'
                                        */
real_T Tx_Min_CAN1 = 0.0;              /* Variable: Tx_Min_CAN1
                                        * Referenced by: '<S12>/Constant3'
                                        */
real_T Tx_Min_CAN2 = 0.0;              /* Variable: Tx_Min_CAN2
                                        * Referenced by: '<S12>/Constant6'
                                        */
real_T precision_CAN1 = 0.0;           /* Variable: precision_CAN1
                                        * Referenced by:
                                        *   '<S10>/Constant3'
                                        *   '<S12>/Constant4'
                                        */
real_T precision_CAN2 = 0.0;           /* Variable: precision_CAN2
                                        * Referenced by:
                                        *   '<S10>/Constant4'
                                        *   '<S12>/Constant7'
                                        */
uint32_T Rx_ID_CAN1 = 0U;              /* Variable: Rx_ID_CAN1
                                        * Referenced by: '<S10>/Constant2'
                                        */
uint32_T Rx_ID_CAN2 = 0U;              /* Variable: Rx_ID_CAN2
                                        * Referenced by: '<S10>/Constant1'
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
static tCanDataTypes canRxData_0_constant_ID_RXCAN1;
static tCanDataTypes canRxData_1_constant_ID_RXCAN2;
static tCanDataTypes canTxData;

/*
 * Swaps the values of two bytes.
 * a, b pointers to data values that need swapping
 */
static void swap(unsigned char *a, unsigned char *b)
{
  register char i = *a;
  *a = *b;
  *b = i;
}                                      /*** end of swap ***/

/*
 * Swaps all bytes in b. Typically used to fix endianes.
 * b pointer to data with bytes to swap
 * n number of bytes to swap
 */
void ByteSwap_x(uint8_t *b, size_t n)
{
  int i = 0;
  int j = n-1;
  while (i<j) {
    swap(&b[i], &b[j]);
    i++, j--;
  }
}

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
  if ((rtM->Timing.TaskCounters.TID[1]) > 9) {/* Sample time: [0.1s, 0.0s] */
    rtM->Timing.TaskCounters.TID[1] = 0;
  }

  (rtM->Timing.TaskCounters.TID[2])++;
  if ((rtM->Timing.TaskCounters.TID[2]) > 19) {/* Sample time: [0.2s, 0.0s] */
    rtM->Timing.TaskCounters.TID[2] = 0;
  }
}

/*
 * Output and update for atomic system:
 *    '<S25>/Bit Shift'
 *    '<S26>/Bit Shift'
 *    '<S27>/Bit Shift'
 *    '<S28>/Bit Shift'
 *    '<S29>/Bit Shift'
 *    '<S30>/Bit Shift'
 *    '<S31>/Bit Shift'
 *    '<S32>/Bit Shift'
 *    '<S33>/Bit Shift'
 *    '<S34>/Bit Shift'
 *    ...
 */
void BitShift(uint8_T rtu_u, rtB_BitShift *localB)
{
  /* MATLAB Function: '<S43>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S45>:1' */
  /* '<S45>:1:8' */
  localB->y = (uint8_T)((uint32_T)rtu_u >> 7);
}

/*
 * Output and update for atomic system:
 *    '<S25>/Bit Shift1'
 *    '<S26>/Bit Shift1'
 *    '<S27>/Bit Shift1'
 *    '<S28>/Bit Shift1'
 *    '<S29>/Bit Shift1'
 *    '<S30>/Bit Shift1'
 *    '<S31>/Bit Shift1'
 *    '<S32>/Bit Shift1'
 *    '<S33>/Bit Shift1'
 *    '<S34>/Bit Shift1'
 *    ...
 */
void BitShift1(uint8_T rtu_u, rtB_BitShift1 *localB)
{
  /* MATLAB Function: '<S44>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S46>:1' */
  /* '<S46>:1:6' */
  localB->y = (uint8_T)(rtu_u << 7);
}

/* Model step function */
void HANcoder_E407_CAN_COMM_TEST_step(void)
{
  /* local block i/o variables */
  uint8_T rtb_SFunction_o2;
  uint8_T rtb_SFunction_o3;
  uint8_T rtb_SFunction_o4;
  uint8_T rtb_SFunction_o5;
  uint8_T rtb_SFunction_o6;
  uint8_T rtb_SFunction_o7;
  uint8_T rtb_SFunction_o8;
  uint8_T rtb_SFunction_o9;
  uint8_T rtb_SFunction_o2_e;
  uint8_T rtb_SFunction_o3_a;
  uint8_T rtb_SFunction_o4_k;
  uint8_T rtb_SFunction_o5_i;
  uint8_T rtb_SFunction_o6_p;
  uint8_T rtb_SFunction_o7_l;
  uint8_T rtb_SFunction_o8_j;
  uint8_T rtb_SFunction_o9_d;
  uint8_T rtb_Output;
  real_T rtb_Switch2;
  real_T rtb_Power2;
  real_T rtb_Fix;
  real_T rtb_Fix1;
  real_T rtb_Minus;
  uint8_T rtb_FixPtSum1;
  uint8_T rtb_FixPtSum1_b;
  uint8_T rtb_Cast;
  uint8_T rtb_Cast_hi;
  uint8_T rtb_Cast_lf;
  uint8_T rtb_Cast_n;
  uint8_T rtb_Cast_p;
  uint8_T rtb_Cast_l;
  uint8_T rtb_Cast_e4;
  uint8_T rtb_Cast_eg;
  uint8_T rtb_Cast_h;
  uint8_T rtb_Cast_ga;
  uint8_T rtb_Cast_o;
  uint8_T rtb_Cast_f;
  uint8_T rtb_Cast_k2;
  uint8_T rtb_Cast_m;
  uint8_T rtb_Cast_g;
  uint8_T rtb_Cast_k;
  real_T rtb_Fix1_tmp;
  if (rtM->Timing.TaskCounters.TID[1] == 0) {
    /* M-S-Function: '<S21>/Level-2 M-file S-Function' */
    /* read from digital input */
    WKUP_button = DiginGet(DIGIN_PORTA_PIN0);

    /* M-S-Function: '<S7>/Level-2 M-file S-Function' */
    /* read from digital input */
    receiver_id = DiginGet(DIGIN_PORTE_PIN4);

    /* Outputs for Enabled SubSystem: '<S1>/Rx CAN' incorporates:
     *  EnablePort: '<S10>/Enable'
     */
    /* Logic: '<S1>/AND1' incorporates:
     *  Constant: '<S10>/Constant1'
     *  Constant: '<S10>/Constant2'
     */
    if (WKUP_button && receiver_id) {
      if (!rtDWork.RxCAN_MODE) {
        rtDWork.RxCAN_MODE = true;
      }

      /* M-S-Function: '<S23>/S-Function' */

      /* read the message data and store the new parameter */
      new_CAN1 = CanIoGetMessage(0, constant_ID_RXCAN1, NULL,
        &canRxData_0_constant_ID_RXCAN1.uint8_T_info[0], NULL);

      /* process the message data */
      if (new_CAN1 > 0) {
        /* read the data */
        rtb_SFunction_o2 = canRxData_0_constant_ID_RXCAN1.uint8_T_info[0];
        rtb_SFunction_o3 = canRxData_0_constant_ID_RXCAN1.uint8_T_info[1];
        rtb_SFunction_o4 = canRxData_0_constant_ID_RXCAN1.uint8_T_info[2];
        rtb_SFunction_o5 = canRxData_0_constant_ID_RXCAN1.uint8_T_info[3];
        rtb_SFunction_o6 = canRxData_0_constant_ID_RXCAN1.uint8_T_info[4];
        rtb_SFunction_o7 = canRxData_0_constant_ID_RXCAN1.uint8_T_info[5];
        rtb_SFunction_o8 = canRxData_0_constant_ID_RXCAN1.uint8_T_info[6];
        rtb_SFunction_o9 = canRxData_0_constant_ID_RXCAN1.uint8_T_info[7];
      }

      /* Outputs for Enabled SubSystem: '<S23>/Enabled Subsystem' incorporates:
       *  EnablePort: '<S41>/Enable'
       */
      if (new_CAN1 > 0) {
        Rx_coded1_CAN1 = rtb_SFunction_o2;
        Rx_coded2_CAN1 = rtb_SFunction_o3;
        Rx_coded3_CAN1 = rtb_SFunction_o4;
        Rx_coded4_CAN1 = rtb_SFunction_o5;
        Rx_coded5_CAN1 = rtb_SFunction_o6;
        Rx_coded6_CAN1 = rtb_SFunction_o7;
        Rx_coded7_CAN1 = rtb_SFunction_o8;
        Rx_coded8_CAN1 = rtb_SFunction_o9;
      }

      /* End of Outputs for SubSystem: '<S23>/Enabled Subsystem' */

      /* Outputs for Atomic SubSystem: '<S25>/Bit Shift' */
      BitShift(Rx_coded1_CAN1, &rtB.BitShift_d);

      /* End of Outputs for SubSystem: '<S25>/Bit Shift' */

      /* Outputs for Atomic SubSystem: '<S25>/Bit Shift1' */
      BitShift1(rtB.BitShift_d.y, &rtB.BitShift1_e);

      /* End of Outputs for SubSystem: '<S25>/Bit Shift1' */

      /* Sum: '<S25>/Minus' incorporates:
       *  DataTypeConversion: '<S25>/Cast1'
       *  Inport: '<S41>/In1'
       *  Inport: '<S41>/In2'
       *  Inport: '<S41>/In3'
       *  Inport: '<S41>/In4'
       *  Inport: '<S41>/In5'
       *  Inport: '<S41>/In6'
       *  Inport: '<S41>/In7'
       *  Inport: '<S41>/In8'
       */
      rtb_Power2 = Rx_coded1_CAN1 - rtB.BitShift1_e.y;

      /* Math: '<S25>/Power1' incorporates:
       *  Constant: '<S10>/Constant3'
       *  Constant: '<S25>/Constant2'
       *  Math: '<S32>/Power1'
       *  Math: '<S33>/Power1'
       *  Math: '<S34>/Power1'
       *  Math: '<S35>/Power1'
       *  Math: '<S36>/Power1'
       *  Math: '<S37>/Power1'
       *  Math: '<S38>/Power1'
       */
      rtb_Minus = floor(precision_CAN1);
      if ((2.0 < 0.0) && (precision_CAN1 > rtb_Minus)) {
        rtb_Switch2 = -pow(-2.0, precision_CAN1);
      } else {
        rtb_Switch2 = pow(2.0, precision_CAN1);
      }

      /* End of Math: '<S25>/Power1' */

      /* Product: '<S25>/Divide' */
      rtb_Fix = rtb_Power2 / rtb_Switch2;

      /* Rounding: '<S25>/Fix1' */
      if (rtb_Fix < 0.0) {
        rtb_Fix = ceil(rtb_Fix);
      } else {
        rtb_Fix = floor(rtb_Fix);
      }

      /* End of Rounding: '<S25>/Fix1' */

      /* Sum: '<S25>/Minus1' incorporates:
       *  Product: '<S25>/Multiply1'
       */
      rtb_Power2 -= rtb_Fix * rtb_Switch2;

      /* Gain: '<S25>/Gain' incorporates:
       *  Constant: '<S10>/Constant3'
       *  Gain: '<S32>/Gain'
       *  Gain: '<S33>/Gain'
       *  Gain: '<S34>/Gain'
       *  Gain: '<S35>/Gain'
       *  Gain: '<S36>/Gain'
       *  Gain: '<S37>/Gain'
       *  Gain: '<S38>/Gain'
       */
      rtb_Fix1 = (-1.0) * precision_CAN1;

      /* Math: '<S25>/Power' incorporates:
       *  Constant: '<S25>/Constant1'
       *  Gain: '<S25>/Gain'
       */
      if ((2.0 < 0.0) && (rtb_Fix1 > floor(rtb_Fix1))) {
        rtb_Switch2 = -pow(-2.0, rtb_Fix1);
      } else {
        rtb_Switch2 = pow(2.0, rtb_Fix1);
      }

      /* End of Math: '<S25>/Power' */

      /* Switch: '<S25>/Switch' incorporates:
       *  Gain: '<S25>/Gain1'
       *  Product: '<S25>/Multiply'
       *  Sum: '<S25>/Minus2'
       */
      if (rtB.BitShift_d.y > ((uint8_T)0U)) {
        Rx_Buffer_1_CAN1 = (rtb_Power2 * rtb_Switch2 + rtb_Fix) * (-1.0);
      } else {
        Rx_Buffer_1_CAN1 = rtb_Power2 * rtb_Switch2 + rtb_Fix;
      }

      /* End of Switch: '<S25>/Switch' */

      /* Outputs for Atomic SubSystem: '<S32>/Bit Shift' */
      BitShift(Rx_coded8_CAN1, &rtB.BitShift_o);

      /* End of Outputs for SubSystem: '<S32>/Bit Shift' */

      /* Outputs for Atomic SubSystem: '<S32>/Bit Shift1' */
      BitShift1(rtB.BitShift_o.y, &rtB.BitShift1_f);

      /* End of Outputs for SubSystem: '<S32>/Bit Shift1' */

      /* Sum: '<S32>/Minus' incorporates:
       *  DataTypeConversion: '<S32>/Cast1'
       */
      rtb_Power2 = Rx_coded8_CAN1 - rtB.BitShift1_f.y;

      /* Math: '<S32>/Power1' incorporates:
       *  Constant: '<S10>/Constant3'
       *  Constant: '<S32>/Constant2'
       */
      if ((2.0 < 0.0) && (precision_CAN1 > rtb_Minus)) {
        rtb_Switch2 = -pow(-2.0, precision_CAN1);
      } else {
        rtb_Switch2 = pow(2.0, precision_CAN1);
      }

      /* Product: '<S32>/Divide' */
      rtb_Fix = rtb_Power2 / rtb_Switch2;

      /* Rounding: '<S32>/Fix1' */
      if (rtb_Fix < 0.0) {
        rtb_Fix = ceil(rtb_Fix);
      } else {
        rtb_Fix = floor(rtb_Fix);
      }

      /* End of Rounding: '<S32>/Fix1' */

      /* Sum: '<S32>/Minus1' incorporates:
       *  Product: '<S32>/Multiply1'
       */
      rtb_Power2 -= rtb_Fix * rtb_Switch2;

      /* Math: '<S32>/Power' incorporates:
       *  Constant: '<S32>/Constant1'
       */
      if ((2.0 < 0.0) && (rtb_Fix1 > floor(rtb_Fix1))) {
        rtb_Switch2 = -pow(-2.0, rtb_Fix1);
      } else {
        rtb_Switch2 = pow(2.0, rtb_Fix1);
      }

      /* End of Math: '<S32>/Power' */

      /* Switch: '<S32>/Switch' incorporates:
       *  Gain: '<S32>/Gain1'
       *  Product: '<S32>/Multiply'
       *  Sum: '<S32>/Minus2'
       */
      if (rtB.BitShift_o.y > ((uint8_T)0U)) {
        Rx_Buffer_8_CAN1 = (rtb_Power2 * rtb_Switch2 + rtb_Fix) * (-1.0);
      } else {
        Rx_Buffer_8_CAN1 = rtb_Power2 * rtb_Switch2 + rtb_Fix;
      }

      /* End of Switch: '<S32>/Switch' */

      /* Outputs for Atomic SubSystem: '<S33>/Bit Shift' */
      BitShift(Rx_coded2_CAN1, &rtB.BitShift_pe);

      /* End of Outputs for SubSystem: '<S33>/Bit Shift' */

      /* Outputs for Atomic SubSystem: '<S33>/Bit Shift1' */
      BitShift1(rtB.BitShift_pe.y, &rtB.BitShift1_m);

      /* End of Outputs for SubSystem: '<S33>/Bit Shift1' */

      /* Sum: '<S33>/Minus' incorporates:
       *  DataTypeConversion: '<S33>/Cast1'
       */
      rtb_Power2 = Rx_coded2_CAN1 - rtB.BitShift1_m.y;

      /* Math: '<S33>/Power1' incorporates:
       *  Constant: '<S10>/Constant3'
       *  Constant: '<S33>/Constant2'
       */
      if ((2.0 < 0.0) && (precision_CAN1 > rtb_Minus)) {
        rtb_Switch2 = -pow(-2.0, precision_CAN1);
      } else {
        rtb_Switch2 = pow(2.0, precision_CAN1);
      }

      /* Product: '<S33>/Divide' */
      rtb_Fix = rtb_Power2 / rtb_Switch2;

      /* Rounding: '<S33>/Fix1' */
      if (rtb_Fix < 0.0) {
        rtb_Fix = ceil(rtb_Fix);
      } else {
        rtb_Fix = floor(rtb_Fix);
      }

      /* End of Rounding: '<S33>/Fix1' */

      /* Sum: '<S33>/Minus1' incorporates:
       *  Product: '<S33>/Multiply1'
       */
      rtb_Power2 -= rtb_Fix * rtb_Switch2;

      /* Math: '<S33>/Power' incorporates:
       *  Constant: '<S33>/Constant1'
       */
      if ((2.0 < 0.0) && (rtb_Fix1 > floor(rtb_Fix1))) {
        rtb_Switch2 = -pow(-2.0, rtb_Fix1);
      } else {
        rtb_Switch2 = pow(2.0, rtb_Fix1);
      }

      /* End of Math: '<S33>/Power' */

      /* Switch: '<S33>/Switch' incorporates:
       *  Gain: '<S33>/Gain1'
       *  Product: '<S33>/Multiply'
       *  Sum: '<S33>/Minus2'
       */
      if (rtB.BitShift_pe.y > ((uint8_T)0U)) {
        Rx_Buffer_2_CAN1 = (rtb_Power2 * rtb_Switch2 + rtb_Fix) * (-1.0);
      } else {
        Rx_Buffer_2_CAN1 = rtb_Power2 * rtb_Switch2 + rtb_Fix;
      }

      /* End of Switch: '<S33>/Switch' */

      /* Outputs for Atomic SubSystem: '<S34>/Bit Shift' */
      BitShift(Rx_coded3_CAN1, &rtB.BitShift_c);

      /* End of Outputs for SubSystem: '<S34>/Bit Shift' */

      /* Outputs for Atomic SubSystem: '<S34>/Bit Shift1' */
      BitShift1(rtB.BitShift_c.y, &rtB.BitShift1_mc);

      /* End of Outputs for SubSystem: '<S34>/Bit Shift1' */

      /* Sum: '<S34>/Minus' incorporates:
       *  DataTypeConversion: '<S34>/Cast1'
       */
      rtb_Power2 = Rx_coded3_CAN1 - rtB.BitShift1_mc.y;

      /* Math: '<S34>/Power1' incorporates:
       *  Constant: '<S10>/Constant3'
       *  Constant: '<S34>/Constant2'
       */
      if ((2.0 < 0.0) && (precision_CAN1 > rtb_Minus)) {
        rtb_Switch2 = -pow(-2.0, precision_CAN1);
      } else {
        rtb_Switch2 = pow(2.0, precision_CAN1);
      }

      /* Product: '<S34>/Divide' */
      rtb_Fix = rtb_Power2 / rtb_Switch2;

      /* Rounding: '<S34>/Fix1' */
      if (rtb_Fix < 0.0) {
        rtb_Fix = ceil(rtb_Fix);
      } else {
        rtb_Fix = floor(rtb_Fix);
      }

      /* End of Rounding: '<S34>/Fix1' */

      /* Sum: '<S34>/Minus1' incorporates:
       *  Product: '<S34>/Multiply1'
       */
      rtb_Power2 -= rtb_Fix * rtb_Switch2;

      /* Math: '<S34>/Power' incorporates:
       *  Constant: '<S34>/Constant1'
       */
      if ((2.0 < 0.0) && (rtb_Fix1 > floor(rtb_Fix1))) {
        rtb_Switch2 = -pow(-2.0, rtb_Fix1);
      } else {
        rtb_Switch2 = pow(2.0, rtb_Fix1);
      }

      /* End of Math: '<S34>/Power' */

      /* Switch: '<S34>/Switch' incorporates:
       *  Gain: '<S34>/Gain1'
       *  Product: '<S34>/Multiply'
       *  Sum: '<S34>/Minus2'
       */
      if (rtB.BitShift_c.y > ((uint8_T)0U)) {
        Rx_Buffer_3_CAN1 = (rtb_Power2 * rtb_Switch2 + rtb_Fix) * (-1.0);
      } else {
        Rx_Buffer_3_CAN1 = rtb_Power2 * rtb_Switch2 + rtb_Fix;
      }

      /* End of Switch: '<S34>/Switch' */

      /* Outputs for Atomic SubSystem: '<S35>/Bit Shift' */
      BitShift(Rx_coded4_CAN1, &rtB.BitShift_of);

      /* End of Outputs for SubSystem: '<S35>/Bit Shift' */

      /* Outputs for Atomic SubSystem: '<S35>/Bit Shift1' */
      BitShift1(rtB.BitShift_of.y, &rtB.BitShift1_bk);

      /* End of Outputs for SubSystem: '<S35>/Bit Shift1' */

      /* Sum: '<S35>/Minus' incorporates:
       *  DataTypeConversion: '<S35>/Cast1'
       */
      rtb_Power2 = Rx_coded4_CAN1 - rtB.BitShift1_bk.y;

      /* Math: '<S35>/Power1' incorporates:
       *  Constant: '<S10>/Constant3'
       *  Constant: '<S35>/Constant2'
       */
      if ((2.0 < 0.0) && (precision_CAN1 > rtb_Minus)) {
        rtb_Switch2 = -pow(-2.0, precision_CAN1);
      } else {
        rtb_Switch2 = pow(2.0, precision_CAN1);
      }

      /* Product: '<S35>/Divide' */
      rtb_Fix = rtb_Power2 / rtb_Switch2;

      /* Rounding: '<S35>/Fix1' */
      if (rtb_Fix < 0.0) {
        rtb_Fix = ceil(rtb_Fix);
      } else {
        rtb_Fix = floor(rtb_Fix);
      }

      /* End of Rounding: '<S35>/Fix1' */

      /* Sum: '<S35>/Minus1' incorporates:
       *  Product: '<S35>/Multiply1'
       */
      rtb_Power2 -= rtb_Fix * rtb_Switch2;

      /* Math: '<S35>/Power' incorporates:
       *  Constant: '<S35>/Constant1'
       */
      if ((2.0 < 0.0) && (rtb_Fix1 > floor(rtb_Fix1))) {
        rtb_Switch2 = -pow(-2.0, rtb_Fix1);
      } else {
        rtb_Switch2 = pow(2.0, rtb_Fix1);
      }

      /* End of Math: '<S35>/Power' */

      /* Switch: '<S35>/Switch' incorporates:
       *  Gain: '<S35>/Gain1'
       *  Product: '<S35>/Multiply'
       *  Sum: '<S35>/Minus2'
       */
      if (rtB.BitShift_of.y > ((uint8_T)0U)) {
        Rx_Buffer_4_CAN1 = (rtb_Power2 * rtb_Switch2 + rtb_Fix) * (-1.0);
      } else {
        Rx_Buffer_4_CAN1 = rtb_Power2 * rtb_Switch2 + rtb_Fix;
      }

      /* End of Switch: '<S35>/Switch' */

      /* Outputs for Atomic SubSystem: '<S36>/Bit Shift' */
      BitShift(Rx_coded5_CAN1, &rtB.BitShift_f);

      /* End of Outputs for SubSystem: '<S36>/Bit Shift' */

      /* Outputs for Atomic SubSystem: '<S36>/Bit Shift1' */
      BitShift1(rtB.BitShift_f.y, &rtB.BitShift1_jz);

      /* End of Outputs for SubSystem: '<S36>/Bit Shift1' */

      /* Sum: '<S36>/Minus' incorporates:
       *  DataTypeConversion: '<S36>/Cast1'
       */
      rtb_Power2 = Rx_coded5_CAN1 - rtB.BitShift1_jz.y;

      /* Math: '<S36>/Power1' incorporates:
       *  Constant: '<S10>/Constant3'
       *  Constant: '<S36>/Constant2'
       */
      if ((2.0 < 0.0) && (precision_CAN1 > rtb_Minus)) {
        rtb_Switch2 = -pow(-2.0, precision_CAN1);
      } else {
        rtb_Switch2 = pow(2.0, precision_CAN1);
      }

      /* Product: '<S36>/Divide' */
      rtb_Fix = rtb_Power2 / rtb_Switch2;

      /* Rounding: '<S36>/Fix1' */
      if (rtb_Fix < 0.0) {
        rtb_Fix = ceil(rtb_Fix);
      } else {
        rtb_Fix = floor(rtb_Fix);
      }

      /* End of Rounding: '<S36>/Fix1' */

      /* Sum: '<S36>/Minus1' incorporates:
       *  Product: '<S36>/Multiply1'
       */
      rtb_Power2 -= rtb_Fix * rtb_Switch2;

      /* Math: '<S36>/Power' incorporates:
       *  Constant: '<S36>/Constant1'
       */
      if ((2.0 < 0.0) && (rtb_Fix1 > floor(rtb_Fix1))) {
        rtb_Switch2 = -pow(-2.0, rtb_Fix1);
      } else {
        rtb_Switch2 = pow(2.0, rtb_Fix1);
      }

      /* End of Math: '<S36>/Power' */

      /* Switch: '<S36>/Switch' incorporates:
       *  Gain: '<S36>/Gain1'
       *  Product: '<S36>/Multiply'
       *  Sum: '<S36>/Minus2'
       */
      if (rtB.BitShift_f.y > ((uint8_T)0U)) {
        Rx_Buffer_5_CAN1 = (rtb_Power2 * rtb_Switch2 + rtb_Fix) * (-1.0);
      } else {
        Rx_Buffer_5_CAN1 = rtb_Power2 * rtb_Switch2 + rtb_Fix;
      }

      /* End of Switch: '<S36>/Switch' */

      /* Outputs for Atomic SubSystem: '<S37>/Bit Shift' */
      BitShift(Rx_coded6_CAN1, &rtB.BitShift_n);

      /* End of Outputs for SubSystem: '<S37>/Bit Shift' */

      /* Outputs for Atomic SubSystem: '<S37>/Bit Shift1' */
      BitShift1(rtB.BitShift_n.y, &rtB.BitShift1_fl);

      /* End of Outputs for SubSystem: '<S37>/Bit Shift1' */

      /* Sum: '<S37>/Minus' incorporates:
       *  DataTypeConversion: '<S37>/Cast1'
       */
      rtb_Power2 = Rx_coded6_CAN1 - rtB.BitShift1_fl.y;

      /* Math: '<S37>/Power1' incorporates:
       *  Constant: '<S10>/Constant3'
       *  Constant: '<S37>/Constant2'
       */
      if ((2.0 < 0.0) && (precision_CAN1 > rtb_Minus)) {
        rtb_Switch2 = -pow(-2.0, precision_CAN1);
      } else {
        rtb_Switch2 = pow(2.0, precision_CAN1);
      }

      /* Product: '<S37>/Divide' */
      rtb_Fix = rtb_Power2 / rtb_Switch2;

      /* Rounding: '<S37>/Fix1' */
      if (rtb_Fix < 0.0) {
        rtb_Fix = ceil(rtb_Fix);
      } else {
        rtb_Fix = floor(rtb_Fix);
      }

      /* End of Rounding: '<S37>/Fix1' */

      /* Sum: '<S37>/Minus1' incorporates:
       *  Product: '<S37>/Multiply1'
       */
      rtb_Power2 -= rtb_Fix * rtb_Switch2;

      /* Math: '<S37>/Power' incorporates:
       *  Constant: '<S37>/Constant1'
       */
      if ((2.0 < 0.0) && (rtb_Fix1 > floor(rtb_Fix1))) {
        rtb_Switch2 = -pow(-2.0, rtb_Fix1);
      } else {
        rtb_Switch2 = pow(2.0, rtb_Fix1);
      }

      /* End of Math: '<S37>/Power' */

      /* Switch: '<S37>/Switch' incorporates:
       *  Gain: '<S37>/Gain1'
       *  Product: '<S37>/Multiply'
       *  Sum: '<S37>/Minus2'
       */
      if (rtB.BitShift_n.y > ((uint8_T)0U)) {
        Rx_Buffer_6_CAN1 = (rtb_Power2 * rtb_Switch2 + rtb_Fix) * (-1.0);
      } else {
        Rx_Buffer_6_CAN1 = rtb_Power2 * rtb_Switch2 + rtb_Fix;
      }

      /* End of Switch: '<S37>/Switch' */

      /* Outputs for Atomic SubSystem: '<S38>/Bit Shift' */
      BitShift(Rx_coded7_CAN1, &rtB.BitShift_g);

      /* End of Outputs for SubSystem: '<S38>/Bit Shift' */

      /* Outputs for Atomic SubSystem: '<S38>/Bit Shift1' */
      BitShift1(rtB.BitShift_g.y, &rtB.BitShift1_c);

      /* End of Outputs for SubSystem: '<S38>/Bit Shift1' */

      /* Sum: '<S38>/Minus' incorporates:
       *  DataTypeConversion: '<S38>/Cast1'
       */
      rtb_Power2 = Rx_coded7_CAN1 - rtB.BitShift1_c.y;

      /* Math: '<S38>/Power1' incorporates:
       *  Constant: '<S10>/Constant3'
       *  Constant: '<S38>/Constant2'
       */
      if ((2.0 < 0.0) && (precision_CAN1 > rtb_Minus)) {
        rtb_Switch2 = -pow(-2.0, precision_CAN1);
      } else {
        rtb_Switch2 = pow(2.0, precision_CAN1);
      }

      /* Product: '<S38>/Divide' */
      rtb_Fix = rtb_Power2 / rtb_Switch2;

      /* Rounding: '<S38>/Fix1' */
      if (rtb_Fix < 0.0) {
        rtb_Fix = ceil(rtb_Fix);
      } else {
        rtb_Fix = floor(rtb_Fix);
      }

      /* End of Rounding: '<S38>/Fix1' */

      /* Sum: '<S38>/Minus1' incorporates:
       *  Product: '<S38>/Multiply1'
       */
      rtb_Power2 -= rtb_Fix * rtb_Switch2;

      /* Math: '<S38>/Power' incorporates:
       *  Constant: '<S38>/Constant1'
       */
      if ((2.0 < 0.0) && (rtb_Fix1 > floor(rtb_Fix1))) {
        rtb_Switch2 = -pow(-2.0, rtb_Fix1);
      } else {
        rtb_Switch2 = pow(2.0, rtb_Fix1);
      }

      /* End of Math: '<S38>/Power' */

      /* Switch: '<S38>/Switch' incorporates:
       *  Gain: '<S38>/Gain1'
       *  Product: '<S38>/Multiply'
       *  Sum: '<S38>/Minus2'
       */
      if (rtB.BitShift_g.y > ((uint8_T)0U)) {
        Rx_Buffer_7_CAN1 = (rtb_Power2 * rtb_Switch2 + rtb_Fix) * (-1.0);
      } else {
        Rx_Buffer_7_CAN1 = rtb_Power2 * rtb_Switch2 + rtb_Fix;
      }

      /* End of Switch: '<S38>/Switch' */

      /* M-S-Function: '<S24>/S-Function' */

      /* read the message data and store the new parameter */
      new_CAN2 = CanIoGetMessage(1, constant_ID_RXCAN2, NULL,
        &canRxData_1_constant_ID_RXCAN2.uint8_T_info[0], NULL);

      /* process the message data */
      if (new_CAN2 > 0) {
        /* read the data */
        rtb_SFunction_o2_e = canRxData_1_constant_ID_RXCAN2.uint8_T_info[0];
        rtb_SFunction_o3_a = canRxData_1_constant_ID_RXCAN2.uint8_T_info[1];
        rtb_SFunction_o4_k = canRxData_1_constant_ID_RXCAN2.uint8_T_info[2];
        rtb_SFunction_o5_i = canRxData_1_constant_ID_RXCAN2.uint8_T_info[3];
        rtb_SFunction_o6_p = canRxData_1_constant_ID_RXCAN2.uint8_T_info[4];
        rtb_SFunction_o7_l = canRxData_1_constant_ID_RXCAN2.uint8_T_info[5];
        rtb_SFunction_o8_j = canRxData_1_constant_ID_RXCAN2.uint8_T_info[6];
        rtb_SFunction_o9_d = canRxData_1_constant_ID_RXCAN2.uint8_T_info[7];
      }

      /* Outputs for Enabled SubSystem: '<S24>/Enabled Subsystem' incorporates:
       *  EnablePort: '<S42>/Enable'
       */
      if (new_CAN2 > 0) {
        Rx_coded1_CAN2 = rtb_SFunction_o2_e;
        Rx_coded2_CAN2 = rtb_SFunction_o3_a;
        Rx_coded3_CAN2 = rtb_SFunction_o4_k;
        Rx_coded4_CAN2 = rtb_SFunction_o5_i;
        Rx_coded5_CAN2 = rtb_SFunction_o6_p;
        Rx_coded6_CAN2 = rtb_SFunction_o7_l;
        Rx_coded7_CAN2 = rtb_SFunction_o8_j;
        Rx_coded8_CAN2 = rtb_SFunction_o9_d;
      }

      /* End of Outputs for SubSystem: '<S24>/Enabled Subsystem' */

      /* Outputs for Atomic SubSystem: '<S26>/Bit Shift' */
      BitShift(Rx_coded5_CAN2, &rtB.BitShift_b);

      /* End of Outputs for SubSystem: '<S26>/Bit Shift' */

      /* Outputs for Atomic SubSystem: '<S26>/Bit Shift1' */
      BitShift1(rtB.BitShift_b.y, &rtB.BitShift1_eg);

      /* End of Outputs for SubSystem: '<S26>/Bit Shift1' */

      /* Sum: '<S26>/Minus' incorporates:
       *  DataTypeConversion: '<S26>/Cast1'
       *  Inport: '<S42>/In1'
       *  Inport: '<S42>/In2'
       *  Inport: '<S42>/In3'
       *  Inport: '<S42>/In4'
       *  Inport: '<S42>/In5'
       *  Inport: '<S42>/In6'
       *  Inport: '<S42>/In7'
       *  Inport: '<S42>/In8'
       */
      rtb_Power2 = Rx_coded5_CAN2 - rtB.BitShift1_eg.y;

      /* Math: '<S26>/Power1' incorporates:
       *  Constant: '<S10>/Constant4'
       *  Constant: '<S26>/Constant2'
       *  Math: '<S27>/Power1'
       *  Math: '<S28>/Power1'
       *  Math: '<S29>/Power1'
       *  Math: '<S30>/Power1'
       *  Math: '<S31>/Power1'
       *  Math: '<S39>/Power1'
       *  Math: '<S40>/Power1'
       */
      rtb_Minus = floor(precision_CAN2);
      if ((2.0 < 0.0) && (precision_CAN2 > rtb_Minus)) {
        rtb_Switch2 = -pow(-2.0, precision_CAN2);
      } else {
        rtb_Switch2 = pow(2.0, precision_CAN2);
      }

      /* End of Math: '<S26>/Power1' */

      /* Product: '<S26>/Divide' */
      rtb_Fix = rtb_Power2 / rtb_Switch2;

      /* Rounding: '<S26>/Fix1' */
      if (rtb_Fix < 0.0) {
        rtb_Fix = ceil(rtb_Fix);
      } else {
        rtb_Fix = floor(rtb_Fix);
      }

      /* End of Rounding: '<S26>/Fix1' */

      /* Sum: '<S26>/Minus1' incorporates:
       *  Product: '<S26>/Multiply1'
       */
      rtb_Power2 -= rtb_Fix * rtb_Switch2;

      /* Gain: '<S26>/Gain' incorporates:
       *  Constant: '<S10>/Constant4'
       *  Gain: '<S27>/Gain'
       *  Gain: '<S28>/Gain'
       *  Gain: '<S29>/Gain'
       *  Gain: '<S30>/Gain'
       *  Gain: '<S31>/Gain'
       *  Gain: '<S39>/Gain'
       *  Gain: '<S40>/Gain'
       */
      rtb_Fix1 = (-1.0) * precision_CAN2;

      /* Math: '<S26>/Power' incorporates:
       *  Constant: '<S26>/Constant1'
       *  Gain: '<S26>/Gain'
       */
      if ((2.0 < 0.0) && (rtb_Fix1 > floor(rtb_Fix1))) {
        rtb_Switch2 = -pow(-2.0, rtb_Fix1);
      } else {
        rtb_Switch2 = pow(2.0, rtb_Fix1);
      }

      /* End of Math: '<S26>/Power' */

      /* Switch: '<S26>/Switch' incorporates:
       *  Gain: '<S26>/Gain1'
       *  Product: '<S26>/Multiply'
       *  Sum: '<S26>/Minus2'
       */
      if (rtB.BitShift_b.y > ((uint8_T)0U)) {
        Rx_Buffer_5_CAN2 = (rtb_Power2 * rtb_Switch2 + rtb_Fix) * (-1.0);
      } else {
        Rx_Buffer_5_CAN2 = rtb_Power2 * rtb_Switch2 + rtb_Fix;
      }

      /* End of Switch: '<S26>/Switch' */

      /* Outputs for Atomic SubSystem: '<S27>/Bit Shift' */
      BitShift(Rx_coded4_CAN2, &rtB.BitShift_bk);

      /* End of Outputs for SubSystem: '<S27>/Bit Shift' */

      /* Outputs for Atomic SubSystem: '<S27>/Bit Shift1' */
      BitShift1(rtB.BitShift_bk.y, &rtB.BitShift1_h);

      /* End of Outputs for SubSystem: '<S27>/Bit Shift1' */

      /* Sum: '<S27>/Minus' incorporates:
       *  DataTypeConversion: '<S27>/Cast1'
       */
      rtb_Power2 = Rx_coded4_CAN2 - rtB.BitShift1_h.y;

      /* Math: '<S27>/Power1' incorporates:
       *  Constant: '<S10>/Constant4'
       *  Constant: '<S27>/Constant2'
       */
      if ((2.0 < 0.0) && (precision_CAN2 > rtb_Minus)) {
        rtb_Switch2 = -pow(-2.0, precision_CAN2);
      } else {
        rtb_Switch2 = pow(2.0, precision_CAN2);
      }

      /* Product: '<S27>/Divide' */
      rtb_Fix = rtb_Power2 / rtb_Switch2;

      /* Rounding: '<S27>/Fix1' */
      if (rtb_Fix < 0.0) {
        rtb_Fix = ceil(rtb_Fix);
      } else {
        rtb_Fix = floor(rtb_Fix);
      }

      /* End of Rounding: '<S27>/Fix1' */

      /* Sum: '<S27>/Minus1' incorporates:
       *  Product: '<S27>/Multiply1'
       */
      rtb_Power2 -= rtb_Fix * rtb_Switch2;

      /* Math: '<S27>/Power' incorporates:
       *  Constant: '<S27>/Constant1'
       */
      if ((2.0 < 0.0) && (rtb_Fix1 > floor(rtb_Fix1))) {
        rtb_Switch2 = -pow(-2.0, rtb_Fix1);
      } else {
        rtb_Switch2 = pow(2.0, rtb_Fix1);
      }

      /* End of Math: '<S27>/Power' */

      /* Switch: '<S27>/Switch' incorporates:
       *  Gain: '<S27>/Gain1'
       *  Product: '<S27>/Multiply'
       *  Sum: '<S27>/Minus2'
       */
      if (rtB.BitShift_bk.y > ((uint8_T)0U)) {
        Rx_Buffer_4_CAN2 = (rtb_Power2 * rtb_Switch2 + rtb_Fix) * (-1.0);
      } else {
        Rx_Buffer_4_CAN2 = rtb_Power2 * rtb_Switch2 + rtb_Fix;
      }

      /* End of Switch: '<S27>/Switch' */

      /* Outputs for Atomic SubSystem: '<S28>/Bit Shift' */
      BitShift(Rx_coded3_CAN2, &rtB.BitShift_p);

      /* End of Outputs for SubSystem: '<S28>/Bit Shift' */

      /* Outputs for Atomic SubSystem: '<S28>/Bit Shift1' */
      BitShift1(rtB.BitShift_p.y, &rtB.BitShift1_k);

      /* End of Outputs for SubSystem: '<S28>/Bit Shift1' */

      /* Sum: '<S28>/Minus' incorporates:
       *  DataTypeConversion: '<S28>/Cast1'
       */
      rtb_Power2 = Rx_coded3_CAN2 - rtB.BitShift1_k.y;

      /* Math: '<S28>/Power1' incorporates:
       *  Constant: '<S10>/Constant4'
       *  Constant: '<S28>/Constant2'
       */
      if ((2.0 < 0.0) && (precision_CAN2 > rtb_Minus)) {
        rtb_Switch2 = -pow(-2.0, precision_CAN2);
      } else {
        rtb_Switch2 = pow(2.0, precision_CAN2);
      }

      /* Product: '<S28>/Divide' */
      rtb_Fix = rtb_Power2 / rtb_Switch2;

      /* Rounding: '<S28>/Fix1' */
      if (rtb_Fix < 0.0) {
        rtb_Fix = ceil(rtb_Fix);
      } else {
        rtb_Fix = floor(rtb_Fix);
      }

      /* End of Rounding: '<S28>/Fix1' */

      /* Sum: '<S28>/Minus1' incorporates:
       *  Product: '<S28>/Multiply1'
       */
      rtb_Power2 -= rtb_Fix * rtb_Switch2;

      /* Math: '<S28>/Power' incorporates:
       *  Constant: '<S28>/Constant1'
       */
      if ((2.0 < 0.0) && (rtb_Fix1 > floor(rtb_Fix1))) {
        rtb_Switch2 = -pow(-2.0, rtb_Fix1);
      } else {
        rtb_Switch2 = pow(2.0, rtb_Fix1);
      }

      /* End of Math: '<S28>/Power' */

      /* Switch: '<S28>/Switch' incorporates:
       *  Gain: '<S28>/Gain1'
       *  Product: '<S28>/Multiply'
       *  Sum: '<S28>/Minus2'
       */
      if (rtB.BitShift_p.y > ((uint8_T)0U)) {
        Rx_Buffer_3_CAN2 = (rtb_Power2 * rtb_Switch2 + rtb_Fix) * (-1.0);
      } else {
        Rx_Buffer_3_CAN2 = rtb_Power2 * rtb_Switch2 + rtb_Fix;
      }

      /* End of Switch: '<S28>/Switch' */

      /* Outputs for Atomic SubSystem: '<S29>/Bit Shift' */
      BitShift(Rx_coded2_CAN2, &rtB.BitShift_k);

      /* End of Outputs for SubSystem: '<S29>/Bit Shift' */

      /* Outputs for Atomic SubSystem: '<S29>/Bit Shift1' */
      BitShift1(rtB.BitShift_k.y, &rtB.BitShift1_g);

      /* End of Outputs for SubSystem: '<S29>/Bit Shift1' */

      /* Sum: '<S29>/Minus' incorporates:
       *  DataTypeConversion: '<S29>/Cast1'
       */
      rtb_Power2 = Rx_coded2_CAN2 - rtB.BitShift1_g.y;

      /* Math: '<S29>/Power1' incorporates:
       *  Constant: '<S10>/Constant4'
       *  Constant: '<S29>/Constant2'
       */
      if ((2.0 < 0.0) && (precision_CAN2 > rtb_Minus)) {
        rtb_Switch2 = -pow(-2.0, precision_CAN2);
      } else {
        rtb_Switch2 = pow(2.0, precision_CAN2);
      }

      /* Product: '<S29>/Divide' */
      rtb_Fix = rtb_Power2 / rtb_Switch2;

      /* Rounding: '<S29>/Fix1' */
      if (rtb_Fix < 0.0) {
        rtb_Fix = ceil(rtb_Fix);
      } else {
        rtb_Fix = floor(rtb_Fix);
      }

      /* End of Rounding: '<S29>/Fix1' */

      /* Sum: '<S29>/Minus1' incorporates:
       *  Product: '<S29>/Multiply1'
       */
      rtb_Power2 -= rtb_Fix * rtb_Switch2;

      /* Math: '<S29>/Power' incorporates:
       *  Constant: '<S29>/Constant1'
       */
      if ((2.0 < 0.0) && (rtb_Fix1 > floor(rtb_Fix1))) {
        rtb_Switch2 = -pow(-2.0, rtb_Fix1);
      } else {
        rtb_Switch2 = pow(2.0, rtb_Fix1);
      }

      /* End of Math: '<S29>/Power' */

      /* Switch: '<S29>/Switch' incorporates:
       *  Gain: '<S29>/Gain1'
       *  Product: '<S29>/Multiply'
       *  Sum: '<S29>/Minus2'
       */
      if (rtB.BitShift_k.y > ((uint8_T)0U)) {
        Rx_Buffer_2_CAN2 = (rtb_Power2 * rtb_Switch2 + rtb_Fix) * (-1.0);
      } else {
        Rx_Buffer_2_CAN2 = rtb_Power2 * rtb_Switch2 + rtb_Fix;
      }

      /* End of Switch: '<S29>/Switch' */

      /* Outputs for Atomic SubSystem: '<S30>/Bit Shift' */
      BitShift(Rx_coded7_CAN2, &rtB.BitShift_h);

      /* End of Outputs for SubSystem: '<S30>/Bit Shift' */

      /* Outputs for Atomic SubSystem: '<S30>/Bit Shift1' */
      BitShift1(rtB.BitShift_h.y, &rtB.BitShift1_j);

      /* End of Outputs for SubSystem: '<S30>/Bit Shift1' */

      /* Sum: '<S30>/Minus' incorporates:
       *  DataTypeConversion: '<S30>/Cast1'
       */
      rtb_Power2 = Rx_coded7_CAN2 - rtB.BitShift1_j.y;

      /* Math: '<S30>/Power1' incorporates:
       *  Constant: '<S10>/Constant4'
       *  Constant: '<S30>/Constant2'
       */
      if ((2.0 < 0.0) && (precision_CAN2 > rtb_Minus)) {
        rtb_Switch2 = -pow(-2.0, precision_CAN2);
      } else {
        rtb_Switch2 = pow(2.0, precision_CAN2);
      }

      /* Product: '<S30>/Divide' */
      rtb_Fix = rtb_Power2 / rtb_Switch2;

      /* Rounding: '<S30>/Fix1' */
      if (rtb_Fix < 0.0) {
        rtb_Fix = ceil(rtb_Fix);
      } else {
        rtb_Fix = floor(rtb_Fix);
      }

      /* End of Rounding: '<S30>/Fix1' */

      /* Sum: '<S30>/Minus1' incorporates:
       *  Product: '<S30>/Multiply1'
       */
      rtb_Power2 -= rtb_Fix * rtb_Switch2;

      /* Math: '<S30>/Power' incorporates:
       *  Constant: '<S30>/Constant1'
       */
      if ((2.0 < 0.0) && (rtb_Fix1 > floor(rtb_Fix1))) {
        rtb_Switch2 = -pow(-2.0, rtb_Fix1);
      } else {
        rtb_Switch2 = pow(2.0, rtb_Fix1);
      }

      /* End of Math: '<S30>/Power' */

      /* Switch: '<S30>/Switch' incorporates:
       *  Gain: '<S30>/Gain1'
       *  Product: '<S30>/Multiply'
       *  Sum: '<S30>/Minus2'
       */
      if (rtB.BitShift_h.y > ((uint8_T)0U)) {
        Rx_Buffer_7_CAN2 = (rtb_Power2 * rtb_Switch2 + rtb_Fix) * (-1.0);
      } else {
        Rx_Buffer_7_CAN2 = rtb_Power2 * rtb_Switch2 + rtb_Fix;
      }

      /* End of Switch: '<S30>/Switch' */

      /* Outputs for Atomic SubSystem: '<S31>/Bit Shift' */
      BitShift(Rx_coded1_CAN2, &rtB.BitShift_a);

      /* End of Outputs for SubSystem: '<S31>/Bit Shift' */

      /* Outputs for Atomic SubSystem: '<S31>/Bit Shift1' */
      BitShift1(rtB.BitShift_a.y, &rtB.BitShift1_b);

      /* End of Outputs for SubSystem: '<S31>/Bit Shift1' */

      /* Sum: '<S31>/Minus' incorporates:
       *  DataTypeConversion: '<S31>/Cast1'
       */
      rtb_Power2 = Rx_coded1_CAN2 - rtB.BitShift1_b.y;

      /* Math: '<S31>/Power1' incorporates:
       *  Constant: '<S10>/Constant4'
       *  Constant: '<S31>/Constant2'
       */
      if ((2.0 < 0.0) && (precision_CAN2 > rtb_Minus)) {
        rtb_Switch2 = -pow(-2.0, precision_CAN2);
      } else {
        rtb_Switch2 = pow(2.0, precision_CAN2);
      }

      /* Product: '<S31>/Divide' */
      rtb_Fix = rtb_Power2 / rtb_Switch2;

      /* Rounding: '<S31>/Fix1' */
      if (rtb_Fix < 0.0) {
        rtb_Fix = ceil(rtb_Fix);
      } else {
        rtb_Fix = floor(rtb_Fix);
      }

      /* End of Rounding: '<S31>/Fix1' */

      /* Sum: '<S31>/Minus1' incorporates:
       *  Product: '<S31>/Multiply1'
       */
      rtb_Power2 -= rtb_Fix * rtb_Switch2;

      /* Math: '<S31>/Power' incorporates:
       *  Constant: '<S31>/Constant1'
       */
      if ((2.0 < 0.0) && (rtb_Fix1 > floor(rtb_Fix1))) {
        rtb_Switch2 = -pow(-2.0, rtb_Fix1);
      } else {
        rtb_Switch2 = pow(2.0, rtb_Fix1);
      }

      /* End of Math: '<S31>/Power' */

      /* Switch: '<S31>/Switch' incorporates:
       *  Gain: '<S31>/Gain1'
       *  Product: '<S31>/Multiply'
       *  Sum: '<S31>/Minus2'
       */
      if (rtB.BitShift_a.y > ((uint8_T)0U)) {
        Rx_Buffer_1_CAN2 = (rtb_Power2 * rtb_Switch2 + rtb_Fix) * (-1.0);
      } else {
        Rx_Buffer_1_CAN2 = rtb_Power2 * rtb_Switch2 + rtb_Fix;
      }

      /* End of Switch: '<S31>/Switch' */

      /* Outputs for Atomic SubSystem: '<S39>/Bit Shift' */
      BitShift(Rx_coded8_CAN2, &rtB.BitShift_kk);

      /* End of Outputs for SubSystem: '<S39>/Bit Shift' */

      /* Outputs for Atomic SubSystem: '<S39>/Bit Shift1' */
      BitShift1(rtB.BitShift_kk.y, &rtB.BitShift1_fh);

      /* End of Outputs for SubSystem: '<S39>/Bit Shift1' */

      /* Sum: '<S39>/Minus' incorporates:
       *  DataTypeConversion: '<S39>/Cast1'
       */
      rtb_Power2 = Rx_coded8_CAN2 - rtB.BitShift1_fh.y;

      /* Math: '<S39>/Power1' incorporates:
       *  Constant: '<S10>/Constant4'
       *  Constant: '<S39>/Constant2'
       */
      if ((2.0 < 0.0) && (precision_CAN2 > rtb_Minus)) {
        rtb_Switch2 = -pow(-2.0, precision_CAN2);
      } else {
        rtb_Switch2 = pow(2.0, precision_CAN2);
      }

      /* Product: '<S39>/Divide' */
      rtb_Fix = rtb_Power2 / rtb_Switch2;

      /* Rounding: '<S39>/Fix1' */
      if (rtb_Fix < 0.0) {
        rtb_Fix = ceil(rtb_Fix);
      } else {
        rtb_Fix = floor(rtb_Fix);
      }

      /* End of Rounding: '<S39>/Fix1' */

      /* Sum: '<S39>/Minus1' incorporates:
       *  Product: '<S39>/Multiply1'
       */
      rtb_Power2 -= rtb_Fix * rtb_Switch2;

      /* Math: '<S39>/Power' incorporates:
       *  Constant: '<S39>/Constant1'
       */
      if ((2.0 < 0.0) && (rtb_Fix1 > floor(rtb_Fix1))) {
        rtb_Switch2 = -pow(-2.0, rtb_Fix1);
      } else {
        rtb_Switch2 = pow(2.0, rtb_Fix1);
      }

      /* End of Math: '<S39>/Power' */

      /* Switch: '<S39>/Switch' incorporates:
       *  Gain: '<S39>/Gain1'
       *  Product: '<S39>/Multiply'
       *  Sum: '<S39>/Minus2'
       */
      if (rtB.BitShift_kk.y > ((uint8_T)0U)) {
        Rx_Buffer_8_CAN2 = (rtb_Power2 * rtb_Switch2 + rtb_Fix) * (-1.0);
      } else {
        Rx_Buffer_8_CAN2 = rtb_Power2 * rtb_Switch2 + rtb_Fix;
      }

      /* End of Switch: '<S39>/Switch' */

      /* Outputs for Atomic SubSystem: '<S40>/Bit Shift' */
      BitShift(Rx_coded6_CAN2, &rtB.BitShift_e);

      /* End of Outputs for SubSystem: '<S40>/Bit Shift' */

      /* Outputs for Atomic SubSystem: '<S40>/Bit Shift1' */
      BitShift1(rtB.BitShift_e.y, &rtB.BitShift1_ew);

      /* End of Outputs for SubSystem: '<S40>/Bit Shift1' */

      /* Sum: '<S40>/Minus' incorporates:
       *  DataTypeConversion: '<S40>/Cast1'
       */
      rtb_Power2 = Rx_coded6_CAN2 - rtB.BitShift1_ew.y;

      /* Math: '<S40>/Power1' incorporates:
       *  Constant: '<S10>/Constant4'
       *  Constant: '<S40>/Constant2'
       */
      if ((2.0 < 0.0) && (precision_CAN2 > rtb_Minus)) {
        rtb_Switch2 = -pow(-2.0, precision_CAN2);
      } else {
        rtb_Switch2 = pow(2.0, precision_CAN2);
      }

      /* Product: '<S40>/Divide' */
      rtb_Fix = rtb_Power2 / rtb_Switch2;

      /* Rounding: '<S40>/Fix1' */
      if (rtb_Fix < 0.0) {
        rtb_Fix = ceil(rtb_Fix);
      } else {
        rtb_Fix = floor(rtb_Fix);
      }

      /* End of Rounding: '<S40>/Fix1' */

      /* Sum: '<S40>/Minus1' incorporates:
       *  Product: '<S40>/Multiply1'
       */
      rtb_Power2 -= rtb_Fix * rtb_Switch2;

      /* Math: '<S40>/Power' incorporates:
       *  Constant: '<S40>/Constant1'
       */
      if ((2.0 < 0.0) && (rtb_Fix1 > floor(rtb_Fix1))) {
        rtb_Switch2 = -pow(-2.0, rtb_Fix1);
      } else {
        rtb_Switch2 = pow(2.0, rtb_Fix1);
      }

      /* End of Math: '<S40>/Power' */

      /* Switch: '<S40>/Switch' incorporates:
       *  Gain: '<S40>/Gain1'
       *  Product: '<S40>/Multiply'
       *  Sum: '<S40>/Minus2'
       */
      if (rtB.BitShift_e.y > ((uint8_T)0U)) {
        Rx_Buffer_6_CAN2 = (rtb_Power2 * rtb_Switch2 + rtb_Fix) * (-1.0);
      } else {
        Rx_Buffer_6_CAN2 = rtb_Power2 * rtb_Switch2 + rtb_Fix;
      }

      /* End of Switch: '<S40>/Switch' */
      Rx_ID_CAN2_s = Rx_ID_CAN2;
      Rx_ID_CAN1_s = Rx_ID_CAN1;
    } else {
      if (rtDWork.RxCAN_MODE) {
        rtDWork.RxCAN_MODE = false;
      }
    }

    /* End of Logic: '<S1>/AND1' */
    /* End of Outputs for SubSystem: '<S1>/Rx CAN' */

    /* M-S-Function: '<S6>/Level-2 M-file S-Function' */
    /* read from digital input */
    sender_id = DiginGet(DIGIN_PORTE_PIN2);

    /* Outputs for Enabled SubSystem: '<S1>/Tx CAN' incorporates:
     *  EnablePort: '<S12>/Enable'
     */
    /* Logic: '<S1>/AND3' */
    if (WKUP_button && sender_id) {
      if (!rtDWork.TxCAN_MODE) {
        rtDWork.TxCAN_MODE = true;
      }

      /* Switch: '<S112>/Switch2' incorporates:
       *  Constant: '<S12>/Constant2'
       *  Constant: '<S12>/Constant3'
       *  Constant: '<S12>/magnitude4'
       *  RelationalOperator: '<S112>/LessThanOrEqual1'
       *  RelationalOperator: '<S112>/LessThanOrEqual2'
       *  Switch: '<S112>/Switch1'
       */
      if (Tx_Max_CAN1 < Tx_Buffer_5_CAN1) {
        /* Switch: '<S112>/Switch' */
        rtb_Switch2 = Tx_Max_CAN1;
      } else if (Tx_Buffer_5_CAN1 >= Tx_Min_CAN1) {
        /* Switch: '<S112>/Switch1' */
        rtb_Switch2 = Tx_Buffer_5_CAN1;
      } else {
        rtb_Switch2 = Tx_Min_CAN1;
      }

      /* End of Switch: '<S112>/Switch2' */

      /* Abs: '<S112>/Abs' */
      rtb_Fix1 = fabs(rtb_Switch2);

      /* Rounding: '<S112>/Fix' */
      rtb_Fix = floor(rtb_Fix1);

      /* Sum: '<S112>/Minus' */
      rtb_Minus = rtb_Fix1 - rtb_Fix;

      /* Sum: '<S112>/Minus1' incorporates:
       *  Constant: '<S112>/Constant3'
       *  Constant: '<S12>/Constant4'
       *  Sum: '<S120>/Minus1'
       *  Sum: '<S121>/Minus1'
       *  Sum: '<S122>/Minus1'
       *  Sum: '<S123>/Minus1'
       *  Sum: '<S124>/Minus1'
       *  Sum: '<S125>/Minus1'
       *  Sum: '<S126>/Minus1'
       */
      rtb_Fix1_tmp = 7.0 - precision_CAN1;

      /* Gain: '<S112>/Gain' incorporates:
       *  Constant: '<S12>/Constant4'
       */
      rtb_Power2 = (-1.0) * precision_CAN1;

      /* Math: '<S112>/Power' incorporates:
       *  Constant: '<S112>/Constant1'
       *  Gain: '<S112>/Gain'
       */
      if ((2.0 < 0.0) && (rtb_Power2 > floor(rtb_Power2))) {
        rtb_Power2 = -pow(-2.0, rtb_Power2);
      } else {
        rtb_Power2 = pow(2.0, rtb_Power2);
      }

      /* End of Math: '<S112>/Power' */

      /* Math: '<S112>/Power2' incorporates:
       *  Constant: '<S112>/Constant4'
       *  Sum: '<S112>/Minus1'
       */
      if ((2.0 < 0.0) && (rtb_Fix1_tmp > floor(rtb_Fix1_tmp))) {
        rtb_Fix1 = -pow(-2.0, rtb_Fix1_tmp);
      } else {
        rtb_Fix1 = pow(2.0, rtb_Fix1_tmp);
      }

      /* End of Math: '<S112>/Power2' */

      /* Product: '<S112>/Divide' */
      rtb_Power2 = rtb_Minus / rtb_Power2;

      /* Rounding: '<S112>/Fix1' */
      if (rtb_Power2 < 0.0) {
        rtb_Power2 = ceil(rtb_Power2);
      } else {
        rtb_Power2 = floor(rtb_Power2);
      }

      /* End of Rounding: '<S112>/Fix1' */

      /* DataTypeConversion: '<S112>/Cast' incorporates:
       *  Constant: '<S112>/Constant'
       *  RelationalOperator: '<S112>/GreaterThan'
       */
      rtb_Cast = (uint8_T)(rtb_Switch2 < 0.0);

      /* Outputs for Atomic SubSystem: '<S112>/Bit Shift' */
      BitShift1(rtb_Cast, &rtB.BitShift_fo);

      /* End of Outputs for SubSystem: '<S112>/Bit Shift' */

      /* Math: '<S112>/Power1' incorporates:
       *  Constant: '<S112>/Constant2'
       *  Constant: '<S12>/Constant4'
       */
      if ((2.0 < 0.0) && (precision_CAN1 > floor(precision_CAN1))) {
        rtb_Minus = -pow(-2.0, precision_CAN1);
      } else {
        rtb_Minus = pow(2.0, precision_CAN1);
      }

      /* End of Math: '<S112>/Power1' */

      /* Sum: '<S112>/Plus' incorporates:
       *  DataTypeConversion: '<S112>/Cast1'
       *  DataTypeConversion: '<S112>/Cast2'
       *  Product: '<S112>/Multiply'
       */
      Tx_coded5_CAN1 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)(uint8_T)(rtb_Fix
        * rtb_Minus) + rtB.BitShift_fo.y) + (uint8_T)rtb_Power2);

      /* RelationalOperator: '<S112>/LessThanOrEqual' */
      OF5_CAN1 = (rtb_Fix >= rtb_Fix1);

      /* Switch: '<S120>/Switch2' incorporates:
       *  Constant: '<S12>/Constant2'
       *  Constant: '<S12>/Constant3'
       *  Constant: '<S12>/magnitude5'
       *  RelationalOperator: '<S120>/LessThanOrEqual1'
       *  RelationalOperator: '<S120>/LessThanOrEqual2'
       *  Switch: '<S120>/Switch1'
       */
      if (Tx_Max_CAN1 < Tx_Buffer_6_CAN1) {
        /* Switch: '<S120>/Switch' */
        rtb_Switch2 = Tx_Max_CAN1;
      } else if (Tx_Buffer_6_CAN1 >= Tx_Min_CAN1) {
        /* Switch: '<S120>/Switch1' */
        rtb_Switch2 = Tx_Buffer_6_CAN1;
      } else {
        rtb_Switch2 = Tx_Min_CAN1;
      }

      /* End of Switch: '<S120>/Switch2' */

      /* Abs: '<S120>/Abs' */
      rtb_Power2 = fabs(rtb_Switch2);

      /* Rounding: '<S120>/Fix' */
      rtb_Fix = floor(rtb_Power2);

      /* Sum: '<S120>/Minus' */
      rtb_Minus = rtb_Power2 - rtb_Fix;

      /* Gain: '<S120>/Gain' incorporates:
       *  Constant: '<S12>/Constant4'
       */
      rtb_Fix1 = (-1.0) * precision_CAN1;

      /* Math: '<S120>/Power' incorporates:
       *  Constant: '<S120>/Constant1'
       *  Gain: '<S120>/Gain'
       */
      if ((2.0 < 0.0) && (rtb_Fix1 > floor(rtb_Fix1))) {
        rtb_Fix1 = -pow(-2.0, rtb_Fix1);
      } else {
        rtb_Fix1 = pow(2.0, rtb_Fix1);
      }

      /* End of Math: '<S120>/Power' */

      /* Math: '<S120>/Power2' incorporates:
       *  Constant: '<S120>/Constant4'
       */
      if ((2.0 < 0.0) && (rtb_Fix1_tmp > floor(rtb_Fix1_tmp))) {
        rtb_Power2 = -pow(-2.0, rtb_Fix1_tmp);
      } else {
        rtb_Power2 = pow(2.0, rtb_Fix1_tmp);
      }

      /* End of Math: '<S120>/Power2' */

      /* Product: '<S120>/Divide' */
      rtb_Fix1 = rtb_Minus / rtb_Fix1;

      /* Rounding: '<S120>/Fix1' */
      if (rtb_Fix1 < 0.0) {
        rtb_Fix1 = ceil(rtb_Fix1);
      } else {
        rtb_Fix1 = floor(rtb_Fix1);
      }

      /* End of Rounding: '<S120>/Fix1' */

      /* DataTypeConversion: '<S120>/Cast' incorporates:
       *  Constant: '<S120>/Constant'
       *  RelationalOperator: '<S120>/GreaterThan'
       */
      rtb_Cast_hi = (uint8_T)(rtb_Switch2 < 0.0);

      /* Outputs for Atomic SubSystem: '<S120>/Bit Shift' */
      BitShift1(rtb_Cast_hi, &rtB.BitShift_g1);

      /* End of Outputs for SubSystem: '<S120>/Bit Shift' */

      /* Math: '<S120>/Power1' incorporates:
       *  Constant: '<S120>/Constant2'
       *  Constant: '<S12>/Constant4'
       */
      if ((2.0 < 0.0) && (precision_CAN1 > floor(precision_CAN1))) {
        rtb_Minus = -pow(-2.0, precision_CAN1);
      } else {
        rtb_Minus = pow(2.0, precision_CAN1);
      }

      /* End of Math: '<S120>/Power1' */

      /* Sum: '<S120>/Plus' incorporates:
       *  DataTypeConversion: '<S120>/Cast1'
       *  DataTypeConversion: '<S120>/Cast2'
       *  Product: '<S120>/Multiply'
       */
      Tx_coded6_CAN1 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)(uint8_T)(rtb_Fix
        * rtb_Minus) + rtB.BitShift_g1.y) + (uint8_T)rtb_Fix1);

      /* RelationalOperator: '<S120>/LessThanOrEqual' */
      OF6_CAN1 = (rtb_Fix >= rtb_Power2);

      /* Switch: '<S121>/Switch2' incorporates:
       *  Constant: '<S12>/Constant2'
       *  Constant: '<S12>/Constant3'
       *  Constant: '<S12>/magnitude3'
       *  RelationalOperator: '<S121>/LessThanOrEqual1'
       *  RelationalOperator: '<S121>/LessThanOrEqual2'
       *  Switch: '<S121>/Switch1'
       */
      if (Tx_Max_CAN1 < Tx_Buffer_4_CAN1) {
        /* Switch: '<S121>/Switch' */
        rtb_Switch2 = Tx_Max_CAN1;
      } else if (Tx_Buffer_4_CAN1 >= Tx_Min_CAN1) {
        /* Switch: '<S121>/Switch1' */
        rtb_Switch2 = Tx_Buffer_4_CAN1;
      } else {
        rtb_Switch2 = Tx_Min_CAN1;
      }

      /* End of Switch: '<S121>/Switch2' */

      /* Abs: '<S121>/Abs' */
      rtb_Power2 = fabs(rtb_Switch2);

      /* Rounding: '<S121>/Fix' */
      rtb_Fix = floor(rtb_Power2);

      /* Sum: '<S121>/Minus' */
      rtb_Minus = rtb_Power2 - rtb_Fix;

      /* Gain: '<S121>/Gain' incorporates:
       *  Constant: '<S12>/Constant4'
       */
      rtb_Fix1 = (-1.0) * precision_CAN1;

      /* Math: '<S121>/Power' incorporates:
       *  Constant: '<S121>/Constant1'
       *  Gain: '<S121>/Gain'
       */
      if ((2.0 < 0.0) && (rtb_Fix1 > floor(rtb_Fix1))) {
        rtb_Fix1 = -pow(-2.0, rtb_Fix1);
      } else {
        rtb_Fix1 = pow(2.0, rtb_Fix1);
      }

      /* End of Math: '<S121>/Power' */

      /* Math: '<S121>/Power2' incorporates:
       *  Constant: '<S121>/Constant4'
       */
      if ((2.0 < 0.0) && (rtb_Fix1_tmp > floor(rtb_Fix1_tmp))) {
        rtb_Power2 = -pow(-2.0, rtb_Fix1_tmp);
      } else {
        rtb_Power2 = pow(2.0, rtb_Fix1_tmp);
      }

      /* End of Math: '<S121>/Power2' */

      /* Product: '<S121>/Divide' */
      rtb_Fix1 = rtb_Minus / rtb_Fix1;

      /* Rounding: '<S121>/Fix1' */
      if (rtb_Fix1 < 0.0) {
        rtb_Fix1 = ceil(rtb_Fix1);
      } else {
        rtb_Fix1 = floor(rtb_Fix1);
      }

      /* End of Rounding: '<S121>/Fix1' */

      /* DataTypeConversion: '<S121>/Cast' incorporates:
       *  Constant: '<S121>/Constant'
       *  RelationalOperator: '<S121>/GreaterThan'
       */
      rtb_Cast_lf = (uint8_T)(rtb_Switch2 < 0.0);

      /* Outputs for Atomic SubSystem: '<S121>/Bit Shift' */
      BitShift1(rtb_Cast_lf, &rtB.BitShift_am);

      /* End of Outputs for SubSystem: '<S121>/Bit Shift' */

      /* Math: '<S121>/Power1' incorporates:
       *  Constant: '<S121>/Constant2'
       *  Constant: '<S12>/Constant4'
       */
      if ((2.0 < 0.0) && (precision_CAN1 > floor(precision_CAN1))) {
        rtb_Minus = -pow(-2.0, precision_CAN1);
      } else {
        rtb_Minus = pow(2.0, precision_CAN1);
      }

      /* End of Math: '<S121>/Power1' */

      /* Sum: '<S121>/Plus' incorporates:
       *  DataTypeConversion: '<S121>/Cast1'
       *  DataTypeConversion: '<S121>/Cast2'
       *  Product: '<S121>/Multiply'
       */
      Tx_coded4_CAN1 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)(uint8_T)(rtb_Fix
        * rtb_Minus) + rtB.BitShift_am.y) + (uint8_T)rtb_Fix1);

      /* RelationalOperator: '<S121>/LessThanOrEqual' */
      OF4_CAN1 = (rtb_Fix >= rtb_Power2);

      /* Switch: '<S122>/Switch2' incorporates:
       *  Constant: '<S12>/Constant2'
       *  Constant: '<S12>/Constant3'
       *  Constant: '<S12>/magnitude6'
       *  RelationalOperator: '<S122>/LessThanOrEqual1'
       *  RelationalOperator: '<S122>/LessThanOrEqual2'
       *  Switch: '<S122>/Switch1'
       */
      if (Tx_Max_CAN1 < Tx_Buffer_7_CAN1) {
        /* Switch: '<S122>/Switch' */
        rtb_Switch2 = Tx_Max_CAN1;
      } else if (Tx_Buffer_7_CAN1 >= Tx_Min_CAN1) {
        /* Switch: '<S122>/Switch1' */
        rtb_Switch2 = Tx_Buffer_7_CAN1;
      } else {
        rtb_Switch2 = Tx_Min_CAN1;
      }

      /* End of Switch: '<S122>/Switch2' */

      /* Abs: '<S122>/Abs' */
      rtb_Power2 = fabs(rtb_Switch2);

      /* Rounding: '<S122>/Fix' */
      rtb_Fix = floor(rtb_Power2);

      /* Sum: '<S122>/Minus' */
      rtb_Minus = rtb_Power2 - rtb_Fix;

      /* Gain: '<S122>/Gain' incorporates:
       *  Constant: '<S12>/Constant4'
       */
      rtb_Fix1 = (-1.0) * precision_CAN1;

      /* Math: '<S122>/Power' incorporates:
       *  Constant: '<S122>/Constant1'
       *  Gain: '<S122>/Gain'
       */
      if ((2.0 < 0.0) && (rtb_Fix1 > floor(rtb_Fix1))) {
        rtb_Fix1 = -pow(-2.0, rtb_Fix1);
      } else {
        rtb_Fix1 = pow(2.0, rtb_Fix1);
      }

      /* End of Math: '<S122>/Power' */

      /* Math: '<S122>/Power2' incorporates:
       *  Constant: '<S122>/Constant4'
       */
      if ((2.0 < 0.0) && (rtb_Fix1_tmp > floor(rtb_Fix1_tmp))) {
        rtb_Power2 = -pow(-2.0, rtb_Fix1_tmp);
      } else {
        rtb_Power2 = pow(2.0, rtb_Fix1_tmp);
      }

      /* End of Math: '<S122>/Power2' */

      /* Product: '<S122>/Divide' */
      rtb_Fix1 = rtb_Minus / rtb_Fix1;

      /* Rounding: '<S122>/Fix1' */
      if (rtb_Fix1 < 0.0) {
        rtb_Fix1 = ceil(rtb_Fix1);
      } else {
        rtb_Fix1 = floor(rtb_Fix1);
      }

      /* End of Rounding: '<S122>/Fix1' */

      /* DataTypeConversion: '<S122>/Cast' incorporates:
       *  Constant: '<S122>/Constant'
       *  RelationalOperator: '<S122>/GreaterThan'
       */
      rtb_Cast_n = (uint8_T)(rtb_Switch2 < 0.0);

      /* Outputs for Atomic SubSystem: '<S122>/Bit Shift' */
      BitShift1(rtb_Cast_n, &rtB.BitShift_ee);

      /* End of Outputs for SubSystem: '<S122>/Bit Shift' */

      /* Math: '<S122>/Power1' incorporates:
       *  Constant: '<S122>/Constant2'
       *  Constant: '<S12>/Constant4'
       */
      if ((2.0 < 0.0) && (precision_CAN1 > floor(precision_CAN1))) {
        rtb_Minus = -pow(-2.0, precision_CAN1);
      } else {
        rtb_Minus = pow(2.0, precision_CAN1);
      }

      /* End of Math: '<S122>/Power1' */

      /* Sum: '<S122>/Plus' incorporates:
       *  DataTypeConversion: '<S122>/Cast1'
       *  DataTypeConversion: '<S122>/Cast2'
       *  Product: '<S122>/Multiply'
       */
      Tx_coded7_CAN1 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)(uint8_T)(rtb_Fix
        * rtb_Minus) + rtB.BitShift_ee.y) + (uint8_T)rtb_Fix1);

      /* RelationalOperator: '<S122>/LessThanOrEqual' */
      OF7_CAN1 = (rtb_Fix >= rtb_Power2);

      /* Switch: '<S123>/Switch2' incorporates:
       *  Constant: '<S12>/Constant2'
       *  Constant: '<S12>/Constant3'
       *  Constant: '<S12>/magnitude7'
       *  RelationalOperator: '<S123>/LessThanOrEqual1'
       *  RelationalOperator: '<S123>/LessThanOrEqual2'
       *  Switch: '<S123>/Switch1'
       */
      if (Tx_Max_CAN1 < Tx_Buffer_8_CAN1) {
        /* Switch: '<S123>/Switch' */
        rtb_Switch2 = Tx_Max_CAN1;
      } else if (Tx_Buffer_8_CAN1 >= Tx_Min_CAN1) {
        /* Switch: '<S123>/Switch1' */
        rtb_Switch2 = Tx_Buffer_8_CAN1;
      } else {
        rtb_Switch2 = Tx_Min_CAN1;
      }

      /* End of Switch: '<S123>/Switch2' */

      /* Abs: '<S123>/Abs' */
      rtb_Power2 = fabs(rtb_Switch2);

      /* Rounding: '<S123>/Fix' */
      rtb_Fix = floor(rtb_Power2);

      /* Sum: '<S123>/Minus' */
      rtb_Minus = rtb_Power2 - rtb_Fix;

      /* Gain: '<S123>/Gain' incorporates:
       *  Constant: '<S12>/Constant4'
       */
      rtb_Fix1 = (-1.0) * precision_CAN1;

      /* Math: '<S123>/Power' incorporates:
       *  Constant: '<S123>/Constant1'
       *  Gain: '<S123>/Gain'
       */
      if ((2.0 < 0.0) && (rtb_Fix1 > floor(rtb_Fix1))) {
        rtb_Fix1 = -pow(-2.0, rtb_Fix1);
      } else {
        rtb_Fix1 = pow(2.0, rtb_Fix1);
      }

      /* End of Math: '<S123>/Power' */

      /* Math: '<S123>/Power2' incorporates:
       *  Constant: '<S123>/Constant4'
       */
      if ((2.0 < 0.0) && (rtb_Fix1_tmp > floor(rtb_Fix1_tmp))) {
        rtb_Power2 = -pow(-2.0, rtb_Fix1_tmp);
      } else {
        rtb_Power2 = pow(2.0, rtb_Fix1_tmp);
      }

      /* End of Math: '<S123>/Power2' */

      /* Product: '<S123>/Divide' */
      rtb_Fix1 = rtb_Minus / rtb_Fix1;

      /* Rounding: '<S123>/Fix1' */
      if (rtb_Fix1 < 0.0) {
        rtb_Fix1 = ceil(rtb_Fix1);
      } else {
        rtb_Fix1 = floor(rtb_Fix1);
      }

      /* End of Rounding: '<S123>/Fix1' */

      /* DataTypeConversion: '<S123>/Cast' incorporates:
       *  Constant: '<S123>/Constant'
       *  RelationalOperator: '<S123>/GreaterThan'
       */
      rtb_Cast_p = (uint8_T)(rtb_Switch2 < 0.0);

      /* Outputs for Atomic SubSystem: '<S123>/Bit Shift' */
      BitShift1(rtb_Cast_p, &rtB.BitShift_o0);

      /* End of Outputs for SubSystem: '<S123>/Bit Shift' */

      /* Math: '<S123>/Power1' incorporates:
       *  Constant: '<S123>/Constant2'
       *  Constant: '<S12>/Constant4'
       */
      if ((2.0 < 0.0) && (precision_CAN1 > floor(precision_CAN1))) {
        rtb_Minus = -pow(-2.0, precision_CAN1);
      } else {
        rtb_Minus = pow(2.0, precision_CAN1);
      }

      /* End of Math: '<S123>/Power1' */

      /* Sum: '<S123>/Plus' incorporates:
       *  DataTypeConversion: '<S123>/Cast1'
       *  DataTypeConversion: '<S123>/Cast2'
       *  Product: '<S123>/Multiply'
       */
      Tx_coded8_CAN1 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)(uint8_T)(rtb_Fix
        * rtb_Minus) + rtB.BitShift_o0.y) + (uint8_T)rtb_Fix1);

      /* RelationalOperator: '<S123>/LessThanOrEqual' */
      OF8_CAN1 = (rtb_Fix >= rtb_Power2);

      /* Switch: '<S124>/Switch2' incorporates:
       *  Constant: '<S12>/Constant2'
       *  Constant: '<S12>/Constant3'
       *  Constant: '<S12>/magnitude2'
       *  RelationalOperator: '<S124>/LessThanOrEqual1'
       *  RelationalOperator: '<S124>/LessThanOrEqual2'
       *  Switch: '<S124>/Switch1'
       */
      if (Tx_Max_CAN1 < Tx_Buffer_3_CAN1) {
        /* Switch: '<S124>/Switch' */
        rtb_Switch2 = Tx_Max_CAN1;
      } else if (Tx_Buffer_3_CAN1 >= Tx_Min_CAN1) {
        /* Switch: '<S124>/Switch1' */
        rtb_Switch2 = Tx_Buffer_3_CAN1;
      } else {
        rtb_Switch2 = Tx_Min_CAN1;
      }

      /* End of Switch: '<S124>/Switch2' */

      /* Abs: '<S124>/Abs' */
      rtb_Power2 = fabs(rtb_Switch2);

      /* Rounding: '<S124>/Fix' */
      rtb_Fix = floor(rtb_Power2);

      /* Sum: '<S124>/Minus' */
      rtb_Minus = rtb_Power2 - rtb_Fix;

      /* Gain: '<S124>/Gain' incorporates:
       *  Constant: '<S12>/Constant4'
       */
      rtb_Fix1 = (-1.0) * precision_CAN1;

      /* Math: '<S124>/Power' incorporates:
       *  Constant: '<S124>/Constant1'
       *  Gain: '<S124>/Gain'
       */
      if ((2.0 < 0.0) && (rtb_Fix1 > floor(rtb_Fix1))) {
        rtb_Fix1 = -pow(-2.0, rtb_Fix1);
      } else {
        rtb_Fix1 = pow(2.0, rtb_Fix1);
      }

      /* End of Math: '<S124>/Power' */

      /* Math: '<S124>/Power2' incorporates:
       *  Constant: '<S124>/Constant4'
       */
      if ((2.0 < 0.0) && (rtb_Fix1_tmp > floor(rtb_Fix1_tmp))) {
        rtb_Power2 = -pow(-2.0, rtb_Fix1_tmp);
      } else {
        rtb_Power2 = pow(2.0, rtb_Fix1_tmp);
      }

      /* End of Math: '<S124>/Power2' */

      /* Product: '<S124>/Divide' */
      rtb_Fix1 = rtb_Minus / rtb_Fix1;

      /* Rounding: '<S124>/Fix1' */
      if (rtb_Fix1 < 0.0) {
        rtb_Fix1 = ceil(rtb_Fix1);
      } else {
        rtb_Fix1 = floor(rtb_Fix1);
      }

      /* End of Rounding: '<S124>/Fix1' */

      /* DataTypeConversion: '<S124>/Cast' incorporates:
       *  Constant: '<S124>/Constant'
       *  RelationalOperator: '<S124>/GreaterThan'
       */
      rtb_Cast_l = (uint8_T)(rtb_Switch2 < 0.0);

      /* Outputs for Atomic SubSystem: '<S124>/Bit Shift' */
      BitShift1(rtb_Cast_l, &rtB.BitShift_lm);

      /* End of Outputs for SubSystem: '<S124>/Bit Shift' */

      /* Math: '<S124>/Power1' incorporates:
       *  Constant: '<S124>/Constant2'
       *  Constant: '<S12>/Constant4'
       */
      if ((2.0 < 0.0) && (precision_CAN1 > floor(precision_CAN1))) {
        rtb_Minus = -pow(-2.0, precision_CAN1);
      } else {
        rtb_Minus = pow(2.0, precision_CAN1);
      }

      /* End of Math: '<S124>/Power1' */

      /* Sum: '<S124>/Plus' incorporates:
       *  DataTypeConversion: '<S124>/Cast1'
       *  DataTypeConversion: '<S124>/Cast2'
       *  Product: '<S124>/Multiply'
       */
      Tx_coded3_CAN1 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)(uint8_T)(rtb_Fix
        * rtb_Minus) + rtB.BitShift_lm.y) + (uint8_T)rtb_Fix1);

      /* RelationalOperator: '<S124>/LessThanOrEqual' */
      OF3_CAN1 = (rtb_Fix >= rtb_Power2);

      /* Switch: '<S125>/Switch2' incorporates:
       *  Constant: '<S12>/Constant2'
       *  Constant: '<S12>/Constant3'
       *  Constant: '<S12>/magnitude1'
       *  RelationalOperator: '<S125>/LessThanOrEqual1'
       *  RelationalOperator: '<S125>/LessThanOrEqual2'
       *  Switch: '<S125>/Switch1'
       */
      if (Tx_Max_CAN1 < Tx_Buffer_2_CAN1) {
        /* Switch: '<S125>/Switch' */
        rtb_Switch2 = Tx_Max_CAN1;
      } else if (Tx_Buffer_2_CAN1 >= Tx_Min_CAN1) {
        /* Switch: '<S125>/Switch1' */
        rtb_Switch2 = Tx_Buffer_2_CAN1;
      } else {
        rtb_Switch2 = Tx_Min_CAN1;
      }

      /* End of Switch: '<S125>/Switch2' */

      /* Abs: '<S125>/Abs' */
      rtb_Power2 = fabs(rtb_Switch2);

      /* Rounding: '<S125>/Fix' */
      rtb_Fix = floor(rtb_Power2);

      /* Sum: '<S125>/Minus' */
      rtb_Minus = rtb_Power2 - rtb_Fix;

      /* Gain: '<S125>/Gain' incorporates:
       *  Constant: '<S12>/Constant4'
       */
      rtb_Fix1 = (-1.0) * precision_CAN1;

      /* Math: '<S125>/Power' incorporates:
       *  Constant: '<S125>/Constant1'
       *  Gain: '<S125>/Gain'
       */
      if ((2.0 < 0.0) && (rtb_Fix1 > floor(rtb_Fix1))) {
        rtb_Fix1 = -pow(-2.0, rtb_Fix1);
      } else {
        rtb_Fix1 = pow(2.0, rtb_Fix1);
      }

      /* End of Math: '<S125>/Power' */

      /* Math: '<S125>/Power2' incorporates:
       *  Constant: '<S125>/Constant4'
       */
      if ((2.0 < 0.0) && (rtb_Fix1_tmp > floor(rtb_Fix1_tmp))) {
        rtb_Power2 = -pow(-2.0, rtb_Fix1_tmp);
      } else {
        rtb_Power2 = pow(2.0, rtb_Fix1_tmp);
      }

      /* End of Math: '<S125>/Power2' */

      /* Product: '<S125>/Divide' */
      rtb_Fix1 = rtb_Minus / rtb_Fix1;

      /* Rounding: '<S125>/Fix1' */
      if (rtb_Fix1 < 0.0) {
        rtb_Fix1 = ceil(rtb_Fix1);
      } else {
        rtb_Fix1 = floor(rtb_Fix1);
      }

      /* End of Rounding: '<S125>/Fix1' */

      /* DataTypeConversion: '<S125>/Cast' incorporates:
       *  Constant: '<S125>/Constant'
       *  RelationalOperator: '<S125>/GreaterThan'
       */
      rtb_Cast_e4 = (uint8_T)(rtb_Switch2 < 0.0);

      /* Outputs for Atomic SubSystem: '<S125>/Bit Shift' */
      BitShift1(rtb_Cast_e4, &rtB.BitShift_aa);

      /* End of Outputs for SubSystem: '<S125>/Bit Shift' */

      /* Math: '<S125>/Power1' incorporates:
       *  Constant: '<S125>/Constant2'
       *  Constant: '<S12>/Constant4'
       */
      if ((2.0 < 0.0) && (precision_CAN1 > floor(precision_CAN1))) {
        rtb_Minus = -pow(-2.0, precision_CAN1);
      } else {
        rtb_Minus = pow(2.0, precision_CAN1);
      }

      /* End of Math: '<S125>/Power1' */

      /* Sum: '<S125>/Plus' incorporates:
       *  DataTypeConversion: '<S125>/Cast1'
       *  DataTypeConversion: '<S125>/Cast2'
       *  Product: '<S125>/Multiply'
       */
      Tx_coded2_CAN1 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)(uint8_T)(rtb_Fix
        * rtb_Minus) + rtB.BitShift_aa.y) + (uint8_T)rtb_Fix1);

      /* RelationalOperator: '<S125>/LessThanOrEqual' */
      OF2_CAN1 = (rtb_Fix >= rtb_Power2);

      /* Switch: '<S126>/Switch2' incorporates:
       *  Constant: '<S12>/Constant2'
       *  Constant: '<S12>/Constant3'
       *  Constant: '<S12>/magnitude'
       *  RelationalOperator: '<S126>/LessThanOrEqual1'
       *  RelationalOperator: '<S126>/LessThanOrEqual2'
       *  Switch: '<S126>/Switch1'
       */
      if (Tx_Max_CAN1 < Tx_Buffer_1_CAN1) {
        /* Switch: '<S126>/Switch' */
        rtb_Switch2 = Tx_Max_CAN1;
      } else if (Tx_Buffer_1_CAN1 >= Tx_Min_CAN1) {
        /* Switch: '<S126>/Switch1' */
        rtb_Switch2 = Tx_Buffer_1_CAN1;
      } else {
        rtb_Switch2 = Tx_Min_CAN1;
      }

      /* End of Switch: '<S126>/Switch2' */

      /* Abs: '<S126>/Abs' */
      rtb_Power2 = fabs(rtb_Switch2);

      /* Rounding: '<S126>/Fix' */
      rtb_Fix = floor(rtb_Power2);

      /* Sum: '<S126>/Minus' */
      rtb_Minus = rtb_Power2 - rtb_Fix;

      /* Gain: '<S126>/Gain' incorporates:
       *  Constant: '<S12>/Constant4'
       */
      rtb_Fix1 = (-1.0) * precision_CAN1;

      /* Math: '<S126>/Power' incorporates:
       *  Constant: '<S126>/Constant1'
       *  Gain: '<S126>/Gain'
       */
      if ((2.0 < 0.0) && (rtb_Fix1 > floor(rtb_Fix1))) {
        rtb_Fix1 = -pow(-2.0, rtb_Fix1);
      } else {
        rtb_Fix1 = pow(2.0, rtb_Fix1);
      }

      /* End of Math: '<S126>/Power' */

      /* Math: '<S126>/Power2' incorporates:
       *  Constant: '<S126>/Constant4'
       */
      if ((2.0 < 0.0) && (rtb_Fix1_tmp > floor(rtb_Fix1_tmp))) {
        rtb_Power2 = -pow(-2.0, rtb_Fix1_tmp);
      } else {
        rtb_Power2 = pow(2.0, rtb_Fix1_tmp);
      }

      /* End of Math: '<S126>/Power2' */

      /* Product: '<S126>/Divide' */
      rtb_Fix1 = rtb_Minus / rtb_Fix1;

      /* Rounding: '<S126>/Fix1' */
      if (rtb_Fix1 < 0.0) {
        rtb_Fix1 = ceil(rtb_Fix1);
      } else {
        rtb_Fix1 = floor(rtb_Fix1);
      }

      /* End of Rounding: '<S126>/Fix1' */

      /* DataTypeConversion: '<S126>/Cast' incorporates:
       *  Constant: '<S126>/Constant'
       *  RelationalOperator: '<S126>/GreaterThan'
       */
      rtb_Cast_eg = (uint8_T)(rtb_Switch2 < 0.0);

      /* Outputs for Atomic SubSystem: '<S126>/Bit Shift' */
      BitShift1(rtb_Cast_eg, &rtB.BitShift_p1);

      /* End of Outputs for SubSystem: '<S126>/Bit Shift' */

      /* Math: '<S126>/Power1' incorporates:
       *  Constant: '<S126>/Constant2'
       *  Constant: '<S12>/Constant4'
       */
      if ((2.0 < 0.0) && (precision_CAN1 > floor(precision_CAN1))) {
        rtb_Minus = -pow(-2.0, precision_CAN1);
      } else {
        rtb_Minus = pow(2.0, precision_CAN1);
      }

      /* End of Math: '<S126>/Power1' */

      /* Sum: '<S126>/Plus' incorporates:
       *  DataTypeConversion: '<S126>/Cast1'
       *  DataTypeConversion: '<S126>/Cast2'
       *  Product: '<S126>/Multiply'
       */
      Tx_coded1_CAN1 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)(uint8_T)(rtb_Fix
        * rtb_Minus) + rtB.BitShift_p1.y) + (uint8_T)rtb_Fix1);

      /* RelationalOperator: '<S126>/LessThanOrEqual' */
      OF1_CAN1 = (rtb_Fix >= rtb_Power2);

      /* Switch: '<S113>/Switch2' incorporates:
       *  Constant: '<S12>/Constant5'
       *  Constant: '<S12>/Constant6'
       *  Constant: '<S12>/magnitude9'
       *  RelationalOperator: '<S113>/LessThanOrEqual1'
       *  RelationalOperator: '<S113>/LessThanOrEqual2'
       *  Switch: '<S113>/Switch1'
       */
      if (Tx_Max_CAN2 < Tx_Buffer_2_CAN2) {
        /* Switch: '<S113>/Switch' */
        rtb_Switch2 = Tx_Max_CAN2;
      } else if (Tx_Buffer_2_CAN2 >= Tx_Min_CAN2) {
        /* Switch: '<S113>/Switch1' */
        rtb_Switch2 = Tx_Buffer_2_CAN2;
      } else {
        rtb_Switch2 = Tx_Min_CAN2;
      }

      /* End of Switch: '<S113>/Switch2' */

      /* Abs: '<S113>/Abs' */
      rtb_Power2 = fabs(rtb_Switch2);

      /* Rounding: '<S113>/Fix' */
      rtb_Fix = floor(rtb_Power2);

      /* Sum: '<S113>/Minus' */
      rtb_Minus = rtb_Power2 - rtb_Fix;

      /* Sum: '<S113>/Minus1' incorporates:
       *  Constant: '<S113>/Constant3'
       *  Constant: '<S12>/Constant7'
       *  Sum: '<S114>/Minus1'
       *  Sum: '<S115>/Minus1'
       *  Sum: '<S116>/Minus1'
       *  Sum: '<S117>/Minus1'
       *  Sum: '<S118>/Minus1'
       *  Sum: '<S119>/Minus1'
       *  Sum: '<S127>/Minus1'
       */
      rtb_Fix1_tmp = 7.0 - precision_CAN2;

      /* Gain: '<S113>/Gain' incorporates:
       *  Constant: '<S12>/Constant7'
       */
      rtb_Fix1 = (-1.0) * precision_CAN2;

      /* Math: '<S113>/Power' incorporates:
       *  Constant: '<S113>/Constant1'
       *  Gain: '<S113>/Gain'
       */
      if ((2.0 < 0.0) && (rtb_Fix1 > floor(rtb_Fix1))) {
        rtb_Fix1 = -pow(-2.0, rtb_Fix1);
      } else {
        rtb_Fix1 = pow(2.0, rtb_Fix1);
      }

      /* End of Math: '<S113>/Power' */

      /* Math: '<S113>/Power2' incorporates:
       *  Constant: '<S113>/Constant4'
       *  Sum: '<S113>/Minus1'
       */
      if ((2.0 < 0.0) && (rtb_Fix1_tmp > floor(rtb_Fix1_tmp))) {
        rtb_Power2 = -pow(-2.0, rtb_Fix1_tmp);
      } else {
        rtb_Power2 = pow(2.0, rtb_Fix1_tmp);
      }

      /* End of Math: '<S113>/Power2' */

      /* Product: '<S113>/Divide' */
      rtb_Fix1 = rtb_Minus / rtb_Fix1;

      /* Rounding: '<S113>/Fix1' */
      if (rtb_Fix1 < 0.0) {
        rtb_Fix1 = ceil(rtb_Fix1);
      } else {
        rtb_Fix1 = floor(rtb_Fix1);
      }

      /* End of Rounding: '<S113>/Fix1' */

      /* DataTypeConversion: '<S113>/Cast' incorporates:
       *  Constant: '<S113>/Constant'
       *  RelationalOperator: '<S113>/GreaterThan'
       */
      rtb_Cast_h = (uint8_T)(rtb_Switch2 < 0.0);

      /* Outputs for Atomic SubSystem: '<S113>/Bit Shift' */
      BitShift1(rtb_Cast_h, &rtB.BitShift_kb);

      /* End of Outputs for SubSystem: '<S113>/Bit Shift' */

      /* Math: '<S113>/Power1' incorporates:
       *  Constant: '<S113>/Constant2'
       *  Constant: '<S12>/Constant7'
       */
      if ((2.0 < 0.0) && (precision_CAN2 > floor(precision_CAN2))) {
        rtb_Minus = -pow(-2.0, precision_CAN2);
      } else {
        rtb_Minus = pow(2.0, precision_CAN2);
      }

      /* End of Math: '<S113>/Power1' */

      /* Sum: '<S113>/Plus' incorporates:
       *  DataTypeConversion: '<S113>/Cast1'
       *  DataTypeConversion: '<S113>/Cast2'
       *  Product: '<S113>/Multiply'
       */
      Tx_coded2_CAN2 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)(uint8_T)(rtb_Fix
        * rtb_Minus) + rtB.BitShift_kb.y) + (uint8_T)rtb_Fix1);

      /* RelationalOperator: '<S113>/LessThanOrEqual' */
      OF2_CAN2 = (rtb_Fix >= rtb_Power2);

      /* Switch: '<S114>/Switch2' incorporates:
       *  Constant: '<S12>/Constant5'
       *  Constant: '<S12>/Constant6'
       *  Constant: '<S12>/magnitude10'
       *  RelationalOperator: '<S114>/LessThanOrEqual1'
       *  RelationalOperator: '<S114>/LessThanOrEqual2'
       *  Switch: '<S114>/Switch1'
       */
      if (Tx_Max_CAN2 < Tx_Buffer_3_CAN2) {
        /* Switch: '<S114>/Switch' */
        rtb_Switch2 = Tx_Max_CAN2;
      } else if (Tx_Buffer_3_CAN2 >= Tx_Min_CAN2) {
        /* Switch: '<S114>/Switch1' */
        rtb_Switch2 = Tx_Buffer_3_CAN2;
      } else {
        rtb_Switch2 = Tx_Min_CAN2;
      }

      /* End of Switch: '<S114>/Switch2' */

      /* Abs: '<S114>/Abs' */
      rtb_Power2 = fabs(rtb_Switch2);

      /* Rounding: '<S114>/Fix' */
      rtb_Fix = floor(rtb_Power2);

      /* Sum: '<S114>/Minus' */
      rtb_Minus = rtb_Power2 - rtb_Fix;

      /* Gain: '<S114>/Gain' incorporates:
       *  Constant: '<S12>/Constant7'
       */
      rtb_Fix1 = (-1.0) * precision_CAN2;

      /* Math: '<S114>/Power' incorporates:
       *  Constant: '<S114>/Constant1'
       *  Gain: '<S114>/Gain'
       */
      if ((2.0 < 0.0) && (rtb_Fix1 > floor(rtb_Fix1))) {
        rtb_Fix1 = -pow(-2.0, rtb_Fix1);
      } else {
        rtb_Fix1 = pow(2.0, rtb_Fix1);
      }

      /* End of Math: '<S114>/Power' */

      /* Math: '<S114>/Power2' incorporates:
       *  Constant: '<S114>/Constant4'
       */
      if ((2.0 < 0.0) && (rtb_Fix1_tmp > floor(rtb_Fix1_tmp))) {
        rtb_Power2 = -pow(-2.0, rtb_Fix1_tmp);
      } else {
        rtb_Power2 = pow(2.0, rtb_Fix1_tmp);
      }

      /* End of Math: '<S114>/Power2' */

      /* Product: '<S114>/Divide' */
      rtb_Fix1 = rtb_Minus / rtb_Fix1;

      /* Rounding: '<S114>/Fix1' */
      if (rtb_Fix1 < 0.0) {
        rtb_Fix1 = ceil(rtb_Fix1);
      } else {
        rtb_Fix1 = floor(rtb_Fix1);
      }

      /* End of Rounding: '<S114>/Fix1' */

      /* DataTypeConversion: '<S114>/Cast' incorporates:
       *  Constant: '<S114>/Constant'
       *  RelationalOperator: '<S114>/GreaterThan'
       */
      rtb_Cast_ga = (uint8_T)(rtb_Switch2 < 0.0);

      /* Outputs for Atomic SubSystem: '<S114>/Bit Shift' */
      BitShift1(rtb_Cast_ga, &rtB.BitShift_dt);

      /* End of Outputs for SubSystem: '<S114>/Bit Shift' */

      /* Math: '<S114>/Power1' incorporates:
       *  Constant: '<S114>/Constant2'
       *  Constant: '<S12>/Constant7'
       */
      if ((2.0 < 0.0) && (precision_CAN2 > floor(precision_CAN2))) {
        rtb_Minus = -pow(-2.0, precision_CAN2);
      } else {
        rtb_Minus = pow(2.0, precision_CAN2);
      }

      /* End of Math: '<S114>/Power1' */

      /* Sum: '<S114>/Plus' incorporates:
       *  DataTypeConversion: '<S114>/Cast1'
       *  DataTypeConversion: '<S114>/Cast2'
       *  Product: '<S114>/Multiply'
       */
      Tx_coded3_CAN2 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)(uint8_T)(rtb_Fix
        * rtb_Minus) + rtB.BitShift_dt.y) + (uint8_T)rtb_Fix1);

      /* RelationalOperator: '<S114>/LessThanOrEqual' */
      OF3_CAN2 = (rtb_Fix >= rtb_Power2);

      /* Switch: '<S115>/Switch2' incorporates:
       *  Constant: '<S12>/Constant5'
       *  Constant: '<S12>/Constant6'
       *  Constant: '<S12>/magnitude11'
       *  RelationalOperator: '<S115>/LessThanOrEqual1'
       *  RelationalOperator: '<S115>/LessThanOrEqual2'
       *  Switch: '<S115>/Switch1'
       */
      if (Tx_Max_CAN2 < Tx_Buffer_4_CAN2) {
        /* Switch: '<S115>/Switch' */
        rtb_Switch2 = Tx_Max_CAN2;
      } else if (Tx_Buffer_4_CAN2 >= Tx_Min_CAN2) {
        /* Switch: '<S115>/Switch1' */
        rtb_Switch2 = Tx_Buffer_4_CAN2;
      } else {
        rtb_Switch2 = Tx_Min_CAN2;
      }

      /* End of Switch: '<S115>/Switch2' */

      /* Abs: '<S115>/Abs' */
      rtb_Power2 = fabs(rtb_Switch2);

      /* Rounding: '<S115>/Fix' */
      rtb_Fix = floor(rtb_Power2);

      /* Sum: '<S115>/Minus' */
      rtb_Minus = rtb_Power2 - rtb_Fix;

      /* Gain: '<S115>/Gain' incorporates:
       *  Constant: '<S12>/Constant7'
       */
      rtb_Fix1 = (-1.0) * precision_CAN2;

      /* Math: '<S115>/Power' incorporates:
       *  Constant: '<S115>/Constant1'
       *  Gain: '<S115>/Gain'
       */
      if ((2.0 < 0.0) && (rtb_Fix1 > floor(rtb_Fix1))) {
        rtb_Fix1 = -pow(-2.0, rtb_Fix1);
      } else {
        rtb_Fix1 = pow(2.0, rtb_Fix1);
      }

      /* End of Math: '<S115>/Power' */

      /* Math: '<S115>/Power2' incorporates:
       *  Constant: '<S115>/Constant4'
       */
      if ((2.0 < 0.0) && (rtb_Fix1_tmp > floor(rtb_Fix1_tmp))) {
        rtb_Power2 = -pow(-2.0, rtb_Fix1_tmp);
      } else {
        rtb_Power2 = pow(2.0, rtb_Fix1_tmp);
      }

      /* End of Math: '<S115>/Power2' */

      /* Product: '<S115>/Divide' */
      rtb_Fix1 = rtb_Minus / rtb_Fix1;

      /* Rounding: '<S115>/Fix1' */
      if (rtb_Fix1 < 0.0) {
        rtb_Fix1 = ceil(rtb_Fix1);
      } else {
        rtb_Fix1 = floor(rtb_Fix1);
      }

      /* End of Rounding: '<S115>/Fix1' */

      /* DataTypeConversion: '<S115>/Cast' incorporates:
       *  Constant: '<S115>/Constant'
       *  RelationalOperator: '<S115>/GreaterThan'
       */
      rtb_Cast_o = (uint8_T)(rtb_Switch2 < 0.0);

      /* Outputs for Atomic SubSystem: '<S115>/Bit Shift' */
      BitShift1(rtb_Cast_o, &rtB.BitShift_ks);

      /* End of Outputs for SubSystem: '<S115>/Bit Shift' */

      /* Math: '<S115>/Power1' incorporates:
       *  Constant: '<S115>/Constant2'
       *  Constant: '<S12>/Constant7'
       */
      if ((2.0 < 0.0) && (precision_CAN2 > floor(precision_CAN2))) {
        rtb_Minus = -pow(-2.0, precision_CAN2);
      } else {
        rtb_Minus = pow(2.0, precision_CAN2);
      }

      /* End of Math: '<S115>/Power1' */

      /* Sum: '<S115>/Plus' incorporates:
       *  DataTypeConversion: '<S115>/Cast1'
       *  DataTypeConversion: '<S115>/Cast2'
       *  Product: '<S115>/Multiply'
       */
      Tx_coded4_CAN2 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)(uint8_T)(rtb_Fix
        * rtb_Minus) + rtB.BitShift_ks.y) + (uint8_T)rtb_Fix1);

      /* RelationalOperator: '<S115>/LessThanOrEqual' */
      OF4_CAN2 = (rtb_Fix >= rtb_Power2);

      /* Switch: '<S116>/Switch2' incorporates:
       *  Constant: '<S12>/Constant5'
       *  Constant: '<S12>/Constant6'
       *  Constant: '<S12>/magnitude12'
       *  RelationalOperator: '<S116>/LessThanOrEqual1'
       *  RelationalOperator: '<S116>/LessThanOrEqual2'
       *  Switch: '<S116>/Switch1'
       */
      if (Tx_Max_CAN2 < Tx_Buffer_5_CAN2) {
        /* Switch: '<S116>/Switch' */
        rtb_Switch2 = Tx_Max_CAN2;
      } else if (Tx_Buffer_5_CAN2 >= Tx_Min_CAN2) {
        /* Switch: '<S116>/Switch1' */
        rtb_Switch2 = Tx_Buffer_5_CAN2;
      } else {
        rtb_Switch2 = Tx_Min_CAN2;
      }

      /* End of Switch: '<S116>/Switch2' */

      /* Abs: '<S116>/Abs' */
      rtb_Power2 = fabs(rtb_Switch2);

      /* Rounding: '<S116>/Fix' */
      rtb_Fix = floor(rtb_Power2);

      /* Sum: '<S116>/Minus' */
      rtb_Minus = rtb_Power2 - rtb_Fix;

      /* Gain: '<S116>/Gain' incorporates:
       *  Constant: '<S12>/Constant7'
       */
      rtb_Fix1 = (-1.0) * precision_CAN2;

      /* Math: '<S116>/Power' incorporates:
       *  Constant: '<S116>/Constant1'
       *  Gain: '<S116>/Gain'
       */
      if ((2.0 < 0.0) && (rtb_Fix1 > floor(rtb_Fix1))) {
        rtb_Fix1 = -pow(-2.0, rtb_Fix1);
      } else {
        rtb_Fix1 = pow(2.0, rtb_Fix1);
      }

      /* End of Math: '<S116>/Power' */

      /* Math: '<S116>/Power2' incorporates:
       *  Constant: '<S116>/Constant4'
       */
      if ((2.0 < 0.0) && (rtb_Fix1_tmp > floor(rtb_Fix1_tmp))) {
        rtb_Power2 = -pow(-2.0, rtb_Fix1_tmp);
      } else {
        rtb_Power2 = pow(2.0, rtb_Fix1_tmp);
      }

      /* End of Math: '<S116>/Power2' */

      /* Product: '<S116>/Divide' */
      rtb_Fix1 = rtb_Minus / rtb_Fix1;

      /* Rounding: '<S116>/Fix1' */
      if (rtb_Fix1 < 0.0) {
        rtb_Fix1 = ceil(rtb_Fix1);
      } else {
        rtb_Fix1 = floor(rtb_Fix1);
      }

      /* End of Rounding: '<S116>/Fix1' */

      /* DataTypeConversion: '<S116>/Cast' incorporates:
       *  Constant: '<S116>/Constant'
       *  RelationalOperator: '<S116>/GreaterThan'
       */
      rtb_Cast_f = (uint8_T)(rtb_Switch2 < 0.0);

      /* Outputs for Atomic SubSystem: '<S116>/Bit Shift' */
      BitShift1(rtb_Cast_f, &rtB.BitShift_ai);

      /* End of Outputs for SubSystem: '<S116>/Bit Shift' */

      /* Math: '<S116>/Power1' incorporates:
       *  Constant: '<S116>/Constant2'
       *  Constant: '<S12>/Constant7'
       */
      if ((2.0 < 0.0) && (precision_CAN2 > floor(precision_CAN2))) {
        rtb_Minus = -pow(-2.0, precision_CAN2);
      } else {
        rtb_Minus = pow(2.0, precision_CAN2);
      }

      /* End of Math: '<S116>/Power1' */

      /* Sum: '<S116>/Plus' incorporates:
       *  DataTypeConversion: '<S116>/Cast1'
       *  DataTypeConversion: '<S116>/Cast2'
       *  Product: '<S116>/Multiply'
       */
      Tx_coded5_CAN2 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)(uint8_T)(rtb_Fix
        * rtb_Minus) + rtB.BitShift_ai.y) + (uint8_T)rtb_Fix1);

      /* RelationalOperator: '<S116>/LessThanOrEqual' */
      OF5_CAN2 = (rtb_Fix >= rtb_Power2);

      /* Switch: '<S117>/Switch2' incorporates:
       *  Constant: '<S12>/Constant5'
       *  Constant: '<S12>/Constant6'
       *  Constant: '<S12>/magnitude13'
       *  RelationalOperator: '<S117>/LessThanOrEqual1'
       *  RelationalOperator: '<S117>/LessThanOrEqual2'
       *  Switch: '<S117>/Switch1'
       */
      if (Tx_Max_CAN2 < Tx_Buffer_6_CAN2) {
        /* Switch: '<S117>/Switch' */
        rtb_Switch2 = Tx_Max_CAN2;
      } else if (Tx_Buffer_6_CAN2 >= Tx_Min_CAN2) {
        /* Switch: '<S117>/Switch1' */
        rtb_Switch2 = Tx_Buffer_6_CAN2;
      } else {
        rtb_Switch2 = Tx_Min_CAN2;
      }

      /* End of Switch: '<S117>/Switch2' */

      /* Abs: '<S117>/Abs' */
      rtb_Power2 = fabs(rtb_Switch2);

      /* Rounding: '<S117>/Fix' */
      rtb_Fix = floor(rtb_Power2);

      /* Sum: '<S117>/Minus' */
      rtb_Minus = rtb_Power2 - rtb_Fix;

      /* Gain: '<S117>/Gain' incorporates:
       *  Constant: '<S12>/Constant7'
       */
      rtb_Fix1 = (-1.0) * precision_CAN2;

      /* Math: '<S117>/Power' incorporates:
       *  Constant: '<S117>/Constant1'
       *  Gain: '<S117>/Gain'
       */
      if ((2.0 < 0.0) && (rtb_Fix1 > floor(rtb_Fix1))) {
        rtb_Fix1 = -pow(-2.0, rtb_Fix1);
      } else {
        rtb_Fix1 = pow(2.0, rtb_Fix1);
      }

      /* End of Math: '<S117>/Power' */

      /* Math: '<S117>/Power2' incorporates:
       *  Constant: '<S117>/Constant4'
       */
      if ((2.0 < 0.0) && (rtb_Fix1_tmp > floor(rtb_Fix1_tmp))) {
        rtb_Power2 = -pow(-2.0, rtb_Fix1_tmp);
      } else {
        rtb_Power2 = pow(2.0, rtb_Fix1_tmp);
      }

      /* End of Math: '<S117>/Power2' */

      /* Product: '<S117>/Divide' */
      rtb_Fix1 = rtb_Minus / rtb_Fix1;

      /* Rounding: '<S117>/Fix1' */
      if (rtb_Fix1 < 0.0) {
        rtb_Fix1 = ceil(rtb_Fix1);
      } else {
        rtb_Fix1 = floor(rtb_Fix1);
      }

      /* End of Rounding: '<S117>/Fix1' */

      /* DataTypeConversion: '<S117>/Cast' incorporates:
       *  Constant: '<S117>/Constant'
       *  RelationalOperator: '<S117>/GreaterThan'
       */
      rtb_Cast_k2 = (uint8_T)(rtb_Switch2 < 0.0);

      /* Outputs for Atomic SubSystem: '<S117>/Bit Shift' */
      BitShift1(rtb_Cast_k2, &rtB.BitShift_l);

      /* End of Outputs for SubSystem: '<S117>/Bit Shift' */

      /* Math: '<S117>/Power1' incorporates:
       *  Constant: '<S117>/Constant2'
       *  Constant: '<S12>/Constant7'
       */
      if ((2.0 < 0.0) && (precision_CAN2 > floor(precision_CAN2))) {
        rtb_Minus = -pow(-2.0, precision_CAN2);
      } else {
        rtb_Minus = pow(2.0, precision_CAN2);
      }

      /* End of Math: '<S117>/Power1' */

      /* Sum: '<S117>/Plus' incorporates:
       *  DataTypeConversion: '<S117>/Cast1'
       *  DataTypeConversion: '<S117>/Cast2'
       *  Product: '<S117>/Multiply'
       */
      Tx_coded6_CAN2 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)(uint8_T)(rtb_Fix
        * rtb_Minus) + rtB.BitShift_l.y) + (uint8_T)rtb_Fix1);

      /* RelationalOperator: '<S117>/LessThanOrEqual' */
      OF6_CAN2 = (rtb_Fix >= rtb_Power2);

      /* Switch: '<S118>/Switch2' incorporates:
       *  Constant: '<S12>/Constant5'
       *  Constant: '<S12>/Constant6'
       *  Constant: '<S12>/magnitude14'
       *  RelationalOperator: '<S118>/LessThanOrEqual1'
       *  RelationalOperator: '<S118>/LessThanOrEqual2'
       *  Switch: '<S118>/Switch1'
       */
      if (Tx_Max_CAN2 < Tx_Buffer_7_CAN2) {
        /* Switch: '<S118>/Switch' */
        rtb_Switch2 = Tx_Max_CAN2;
      } else if (Tx_Buffer_7_CAN2 >= Tx_Min_CAN2) {
        /* Switch: '<S118>/Switch1' */
        rtb_Switch2 = Tx_Buffer_7_CAN2;
      } else {
        rtb_Switch2 = Tx_Min_CAN2;
      }

      /* End of Switch: '<S118>/Switch2' */

      /* Abs: '<S118>/Abs' */
      rtb_Power2 = fabs(rtb_Switch2);

      /* Rounding: '<S118>/Fix' */
      rtb_Fix = floor(rtb_Power2);

      /* Sum: '<S118>/Minus' */
      rtb_Minus = rtb_Power2 - rtb_Fix;

      /* Gain: '<S118>/Gain' incorporates:
       *  Constant: '<S12>/Constant7'
       */
      rtb_Fix1 = (-1.0) * precision_CAN2;

      /* Math: '<S118>/Power' incorporates:
       *  Constant: '<S118>/Constant1'
       *  Gain: '<S118>/Gain'
       */
      if ((2.0 < 0.0) && (rtb_Fix1 > floor(rtb_Fix1))) {
        rtb_Fix1 = -pow(-2.0, rtb_Fix1);
      } else {
        rtb_Fix1 = pow(2.0, rtb_Fix1);
      }

      /* End of Math: '<S118>/Power' */

      /* Math: '<S118>/Power2' incorporates:
       *  Constant: '<S118>/Constant4'
       */
      if ((2.0 < 0.0) && (rtb_Fix1_tmp > floor(rtb_Fix1_tmp))) {
        rtb_Power2 = -pow(-2.0, rtb_Fix1_tmp);
      } else {
        rtb_Power2 = pow(2.0, rtb_Fix1_tmp);
      }

      /* End of Math: '<S118>/Power2' */

      /* Product: '<S118>/Divide' */
      rtb_Fix1 = rtb_Minus / rtb_Fix1;

      /* Rounding: '<S118>/Fix1' */
      if (rtb_Fix1 < 0.0) {
        rtb_Fix1 = ceil(rtb_Fix1);
      } else {
        rtb_Fix1 = floor(rtb_Fix1);
      }

      /* End of Rounding: '<S118>/Fix1' */

      /* DataTypeConversion: '<S118>/Cast' incorporates:
       *  Constant: '<S118>/Constant'
       *  RelationalOperator: '<S118>/GreaterThan'
       */
      rtb_Cast_m = (uint8_T)(rtb_Switch2 < 0.0);

      /* Outputs for Atomic SubSystem: '<S118>/Bit Shift' */
      BitShift1(rtb_Cast_m, &rtB.BitShift_de);

      /* End of Outputs for SubSystem: '<S118>/Bit Shift' */

      /* Math: '<S118>/Power1' incorporates:
       *  Constant: '<S118>/Constant2'
       *  Constant: '<S12>/Constant7'
       */
      if ((2.0 < 0.0) && (precision_CAN2 > floor(precision_CAN2))) {
        rtb_Minus = -pow(-2.0, precision_CAN2);
      } else {
        rtb_Minus = pow(2.0, precision_CAN2);
      }

      /* End of Math: '<S118>/Power1' */

      /* Sum: '<S118>/Plus' incorporates:
       *  DataTypeConversion: '<S118>/Cast1'
       *  DataTypeConversion: '<S118>/Cast2'
       *  Product: '<S118>/Multiply'
       */
      Tx_coded7_CAN2 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)(uint8_T)(rtb_Fix
        * rtb_Minus) + rtB.BitShift_de.y) + (uint8_T)rtb_Fix1);

      /* RelationalOperator: '<S118>/LessThanOrEqual' */
      OF7_CAN2 = (rtb_Fix >= rtb_Power2);

      /* Switch: '<S119>/Switch2' incorporates:
       *  Constant: '<S12>/Constant5'
       *  Constant: '<S12>/Constant6'
       *  Constant: '<S12>/magnitude15'
       *  RelationalOperator: '<S119>/LessThanOrEqual1'
       *  RelationalOperator: '<S119>/LessThanOrEqual2'
       *  Switch: '<S119>/Switch1'
       */
      if (Tx_Max_CAN2 < Tx_Buffer_8_CAN2) {
        /* Switch: '<S119>/Switch' */
        rtb_Switch2 = Tx_Max_CAN2;
      } else if (Tx_Buffer_8_CAN2 >= Tx_Min_CAN2) {
        /* Switch: '<S119>/Switch1' */
        rtb_Switch2 = Tx_Buffer_8_CAN2;
      } else {
        rtb_Switch2 = Tx_Min_CAN2;
      }

      /* End of Switch: '<S119>/Switch2' */

      /* Abs: '<S119>/Abs' */
      rtb_Power2 = fabs(rtb_Switch2);

      /* Rounding: '<S119>/Fix' */
      rtb_Fix = floor(rtb_Power2);

      /* Sum: '<S119>/Minus' */
      rtb_Minus = rtb_Power2 - rtb_Fix;

      /* Gain: '<S119>/Gain' incorporates:
       *  Constant: '<S12>/Constant7'
       */
      rtb_Fix1 = (-1.0) * precision_CAN2;

      /* Math: '<S119>/Power' incorporates:
       *  Constant: '<S119>/Constant1'
       *  Gain: '<S119>/Gain'
       */
      if ((2.0 < 0.0) && (rtb_Fix1 > floor(rtb_Fix1))) {
        rtb_Fix1 = -pow(-2.0, rtb_Fix1);
      } else {
        rtb_Fix1 = pow(2.0, rtb_Fix1);
      }

      /* End of Math: '<S119>/Power' */

      /* Math: '<S119>/Power2' incorporates:
       *  Constant: '<S119>/Constant4'
       */
      if ((2.0 < 0.0) && (rtb_Fix1_tmp > floor(rtb_Fix1_tmp))) {
        rtb_Power2 = -pow(-2.0, rtb_Fix1_tmp);
      } else {
        rtb_Power2 = pow(2.0, rtb_Fix1_tmp);
      }

      /* End of Math: '<S119>/Power2' */

      /* Product: '<S119>/Divide' */
      rtb_Fix1 = rtb_Minus / rtb_Fix1;

      /* Rounding: '<S119>/Fix1' */
      if (rtb_Fix1 < 0.0) {
        rtb_Fix1 = ceil(rtb_Fix1);
      } else {
        rtb_Fix1 = floor(rtb_Fix1);
      }

      /* End of Rounding: '<S119>/Fix1' */

      /* DataTypeConversion: '<S119>/Cast' incorporates:
       *  Constant: '<S119>/Constant'
       *  RelationalOperator: '<S119>/GreaterThan'
       */
      rtb_Cast_g = (uint8_T)(rtb_Switch2 < 0.0);

      /* Outputs for Atomic SubSystem: '<S119>/Bit Shift' */
      BitShift1(rtb_Cast_g, &rtB.BitShift_cx);

      /* End of Outputs for SubSystem: '<S119>/Bit Shift' */

      /* Math: '<S119>/Power1' incorporates:
       *  Constant: '<S119>/Constant2'
       *  Constant: '<S12>/Constant7'
       */
      if ((2.0 < 0.0) && (precision_CAN2 > floor(precision_CAN2))) {
        rtb_Minus = -pow(-2.0, precision_CAN2);
      } else {
        rtb_Minus = pow(2.0, precision_CAN2);
      }

      /* End of Math: '<S119>/Power1' */

      /* Sum: '<S119>/Plus' incorporates:
       *  DataTypeConversion: '<S119>/Cast1'
       *  DataTypeConversion: '<S119>/Cast2'
       *  Product: '<S119>/Multiply'
       */
      Tx_coded8_CAN2 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)(uint8_T)(rtb_Fix
        * rtb_Minus) + rtB.BitShift_cx.y) + (uint8_T)rtb_Fix1);

      /* RelationalOperator: '<S119>/LessThanOrEqual' */
      OF8_CAN2 = (rtb_Fix >= rtb_Power2);

      /* Switch: '<S127>/Switch2' incorporates:
       *  Constant: '<S12>/Constant5'
       *  Constant: '<S12>/Constant6'
       *  Constant: '<S12>/magnitude8'
       *  RelationalOperator: '<S127>/LessThanOrEqual1'
       *  RelationalOperator: '<S127>/LessThanOrEqual2'
       *  Switch: '<S127>/Switch1'
       */
      if (Tx_Max_CAN2 < Tx_Buffer_1_CAN2) {
        /* Switch: '<S127>/Switch' */
        rtb_Switch2 = Tx_Max_CAN2;
      } else if (Tx_Buffer_1_CAN2 >= Tx_Min_CAN2) {
        /* Switch: '<S127>/Switch1' */
        rtb_Switch2 = Tx_Buffer_1_CAN2;
      } else {
        rtb_Switch2 = Tx_Min_CAN2;
      }

      /* End of Switch: '<S127>/Switch2' */

      /* Abs: '<S127>/Abs' */
      rtb_Power2 = fabs(rtb_Switch2);

      /* Rounding: '<S127>/Fix' */
      rtb_Fix = floor(rtb_Power2);

      /* Sum: '<S127>/Minus' */
      rtb_Minus = rtb_Power2 - rtb_Fix;

      /* Gain: '<S127>/Gain' incorporates:
       *  Constant: '<S12>/Constant7'
       */
      rtb_Fix1 = (-1.0) * precision_CAN2;

      /* Math: '<S127>/Power' incorporates:
       *  Constant: '<S127>/Constant1'
       *  Gain: '<S127>/Gain'
       */
      if ((2.0 < 0.0) && (rtb_Fix1 > floor(rtb_Fix1))) {
        rtb_Fix1 = -pow(-2.0, rtb_Fix1);
      } else {
        rtb_Fix1 = pow(2.0, rtb_Fix1);
      }

      /* End of Math: '<S127>/Power' */

      /* Math: '<S127>/Power2' incorporates:
       *  Constant: '<S127>/Constant4'
       */
      if ((2.0 < 0.0) && (rtb_Fix1_tmp > floor(rtb_Fix1_tmp))) {
        rtb_Power2 = -pow(-2.0, rtb_Fix1_tmp);
      } else {
        rtb_Power2 = pow(2.0, rtb_Fix1_tmp);
      }

      /* End of Math: '<S127>/Power2' */

      /* Product: '<S127>/Divide' */
      rtb_Fix1 = rtb_Minus / rtb_Fix1;

      /* Rounding: '<S127>/Fix1' */
      if (rtb_Fix1 < 0.0) {
        rtb_Fix1 = ceil(rtb_Fix1);
      } else {
        rtb_Fix1 = floor(rtb_Fix1);
      }

      /* End of Rounding: '<S127>/Fix1' */

      /* DataTypeConversion: '<S127>/Cast' incorporates:
       *  Constant: '<S127>/Constant'
       *  RelationalOperator: '<S127>/GreaterThan'
       */
      rtb_Cast_k = (uint8_T)(rtb_Switch2 < 0.0);

      /* Outputs for Atomic SubSystem: '<S127>/Bit Shift' */
      BitShift1(rtb_Cast_k, &rtB.BitShift_aq);

      /* End of Outputs for SubSystem: '<S127>/Bit Shift' */

      /* Math: '<S127>/Power1' incorporates:
       *  Constant: '<S127>/Constant2'
       *  Constant: '<S12>/Constant7'
       */
      if ((2.0 < 0.0) && (precision_CAN2 > floor(precision_CAN2))) {
        rtb_Minus = -pow(-2.0, precision_CAN2);
      } else {
        rtb_Minus = pow(2.0, precision_CAN2);
      }

      /* End of Math: '<S127>/Power1' */

      /* Sum: '<S127>/Plus' incorporates:
       *  DataTypeConversion: '<S127>/Cast1'
       *  DataTypeConversion: '<S127>/Cast2'
       *  Product: '<S127>/Multiply'
       */
      Tx_coded1_CAN2 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)(uint8_T)(rtb_Fix
        * rtb_Minus) + rtB.BitShift_aq.y) + (uint8_T)rtb_Fix1);

      /* RelationalOperator: '<S127>/LessThanOrEqual' */
      OF1_CAN2 = (rtb_Fix >= rtb_Power2);

      /* DataTypeConversion: '<S12>/Data Type Conversion1' incorporates:
       *  Constant: '<S12>/Constant'
       */
      Tx_ID_CAN1_s = (uint32_T)Tx_ID_CAN1;

      /* DataTypeConversion: '<S12>/Data Type Conversion2' incorporates:
       *  Constant: '<S12>/Constant1'
       */
      Tx_ID_CAN2_s = (uint32_T)Tx_ID_CAN2;

      /* Update for M-S-Function: '<S110>/S-Function' */
      {
        /* prepare the data */
        canTxData.uint8_T_info[0] = Tx_coded1_CAN1;
        canTxData.uint8_T_info[1] = Tx_coded2_CAN1;
        canTxData.uint8_T_info[2] = Tx_coded3_CAN1;
        canTxData.uint8_T_info[3] = Tx_coded4_CAN1;
        canTxData.uint8_T_info[4] = Tx_coded5_CAN1;
        canTxData.uint8_T_info[5] = Tx_coded6_CAN1;
        canTxData.uint8_T_info[6] = Tx_coded7_CAN1;
        canTxData.uint8_T_info[7] = Tx_coded8_CAN1;

        /* send the data */
        CanTransmit(0, constant_ID_TXCAN1, 8, &canTxData.uint8_T_info[0]);
      }

      /* Update for M-S-Function: '<S111>/S-Function' */
      {
        /* prepare the data */
        canTxData.uint8_T_info[0] = Tx_coded1_CAN2;
        canTxData.uint8_T_info[1] = Tx_coded2_CAN2;
        canTxData.uint8_T_info[2] = Tx_coded3_CAN2;
        canTxData.uint8_T_info[3] = Tx_coded4_CAN2;
        canTxData.uint8_T_info[4] = Tx_coded5_CAN2;
        canTxData.uint8_T_info[5] = Tx_coded6_CAN2;
        canTxData.uint8_T_info[6] = Tx_coded7_CAN2;
        canTxData.uint8_T_info[7] = Tx_coded8_CAN2;

        /* send the data */
        CanTransmit(1, constant_ID_TXCAN2, 8, &canTxData.uint8_T_info[0]);
      }
    } else {
      if (rtDWork.TxCAN_MODE) {
        rtDWork.TxCAN_MODE = false;
      }
    }

    /* End of Logic: '<S1>/AND3' */
    /* End of Outputs for SubSystem: '<S1>/Tx CAN' */

    /* UnitDelay: '<S15>/Output' */
    rtb_Output = rtDWork.Output_DSTATE;

    /* Sum: '<S17>/FixPt Sum1' incorporates:
     *  Constant: '<S17>/FixPt Constant'
     *  UnitDelay: '<S15>/Output'
     */
    rtb_FixPtSum1 = (uint8_T)((uint32_T)rtDWork.Output_DSTATE + ((uint8_T)1U));

    /* Switch: '<S18>/FixPt Switch' incorporates:
     *  Constant: '<S18>/Constant'
     */
    if (rtb_FixPtSum1 > ((uint8_T)1U)) {
      rtb_FixPtSum1 = ((uint8_T)0U);
    }

    /* End of Switch: '<S18>/FixPt Switch' */
  }

  if (rtM->Timing.TaskCounters.TID[2] == 0) {
    /* UnitDelay: '<S16>/Output' */
    rtB.Output = rtDWork.Output_DSTATE_k;

    /* Sum: '<S19>/FixPt Sum1' incorporates:
     *  Constant: '<S19>/FixPt Constant'
     */
    rtb_FixPtSum1_b = (uint8_T)((uint32_T)rtB.Output + ((uint8_T)1U));

    /* Switch: '<S20>/FixPt Switch' incorporates:
     *  Constant: '<S20>/Constant'
     */
    if (rtb_FixPtSum1_b > ((uint8_T)1U)) {
      rtb_FixPtSum1_b = ((uint8_T)0U);
    }

    /* End of Switch: '<S20>/FixPt Switch' */
  }

  if (rtM->Timing.TaskCounters.TID[1] == 0) {
    /* Switch: '<S2>/Switch' incorporates:
     *  Constant: '<S2>/Constant'
     *  Logic: '<S2>/Logical Operator'
     */
    if (HANtuneOverride || WKUP_button) {
      /* DataTypeConversion: '<S2>/Data Type Conversion' */
      LedValue = (rtb_Output != 0);
    } else {
      /* DataTypeConversion: '<S2>/Data Type Conversion' */
      LedValue = (rtB.Output != 0);
    }

    /* End of Switch: '<S2>/Switch' */
  }

  /* M-S-Function: '<S107>/Level-2 M-file S-Function' */
  /* read the current CPU load */
  SI_CPUload = OsGetCpuLoad();

  /* M-S-Function: '<S108>/Level-2 M-file S-Function' */
  /* read the free heap size */
  SI_FreeHeap = OsGetFreeHeapSize();

  /* M-S-Function: '<S109>/Level-2 M-file S-Function' */
  /* read the task's free stack size */
  SI_FreeStack = OsGetTaskFreeStackSize("AppCtrlTask");
  if (rtM->Timing.TaskCounters.TID[1] == 0) {
    /* Update for M-S-Function: '<S22>/Level-2 M-file S-Function' */
    /* update digital output */
    if (LedValue == 0) {
      DigoutSet(DIGOUT_PORTC_PIN13, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTC_PIN13, DIGOUT_HIGH);
    }

    /* Update for UnitDelay: '<S15>/Output' */
    rtDWork.Output_DSTATE = rtb_FixPtSum1;
  }

  if (rtM->Timing.TaskCounters.TID[2] == 0) {
    /* Update for UnitDelay: '<S16>/Output' */
    rtDWork.Output_DSTATE_k = rtb_FixPtSum1_b;
  }

  rate_scheduler();
}

/* Model initialize function */
void HANcoder_E407_CAN_COMM_TEST_initialize(void)
{
  /* Registration code */

  /* block I/O */

  /* exported global signals */
  constant_ID_TXCAN1 = 24U;
  constant_ID_TXCAN2 = 24U;
  constant_ID_RXCAN1 = 24U;
  constant_ID_RXCAN2 = 24U;

  {
    uint32_T constant_ID_RXCAN1_tmp;

    {
      /* user code (Start function Header) */
      uint8_t canResult1;
      tCanFilter canFilter1;
      uint8_t canResult2;
      tCanFilter canFilter2;

      /* user code (Start function Body) */

      /* initialize the CAN driver. */
      CanInit(64, 8);

      /* initialize the CAN I/O module for channel 1 */
      CanIoInit(0);

      /* initialize the CAN I/O module for channel 2 */
      CanIoInit(1);

      /* Start for M-S-Function: '<S22>/Level-2 M-file S-Function' */

      /* configure the digital output */
      DigoutConfigure(DIGOUT_PORTC_PIN13, DIGOUT_CFG_PUSHPULL);

      /* Start for M-S-Function: '<S21>/Level-2 M-file S-Function' */

      /* configure the digital input */
      DiginConfigure(DIGIN_PORTA_PIN0, DIGIN_CFG_PULLDOWN);

      /* Start for M-S-Function: '<S7>/Level-2 M-file S-Function' */

      /* configure the digital input */
      DiginConfigure(DIGIN_PORTE_PIN4, DIGIN_CFG_PULLDOWN);

      /* Start for Enabled SubSystem: '<S1>/Rx CAN' */
      /* Start for M-S-Function: '<S23>/S-Function' */

      /* register a CAN storage buffer for the message with this ID */
      CanIoCreateMessageReceivedStorage(0, constant_ID_RXCAN1);

      /* Start for M-S-Function: '<S24>/S-Function' */

      /* register a CAN storage buffer for the message with this ID */
      CanIoCreateMessageReceivedStorage(1, constant_ID_RXCAN2);

      /* End of Start for SubSystem: '<S1>/Rx CAN' */

      /* Start for M-S-Function: '<S6>/Level-2 M-file S-Function' */

      /* configure the digital input */
      DiginConfigure(DIGIN_PORTE_PIN2, DIGIN_CFG_PULLDOWN);

      /* Start for M-S-Function: '<S3>/Level-2 M-file S-Function' */

      /* configure the stack size for the task that executes the model */
      AppCtrlTaskSetStackSize((configMINIMAL_STACK_SIZE*sizeof(portBASE_TYPE)) +
        0);

      /* configure the sample time of the model in microseconds */
      AppCtrlTaskSetPeriod(10000);

      /* Run the ADC conversions ten times faster than the Simulink model */
      ADCconversionTaskSetPeriod(10000/10);

      /* Start for M-S-Function: '<S4>/Level-2 M-file S-Function' */

      /* store the CAN controller's filter configuration */
      canFilter1.mask = 0x00000000;
      canFilter1.code = 0x00000000;
      canFilter1.mode = CAN_FILTER_MODE_STDID_ONLY;

      /* connect and synchronize the CAN bus */
      canResult1 = CanConnect(0, 125000, &canFilter1);
      configASSERT(canResult1 == TRUE);

      /* store the CAN controller's filter configuration */
      canFilter2.mask = 0x00000000;
      canFilter2.code = 0x00000000;
      canFilter2.mode = CAN_FILTER_MODE_STDID_ONLY;

      /* connect and synchronize the CAN bus */
      canResult2 = CanConnect(1, 125000, &canFilter2);
      configASSERT(canResult2 == TRUE);

      /* Start for M-S-Function: '<S14>/Level-2 M-file S-Function' */

      /* initialize the measurement and calibration interface */
      MacUsbComInit();
      MacInit();
    }

    /* ConstCode for Enabled SubSystem: '<S1>/Tx CAN' */
    /* ConstCode for Enabled SubSystem: '<S1>/Rx CAN' */
    /* ConstCode for DataTypeConversion: '<S10>/Cast' incorporates:
     *  Constant: '<S10>/Constant'
     *  DataTypeConversion: '<S10>/Cast1'
     *  DataTypeConversion: '<S12>/Data Type Conversion3'
     *  DataTypeConversion: '<S12>/Data Type Conversion4'
     */
    constant_ID_RXCAN1_tmp = (uint32_T)24.0;

    /* End of ConstCode for SubSystem: '<S1>/Tx CAN' */
    constant_ID_RXCAN1 = constant_ID_RXCAN1_tmp;

    /* ConstCode for DataTypeConversion: '<S10>/Cast1' */
    constant_ID_RXCAN2 = constant_ID_RXCAN1_tmp;

    /* End of ConstCode for SubSystem: '<S1>/Rx CAN' */

    /* ConstCode for Enabled SubSystem: '<S1>/Tx CAN' */
    /* ConstCode for DataTypeConversion: '<S12>/Data Type Conversion3' */
    constant_ID_TXCAN1 = constant_ID_RXCAN1_tmp;

    /* ConstCode for DataTypeConversion: '<S12>/Data Type Conversion4' */
    constant_ID_TXCAN2 = constant_ID_RXCAN1_tmp;

    /* End of ConstCode for SubSystem: '<S1>/Tx CAN' */
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
