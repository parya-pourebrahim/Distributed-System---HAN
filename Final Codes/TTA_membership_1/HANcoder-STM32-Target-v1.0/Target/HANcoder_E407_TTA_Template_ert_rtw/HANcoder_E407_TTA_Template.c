/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_TTA_Template.c
 *
 * Code generated for Simulink model 'HANcoder_E407_TTA_Template'.
 *
 * Model version                  : 1.154
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Feb 15 09:48:55 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "HANcoder_E407_TTA_Template.h"
#include "HANcoder_E407_TTA_Template_private.h"

/* map ByteSwap function */
#define ByteSwap(x)                    (ByteSwap_x((uint8_t *) &x, sizeof(x)))

void TimeoutEventIRQ_TIMEOUT_TIM4_PIN_PD12(void);
void TimeoutOverflowIRQ_TIMEOUT_MODULE_TIM4(void);
const msg_buffer_type HANcoder_E407_TTA_Template_rtZmsg_buffer_type = {
  0U,                                  /* Buffer_1 */
  0U,                                  /* Buffer_2 */
  0U,                                  /* Buffer_3 */
  0U,                                  /* Buffer_4 */
  0U,                                  /* Buffer_5 */
  0U,                                  /* Buffer_6 */
  0U,                                  /* Buffer_7 */
  0U                                   /* Buffer_8 */
} ;                                    /* msg_buffer_type ground */

/* Exported block signals */
real_T simulation_time;                /* '<S10>/Digital Clock' */
real_T script_run_s;                   /* '<S10>/Constant' */
real_T Board_ID_s;                     /* '<S31>/Add' */
uint32_T SI_FreeHeap;                  /* '<S24>/Level-2 M-file S-Function' */
uint32_T SI_FreeStack;                 /* '<S25>/Level-2 M-file S-Function' */
uint16_T local_ticks_interrupt;        /* '<S33>/Switch' */
uint8_T SI_CPUload;                    /* '<S23>/Level-2 M-file S-Function' */
boolean_T LedValue;                    /* '<S2>/Data Type Conversion' */
real_T Master_ID_s;                    /* '<S160>/Data Store Read' */
real_T Role_ID_s;                      /* '<S160>/Data Store Read1' */
real_T sync_bc0_miss_counter_s;        /* '<S160>/Data Store Read11' */
real_T sync_bc1_miss_counter_s;        /* '<S160>/Data Store Read12' */
real_T votes_Board_1_DEBUG;            /* '<S160>/Data Store Read3' */
real_T votes_Board_2_DEBUG;            /* '<S160>/Data Store Read3' */
real_T votes_Board_3_DEBUG;            /* '<S160>/Data Store Read3' */
real_T Board_1_error_counter_s;        /* '<S160>/Data Store Read4' */
real_T Board_2_error_counter_s;        /* '<S160>/Data Store Read5' */
real_T Board_3_error_counter_s;        /* '<S160>/Data Store Read6' */
real_T msg_count_DEBUG_s;              /* '<S163>/Data Store Read24' */
real_T Desync_Sync_bc1_s;              /* '<S413>/Saturation' */
real_T Desync_Sync_bc0_s;              /* '<S266>/Saturation' */
real_T TM1_timeout_counter_s;          /* '<S254>/Switch' */
real_T TM2_timeout_counter_s;          /* '<S255>/Switch' */
real_T TM3_timeout_counter_s;          /* '<S256>/Switch' */
uint16_T Rx_init_LT;                   /* '<S141>/Cast' */
uint8_T Vote_s;                        /* '<S294>/Cast' */
uint8_T Rx_init_id;                    /* '<S145>/bit_shift' */
uint8_T Rx_init_mc;                    /* '<S144>/bit_shift' */
uint8_T Rx_init_bc;                    /* '<S143>/bit_shift' */
uint8_T bacic_cycle_s;                 /* '<S115>/Switch' */
boolean_T BC1_sync_processed_s;        /* '<S160>/Data Store Read10' */
boolean_T BC0_sync_processed_s;        /* '<S160>/Data Store Read2' */
boolean_T BC0_vote1_processed_s;       /* '<S160>/Data Store Read7' */
boolean_T BC0_vote2_processed_s;       /* '<S160>/Data Store Read8' */
boolean_T BC0_vote3_processed_s;       /* '<S160>/Data Store Read9' */
boolean_T reset_s;                     /* '<S170>/Data Store Read' */
real_T Tx_temporal_msg_CAN2;           /* '<S29>/Cast To Double' */
uint32_T TxCAN2_counter_s;             /* '<S29>/Sum1' */
uint32_T TxID_CAN2_s;                  /* '<S29>/Data Store Read3' */
real_T Rx_temporal_msg_CAN2;           /* '<S74>/Cast To Double' */
uint32_T RxCAN2_counter_s;             /* '<S28>/Sum1' */
uint32_T RxID_CAN2_s;                  /* '<S28>/Data Store Read' */
uint16_T Rx_msg_ticks_CAN2;            /* '<S74>/Local_Time' */
real_T Rx_temporal_msg_CAN1;           /* '<S40>/Cast To Double' */
uint32_T RxCAN1_counter_s;             /* '<S26>/Sum1' */
uint32_T RxID_CAN1_s;                  /* '<S26>/Data Store Read' */
uint16_T Rx_msg_ticks_CAN1;            /* '<S40>/Local_Time' */
real_T Tx_temporal_msg_CAN1;           /* '<S27>/Cast To Double' */
uint32_T TxCAN1_counter_s;             /* '<S27>/Sum1' */
uint32_T TxID_CAN1_s;                  /* '<S27>/Data Store Read3' */

/* Exported block parameters */
real_T COMM_Phase1 = 10.0;             /* Variable: COMM_Phase1
                                        * Referenced by:
                                        *   '<S127>/Constant2'
                                        *   '<S141>/Constant1'
                                        *   '<S184>/Constant24'
                                        *   '<S184>/Constant27'
                                        *   '<S202>/Constant24'
                                        *   '<S202>/Constant27'
                                        *   '<S220>/Constant24'
                                        *   '<S220>/Constant27'
                                        *   '<S238>/Constant24'
                                        *   '<S238>/Constant27'
                                        *   '<S266>/Constant'
                                        *   '<S392>/Constant24'
                                        *   '<S392>/Constant27'
                                        *   '<S413>/Constant'
                                        */
real_T COMM_Phase2 = 10.0;             /* Variable: COMM_Phase2
                                        * Referenced by:
                                        *   '<S127>/Constant3'
                                        *   '<S141>/Constant2'
                                        *   '<S185>/Constant24'
                                        *   '<S185>/Constant27'
                                        *   '<S203>/Constant24'
                                        *   '<S203>/Constant27'
                                        *   '<S221>/Constant24'
                                        *   '<S221>/Constant27'
                                        *   '<S239>/Constant24'
                                        *   '<S239>/Constant27'
                                        *   '<S266>/Constant1'
                                        *   '<S393>/Constant24'
                                        *   '<S393>/Constant27'
                                        *   '<S413>/Constant1'
                                        */
real_T COMM_Phase_init1 = 0.0;         /* Variable: COMM_Phase_init1
                                        * Referenced by:
                                        *   '<S127>/Constant6'
                                        *   '<S184>/Constant'
                                        *   '<S202>/Constant'
                                        *   '<S220>/Constant'
                                        *   '<S238>/Constant'
                                        *   '<S392>/Constant'
                                        */
real_T COMM_Phase_init2 = 5.0;         /* Variable: COMM_Phase_init2
                                        * Referenced by:
                                        *   '<S127>/Constant7'
                                        *   '<S185>/Constant'
                                        *   '<S203>/Constant'
                                        *   '<S221>/Constant'
                                        *   '<S239>/Constant'
                                        *   '<S393>/Constant'
                                        */
real_T script_run = 0.0;               /* Variable: script_run
                                        * Referenced by: '<S10>/Constant'
                                        */
boolean_T HANtuneOverride = 0;         /* Variable: HANtuneOverride
                                        * Referenced by: '<S2>/Constant'
                                        */

/* Block signals (default storage) */
BlockIO rtB;

/* Block states (default storage) */
D_Work rtDWork;

/* Previous zero-crossings (trigger) states */
PrevZCSigStates rtPrevZCSigState;

/* Real-time model */
RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;
static void rate_scheduler(void);
static tCanDataTypes canTxData;
static tCanDataTypes canRxData_0_23U;
static tCanDataTypes canRxData_0_24U;
static tCanDataTypes canRxData_0_25U;
static tCanDataTypes canRxData_0_22U;
static tCanDataTypes canRxData_0_21U;
static tCanDataTypes canRxData_0_1U;
static tCanDataTypes canRxData_0_11U;
static tCanDataTypes canRxData_0_12U;
static tCanDataTypes canRxData_0_13U;
static tCanDataTypes canRxData_1_23U;
static tCanDataTypes canRxData_1_24U;
static tCanDataTypes canRxData_1_25U;
static tCanDataTypes canRxData_1_22U;
static tCanDataTypes canRxData_1_21U;
static tCanDataTypes canRxData_1_1U;
static tCanDataTypes canRxData_1_11U;
static tCanDataTypes canRxData_1_12U;
static tCanDataTypes canRxData_1_13U;

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

void TimeoutEventIRQ_TIMEOUT_TIM4_PIN_PD12(void)
{
  /* Output and update for function-call system: '<S10>/Local Time generation' */
  {
    /* local block i/o variables */
    uint16_T rtb_Level2MfileSFunction;

    /* Switch: '<S33>/Switch' incorporates:
     *  Constant: '<S33>/Constant2'
     *  DataStoreRead: '<S33>/Data Store Read'
     *  DataStoreRead: '<S33>/Data Store Read1'
     *  Sum: '<S33>/Sum1'
     */
    if (rtB.Logic[0]) {
      local_ticks_interrupt = (uint16_T)((uint32_T)rtDWork.Local_Ticks +
        ((uint16_T)1U));
    } else {
      local_ticks_interrupt = rtDWork.Local_Ticks;
    }

    /* End of Switch: '<S33>/Switch' */

    /* DataStoreWrite: '<S33>/Data Store Write' */
    rtDWork.Local_Ticks = local_ticks_interrupt;

    /* Chart: '<S33>/Chart' */
    /* Gateway: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/Local Time generation/Chart */
    /* During: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/Local Time generation/Chart */
    if (rtDWork.bitsForTID1.is_active_c9_HANcoder_E407_TTA_ == 0U) {
      /* Entry: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/Local Time generation/Chart */
      rtDWork.bitsForTID1.is_active_c9_HANcoder_E407_TTA_ = 1U;

      /* Entry Internal: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/Local Time generation/Chart */
      /* Transition: '<S110>:10' */
      /* Entry 'Send_Trigger': '<S110>:9' */
      if (rtB.Logic[0]) {
        /* Outputs for Function Call SubSystem: '<S10>/TTA System' */
        /* Event: '<S110>:3' */
        TTASystem(&rtB.TTASystem_c, &rtConstB.TTASystem_c, &rtDWork.TTASystem_c,
                  &rtDWork.Board_ID, &rtDWork.Local_Ticks, &rtDWork.Master_ID,
                  &rtDWork.Msg_Rx_CAN1, &rtDWork.Msg_Rx_CAN2,
                  &rtDWork.Msg_Rx_Ticks_CAN1, &rtDWork.Msg_Rx_Ticks_CAN2,
                  &rtDWork.Msg_Tx_CAN1, &rtDWork.Msg_Tx_CAN2,
                  &rtDWork.New_Msg_Ready_CAN1, &rtDWork.New_Msg_Ready_CAN2,
                  &rtDWork.RxID_CAN1, &rtDWork.RxID_CAN2, &rtDWork.Rx_State_CAN1,
                  &rtDWork.Rx_State_CAN2, &rtDWork.Toggle_Pin_A0,
                  &rtDWork.Toggle_Pin_D12, &rtDWork.Toggle_Pin_D13,
                  &rtDWork.Toggle_Pin_D8, &rtDWork.Toggle_Pin_D9,
                  &rtDWork.TxID_CAN1, &rtDWork.TxID_CAN2,
                  &rtDWork.Tx_msg_count_CAN1, &rtDWork.Tx_msg_count_CAN2);

        /* End of Outputs for SubSystem: '<S10>/TTA System' */
      }
    } else {
      /* During 'Send_Trigger': '<S110>:9' */
      if (rtB.Logic[0]) {
        /* Outputs for Function Call SubSystem: '<S10>/TTA System' */
        /* Event: '<S110>:3' */
        TTASystem(&rtB.TTASystem_c, &rtConstB.TTASystem_c, &rtDWork.TTASystem_c,
                  &rtDWork.Board_ID, &rtDWork.Local_Ticks, &rtDWork.Master_ID,
                  &rtDWork.Msg_Rx_CAN1, &rtDWork.Msg_Rx_CAN2,
                  &rtDWork.Msg_Rx_Ticks_CAN1, &rtDWork.Msg_Rx_Ticks_CAN2,
                  &rtDWork.Msg_Tx_CAN1, &rtDWork.Msg_Tx_CAN2,
                  &rtDWork.New_Msg_Ready_CAN1, &rtDWork.New_Msg_Ready_CAN2,
                  &rtDWork.RxID_CAN1, &rtDWork.RxID_CAN2, &rtDWork.Rx_State_CAN1,
                  &rtDWork.Rx_State_CAN2, &rtDWork.Toggle_Pin_A0,
                  &rtDWork.Toggle_Pin_D12, &rtDWork.Toggle_Pin_D13,
                  &rtDWork.Toggle_Pin_D8, &rtDWork.Toggle_Pin_D9,
                  &rtDWork.TxID_CAN1, &rtDWork.TxID_CAN2,
                  &rtDWork.Tx_msg_count_CAN1, &rtDWork.Tx_msg_count_CAN2);

        /* End of Outputs for SubSystem: '<S10>/TTA System' */
      }
    }

    /* End of Chart: '<S33>/Chart' */
    /* M-S-Function: '<S111>/Level-2 M-file S-Function' */
    /* read 16-bit free running counter timestamp of the last output compare event */
    rtb_Level2MfileSFunction = TimeoutGetLastEventCounter(TIMEOUT_TIM4_PIN_PD12);

    /* Sum: '<S33>/Sum' incorporates:
     *  Constant: '<S33>/Constant'
     */
    rtB.Sum = (uint16_T)((uint32_T)rtb_Level2MfileSFunction + ((uint16_T)100U));

    /* Update for M-S-Function: '<S112>/Level-2 M-file S-Function' incorporates:
     *  Constant: '<S33>/Constant1'
     */
    /* schedule the next output compare event */
    TimeoutScheduleCompareEvent(TIMEOUT_TIM4_PIN_PD12, rtB.Sum, (tTimeoutAction)
      ((uint8_T)3U));
  }
}

void TimeoutOverflowIRQ_TIMEOUT_MODULE_TIM4(void)
{
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

/* Output and update for function-call system: '<S10>/CAN1 Send' */
void CAN1Send(rtB_CAN1Send *localB, rtDW_CAN1Send *localDW, msg_buffer_type
              *rtd_Msg_Tx_CAN1, boolean_T *rtd_Toggle_Pin_A0, real_T
              *rtd_Toggle_Pin_D13, uint32_T *rtd_TxID_CAN1, real_T
              *rtd_Tx_msg_count_CAN1)
{
  /* DataStoreWrite: '<S27>/Data Store Write2' incorporates:
   *  Constant: '<S27>/Constant8'
   *  Sum: '<S27>/Plus'
   */
  *rtd_Tx_msg_count_CAN1 += 1.0;

  /* DataStoreWrite: '<S27>/Data Store Write1' incorporates:
   *  Constant: '<S27>/Constant'
   */
  *rtd_Toggle_Pin_A0 = true;

  /* Sum: '<S27>/Sum1' incorporates:
   *  Constant: '<S27>/Constant3'
   *  DataStoreRead: '<S27>/Data Store Read'
   */
  TxCAN1_counter_s = 1U + localDW->fcn_call_counter;

  /* DataStoreWrite: '<S27>/Data Store Write' */
  localDW->fcn_call_counter = TxCAN1_counter_s;

  /* Outputs for Enabled SubSystem: '<S27>/Logic Analyzer - COMM delay measurement' incorporates:
   *  EnablePort: '<S70>/Enable'
   */
  /* Logic: '<S27>/AND' incorporates:
   *  Constant: '<S27>/Constant1'
   *  Constant: '<S27>/Constant2'
   *  RelationalOperator: '<S27>/Equal'
   */
  if ((*rtd_TxID_CAN1 == 1.0) && (1.0 != 0.0)) {
    /* DataStoreWrite: '<S70>/Data Store Write2' incorporates:
     *  Constant: '<S70>/Constant2'
     */
    *rtd_Toggle_Pin_D13 = 1.0;
  }

  /* End of Logic: '<S27>/AND' */
  /* End of Outputs for SubSystem: '<S27>/Logic Analyzer - COMM delay measurement' */
  /* DataTypeConversion: '<S27>/Cast To Double' */
  Tx_temporal_msg_CAN1 = rtd_Msg_Tx_CAN1->Buffer_1;

  /* DataStoreRead: '<S27>/Data Store Read3' */
  TxID_CAN1_s = *rtd_TxID_CAN1;

  /* DataTypeConversion: '<S27>/Data Type Conversion' */
  localB->DataTypeConversion = rtd_Msg_Tx_CAN1->Buffer_1;

  /* DataTypeConversion: '<S27>/Data Type Conversion1' */
  localB->DataTypeConversion1 = TxID_CAN1_s;

  /* DataTypeConversion: '<S27>/Data Type Conversion10' */
  localB->DataTypeConversion10 = rtd_Msg_Tx_CAN1->Buffer_8;

  /* DataTypeConversion: '<S27>/Data Type Conversion4' */
  localB->DataTypeConversion4 = rtd_Msg_Tx_CAN1->Buffer_2;

  /* DataTypeConversion: '<S27>/Data Type Conversion5' */
  localB->DataTypeConversion5 = rtd_Msg_Tx_CAN1->Buffer_3;

  /* DataTypeConversion: '<S27>/Data Type Conversion6' */
  localB->DataTypeConversion6 = rtd_Msg_Tx_CAN1->Buffer_4;

  /* DataTypeConversion: '<S27>/Data Type Conversion7' */
  localB->DataTypeConversion7 = rtd_Msg_Tx_CAN1->Buffer_5;

  /* DataTypeConversion: '<S27>/Data Type Conversion8' */
  localB->DataTypeConversion8 = rtd_Msg_Tx_CAN1->Buffer_6;

  /* DataTypeConversion: '<S27>/Data Type Conversion9' */
  localB->DataTypeConversion9 = rtd_Msg_Tx_CAN1->Buffer_7;

  /* Update for M-S-Function: '<S69>/S-Function' */
  {
    /* prepare the data */
    canTxData.uint8_T_info[0] = localB->DataTypeConversion;
    canTxData.uint8_T_info[1] = localB->DataTypeConversion4;
    canTxData.uint8_T_info[2] = localB->DataTypeConversion5;
    canTxData.uint8_T_info[3] = localB->DataTypeConversion6;
    canTxData.uint8_T_info[4] = localB->DataTypeConversion7;
    canTxData.uint8_T_info[5] = localB->DataTypeConversion8;
    canTxData.uint8_T_info[6] = localB->DataTypeConversion9;
    canTxData.uint8_T_info[7] = localB->DataTypeConversion10;

    /* send the data */
    CanTransmit(0, localB->DataTypeConversion1, 8, &canTxData.uint8_T_info[0]);
  }
}

/* Disable for function-call system: '<S10>/CAN1 Recieve' */
void CAN1Recieve_Disable(rtB_CAN1Recieve *localB, rtDW_CAN1Recieve *localDW)
{
  /* Disable for Enabled SubSystem: '<S39>/Sync_ID_CAN' */
  if (localDW->Sync_ID_CAN_MODE) {
    /* Disable for Outport: '<S46>/CAN_new' */
    localB->SFunction_o1_h = 0;

    /* Disable for Outport: '<S46>/Out2' */
    localB->In1_p = ((uint8_T)0U);

    /* Disable for Outport: '<S46>/Out3' */
    localB->In2_k = ((uint8_T)0U);

    /* Disable for Outport: '<S46>/Out4' */
    localB->In3_b = ((uint8_T)0U);

    /* Disable for Outport: '<S46>/Out5' */
    localB->In4_l = ((uint8_T)0U);

    /* Disable for Outport: '<S46>/Out6' */
    localB->In5_c = ((uint8_T)0U);

    /* Disable for Outport: '<S46>/Out7' */
    localB->In6_i = ((uint8_T)0U);

    /* Disable for Outport: '<S46>/Out8' */
    localB->In7_m = ((uint8_T)0U);

    /* Disable for Outport: '<S46>/Out9' */
    localB->In8_c = ((uint8_T)0U);
    localDW->Sync_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S39>/Sync_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S39>/Vote1_ID_CAN' */
  if (localDW->Vote1_ID_CAN_MODE) {
    /* Disable for Outport: '<S47>/CAN_new' */
    localB->SFunction_o1_m = 0;

    /* Disable for Outport: '<S47>/Out2' */
    localB->In1_d = ((uint8_T)0U);

    /* Disable for Outport: '<S47>/Out3' */
    localB->In2_a = ((uint8_T)0U);

    /* Disable for Outport: '<S47>/Out4' */
    localB->In3_n = ((uint8_T)0U);

    /* Disable for Outport: '<S47>/Out5' */
    localB->In4_m = ((uint8_T)0U);

    /* Disable for Outport: '<S47>/Out6' */
    localB->In5_k = ((uint8_T)0U);

    /* Disable for Outport: '<S47>/Out7' */
    localB->In6_j = ((uint8_T)0U);

    /* Disable for Outport: '<S47>/Out8' */
    localB->In7_o = ((uint8_T)0U);

    /* Disable for Outport: '<S47>/Out9' */
    localB->In8_k = ((uint8_T)0U);
    localDW->Vote1_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S39>/Vote1_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S39>/Vote2_ID_CAN' */
  if (localDW->Vote2_ID_CAN_MODE) {
    /* Disable for Outport: '<S48>/CAN_new' */
    localB->SFunction_o1_e = 0;

    /* Disable for Outport: '<S48>/Out2' */
    localB->In1_j = ((uint8_T)0U);

    /* Disable for Outport: '<S48>/Out3' */
    localB->In2_l = ((uint8_T)0U);

    /* Disable for Outport: '<S48>/Out4' */
    localB->In3_o = ((uint8_T)0U);

    /* Disable for Outport: '<S48>/Out5' */
    localB->In4_c = ((uint8_T)0U);

    /* Disable for Outport: '<S48>/Out6' */
    localB->In5_g = ((uint8_T)0U);

    /* Disable for Outport: '<S48>/Out7' */
    localB->In6_h = ((uint8_T)0U);

    /* Disable for Outport: '<S48>/Out8' */
    localB->In7_b = ((uint8_T)0U);

    /* Disable for Outport: '<S48>/Out9' */
    localB->In8_a = ((uint8_T)0U);
    localDW->Vote2_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S39>/Vote2_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S39>/Vote3_ID_CAN' */
  if (localDW->Vote3_ID_CAN_MODE) {
    /* Disable for Outport: '<S49>/CAN_new' */
    localB->SFunction_o1 = 0;

    /* Disable for Outport: '<S49>/Out2' */
    localB->In1 = ((uint8_T)0U);

    /* Disable for Outport: '<S49>/Out3' */
    localB->In2 = ((uint8_T)0U);

    /* Disable for Outport: '<S49>/Out4' */
    localB->In3 = ((uint8_T)0U);

    /* Disable for Outport: '<S49>/Out5' */
    localB->In4 = ((uint8_T)0U);

    /* Disable for Outport: '<S49>/Out6' */
    localB->In5 = ((uint8_T)0U);

    /* Disable for Outport: '<S49>/Out7' */
    localB->In6 = ((uint8_T)0U);

    /* Disable for Outport: '<S49>/Out8' */
    localB->In7 = ((uint8_T)0U);

    /* Disable for Outport: '<S49>/Out9' */
    localB->In8 = ((uint8_T)0U);
    localDW->Vote3_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S39>/Vote3_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S39>/SetValues_ID_CAN' */
  if (localDW->SetValues_ID_CAN_MODE) {
    /* Disable for Outport: '<S45>/CAN_new' */
    localB->SFunction_o1_l = 0;

    /* Disable for Outport: '<S45>/Out2' */
    localB->In1_pn = ((uint8_T)0U);

    /* Disable for Outport: '<S45>/Out3' */
    localB->In2_b = ((uint8_T)0U);

    /* Disable for Outport: '<S45>/Out4' */
    localB->In3_k = ((uint8_T)0U);

    /* Disable for Outport: '<S45>/Out5' */
    localB->In4_h = ((uint8_T)0U);

    /* Disable for Outport: '<S45>/Out6' */
    localB->In5_l = ((uint8_T)0U);

    /* Disable for Outport: '<S45>/Out7' */
    localB->In6_m = ((uint8_T)0U);

    /* Disable for Outport: '<S45>/Out8' */
    localB->In7_mm = ((uint8_T)0U);

    /* Disable for Outport: '<S45>/Out9' */
    localB->In8_e = ((uint8_T)0U);
    localDW->SetValues_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S39>/SetValues_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S39>/SensorValues_ID_CAN' */
  if (localDW->SensorValues_ID_CAN_MODE) {
    /* Disable for Outport: '<S44>/CAN_new' */
    localB->SFunction_o1_i = 0;

    /* Disable for Outport: '<S44>/Out2' */
    localB->In1_k = ((uint8_T)0U);

    /* Disable for Outport: '<S44>/Out3' */
    localB->In2_c = ((uint8_T)0U);

    /* Disable for Outport: '<S44>/Out4' */
    localB->In3_i = ((uint8_T)0U);

    /* Disable for Outport: '<S44>/Out5' */
    localB->In4_b = ((uint8_T)0U);

    /* Disable for Outport: '<S44>/Out6' */
    localB->In5_m = ((uint8_T)0U);

    /* Disable for Outport: '<S44>/Out7' */
    localB->In6_n = ((uint8_T)0U);

    /* Disable for Outport: '<S44>/Out8' */
    localB->In7_l = ((uint8_T)0U);

    /* Disable for Outport: '<S44>/Out9' */
    localB->In8_aa = ((uint8_T)0U);
    localDW->SensorValues_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S39>/SensorValues_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S39>/OutControl1_ID_CAN' */
  if (localDW->OutControl1_ID_CAN_MODE) {
    /* Disable for Outport: '<S41>/CAN_new' */
    localB->SFunction_o1_k = 0;

    /* Disable for Outport: '<S41>/Out2' */
    localB->In1_g = ((uint8_T)0U);

    /* Disable for Outport: '<S41>/Out3' */
    localB->In2_p = ((uint8_T)0U);

    /* Disable for Outport: '<S41>/Out4' */
    localB->In3_l = ((uint8_T)0U);

    /* Disable for Outport: '<S41>/Out5' */
    localB->In4_n = ((uint8_T)0U);

    /* Disable for Outport: '<S41>/Out6' */
    localB->In5_o = ((uint8_T)0U);

    /* Disable for Outport: '<S41>/Out7' */
    localB->In6_l = ((uint8_T)0U);

    /* Disable for Outport: '<S41>/Out8' */
    localB->In7_f = ((uint8_T)0U);

    /* Disable for Outport: '<S41>/Out9' */
    localB->In8_kx = ((uint8_T)0U);
    localDW->OutControl1_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S39>/OutControl1_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S39>/OutControl2_ID_CAN' */
  if (localDW->OutControl2_ID_CAN_MODE) {
    /* Disable for Outport: '<S42>/CAN_new' */
    localB->SFunction_o1_b = 0;

    /* Disable for Outport: '<S42>/Out2' */
    localB->In1_c = ((uint8_T)0U);

    /* Disable for Outport: '<S42>/Out3' */
    localB->In2_i = ((uint8_T)0U);

    /* Disable for Outport: '<S42>/Out4' */
    localB->In3_m = ((uint8_T)0U);

    /* Disable for Outport: '<S42>/Out5' */
    localB->In4_iv = ((uint8_T)0U);

    /* Disable for Outport: '<S42>/Out6' */
    localB->In5_h = ((uint8_T)0U);

    /* Disable for Outport: '<S42>/Out7' */
    localB->In6_d = ((uint8_T)0U);

    /* Disable for Outport: '<S42>/Out8' */
    localB->In7_bt = ((uint8_T)0U);

    /* Disable for Outport: '<S42>/Out9' */
    localB->In8_ku = ((uint8_T)0U);
    localDW->OutControl2_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S39>/OutControl2_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S39>/OutEmulator_ID_CAN' */
  if (localDW->OutEmulator_ID_CAN_MODE) {
    /* Disable for Outport: '<S43>/CAN_new' */
    localB->SFunction_o1_o = 0;

    /* Disable for Outport: '<S43>/Out2' */
    localB->In1_b = ((uint8_T)0U);

    /* Disable for Outport: '<S43>/Out3' */
    localB->In2_o = ((uint8_T)0U);

    /* Disable for Outport: '<S43>/Out4' */
    localB->In3_oq = ((uint8_T)0U);

    /* Disable for Outport: '<S43>/Out5' */
    localB->In4_i = ((uint8_T)0U);

    /* Disable for Outport: '<S43>/Out6' */
    localB->In5_md = ((uint8_T)0U);

    /* Disable for Outport: '<S43>/Out7' */
    localB->In6_hx = ((uint8_T)0U);

    /* Disable for Outport: '<S43>/Out8' */
    localB->In7_k = ((uint8_T)0U);

    /* Disable for Outport: '<S43>/Out9' */
    localB->In8_l = ((uint8_T)0U);
    localDW->OutEmulator_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S39>/OutEmulator_ID_CAN' */
}

/* Start for function-call system: '<S10>/CAN1 Recieve' */
void CAN1Recieve_Start(void)
{
  /* Start for Enabled SubSystem: '<S39>/Sync_ID_CAN' */

  /* Start for M-S-Function: '<S60>/S-Function' incorporates:
   *  Constant: '<S46>/Constant'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 1U);

  /* End of Start for SubSystem: '<S39>/Sync_ID_CAN' */

  /* Start for Enabled SubSystem: '<S39>/Vote1_ID_CAN' */

  /* Start for M-S-Function: '<S62>/S-Function' incorporates:
   *  Constant: '<S47>/Constant1'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 11U);

  /* End of Start for SubSystem: '<S39>/Vote1_ID_CAN' */

  /* Start for Enabled SubSystem: '<S39>/Vote2_ID_CAN' */

  /* Start for M-S-Function: '<S64>/S-Function' incorporates:
   *  Constant: '<S48>/Constant2'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 12U);

  /* End of Start for SubSystem: '<S39>/Vote2_ID_CAN' */

  /* Start for Enabled SubSystem: '<S39>/Vote3_ID_CAN' */

  /* Start for M-S-Function: '<S66>/S-Function' incorporates:
   *  Constant: '<S49>/Constant3'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 13U);

  /* End of Start for SubSystem: '<S39>/Vote3_ID_CAN' */

  /* Start for Enabled SubSystem: '<S39>/SetValues_ID_CAN' */

  /* Start for M-S-Function: '<S58>/S-Function' incorporates:
   *  Constant: '<S45>/Constant4'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 21U);

  /* End of Start for SubSystem: '<S39>/SetValues_ID_CAN' */

  /* Start for Enabled SubSystem: '<S39>/SensorValues_ID_CAN' */

  /* Start for M-S-Function: '<S56>/S-Function' incorporates:
   *  Constant: '<S44>/Constant5'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 22U);

  /* End of Start for SubSystem: '<S39>/SensorValues_ID_CAN' */

  /* Start for Enabled SubSystem: '<S39>/OutControl1_ID_CAN' */

  /* Start for M-S-Function: '<S50>/S-Function' incorporates:
   *  Constant: '<S41>/Constant6'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 23U);

  /* End of Start for SubSystem: '<S39>/OutControl1_ID_CAN' */

  /* Start for Enabled SubSystem: '<S39>/OutControl2_ID_CAN' */

  /* Start for M-S-Function: '<S52>/S-Function' incorporates:
   *  Constant: '<S42>/Constant7'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 24U);

  /* End of Start for SubSystem: '<S39>/OutControl2_ID_CAN' */

  /* Start for Enabled SubSystem: '<S39>/OutEmulator_ID_CAN' */

  /* Start for M-S-Function: '<S54>/S-Function' incorporates:
   *  Constant: '<S43>/Constant8'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 25U);

  /* End of Start for SubSystem: '<S39>/OutEmulator_ID_CAN' */
}

/* Output and update for function-call system: '<S10>/CAN1 Recieve' */
void CAN1Recieve(rtB_CAN1Recieve *localB, rtDW_CAN1Recieve *localDW, uint16_T
                 *rtd_Local_Ticks, msg_buffer_type *rtd_Msg_Rx_CAN1, uint16_T
                 *rtd_Msg_Rx_Ticks_CAN1, boolean_T *rtd_New_Msg_Ready_CAN1,
                 uint32_T *rtd_RxID_CAN1, uint8_T *rtd_Rx_State_CAN1, boolean_T *
                 rtd_Toggle_Pin_A0, real_T *rtd_Toggle_Pin_D12)
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
  uint8_T rtb_SFunction_o2_f;
  uint8_T rtb_SFunction_o3_m;
  uint8_T rtb_SFunction_o4_m;
  uint8_T rtb_SFunction_o5_j;
  uint8_T rtb_SFunction_o6_m;
  uint8_T rtb_SFunction_o7_h;
  uint8_T rtb_SFunction_o8_l;
  uint8_T rtb_SFunction_o9_k;
  uint8_T rtb_SFunction_o2_c;
  uint8_T rtb_SFunction_o3_c;
  uint8_T rtb_SFunction_o4_b;
  uint8_T rtb_SFunction_o5_k;
  uint8_T rtb_SFunction_o6_mm;
  uint8_T rtb_SFunction_o7_m;
  uint8_T rtb_SFunction_o8_g;
  uint8_T rtb_SFunction_o9_f;
  uint8_T rtb_SFunction_o2_c3;
  uint8_T rtb_SFunction_o3_h;
  uint8_T rtb_SFunction_o4_e;
  uint8_T rtb_SFunction_o5_m;
  uint8_T rtb_SFunction_o6_i;
  uint8_T rtb_SFunction_o7_ml;
  uint8_T rtb_SFunction_o8_n;
  uint8_T rtb_SFunction_o9_fm;
  uint8_T rtb_SFunction_o2_fr;
  uint8_T rtb_SFunction_o3_g;
  uint8_T rtb_SFunction_o4_g;
  uint8_T rtb_SFunction_o5_c;
  uint8_T rtb_SFunction_o6_g;
  uint8_T rtb_SFunction_o7_n;
  uint8_T rtb_SFunction_o8_k;
  uint8_T rtb_SFunction_o9_d;
  uint8_T rtb_SFunction_o2_h;
  uint8_T rtb_SFunction_o3_f;
  uint8_T rtb_SFunction_o4_n;
  uint8_T rtb_SFunction_o5_p;
  uint8_T rtb_SFunction_o6_h;
  uint8_T rtb_SFunction_o7_h2;
  uint8_T rtb_SFunction_o8_lv;
  uint8_T rtb_SFunction_o9_p;
  uint8_T rtb_SFunction_o2_fu;
  uint8_T rtb_SFunction_o3_mj;
  uint8_T rtb_SFunction_o4_j;
  uint8_T rtb_SFunction_o5_c5;
  uint8_T rtb_SFunction_o6_p;
  uint8_T rtb_SFunction_o7_j;
  uint8_T rtb_SFunction_o8_c;
  uint8_T rtb_SFunction_o9_f0;
  uint8_T rtb_SFunction_o2_a;
  uint8_T rtb_SFunction_o3_j;
  uint8_T rtb_SFunction_o4_o;
  uint8_T rtb_SFunction_o5_o;
  uint8_T rtb_SFunction_o6_n;
  uint8_T rtb_SFunction_o7_d;
  uint8_T rtb_SFunction_o8_e;
  uint8_T rtb_SFunction_o9_f2;
  uint8_T rtb_SFunction_o2_m;
  uint8_T rtb_SFunction_o3_h1;
  uint8_T rtb_SFunction_o4_i;
  uint8_T rtb_SFunction_o5_c4;
  uint8_T rtb_SFunction_o6_j;
  uint8_T rtb_SFunction_o7_o;
  uint8_T rtb_SFunction_o8_nw;
  uint8_T rtb_SFunction_o9_d5;
  boolean_T rtb_Equal_mj;
  boolean_T rtb_Equal1_n;
  boolean_T rtb_Equal2_oo;
  boolean_T rtb_Equal3_n;
  boolean_T rtb_Equal4_gf;
  boolean_T rtb_Equal5_jt;
  boolean_T rtb_Equal6_o;
  boolean_T rtb_Equal7_g;
  int8_T rtb_signal1_jr;
  uint8_T rtb_signal2_n;
  uint8_T rtb_signal3;
  uint8_T rtb_signal4;
  uint8_T rtb_signal5;
  uint8_T rtb_signal6;
  uint8_T rtb_signal7;
  uint8_T rtb_signal8;
  uint8_T rtb_signal9;

  /* Sum: '<S26>/Sum1' incorporates:
   *  Constant: '<S26>/Constant3'
   *  DataStoreRead: '<S26>/Data Store Read1'
   */
  RxCAN1_counter_s = 1U + localDW->fcn_call_counter;

  /* DataStoreWrite: '<S26>/Data Store Write' */
  localDW->fcn_call_counter = RxCAN1_counter_s;

  /* DataStoreRead: '<S26>/Data Store Read' */
  RxID_CAN1_s = *rtd_RxID_CAN1;

  /* RelationalOperator: '<S39>/Equal' incorporates:
   *  Constant: '<S39>/Constant'
   */
  rtb_Equal_mj = (RxID_CAN1_s == 1.0);

  /* Outputs for Enabled SubSystem: '<S39>/Sync_ID_CAN' incorporates:
   *  EnablePort: '<S46>/Enable'
   */
  if (rtb_Equal_mj) {
    if (!localDW->Sync_ID_CAN_MODE) {
      localDW->Sync_ID_CAN_MODE = true;
    }

    /* M-S-Function: '<S60>/S-Function' incorporates:
     *  Constant: '<S46>/Constant'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_h = CanIoGetMessage(0, 1U, NULL,
      &canRxData_0_1U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_h > 0) {
      /* read the data */
      rtb_SFunction_o2_c3 = canRxData_0_1U.uint8_T_info[0];
      rtb_SFunction_o3_h = canRxData_0_1U.uint8_T_info[1];
      rtb_SFunction_o4_e = canRxData_0_1U.uint8_T_info[2];
      rtb_SFunction_o5_m = canRxData_0_1U.uint8_T_info[3];
      rtb_SFunction_o6_i = canRxData_0_1U.uint8_T_info[4];
      rtb_SFunction_o7_ml = canRxData_0_1U.uint8_T_info[5];
      rtb_SFunction_o8_n = canRxData_0_1U.uint8_T_info[6];
      rtb_SFunction_o9_fm = canRxData_0_1U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S60>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S61>/Enable'
     */
    if (localB->SFunction_o1_h > 0) {
      /* Inport: '<S61>/In1' */
      localB->In1_p = rtb_SFunction_o2_c3;

      /* Inport: '<S61>/In2' */
      localB->In2_k = rtb_SFunction_o3_h;

      /* Inport: '<S61>/In3' */
      localB->In3_b = rtb_SFunction_o4_e;

      /* Inport: '<S61>/In4' */
      localB->In4_l = rtb_SFunction_o5_m;

      /* Inport: '<S61>/In5' */
      localB->In5_c = rtb_SFunction_o6_i;

      /* Inport: '<S61>/In6' */
      localB->In6_i = rtb_SFunction_o7_ml;

      /* Inport: '<S61>/In7' */
      localB->In7_m = rtb_SFunction_o8_n;

      /* Inport: '<S61>/In8' */
      localB->In8_c = rtb_SFunction_o9_fm;
    }

    /* End of Outputs for SubSystem: '<S60>/Enabled Subsystem' */
  } else {
    if (localDW->Sync_ID_CAN_MODE) {
      /* Disable for Outport: '<S46>/CAN_new' */
      localB->SFunction_o1_h = 0;

      /* Disable for Outport: '<S46>/Out2' */
      localB->In1_p = ((uint8_T)0U);

      /* Disable for Outport: '<S46>/Out3' */
      localB->In2_k = ((uint8_T)0U);

      /* Disable for Outport: '<S46>/Out4' */
      localB->In3_b = ((uint8_T)0U);

      /* Disable for Outport: '<S46>/Out5' */
      localB->In4_l = ((uint8_T)0U);

      /* Disable for Outport: '<S46>/Out6' */
      localB->In5_c = ((uint8_T)0U);

      /* Disable for Outport: '<S46>/Out7' */
      localB->In6_i = ((uint8_T)0U);

      /* Disable for Outport: '<S46>/Out8' */
      localB->In7_m = ((uint8_T)0U);

      /* Disable for Outport: '<S46>/Out9' */
      localB->In8_c = ((uint8_T)0U);
      localDW->Sync_ID_CAN_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S39>/Sync_ID_CAN' */

  /* RelationalOperator: '<S39>/Equal1' incorporates:
   *  Constant: '<S39>/Constant1'
   */
  rtb_Equal1_n = (RxID_CAN1_s == 11.0);

  /* Outputs for Enabled SubSystem: '<S39>/Vote1_ID_CAN' incorporates:
   *  EnablePort: '<S47>/Enable'
   */
  if (rtb_Equal1_n) {
    if (!localDW->Vote1_ID_CAN_MODE) {
      localDW->Vote1_ID_CAN_MODE = true;
    }

    /* M-S-Function: '<S62>/S-Function' incorporates:
     *  Constant: '<S47>/Constant1'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_m = CanIoGetMessage(0, 11U, NULL,
      &canRxData_0_11U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_m > 0) {
      /* read the data */
      rtb_SFunction_o2_c = canRxData_0_11U.uint8_T_info[0];
      rtb_SFunction_o3_c = canRxData_0_11U.uint8_T_info[1];
      rtb_SFunction_o4_b = canRxData_0_11U.uint8_T_info[2];
      rtb_SFunction_o5_k = canRxData_0_11U.uint8_T_info[3];
      rtb_SFunction_o6_mm = canRxData_0_11U.uint8_T_info[4];
      rtb_SFunction_o7_m = canRxData_0_11U.uint8_T_info[5];
      rtb_SFunction_o8_g = canRxData_0_11U.uint8_T_info[6];
      rtb_SFunction_o9_f = canRxData_0_11U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S62>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S63>/Enable'
     */
    if (localB->SFunction_o1_m > 0) {
      /* Inport: '<S63>/In1' */
      localB->In1_d = rtb_SFunction_o2_c;

      /* Inport: '<S63>/In2' */
      localB->In2_a = rtb_SFunction_o3_c;

      /* Inport: '<S63>/In3' */
      localB->In3_n = rtb_SFunction_o4_b;

      /* Inport: '<S63>/In4' */
      localB->In4_m = rtb_SFunction_o5_k;

      /* Inport: '<S63>/In5' */
      localB->In5_k = rtb_SFunction_o6_mm;

      /* Inport: '<S63>/In6' */
      localB->In6_j = rtb_SFunction_o7_m;

      /* Inport: '<S63>/In7' */
      localB->In7_o = rtb_SFunction_o8_g;

      /* Inport: '<S63>/In8' */
      localB->In8_k = rtb_SFunction_o9_f;
    }

    /* End of Outputs for SubSystem: '<S62>/Enabled Subsystem' */
  } else {
    if (localDW->Vote1_ID_CAN_MODE) {
      /* Disable for Outport: '<S47>/CAN_new' */
      localB->SFunction_o1_m = 0;

      /* Disable for Outport: '<S47>/Out2' */
      localB->In1_d = ((uint8_T)0U);

      /* Disable for Outport: '<S47>/Out3' */
      localB->In2_a = ((uint8_T)0U);

      /* Disable for Outport: '<S47>/Out4' */
      localB->In3_n = ((uint8_T)0U);

      /* Disable for Outport: '<S47>/Out5' */
      localB->In4_m = ((uint8_T)0U);

      /* Disable for Outport: '<S47>/Out6' */
      localB->In5_k = ((uint8_T)0U);

      /* Disable for Outport: '<S47>/Out7' */
      localB->In6_j = ((uint8_T)0U);

      /* Disable for Outport: '<S47>/Out8' */
      localB->In7_o = ((uint8_T)0U);

      /* Disable for Outport: '<S47>/Out9' */
      localB->In8_k = ((uint8_T)0U);
      localDW->Vote1_ID_CAN_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S39>/Vote1_ID_CAN' */

  /* RelationalOperator: '<S39>/Equal2' incorporates:
   *  Constant: '<S39>/Constant2'
   */
  rtb_Equal2_oo = (RxID_CAN1_s == 12.0);

  /* Outputs for Enabled SubSystem: '<S39>/Vote2_ID_CAN' incorporates:
   *  EnablePort: '<S48>/Enable'
   */
  if (rtb_Equal2_oo) {
    if (!localDW->Vote2_ID_CAN_MODE) {
      localDW->Vote2_ID_CAN_MODE = true;
    }

    /* M-S-Function: '<S64>/S-Function' incorporates:
     *  Constant: '<S48>/Constant2'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_e = CanIoGetMessage(0, 12U, NULL,
      &canRxData_0_12U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_e > 0) {
      /* read the data */
      rtb_SFunction_o2_f = canRxData_0_12U.uint8_T_info[0];
      rtb_SFunction_o3_m = canRxData_0_12U.uint8_T_info[1];
      rtb_SFunction_o4_m = canRxData_0_12U.uint8_T_info[2];
      rtb_SFunction_o5_j = canRxData_0_12U.uint8_T_info[3];
      rtb_SFunction_o6_m = canRxData_0_12U.uint8_T_info[4];
      rtb_SFunction_o7_h = canRxData_0_12U.uint8_T_info[5];
      rtb_SFunction_o8_l = canRxData_0_12U.uint8_T_info[6];
      rtb_SFunction_o9_k = canRxData_0_12U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S64>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S65>/Enable'
     */
    if (localB->SFunction_o1_e > 0) {
      /* Inport: '<S65>/In1' */
      localB->In1_j = rtb_SFunction_o2_f;

      /* Inport: '<S65>/In2' */
      localB->In2_l = rtb_SFunction_o3_m;

      /* Inport: '<S65>/In3' */
      localB->In3_o = rtb_SFunction_o4_m;

      /* Inport: '<S65>/In4' */
      localB->In4_c = rtb_SFunction_o5_j;

      /* Inport: '<S65>/In5' */
      localB->In5_g = rtb_SFunction_o6_m;

      /* Inport: '<S65>/In6' */
      localB->In6_h = rtb_SFunction_o7_h;

      /* Inport: '<S65>/In7' */
      localB->In7_b = rtb_SFunction_o8_l;

      /* Inport: '<S65>/In8' */
      localB->In8_a = rtb_SFunction_o9_k;
    }

    /* End of Outputs for SubSystem: '<S64>/Enabled Subsystem' */
  } else {
    if (localDW->Vote2_ID_CAN_MODE) {
      /* Disable for Outport: '<S48>/CAN_new' */
      localB->SFunction_o1_e = 0;

      /* Disable for Outport: '<S48>/Out2' */
      localB->In1_j = ((uint8_T)0U);

      /* Disable for Outport: '<S48>/Out3' */
      localB->In2_l = ((uint8_T)0U);

      /* Disable for Outport: '<S48>/Out4' */
      localB->In3_o = ((uint8_T)0U);

      /* Disable for Outport: '<S48>/Out5' */
      localB->In4_c = ((uint8_T)0U);

      /* Disable for Outport: '<S48>/Out6' */
      localB->In5_g = ((uint8_T)0U);

      /* Disable for Outport: '<S48>/Out7' */
      localB->In6_h = ((uint8_T)0U);

      /* Disable for Outport: '<S48>/Out8' */
      localB->In7_b = ((uint8_T)0U);

      /* Disable for Outport: '<S48>/Out9' */
      localB->In8_a = ((uint8_T)0U);
      localDW->Vote2_ID_CAN_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S39>/Vote2_ID_CAN' */

  /* RelationalOperator: '<S39>/Equal3' incorporates:
   *  Constant: '<S39>/Constant3'
   */
  rtb_Equal3_n = (RxID_CAN1_s == 13.0);

  /* Outputs for Enabled SubSystem: '<S39>/Vote3_ID_CAN' incorporates:
   *  EnablePort: '<S49>/Enable'
   */
  if (rtb_Equal3_n) {
    if (!localDW->Vote3_ID_CAN_MODE) {
      localDW->Vote3_ID_CAN_MODE = true;
    }

    /* M-S-Function: '<S66>/S-Function' incorporates:
     *  Constant: '<S49>/Constant3'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1 = CanIoGetMessage(0, 13U, NULL,
      &canRxData_0_13U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1 > 0) {
      /* read the data */
      rtb_SFunction_o2 = canRxData_0_13U.uint8_T_info[0];
      rtb_SFunction_o3 = canRxData_0_13U.uint8_T_info[1];
      rtb_SFunction_o4 = canRxData_0_13U.uint8_T_info[2];
      rtb_SFunction_o5 = canRxData_0_13U.uint8_T_info[3];
      rtb_SFunction_o6 = canRxData_0_13U.uint8_T_info[4];
      rtb_SFunction_o7 = canRxData_0_13U.uint8_T_info[5];
      rtb_SFunction_o8 = canRxData_0_13U.uint8_T_info[6];
      rtb_SFunction_o9 = canRxData_0_13U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S66>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S67>/Enable'
     */
    if (localB->SFunction_o1 > 0) {
      /* Inport: '<S67>/In1' */
      localB->In1 = rtb_SFunction_o2;

      /* Inport: '<S67>/In2' */
      localB->In2 = rtb_SFunction_o3;

      /* Inport: '<S67>/In3' */
      localB->In3 = rtb_SFunction_o4;

      /* Inport: '<S67>/In4' */
      localB->In4 = rtb_SFunction_o5;

      /* Inport: '<S67>/In5' */
      localB->In5 = rtb_SFunction_o6;

      /* Inport: '<S67>/In6' */
      localB->In6 = rtb_SFunction_o7;

      /* Inport: '<S67>/In7' */
      localB->In7 = rtb_SFunction_o8;

      /* Inport: '<S67>/In8' */
      localB->In8 = rtb_SFunction_o9;
    }

    /* End of Outputs for SubSystem: '<S66>/Enabled Subsystem' */
  } else {
    if (localDW->Vote3_ID_CAN_MODE) {
      /* Disable for Outport: '<S49>/CAN_new' */
      localB->SFunction_o1 = 0;

      /* Disable for Outport: '<S49>/Out2' */
      localB->In1 = ((uint8_T)0U);

      /* Disable for Outport: '<S49>/Out3' */
      localB->In2 = ((uint8_T)0U);

      /* Disable for Outport: '<S49>/Out4' */
      localB->In3 = ((uint8_T)0U);

      /* Disable for Outport: '<S49>/Out5' */
      localB->In4 = ((uint8_T)0U);

      /* Disable for Outport: '<S49>/Out6' */
      localB->In5 = ((uint8_T)0U);

      /* Disable for Outport: '<S49>/Out7' */
      localB->In6 = ((uint8_T)0U);

      /* Disable for Outport: '<S49>/Out8' */
      localB->In7 = ((uint8_T)0U);

      /* Disable for Outport: '<S49>/Out9' */
      localB->In8 = ((uint8_T)0U);
      localDW->Vote3_ID_CAN_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S39>/Vote3_ID_CAN' */

  /* RelationalOperator: '<S39>/Equal4' incorporates:
   *  Constant: '<S39>/Constant4'
   */
  rtb_Equal4_gf = (RxID_CAN1_s == 21.0);

  /* Outputs for Enabled SubSystem: '<S39>/SetValues_ID_CAN' incorporates:
   *  EnablePort: '<S45>/Enable'
   */
  if (rtb_Equal4_gf) {
    if (!localDW->SetValues_ID_CAN_MODE) {
      localDW->SetValues_ID_CAN_MODE = true;
    }

    /* M-S-Function: '<S58>/S-Function' incorporates:
     *  Constant: '<S45>/Constant4'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_l = CanIoGetMessage(0, 21U, NULL,
      &canRxData_0_21U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_l > 0) {
      /* read the data */
      rtb_SFunction_o2_fr = canRxData_0_21U.uint8_T_info[0];
      rtb_SFunction_o3_g = canRxData_0_21U.uint8_T_info[1];
      rtb_SFunction_o4_g = canRxData_0_21U.uint8_T_info[2];
      rtb_SFunction_o5_c = canRxData_0_21U.uint8_T_info[3];
      rtb_SFunction_o6_g = canRxData_0_21U.uint8_T_info[4];
      rtb_SFunction_o7_n = canRxData_0_21U.uint8_T_info[5];
      rtb_SFunction_o8_k = canRxData_0_21U.uint8_T_info[6];
      rtb_SFunction_o9_d = canRxData_0_21U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S58>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S59>/Enable'
     */
    if (localB->SFunction_o1_l > 0) {
      /* Inport: '<S59>/In1' */
      localB->In1_pn = rtb_SFunction_o2_fr;

      /* Inport: '<S59>/In2' */
      localB->In2_b = rtb_SFunction_o3_g;

      /* Inport: '<S59>/In3' */
      localB->In3_k = rtb_SFunction_o4_g;

      /* Inport: '<S59>/In4' */
      localB->In4_h = rtb_SFunction_o5_c;

      /* Inport: '<S59>/In5' */
      localB->In5_l = rtb_SFunction_o6_g;

      /* Inport: '<S59>/In6' */
      localB->In6_m = rtb_SFunction_o7_n;

      /* Inport: '<S59>/In7' */
      localB->In7_mm = rtb_SFunction_o8_k;

      /* Inport: '<S59>/In8' */
      localB->In8_e = rtb_SFunction_o9_d;
    }

    /* End of Outputs for SubSystem: '<S58>/Enabled Subsystem' */
  } else {
    if (localDW->SetValues_ID_CAN_MODE) {
      /* Disable for Outport: '<S45>/CAN_new' */
      localB->SFunction_o1_l = 0;

      /* Disable for Outport: '<S45>/Out2' */
      localB->In1_pn = ((uint8_T)0U);

      /* Disable for Outport: '<S45>/Out3' */
      localB->In2_b = ((uint8_T)0U);

      /* Disable for Outport: '<S45>/Out4' */
      localB->In3_k = ((uint8_T)0U);

      /* Disable for Outport: '<S45>/Out5' */
      localB->In4_h = ((uint8_T)0U);

      /* Disable for Outport: '<S45>/Out6' */
      localB->In5_l = ((uint8_T)0U);

      /* Disable for Outport: '<S45>/Out7' */
      localB->In6_m = ((uint8_T)0U);

      /* Disable for Outport: '<S45>/Out8' */
      localB->In7_mm = ((uint8_T)0U);

      /* Disable for Outport: '<S45>/Out9' */
      localB->In8_e = ((uint8_T)0U);
      localDW->SetValues_ID_CAN_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S39>/SetValues_ID_CAN' */

  /* RelationalOperator: '<S39>/Equal5' incorporates:
   *  Constant: '<S39>/Constant5'
   */
  rtb_Equal5_jt = (RxID_CAN1_s == 22.0);

  /* Outputs for Enabled SubSystem: '<S39>/SensorValues_ID_CAN' incorporates:
   *  EnablePort: '<S44>/Enable'
   */
  if (rtb_Equal5_jt) {
    if (!localDW->SensorValues_ID_CAN_MODE) {
      localDW->SensorValues_ID_CAN_MODE = true;
    }

    /* M-S-Function: '<S56>/S-Function' incorporates:
     *  Constant: '<S44>/Constant5'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_i = CanIoGetMessage(0, 22U, NULL,
      &canRxData_0_22U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_i > 0) {
      /* read the data */
      rtb_SFunction_o2_h = canRxData_0_22U.uint8_T_info[0];
      rtb_SFunction_o3_f = canRxData_0_22U.uint8_T_info[1];
      rtb_SFunction_o4_n = canRxData_0_22U.uint8_T_info[2];
      rtb_SFunction_o5_p = canRxData_0_22U.uint8_T_info[3];
      rtb_SFunction_o6_h = canRxData_0_22U.uint8_T_info[4];
      rtb_SFunction_o7_h2 = canRxData_0_22U.uint8_T_info[5];
      rtb_SFunction_o8_lv = canRxData_0_22U.uint8_T_info[6];
      rtb_SFunction_o9_p = canRxData_0_22U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S56>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S57>/Enable'
     */
    if (localB->SFunction_o1_i > 0) {
      /* Inport: '<S57>/In1' */
      localB->In1_k = rtb_SFunction_o2_h;

      /* Inport: '<S57>/In2' */
      localB->In2_c = rtb_SFunction_o3_f;

      /* Inport: '<S57>/In3' */
      localB->In3_i = rtb_SFunction_o4_n;

      /* Inport: '<S57>/In4' */
      localB->In4_b = rtb_SFunction_o5_p;

      /* Inport: '<S57>/In5' */
      localB->In5_m = rtb_SFunction_o6_h;

      /* Inport: '<S57>/In6' */
      localB->In6_n = rtb_SFunction_o7_h2;

      /* Inport: '<S57>/In7' */
      localB->In7_l = rtb_SFunction_o8_lv;

      /* Inport: '<S57>/In8' */
      localB->In8_aa = rtb_SFunction_o9_p;
    }

    /* End of Outputs for SubSystem: '<S56>/Enabled Subsystem' */
  } else {
    if (localDW->SensorValues_ID_CAN_MODE) {
      /* Disable for Outport: '<S44>/CAN_new' */
      localB->SFunction_o1_i = 0;

      /* Disable for Outport: '<S44>/Out2' */
      localB->In1_k = ((uint8_T)0U);

      /* Disable for Outport: '<S44>/Out3' */
      localB->In2_c = ((uint8_T)0U);

      /* Disable for Outport: '<S44>/Out4' */
      localB->In3_i = ((uint8_T)0U);

      /* Disable for Outport: '<S44>/Out5' */
      localB->In4_b = ((uint8_T)0U);

      /* Disable for Outport: '<S44>/Out6' */
      localB->In5_m = ((uint8_T)0U);

      /* Disable for Outport: '<S44>/Out7' */
      localB->In6_n = ((uint8_T)0U);

      /* Disable for Outport: '<S44>/Out8' */
      localB->In7_l = ((uint8_T)0U);

      /* Disable for Outport: '<S44>/Out9' */
      localB->In8_aa = ((uint8_T)0U);
      localDW->SensorValues_ID_CAN_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S39>/SensorValues_ID_CAN' */

  /* RelationalOperator: '<S39>/Equal6' incorporates:
   *  Constant: '<S39>/Constant6'
   */
  rtb_Equal6_o = (RxID_CAN1_s == 23.0);

  /* Outputs for Enabled SubSystem: '<S39>/OutControl1_ID_CAN' incorporates:
   *  EnablePort: '<S41>/Enable'
   */
  if (rtb_Equal6_o) {
    if (!localDW->OutControl1_ID_CAN_MODE) {
      localDW->OutControl1_ID_CAN_MODE = true;
    }

    /* M-S-Function: '<S50>/S-Function' incorporates:
     *  Constant: '<S41>/Constant6'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_k = CanIoGetMessage(0, 23U, NULL,
      &canRxData_0_23U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_k > 0) {
      /* read the data */
      rtb_SFunction_o2_m = canRxData_0_23U.uint8_T_info[0];
      rtb_SFunction_o3_h1 = canRxData_0_23U.uint8_T_info[1];
      rtb_SFunction_o4_i = canRxData_0_23U.uint8_T_info[2];
      rtb_SFunction_o5_c4 = canRxData_0_23U.uint8_T_info[3];
      rtb_SFunction_o6_j = canRxData_0_23U.uint8_T_info[4];
      rtb_SFunction_o7_o = canRxData_0_23U.uint8_T_info[5];
      rtb_SFunction_o8_nw = canRxData_0_23U.uint8_T_info[6];
      rtb_SFunction_o9_d5 = canRxData_0_23U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S50>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S51>/Enable'
     */
    if (localB->SFunction_o1_k > 0) {
      /* Inport: '<S51>/In1' */
      localB->In1_g = rtb_SFunction_o2_m;

      /* Inport: '<S51>/In2' */
      localB->In2_p = rtb_SFunction_o3_h1;

      /* Inport: '<S51>/In3' */
      localB->In3_l = rtb_SFunction_o4_i;

      /* Inport: '<S51>/In4' */
      localB->In4_n = rtb_SFunction_o5_c4;

      /* Inport: '<S51>/In5' */
      localB->In5_o = rtb_SFunction_o6_j;

      /* Inport: '<S51>/In6' */
      localB->In6_l = rtb_SFunction_o7_o;

      /* Inport: '<S51>/In7' */
      localB->In7_f = rtb_SFunction_o8_nw;

      /* Inport: '<S51>/In8' */
      localB->In8_kx = rtb_SFunction_o9_d5;
    }

    /* End of Outputs for SubSystem: '<S50>/Enabled Subsystem' */
  } else {
    if (localDW->OutControl1_ID_CAN_MODE) {
      /* Disable for Outport: '<S41>/CAN_new' */
      localB->SFunction_o1_k = 0;

      /* Disable for Outport: '<S41>/Out2' */
      localB->In1_g = ((uint8_T)0U);

      /* Disable for Outport: '<S41>/Out3' */
      localB->In2_p = ((uint8_T)0U);

      /* Disable for Outport: '<S41>/Out4' */
      localB->In3_l = ((uint8_T)0U);

      /* Disable for Outport: '<S41>/Out5' */
      localB->In4_n = ((uint8_T)0U);

      /* Disable for Outport: '<S41>/Out6' */
      localB->In5_o = ((uint8_T)0U);

      /* Disable for Outport: '<S41>/Out7' */
      localB->In6_l = ((uint8_T)0U);

      /* Disable for Outport: '<S41>/Out8' */
      localB->In7_f = ((uint8_T)0U);

      /* Disable for Outport: '<S41>/Out9' */
      localB->In8_kx = ((uint8_T)0U);
      localDW->OutControl1_ID_CAN_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S39>/OutControl1_ID_CAN' */

  /* RelationalOperator: '<S39>/Equal7' incorporates:
   *  Constant: '<S39>/Constant7'
   */
  rtb_Equal7_g = (RxID_CAN1_s == 24.0);

  /* Outputs for Enabled SubSystem: '<S39>/OutControl2_ID_CAN' incorporates:
   *  EnablePort: '<S42>/Enable'
   */
  if (rtb_Equal7_g) {
    if (!localDW->OutControl2_ID_CAN_MODE) {
      localDW->OutControl2_ID_CAN_MODE = true;
    }

    /* M-S-Function: '<S52>/S-Function' incorporates:
     *  Constant: '<S42>/Constant7'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_b = CanIoGetMessage(0, 24U, NULL,
      &canRxData_0_24U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_b > 0) {
      /* read the data */
      rtb_SFunction_o2_a = canRxData_0_24U.uint8_T_info[0];
      rtb_SFunction_o3_j = canRxData_0_24U.uint8_T_info[1];
      rtb_SFunction_o4_o = canRxData_0_24U.uint8_T_info[2];
      rtb_SFunction_o5_o = canRxData_0_24U.uint8_T_info[3];
      rtb_SFunction_o6_n = canRxData_0_24U.uint8_T_info[4];
      rtb_SFunction_o7_d = canRxData_0_24U.uint8_T_info[5];
      rtb_SFunction_o8_e = canRxData_0_24U.uint8_T_info[6];
      rtb_SFunction_o9_f2 = canRxData_0_24U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S52>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S53>/Enable'
     */
    if (localB->SFunction_o1_b > 0) {
      /* Inport: '<S53>/In1' */
      localB->In1_c = rtb_SFunction_o2_a;

      /* Inport: '<S53>/In2' */
      localB->In2_i = rtb_SFunction_o3_j;

      /* Inport: '<S53>/In3' */
      localB->In3_m = rtb_SFunction_o4_o;

      /* Inport: '<S53>/In4' */
      localB->In4_iv = rtb_SFunction_o5_o;

      /* Inport: '<S53>/In5' */
      localB->In5_h = rtb_SFunction_o6_n;

      /* Inport: '<S53>/In6' */
      localB->In6_d = rtb_SFunction_o7_d;

      /* Inport: '<S53>/In7' */
      localB->In7_bt = rtb_SFunction_o8_e;

      /* Inport: '<S53>/In8' */
      localB->In8_ku = rtb_SFunction_o9_f2;
    }

    /* End of Outputs for SubSystem: '<S52>/Enabled Subsystem' */
  } else {
    if (localDW->OutControl2_ID_CAN_MODE) {
      /* Disable for Outport: '<S42>/CAN_new' */
      localB->SFunction_o1_b = 0;

      /* Disable for Outport: '<S42>/Out2' */
      localB->In1_c = ((uint8_T)0U);

      /* Disable for Outport: '<S42>/Out3' */
      localB->In2_i = ((uint8_T)0U);

      /* Disable for Outport: '<S42>/Out4' */
      localB->In3_m = ((uint8_T)0U);

      /* Disable for Outport: '<S42>/Out5' */
      localB->In4_iv = ((uint8_T)0U);

      /* Disable for Outport: '<S42>/Out6' */
      localB->In5_h = ((uint8_T)0U);

      /* Disable for Outport: '<S42>/Out7' */
      localB->In6_d = ((uint8_T)0U);

      /* Disable for Outport: '<S42>/Out8' */
      localB->In7_bt = ((uint8_T)0U);

      /* Disable for Outport: '<S42>/Out9' */
      localB->In8_ku = ((uint8_T)0U);
      localDW->OutControl2_ID_CAN_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S39>/OutControl2_ID_CAN' */

  /* Outputs for Enabled SubSystem: '<S39>/OutEmulator_ID_CAN' incorporates:
   *  EnablePort: '<S43>/Enable'
   */
  /* RelationalOperator: '<S39>/Equal8' incorporates:
   *  Constant: '<S39>/Constant8'
   *  Inport: '<S55>/In1'
   *  Inport: '<S55>/In2'
   *  Inport: '<S55>/In3'
   *  Inport: '<S55>/In4'
   *  Inport: '<S55>/In5'
   *  Inport: '<S55>/In6'
   *  Inport: '<S55>/In7'
   *  Inport: '<S55>/In8'
   */
  if (RxID_CAN1_s == 25.0) {
    if (!localDW->OutEmulator_ID_CAN_MODE) {
      localDW->OutEmulator_ID_CAN_MODE = true;
    }

    /* M-S-Function: '<S54>/S-Function' incorporates:
     *  Constant: '<S43>/Constant8'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_o = CanIoGetMessage(0, 25U, NULL,
      &canRxData_0_25U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_o > 0) {
      /* read the data */
      rtb_SFunction_o2_fu = canRxData_0_25U.uint8_T_info[0];
      rtb_SFunction_o3_mj = canRxData_0_25U.uint8_T_info[1];
      rtb_SFunction_o4_j = canRxData_0_25U.uint8_T_info[2];
      rtb_SFunction_o5_c5 = canRxData_0_25U.uint8_T_info[3];
      rtb_SFunction_o6_p = canRxData_0_25U.uint8_T_info[4];
      rtb_SFunction_o7_j = canRxData_0_25U.uint8_T_info[5];
      rtb_SFunction_o8_c = canRxData_0_25U.uint8_T_info[6];
      rtb_SFunction_o9_f0 = canRxData_0_25U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S54>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S55>/Enable'
     */
    if (localB->SFunction_o1_o > 0) {
      localB->In1_b = rtb_SFunction_o2_fu;
      localB->In2_o = rtb_SFunction_o3_mj;
      localB->In3_oq = rtb_SFunction_o4_j;
      localB->In4_i = rtb_SFunction_o5_c5;
      localB->In5_md = rtb_SFunction_o6_p;
      localB->In6_hx = rtb_SFunction_o7_j;
      localB->In7_k = rtb_SFunction_o8_c;
      localB->In8_l = rtb_SFunction_o9_f0;
    }

    /* End of Outputs for SubSystem: '<S54>/Enabled Subsystem' */
  } else {
    if (localDW->OutEmulator_ID_CAN_MODE) {
      /* Disable for Outport: '<S43>/CAN_new' */
      localB->SFunction_o1_o = 0;

      /* Disable for Outport: '<S43>/Out2' */
      localB->In1_b = ((uint8_T)0U);

      /* Disable for Outport: '<S43>/Out3' */
      localB->In2_o = ((uint8_T)0U);

      /* Disable for Outport: '<S43>/Out4' */
      localB->In3_oq = ((uint8_T)0U);

      /* Disable for Outport: '<S43>/Out5' */
      localB->In4_i = ((uint8_T)0U);

      /* Disable for Outport: '<S43>/Out6' */
      localB->In5_md = ((uint8_T)0U);

      /* Disable for Outport: '<S43>/Out7' */
      localB->In6_hx = ((uint8_T)0U);

      /* Disable for Outport: '<S43>/Out8' */
      localB->In7_k = ((uint8_T)0U);

      /* Disable for Outport: '<S43>/Out9' */
      localB->In8_l = ((uint8_T)0U);
      localDW->OutEmulator_ID_CAN_MODE = false;
    }
  }

  /* End of RelationalOperator: '<S39>/Equal8' */
  /* End of Outputs for SubSystem: '<S39>/OutEmulator_ID_CAN' */

  /* Switch: '<S39>/Switch' incorporates:
   *  Switch: '<S39>/Switch1'
   *  Switch: '<S39>/Switch2'
   *  Switch: '<S39>/Switch3'
   *  Switch: '<S39>/Switch4'
   *  Switch: '<S39>/Switch5'
   *  Switch: '<S39>/Switch6'
   *  Switch: '<S39>/Switch7'
   */
  if (rtb_Equal_mj) {
    rtb_signal1_jr = localB->SFunction_o1_h;
    rtb_signal2_n = localB->In1_p;
    rtb_signal3 = localB->In2_k;
    rtb_signal4 = localB->In3_b;
    rtb_signal5 = localB->In4_l;
    rtb_signal6 = localB->In5_c;
    rtb_signal7 = localB->In6_i;
    rtb_signal8 = localB->In7_m;
    rtb_signal9 = localB->In8_c;
  } else {
    if (rtb_Equal1_n) {
      /* Switch: '<S39>/Switch1' */
      rtb_signal1_jr = localB->SFunction_o1_m;
    } else if (rtb_Equal2_oo) {
      /* Switch: '<S39>/Switch2' incorporates:
       *  Switch: '<S39>/Switch1'
       */
      rtb_signal1_jr = localB->SFunction_o1_e;
    } else if (rtb_Equal3_n) {
      /* Switch: '<S39>/Switch3' incorporates:
       *  Switch: '<S39>/Switch1'
       *  Switch: '<S39>/Switch2'
       */
      rtb_signal1_jr = localB->SFunction_o1;
    } else if (rtb_Equal4_gf) {
      /* Switch: '<S39>/Switch4' incorporates:
       *  Switch: '<S39>/Switch1'
       *  Switch: '<S39>/Switch2'
       *  Switch: '<S39>/Switch3'
       */
      rtb_signal1_jr = localB->SFunction_o1_l;
    } else if (rtb_Equal5_jt) {
      /* Switch: '<S39>/Switch5' incorporates:
       *  Switch: '<S39>/Switch1'
       *  Switch: '<S39>/Switch2'
       *  Switch: '<S39>/Switch3'
       *  Switch: '<S39>/Switch4'
       */
      rtb_signal1_jr = localB->SFunction_o1_i;
    } else if (rtb_Equal6_o) {
      /* Switch: '<S39>/Switch6' incorporates:
       *  Switch: '<S39>/Switch1'
       *  Switch: '<S39>/Switch2'
       *  Switch: '<S39>/Switch3'
       *  Switch: '<S39>/Switch4'
       *  Switch: '<S39>/Switch5'
       */
      rtb_signal1_jr = localB->SFunction_o1_k;
    } else if (rtb_Equal7_g) {
      /* Switch: '<S39>/Switch7' incorporates:
       *  Switch: '<S39>/Switch1'
       *  Switch: '<S39>/Switch2'
       *  Switch: '<S39>/Switch3'
       *  Switch: '<S39>/Switch4'
       *  Switch: '<S39>/Switch5'
       *  Switch: '<S39>/Switch6'
       */
      rtb_signal1_jr = localB->SFunction_o1_b;
    } else {
      /* Switch: '<S39>/Switch4' incorporates:
       *  Switch: '<S39>/Switch1'
       *  Switch: '<S39>/Switch2'
       *  Switch: '<S39>/Switch3'
       *  Switch: '<S39>/Switch5'
       *  Switch: '<S39>/Switch6'
       *  Switch: '<S39>/Switch7'
       */
      rtb_signal1_jr = localB->SFunction_o1_o;
    }

    /* Switch: '<S39>/Switch1' incorporates:
     *  Switch: '<S39>/Switch2'
     *  Switch: '<S39>/Switch3'
     *  Switch: '<S39>/Switch4'
     *  Switch: '<S39>/Switch5'
     *  Switch: '<S39>/Switch6'
     *  Switch: '<S39>/Switch7'
     */
    if (rtb_Equal1_n) {
      rtb_signal2_n = localB->In1_d;
      rtb_signal3 = localB->In2_a;
      rtb_signal4 = localB->In3_n;
      rtb_signal5 = localB->In4_m;
      rtb_signal6 = localB->In5_k;
      rtb_signal7 = localB->In6_j;
      rtb_signal8 = localB->In7_o;
      rtb_signal9 = localB->In8_k;
    } else if (rtb_Equal2_oo) {
      rtb_signal2_n = localB->In1_j;
      rtb_signal3 = localB->In2_l;
      rtb_signal4 = localB->In3_o;
      rtb_signal5 = localB->In4_c;
      rtb_signal6 = localB->In5_g;
      rtb_signal7 = localB->In6_h;
      rtb_signal8 = localB->In7_b;
      rtb_signal9 = localB->In8_a;
    } else {
      if (rtb_Equal3_n) {
        rtb_signal2_n = localB->In1;
      } else if (rtb_Equal4_gf) {
        rtb_signal2_n = localB->In1_pn;
      } else if (rtb_Equal5_jt) {
        rtb_signal2_n = localB->In1_k;
      } else if (rtb_Equal6_o) {
        rtb_signal2_n = localB->In1_g;
      } else if (rtb_Equal7_g) {
        rtb_signal2_n = localB->In1_c;
      } else {
        rtb_signal2_n = localB->In1_b;
      }

      if (rtb_Equal3_n) {
        rtb_signal3 = localB->In2;
      } else if (rtb_Equal4_gf) {
        rtb_signal3 = localB->In2_b;
      } else if (rtb_Equal5_jt) {
        rtb_signal3 = localB->In2_c;
      } else if (rtb_Equal6_o) {
        rtb_signal3 = localB->In2_p;
      } else if (rtb_Equal7_g) {
        rtb_signal3 = localB->In2_i;
      } else {
        rtb_signal3 = localB->In2_o;
      }

      if (rtb_Equal3_n) {
        rtb_signal4 = localB->In3;
      } else if (rtb_Equal4_gf) {
        rtb_signal4 = localB->In3_k;
      } else if (rtb_Equal5_jt) {
        rtb_signal4 = localB->In3_i;
      } else if (rtb_Equal6_o) {
        rtb_signal4 = localB->In3_l;
      } else if (rtb_Equal7_g) {
        rtb_signal4 = localB->In3_m;
      } else {
        rtb_signal4 = localB->In3_oq;
      }

      if (rtb_Equal3_n) {
        rtb_signal5 = localB->In4;
      } else if (rtb_Equal4_gf) {
        rtb_signal5 = localB->In4_h;
      } else if (rtb_Equal5_jt) {
        rtb_signal5 = localB->In4_b;
      } else if (rtb_Equal6_o) {
        rtb_signal5 = localB->In4_n;
      } else if (rtb_Equal7_g) {
        rtb_signal5 = localB->In4_iv;
      } else {
        rtb_signal5 = localB->In4_i;
      }

      if (rtb_Equal3_n) {
        rtb_signal6 = localB->In5;
      } else if (rtb_Equal4_gf) {
        rtb_signal6 = localB->In5_l;
      } else if (rtb_Equal5_jt) {
        rtb_signal6 = localB->In5_m;
      } else if (rtb_Equal6_o) {
        rtb_signal6 = localB->In5_o;
      } else if (rtb_Equal7_g) {
        rtb_signal6 = localB->In5_h;
      } else {
        rtb_signal6 = localB->In5_md;
      }

      if (rtb_Equal3_n) {
        rtb_signal7 = localB->In6;
      } else if (rtb_Equal4_gf) {
        rtb_signal7 = localB->In6_m;
      } else if (rtb_Equal5_jt) {
        rtb_signal7 = localB->In6_n;
      } else if (rtb_Equal6_o) {
        rtb_signal7 = localB->In6_l;
      } else if (rtb_Equal7_g) {
        rtb_signal7 = localB->In6_d;
      } else {
        rtb_signal7 = localB->In6_hx;
      }

      if (rtb_Equal3_n) {
        rtb_signal8 = localB->In7;
      } else if (rtb_Equal4_gf) {
        rtb_signal8 = localB->In7_mm;
      } else if (rtb_Equal5_jt) {
        rtb_signal8 = localB->In7_l;
      } else if (rtb_Equal6_o) {
        rtb_signal8 = localB->In7_f;
      } else if (rtb_Equal7_g) {
        rtb_signal8 = localB->In7_bt;
      } else {
        rtb_signal8 = localB->In7_k;
      }

      if (rtb_Equal3_n) {
        rtb_signal9 = localB->In8;
      } else if (rtb_Equal4_gf) {
        rtb_signal9 = localB->In8_e;
      } else if (rtb_Equal5_jt) {
        rtb_signal9 = localB->In8_aa;
      } else if (rtb_Equal6_o) {
        rtb_signal9 = localB->In8_kx;
      } else if (rtb_Equal7_g) {
        rtb_signal9 = localB->In8_ku;
      } else {
        rtb_signal9 = localB->In8_l;
      }
    }
  }

  /* End of Switch: '<S39>/Switch' */

  /* Outputs for Enabled SubSystem: '<S26>/Buffer ready' incorporates:
   *  EnablePort: '<S37>/Enable'
   */
  /* Logic: '<S26>/AND2' incorporates:
   *  Constant: '<S26>/Constant'
   *  Constant: '<S26>/Constant7'
   *  RelationalOperator: '<S26>/Equal3'
   *  RelationalOperator: '<S26>/Equal6'
   */
  if ((*rtd_Rx_State_CAN1 == 1.0) && (0.0 == rtb_signal1_jr)) {
    /* DataStoreWrite: '<S37>/Data Store Write' incorporates:
     *  Constant: '<S37>/New_Msg'
     */
    *rtd_Rx_State_CAN1 = ((uint8_T)2U);

    /* DataStoreWrite: '<S37>/Data Store Write1' incorporates:
     *  Constant: '<S37>/SET'
     */
    *rtd_Toggle_Pin_A0 = true;
  }

  /* End of Logic: '<S26>/AND2' */
  /* End of Outputs for SubSystem: '<S26>/Buffer ready' */

  /* Outputs for Enabled SubSystem: '<S26>/Update message buffers' incorporates:
   *  EnablePort: '<S40>/Enable'
   */
  /* Logic: '<S26>/AND3' incorporates:
   *  Constant: '<S26>/Constant4'
   *  Constant: '<S26>/Constant5'
   *  Constant: '<S40>/Constant'
   *  Constant: '<S40>/Constant2'
   *  Constant: '<S40>/SET'
   *  Logic: '<S40>/AND'
   *  RelationalOperator: '<S26>/Equal4'
   *  RelationalOperator: '<S26>/Equal7'
   *  RelationalOperator: '<S40>/Equal'
   */
  if ((*rtd_Rx_State_CAN1 == 2.0) && (rtb_signal1_jr >= 1.0)) {
    /* DataStoreWrite: '<S40>/Data Store Write1' */
    rtd_Msg_Rx_CAN1->Buffer_1 = rtb_signal2_n;
    rtd_Msg_Rx_CAN1->Buffer_2 = rtb_signal3;
    rtd_Msg_Rx_CAN1->Buffer_3 = rtb_signal4;
    rtd_Msg_Rx_CAN1->Buffer_4 = rtb_signal5;
    rtd_Msg_Rx_CAN1->Buffer_5 = rtb_signal6;
    rtd_Msg_Rx_CAN1->Buffer_6 = rtb_signal7;
    rtd_Msg_Rx_CAN1->Buffer_7 = rtb_signal8;
    rtd_Msg_Rx_CAN1->Buffer_8 = rtb_signal9;

    /* DataStoreWrite: '<S40>/Data Store Write' incorporates:
     *  Constant: '<S40>/SET'
     */
    *rtd_Toggle_Pin_A0 = true;

    /* DataStoreWrite: '<S40>/Data Store Write2' incorporates:
     *  Constant: '<S40>/SET'
     */
    *rtd_New_Msg_Ready_CAN1 = true;

    /* DataStoreWrite: '<S40>/Data Store Write5' incorporates:
     *  Constant: '<S40>/Idle_State'
     */
    *rtd_Rx_State_CAN1 = ((uint8_T)3U);

    /* DataStoreRead: '<S40>/Local_Time' */
    Rx_msg_ticks_CAN1 = *rtd_Local_Ticks;

    /* DataStoreWrite: '<S40>/Data Store Write6' */
    *rtd_Msg_Rx_Ticks_CAN1 = Rx_msg_ticks_CAN1;

    /* DataTypeConversion: '<S40>/Cast To Double' */
    Rx_temporal_msg_CAN1 = rtb_signal2_n;

    /* Outputs for Enabled SubSystem: '<S40>/Logic Analyzer - COMM delay measurement' incorporates:
     *  EnablePort: '<S68>/Enable'
     */
    if ((1.0 != 0.0) && true && (*rtd_RxID_CAN1 == 1.0)) {
      /* DataStoreWrite: '<S68>/Data Store Write2' incorporates:
       *  Constant: '<S68>/Constant2'
       */
      *rtd_Toggle_Pin_D12 = 1.0;
    }

    /* End of Outputs for SubSystem: '<S40>/Logic Analyzer - COMM delay measurement' */
  }

  /* End of Logic: '<S26>/AND3' */
  /* End of Outputs for SubSystem: '<S26>/Update message buffers' */

  /* Outputs for Enabled SubSystem: '<S26>/Prepare buffer' incorporates:
   *  EnablePort: '<S38>/Enable'
   */
  /* RelationalOperator: '<S26>/Equal5' incorporates:
   *  Constant: '<S26>/Constant6'
   */
  if (*rtd_Rx_State_CAN1 == 0.0) {
    /* DataStoreWrite: '<S38>/Data Store Write' incorporates:
     *  Constant: '<S38>/Constant1'
     */
    *rtd_Rx_State_CAN1 = ((uint8_T)1U);

    /* DataStoreWrite: '<S38>/Data Store Write1' incorporates:
     *  Constant: '<S38>/SET'
     */
    *rtd_Toggle_Pin_A0 = true;
  }

  /* End of RelationalOperator: '<S26>/Equal5' */
  /* End of Outputs for SubSystem: '<S26>/Prepare buffer' */
}

/* Disable for function-call system: '<S10>/CAN2 Recieve' */
void CAN2Recieve_Disable(rtB_CAN2Recieve *localB, rtDW_CAN2Recieve *localDW)
{
  /* Disable for Enabled SubSystem: '<S73>/Sync_ID_CAN' */
  if (localDW->Sync_ID_CAN_MODE) {
    /* Disable for Outport: '<S80>/CAN_new' */
    localB->SFunction_o1_d = 0;

    /* Disable for Outport: '<S80>/Out2' */
    localB->In1_b = ((uint8_T)0U);

    /* Disable for Outport: '<S80>/Out3' */
    localB->In2_c = ((uint8_T)0U);

    /* Disable for Outport: '<S80>/Out4' */
    localB->In3_n = ((uint8_T)0U);

    /* Disable for Outport: '<S80>/Out5' */
    localB->In4_m = ((uint8_T)0U);

    /* Disable for Outport: '<S80>/Out6' */
    localB->In5_k = ((uint8_T)0U);

    /* Disable for Outport: '<S80>/Out7' */
    localB->In6_l = ((uint8_T)0U);

    /* Disable for Outport: '<S80>/Out8' */
    localB->In7_b = ((uint8_T)0U);

    /* Disable for Outport: '<S80>/Out9' */
    localB->In8_k = ((uint8_T)0U);
    localDW->Sync_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S73>/Sync_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S73>/Vote1_ID_CAN' */
  if (localDW->Vote1_ID_CAN_MODE) {
    /* Disable for Outport: '<S81>/CAN_new' */
    localB->SFunction_o1_m = 0;

    /* Disable for Outport: '<S81>/Out2' */
    localB->In1_m = ((uint8_T)0U);

    /* Disable for Outport: '<S81>/Out3' */
    localB->In2_j = ((uint8_T)0U);

    /* Disable for Outport: '<S81>/Out4' */
    localB->In3_d = ((uint8_T)0U);

    /* Disable for Outport: '<S81>/Out5' */
    localB->In4_n = ((uint8_T)0U);

    /* Disable for Outport: '<S81>/Out6' */
    localB->In5_i = ((uint8_T)0U);

    /* Disable for Outport: '<S81>/Out7' */
    localB->In6_n = ((uint8_T)0U);

    /* Disable for Outport: '<S81>/Out8' */
    localB->In7_e = ((uint8_T)0U);

    /* Disable for Outport: '<S81>/Out9' */
    localB->In8_i = ((uint8_T)0U);
    localDW->Vote1_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S73>/Vote1_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S73>/Vote2_ID_CAN' */
  if (localDW->Vote2_ID_CAN_MODE) {
    /* Disable for Outport: '<S82>/CAN_new' */
    localB->SFunction_o1_c = 0;

    /* Disable for Outport: '<S82>/Out2' */
    localB->In1_l = ((uint8_T)0U);

    /* Disable for Outport: '<S82>/Out3' */
    localB->In2_i = ((uint8_T)0U);

    /* Disable for Outport: '<S82>/Out4' */
    localB->In3_l = ((uint8_T)0U);

    /* Disable for Outport: '<S82>/Out5' */
    localB->In4_e = ((uint8_T)0U);

    /* Disable for Outport: '<S82>/Out6' */
    localB->In5_c = ((uint8_T)0U);

    /* Disable for Outport: '<S82>/Out7' */
    localB->In6_g = ((uint8_T)0U);

    /* Disable for Outport: '<S82>/Out8' */
    localB->In7_j = ((uint8_T)0U);

    /* Disable for Outport: '<S82>/Out9' */
    localB->In8_p = ((uint8_T)0U);
    localDW->Vote2_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S73>/Vote2_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S73>/Vote3_ID_CAN' */
  if (localDW->Vote3_ID_CAN_MODE) {
    /* Disable for Outport: '<S83>/CAN_new' */
    localB->SFunction_o1 = 0;

    /* Disable for Outport: '<S83>/Out2' */
    localB->In1 = ((uint8_T)0U);

    /* Disable for Outport: '<S83>/Out3' */
    localB->In2 = ((uint8_T)0U);

    /* Disable for Outport: '<S83>/Out4' */
    localB->In3 = ((uint8_T)0U);

    /* Disable for Outport: '<S83>/Out5' */
    localB->In4 = ((uint8_T)0U);

    /* Disable for Outport: '<S83>/Out6' */
    localB->In5 = ((uint8_T)0U);

    /* Disable for Outport: '<S83>/Out7' */
    localB->In6 = ((uint8_T)0U);

    /* Disable for Outport: '<S83>/Out8' */
    localB->In7 = ((uint8_T)0U);

    /* Disable for Outport: '<S83>/Out9' */
    localB->In8 = ((uint8_T)0U);
    localDW->Vote3_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S73>/Vote3_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S73>/SetValues_ID_CAN' */
  if (localDW->SetValues_ID_CAN_MODE) {
    /* Disable for Outport: '<S79>/CAN_new' */
    localB->SFunction_o1_e = 0;

    /* Disable for Outport: '<S79>/Out2' */
    localB->In1_mc = ((uint8_T)0U);

    /* Disable for Outport: '<S79>/Out3' */
    localB->In2_i4 = ((uint8_T)0U);

    /* Disable for Outport: '<S79>/Out4' */
    localB->In3_m = ((uint8_T)0U);

    /* Disable for Outport: '<S79>/Out5' */
    localB->In4_f = ((uint8_T)0U);

    /* Disable for Outport: '<S79>/Out6' */
    localB->In5_l = ((uint8_T)0U);

    /* Disable for Outport: '<S79>/Out7' */
    localB->In6_o = ((uint8_T)0U);

    /* Disable for Outport: '<S79>/Out8' */
    localB->In7_eu = ((uint8_T)0U);

    /* Disable for Outport: '<S79>/Out9' */
    localB->In8_c = ((uint8_T)0U);
    localDW->SetValues_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S73>/SetValues_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S73>/SensorValues_ID_CAN' */
  if (localDW->SensorValues_ID_CAN_MODE) {
    /* Disable for Outport: '<S78>/CAN_new' */
    localB->SFunction_o1_mp = 0;

    /* Disable for Outport: '<S78>/Out2' */
    localB->In1_n = ((uint8_T)0U);

    /* Disable for Outport: '<S78>/Out3' */
    localB->In2_ie = ((uint8_T)0U);

    /* Disable for Outport: '<S78>/Out4' */
    localB->In3_p = ((uint8_T)0U);

    /* Disable for Outport: '<S78>/Out5' */
    localB->In4_c = ((uint8_T)0U);

    /* Disable for Outport: '<S78>/Out6' */
    localB->In5_kx = ((uint8_T)0U);

    /* Disable for Outport: '<S78>/Out7' */
    localB->In6_f = ((uint8_T)0U);

    /* Disable for Outport: '<S78>/Out8' */
    localB->In7_d = ((uint8_T)0U);

    /* Disable for Outport: '<S78>/Out9' */
    localB->In8_j = ((uint8_T)0U);
    localDW->SensorValues_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S73>/SensorValues_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S73>/OutControl1_ID_CAN' */
  if (localDW->OutControl1_ID_CAN_MODE) {
    /* Disable for Outport: '<S75>/CAN_new' */
    localB->SFunction_o1_f = 0;

    /* Disable for Outport: '<S75>/Out2' */
    localB->In1_b4 = ((uint8_T)0U);

    /* Disable for Outport: '<S75>/Out3' */
    localB->In2_it = ((uint8_T)0U);

    /* Disable for Outport: '<S75>/Out4' */
    localB->In3_c = ((uint8_T)0U);

    /* Disable for Outport: '<S75>/Out5' */
    localB->In4_p = ((uint8_T)0U);

    /* Disable for Outport: '<S75>/Out6' */
    localB->In5_j = ((uint8_T)0U);

    /* Disable for Outport: '<S75>/Out7' */
    localB->In6_c = ((uint8_T)0U);

    /* Disable for Outport: '<S75>/Out8' */
    localB->In7_f = ((uint8_T)0U);

    /* Disable for Outport: '<S75>/Out9' */
    localB->In8_kt = ((uint8_T)0U);
    localDW->OutControl1_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S73>/OutControl1_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S73>/OutControl2_ID_CAN' */
  if (localDW->OutControl2_ID_CAN_MODE) {
    /* Disable for Outport: '<S76>/CAN_new' */
    localB->SFunction_o1_ew = 0;

    /* Disable for Outport: '<S76>/Out2' */
    localB->In1_j = ((uint8_T)0U);

    /* Disable for Outport: '<S76>/Out3' */
    localB->In2_a = ((uint8_T)0U);

    /* Disable for Outport: '<S76>/Out4' */
    localB->In3_n2 = ((uint8_T)0U);

    /* Disable for Outport: '<S76>/Out5' */
    localB->In4_k = ((uint8_T)0U);

    /* Disable for Outport: '<S76>/Out6' */
    localB->In5_p = ((uint8_T)0U);

    /* Disable for Outport: '<S76>/Out7' */
    localB->In6_ht = ((uint8_T)0U);

    /* Disable for Outport: '<S76>/Out8' */
    localB->In7_dx = ((uint8_T)0U);

    /* Disable for Outport: '<S76>/Out9' */
    localB->In8_l = ((uint8_T)0U);
    localDW->OutControl2_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S73>/OutControl2_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S73>/OutEmulator_ID_CAN' */
  if (localDW->OutEmulator_ID_CAN_MODE) {
    /* Disable for Outport: '<S77>/CAN_new' */
    localB->SFunction_o1_c5 = 0;

    /* Disable for Outport: '<S77>/Out2' */
    localB->In1_f = ((uint8_T)0U);

    /* Disable for Outport: '<S77>/Out3' */
    localB->In2_h = ((uint8_T)0U);

    /* Disable for Outport: '<S77>/Out4' */
    localB->In3_o = ((uint8_T)0U);

    /* Disable for Outport: '<S77>/Out5' */
    localB->In4_d = ((uint8_T)0U);

    /* Disable for Outport: '<S77>/Out6' */
    localB->In5_b = ((uint8_T)0U);

    /* Disable for Outport: '<S77>/Out7' */
    localB->In6_h = ((uint8_T)0U);

    /* Disable for Outport: '<S77>/Out8' */
    localB->In7_bb = ((uint8_T)0U);

    /* Disable for Outport: '<S77>/Out9' */
    localB->In8_p1 = ((uint8_T)0U);
    localDW->OutEmulator_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S73>/OutEmulator_ID_CAN' */
}

/* Start for function-call system: '<S10>/CAN2 Recieve' */
void CAN2Recieve_Start(void)
{
  /* Start for Enabled SubSystem: '<S73>/Sync_ID_CAN' */

  /* Start for M-S-Function: '<S94>/S-Function' incorporates:
   *  Constant: '<S80>/Constant'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 1U);

  /* End of Start for SubSystem: '<S73>/Sync_ID_CAN' */

  /* Start for Enabled SubSystem: '<S73>/Vote1_ID_CAN' */

  /* Start for M-S-Function: '<S96>/S-Function' incorporates:
   *  Constant: '<S81>/Constant1'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 11U);

  /* End of Start for SubSystem: '<S73>/Vote1_ID_CAN' */

  /* Start for Enabled SubSystem: '<S73>/Vote2_ID_CAN' */

  /* Start for M-S-Function: '<S98>/S-Function' incorporates:
   *  Constant: '<S82>/Constant2'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 12U);

  /* End of Start for SubSystem: '<S73>/Vote2_ID_CAN' */

  /* Start for Enabled SubSystem: '<S73>/Vote3_ID_CAN' */

  /* Start for M-S-Function: '<S100>/S-Function' incorporates:
   *  Constant: '<S83>/Constant3'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 13U);

  /* End of Start for SubSystem: '<S73>/Vote3_ID_CAN' */

  /* Start for Enabled SubSystem: '<S73>/SetValues_ID_CAN' */

  /* Start for M-S-Function: '<S92>/S-Function' incorporates:
   *  Constant: '<S79>/Constant4'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 21U);

  /* End of Start for SubSystem: '<S73>/SetValues_ID_CAN' */

  /* Start for Enabled SubSystem: '<S73>/SensorValues_ID_CAN' */

  /* Start for M-S-Function: '<S90>/S-Function' incorporates:
   *  Constant: '<S78>/Constant5'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 22U);

  /* End of Start for SubSystem: '<S73>/SensorValues_ID_CAN' */

  /* Start for Enabled SubSystem: '<S73>/OutControl1_ID_CAN' */

  /* Start for M-S-Function: '<S84>/S-Function' incorporates:
   *  Constant: '<S75>/Constant6'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 23U);

  /* End of Start for SubSystem: '<S73>/OutControl1_ID_CAN' */

  /* Start for Enabled SubSystem: '<S73>/OutControl2_ID_CAN' */

  /* Start for M-S-Function: '<S86>/S-Function' incorporates:
   *  Constant: '<S76>/Constant7'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 24U);

  /* End of Start for SubSystem: '<S73>/OutControl2_ID_CAN' */

  /* Start for Enabled SubSystem: '<S73>/OutEmulator_ID_CAN' */

  /* Start for M-S-Function: '<S88>/S-Function' incorporates:
   *  Constant: '<S77>/Constant8'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 25U);

  /* End of Start for SubSystem: '<S73>/OutEmulator_ID_CAN' */
}

/* Output and update for function-call system: '<S10>/CAN2 Recieve' */
void CAN2Recieve(rtB_CAN2Recieve *localB, rtDW_CAN2Recieve *localDW, uint16_T
                 *rtd_Local_Ticks, msg_buffer_type *rtd_Msg_Rx_CAN2, uint16_T
                 *rtd_Msg_Rx_Ticks_CAN2, boolean_T *rtd_New_Msg_Ready_CAN2,
                 uint32_T *rtd_RxID_CAN2, uint8_T *rtd_Rx_State_CAN2, boolean_T *
                 rtd_Toggle_Pin_A0, real_T *rtd_Toggle_Pin_D8)
{
  /* local block i/o variables */
  uint8_T rtb_SFunction_o2_i;
  uint8_T rtb_SFunction_o3_gj;
  uint8_T rtb_SFunction_o4_nu;
  uint8_T rtb_SFunction_o5_e;
  uint8_T rtb_SFunction_o6_hh;
  uint8_T rtb_SFunction_o7_ju;
  uint8_T rtb_SFunction_o8_f;
  uint8_T rtb_SFunction_o9_a;
  uint8_T rtb_SFunction_o2_h4;
  uint8_T rtb_SFunction_o3_n;
  uint8_T rtb_SFunction_o4_gz;
  uint8_T rtb_SFunction_o5_a;
  uint8_T rtb_SFunction_o6_ic;
  uint8_T rtb_SFunction_o7_np;
  uint8_T rtb_SFunction_o8_a;
  uint8_T rtb_SFunction_o9_l;
  uint8_T rtb_SFunction_o2_e;
  uint8_T rtb_SFunction_o3_g3;
  uint8_T rtb_SFunction_o4_mc;
  uint8_T rtb_SFunction_o5_o4;
  uint8_T rtb_SFunction_o6_a;
  uint8_T rtb_SFunction_o7_oi;
  uint8_T rtb_SFunction_o8_ne;
  uint8_T rtb_SFunction_o9_i;
  uint8_T rtb_SFunction_o2_m0;
  uint8_T rtb_SFunction_o3_h2;
  uint8_T rtb_SFunction_o4_d;
  uint8_T rtb_SFunction_o5_f;
  uint8_T rtb_SFunction_o6_jy;
  uint8_T rtb_SFunction_o7_hv;
  uint8_T rtb_SFunction_o8_ky;
  uint8_T rtb_SFunction_o9_g;
  uint8_T rtb_SFunction_o2_ho;
  uint8_T rtb_SFunction_o3_e;
  uint8_T rtb_SFunction_o4_ny;
  uint8_T rtb_SFunction_o5_pj;
  uint8_T rtb_SFunction_o6_k;
  uint8_T rtb_SFunction_o7_l;
  uint8_T rtb_SFunction_o8_i;
  uint8_T rtb_SFunction_o9_j;
  uint8_T rtb_SFunction_o2_hx;
  uint8_T rtb_SFunction_o3_nv;
  uint8_T rtb_SFunction_o4_jg;
  uint8_T rtb_SFunction_o5_h;
  uint8_T rtb_SFunction_o6_aj;
  uint8_T rtb_SFunction_o7_b;
  uint8_T rtb_SFunction_o8_h;
  uint8_T rtb_SFunction_o9_e;
  uint8_T rtb_SFunction_o2_mb;
  uint8_T rtb_SFunction_o3_gq;
  uint8_T rtb_SFunction_o4_c;
  uint8_T rtb_SFunction_o5_cj;
  uint8_T rtb_SFunction_o6_jc;
  uint8_T rtb_SFunction_o7_nl;
  uint8_T rtb_SFunction_o8_m;
  uint8_T rtb_SFunction_o9_fl;
  uint8_T rtb_SFunction_o2_d;
  uint8_T rtb_SFunction_o3_gd;
  uint8_T rtb_SFunction_o4_eq;
  uint8_T rtb_SFunction_o5_n;
  uint8_T rtb_SFunction_o6_b;
  uint8_T rtb_SFunction_o7_hw;
  uint8_T rtb_SFunction_o8_hn;
  uint8_T rtb_SFunction_o9_i1;
  uint8_T rtb_SFunction_o2_ej;
  uint8_T rtb_SFunction_o3_p;
  uint8_T rtb_SFunction_o4_cg;
  uint8_T rtb_SFunction_o5_b;
  uint8_T rtb_SFunction_o6_o;
  uint8_T rtb_SFunction_o7_i;
  uint8_T rtb_SFunction_o8_nb;
  uint8_T rtb_SFunction_o9_ib;
  boolean_T rtb_Equal_d;
  boolean_T rtb_Equal1_mu;
  boolean_T rtb_Equal2_b4;
  boolean_T rtb_Equal3_n;
  boolean_T rtb_Equal4_ar;
  boolean_T rtb_Equal5_on;
  boolean_T rtb_Equal6_a;
  boolean_T rtb_Equal7_j;
  int8_T rtb_signal1_f4;
  uint8_T rtb_signal2_kw;
  uint8_T rtb_signal3;
  uint8_T rtb_signal4;
  uint8_T rtb_signal5;
  uint8_T rtb_signal6;
  uint8_T rtb_signal7;
  uint8_T rtb_signal8;
  uint8_T rtb_signal9;

  /* Sum: '<S28>/Sum1' incorporates:
   *  Constant: '<S28>/Constant3'
   *  DataStoreRead: '<S28>/Data Store Read1'
   */
  RxCAN2_counter_s = 1U + localDW->fcn_call_counter;

  /* DataStoreWrite: '<S28>/Data Store Write' */
  localDW->fcn_call_counter = RxCAN2_counter_s;

  /* DataStoreRead: '<S28>/Data Store Read' */
  RxID_CAN2_s = *rtd_RxID_CAN2;

  /* RelationalOperator: '<S73>/Equal' incorporates:
   *  Constant: '<S73>/Constant'
   */
  rtb_Equal_d = (RxID_CAN2_s == 1.0);

  /* Outputs for Enabled SubSystem: '<S73>/Sync_ID_CAN' incorporates:
   *  EnablePort: '<S80>/Enable'
   */
  if (rtb_Equal_d) {
    if (!localDW->Sync_ID_CAN_MODE) {
      localDW->Sync_ID_CAN_MODE = true;
    }

    /* M-S-Function: '<S94>/S-Function' incorporates:
     *  Constant: '<S80>/Constant'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_d = CanIoGetMessage(1, 1U, NULL,
      &canRxData_1_1U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_d > 0) {
      /* read the data */
      rtb_SFunction_o2_m0 = canRxData_1_1U.uint8_T_info[0];
      rtb_SFunction_o3_h2 = canRxData_1_1U.uint8_T_info[1];
      rtb_SFunction_o4_d = canRxData_1_1U.uint8_T_info[2];
      rtb_SFunction_o5_f = canRxData_1_1U.uint8_T_info[3];
      rtb_SFunction_o6_jy = canRxData_1_1U.uint8_T_info[4];
      rtb_SFunction_o7_hv = canRxData_1_1U.uint8_T_info[5];
      rtb_SFunction_o8_ky = canRxData_1_1U.uint8_T_info[6];
      rtb_SFunction_o9_g = canRxData_1_1U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S94>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S95>/Enable'
     */
    if (localB->SFunction_o1_d > 0) {
      /* Inport: '<S95>/In1' */
      localB->In1_b = rtb_SFunction_o2_m0;

      /* Inport: '<S95>/In2' */
      localB->In2_c = rtb_SFunction_o3_h2;

      /* Inport: '<S95>/In3' */
      localB->In3_n = rtb_SFunction_o4_d;

      /* Inport: '<S95>/In4' */
      localB->In4_m = rtb_SFunction_o5_f;

      /* Inport: '<S95>/In5' */
      localB->In5_k = rtb_SFunction_o6_jy;

      /* Inport: '<S95>/In6' */
      localB->In6_l = rtb_SFunction_o7_hv;

      /* Inport: '<S95>/In7' */
      localB->In7_b = rtb_SFunction_o8_ky;

      /* Inport: '<S95>/In8' */
      localB->In8_k = rtb_SFunction_o9_g;
    }

    /* End of Outputs for SubSystem: '<S94>/Enabled Subsystem' */
  } else {
    if (localDW->Sync_ID_CAN_MODE) {
      /* Disable for Outport: '<S80>/CAN_new' */
      localB->SFunction_o1_d = 0;

      /* Disable for Outport: '<S80>/Out2' */
      localB->In1_b = ((uint8_T)0U);

      /* Disable for Outport: '<S80>/Out3' */
      localB->In2_c = ((uint8_T)0U);

      /* Disable for Outport: '<S80>/Out4' */
      localB->In3_n = ((uint8_T)0U);

      /* Disable for Outport: '<S80>/Out5' */
      localB->In4_m = ((uint8_T)0U);

      /* Disable for Outport: '<S80>/Out6' */
      localB->In5_k = ((uint8_T)0U);

      /* Disable for Outport: '<S80>/Out7' */
      localB->In6_l = ((uint8_T)0U);

      /* Disable for Outport: '<S80>/Out8' */
      localB->In7_b = ((uint8_T)0U);

      /* Disable for Outport: '<S80>/Out9' */
      localB->In8_k = ((uint8_T)0U);
      localDW->Sync_ID_CAN_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S73>/Sync_ID_CAN' */

  /* RelationalOperator: '<S73>/Equal1' incorporates:
   *  Constant: '<S73>/Constant1'
   */
  rtb_Equal1_mu = (RxID_CAN2_s == 11.0);

  /* Outputs for Enabled SubSystem: '<S73>/Vote1_ID_CAN' incorporates:
   *  EnablePort: '<S81>/Enable'
   */
  if (rtb_Equal1_mu) {
    if (!localDW->Vote1_ID_CAN_MODE) {
      localDW->Vote1_ID_CAN_MODE = true;
    }

    /* M-S-Function: '<S96>/S-Function' incorporates:
     *  Constant: '<S81>/Constant1'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_m = CanIoGetMessage(1, 11U, NULL,
      &canRxData_1_11U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_m > 0) {
      /* read the data */
      rtb_SFunction_o2_e = canRxData_1_11U.uint8_T_info[0];
      rtb_SFunction_o3_g3 = canRxData_1_11U.uint8_T_info[1];
      rtb_SFunction_o4_mc = canRxData_1_11U.uint8_T_info[2];
      rtb_SFunction_o5_o4 = canRxData_1_11U.uint8_T_info[3];
      rtb_SFunction_o6_a = canRxData_1_11U.uint8_T_info[4];
      rtb_SFunction_o7_oi = canRxData_1_11U.uint8_T_info[5];
      rtb_SFunction_o8_ne = canRxData_1_11U.uint8_T_info[6];
      rtb_SFunction_o9_i = canRxData_1_11U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S96>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S97>/Enable'
     */
    if (localB->SFunction_o1_m > 0) {
      /* Inport: '<S97>/In1' */
      localB->In1_m = rtb_SFunction_o2_e;

      /* Inport: '<S97>/In2' */
      localB->In2_j = rtb_SFunction_o3_g3;

      /* Inport: '<S97>/In3' */
      localB->In3_d = rtb_SFunction_o4_mc;

      /* Inport: '<S97>/In4' */
      localB->In4_n = rtb_SFunction_o5_o4;

      /* Inport: '<S97>/In5' */
      localB->In5_i = rtb_SFunction_o6_a;

      /* Inport: '<S97>/In6' */
      localB->In6_n = rtb_SFunction_o7_oi;

      /* Inport: '<S97>/In7' */
      localB->In7_e = rtb_SFunction_o8_ne;

      /* Inport: '<S97>/In8' */
      localB->In8_i = rtb_SFunction_o9_i;
    }

    /* End of Outputs for SubSystem: '<S96>/Enabled Subsystem' */
  } else {
    if (localDW->Vote1_ID_CAN_MODE) {
      /* Disable for Outport: '<S81>/CAN_new' */
      localB->SFunction_o1_m = 0;

      /* Disable for Outport: '<S81>/Out2' */
      localB->In1_m = ((uint8_T)0U);

      /* Disable for Outport: '<S81>/Out3' */
      localB->In2_j = ((uint8_T)0U);

      /* Disable for Outport: '<S81>/Out4' */
      localB->In3_d = ((uint8_T)0U);

      /* Disable for Outport: '<S81>/Out5' */
      localB->In4_n = ((uint8_T)0U);

      /* Disable for Outport: '<S81>/Out6' */
      localB->In5_i = ((uint8_T)0U);

      /* Disable for Outport: '<S81>/Out7' */
      localB->In6_n = ((uint8_T)0U);

      /* Disable for Outport: '<S81>/Out8' */
      localB->In7_e = ((uint8_T)0U);

      /* Disable for Outport: '<S81>/Out9' */
      localB->In8_i = ((uint8_T)0U);
      localDW->Vote1_ID_CAN_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S73>/Vote1_ID_CAN' */

  /* RelationalOperator: '<S73>/Equal2' incorporates:
   *  Constant: '<S73>/Constant2'
   */
  rtb_Equal2_b4 = (RxID_CAN2_s == 12.0);

  /* Outputs for Enabled SubSystem: '<S73>/Vote2_ID_CAN' incorporates:
   *  EnablePort: '<S82>/Enable'
   */
  if (rtb_Equal2_b4) {
    if (!localDW->Vote2_ID_CAN_MODE) {
      localDW->Vote2_ID_CAN_MODE = true;
    }

    /* M-S-Function: '<S98>/S-Function' incorporates:
     *  Constant: '<S82>/Constant2'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_c = CanIoGetMessage(1, 12U, NULL,
      &canRxData_1_12U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_c > 0) {
      /* read the data */
      rtb_SFunction_o2_h4 = canRxData_1_12U.uint8_T_info[0];
      rtb_SFunction_o3_n = canRxData_1_12U.uint8_T_info[1];
      rtb_SFunction_o4_gz = canRxData_1_12U.uint8_T_info[2];
      rtb_SFunction_o5_a = canRxData_1_12U.uint8_T_info[3];
      rtb_SFunction_o6_ic = canRxData_1_12U.uint8_T_info[4];
      rtb_SFunction_o7_np = canRxData_1_12U.uint8_T_info[5];
      rtb_SFunction_o8_a = canRxData_1_12U.uint8_T_info[6];
      rtb_SFunction_o9_l = canRxData_1_12U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S98>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S99>/Enable'
     */
    if (localB->SFunction_o1_c > 0) {
      /* Inport: '<S99>/In1' */
      localB->In1_l = rtb_SFunction_o2_h4;

      /* Inport: '<S99>/In2' */
      localB->In2_i = rtb_SFunction_o3_n;

      /* Inport: '<S99>/In3' */
      localB->In3_l = rtb_SFunction_o4_gz;

      /* Inport: '<S99>/In4' */
      localB->In4_e = rtb_SFunction_o5_a;

      /* Inport: '<S99>/In5' */
      localB->In5_c = rtb_SFunction_o6_ic;

      /* Inport: '<S99>/In6' */
      localB->In6_g = rtb_SFunction_o7_np;

      /* Inport: '<S99>/In7' */
      localB->In7_j = rtb_SFunction_o8_a;

      /* Inport: '<S99>/In8' */
      localB->In8_p = rtb_SFunction_o9_l;
    }

    /* End of Outputs for SubSystem: '<S98>/Enabled Subsystem' */
  } else {
    if (localDW->Vote2_ID_CAN_MODE) {
      /* Disable for Outport: '<S82>/CAN_new' */
      localB->SFunction_o1_c = 0;

      /* Disable for Outport: '<S82>/Out2' */
      localB->In1_l = ((uint8_T)0U);

      /* Disable for Outport: '<S82>/Out3' */
      localB->In2_i = ((uint8_T)0U);

      /* Disable for Outport: '<S82>/Out4' */
      localB->In3_l = ((uint8_T)0U);

      /* Disable for Outport: '<S82>/Out5' */
      localB->In4_e = ((uint8_T)0U);

      /* Disable for Outport: '<S82>/Out6' */
      localB->In5_c = ((uint8_T)0U);

      /* Disable for Outport: '<S82>/Out7' */
      localB->In6_g = ((uint8_T)0U);

      /* Disable for Outport: '<S82>/Out8' */
      localB->In7_j = ((uint8_T)0U);

      /* Disable for Outport: '<S82>/Out9' */
      localB->In8_p = ((uint8_T)0U);
      localDW->Vote2_ID_CAN_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S73>/Vote2_ID_CAN' */

  /* RelationalOperator: '<S73>/Equal3' incorporates:
   *  Constant: '<S73>/Constant3'
   */
  rtb_Equal3_n = (RxID_CAN2_s == 13.0);

  /* Outputs for Enabled SubSystem: '<S73>/Vote3_ID_CAN' incorporates:
   *  EnablePort: '<S83>/Enable'
   */
  if (rtb_Equal3_n) {
    if (!localDW->Vote3_ID_CAN_MODE) {
      localDW->Vote3_ID_CAN_MODE = true;
    }

    /* M-S-Function: '<S100>/S-Function' incorporates:
     *  Constant: '<S83>/Constant3'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1 = CanIoGetMessage(1, 13U, NULL,
      &canRxData_1_13U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1 > 0) {
      /* read the data */
      rtb_SFunction_o2_i = canRxData_1_13U.uint8_T_info[0];
      rtb_SFunction_o3_gj = canRxData_1_13U.uint8_T_info[1];
      rtb_SFunction_o4_nu = canRxData_1_13U.uint8_T_info[2];
      rtb_SFunction_o5_e = canRxData_1_13U.uint8_T_info[3];
      rtb_SFunction_o6_hh = canRxData_1_13U.uint8_T_info[4];
      rtb_SFunction_o7_ju = canRxData_1_13U.uint8_T_info[5];
      rtb_SFunction_o8_f = canRxData_1_13U.uint8_T_info[6];
      rtb_SFunction_o9_a = canRxData_1_13U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S100>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S101>/Enable'
     */
    if (localB->SFunction_o1 > 0) {
      /* Inport: '<S101>/In1' */
      localB->In1 = rtb_SFunction_o2_i;

      /* Inport: '<S101>/In2' */
      localB->In2 = rtb_SFunction_o3_gj;

      /* Inport: '<S101>/In3' */
      localB->In3 = rtb_SFunction_o4_nu;

      /* Inport: '<S101>/In4' */
      localB->In4 = rtb_SFunction_o5_e;

      /* Inport: '<S101>/In5' */
      localB->In5 = rtb_SFunction_o6_hh;

      /* Inport: '<S101>/In6' */
      localB->In6 = rtb_SFunction_o7_ju;

      /* Inport: '<S101>/In7' */
      localB->In7 = rtb_SFunction_o8_f;

      /* Inport: '<S101>/In8' */
      localB->In8 = rtb_SFunction_o9_a;
    }

    /* End of Outputs for SubSystem: '<S100>/Enabled Subsystem' */
  } else {
    if (localDW->Vote3_ID_CAN_MODE) {
      /* Disable for Outport: '<S83>/CAN_new' */
      localB->SFunction_o1 = 0;

      /* Disable for Outport: '<S83>/Out2' */
      localB->In1 = ((uint8_T)0U);

      /* Disable for Outport: '<S83>/Out3' */
      localB->In2 = ((uint8_T)0U);

      /* Disable for Outport: '<S83>/Out4' */
      localB->In3 = ((uint8_T)0U);

      /* Disable for Outport: '<S83>/Out5' */
      localB->In4 = ((uint8_T)0U);

      /* Disable for Outport: '<S83>/Out6' */
      localB->In5 = ((uint8_T)0U);

      /* Disable for Outport: '<S83>/Out7' */
      localB->In6 = ((uint8_T)0U);

      /* Disable for Outport: '<S83>/Out8' */
      localB->In7 = ((uint8_T)0U);

      /* Disable for Outport: '<S83>/Out9' */
      localB->In8 = ((uint8_T)0U);
      localDW->Vote3_ID_CAN_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S73>/Vote3_ID_CAN' */

  /* RelationalOperator: '<S73>/Equal4' incorporates:
   *  Constant: '<S73>/Constant4'
   */
  rtb_Equal4_ar = (RxID_CAN2_s == 21.0);

  /* Outputs for Enabled SubSystem: '<S73>/SetValues_ID_CAN' incorporates:
   *  EnablePort: '<S79>/Enable'
   */
  if (rtb_Equal4_ar) {
    if (!localDW->SetValues_ID_CAN_MODE) {
      localDW->SetValues_ID_CAN_MODE = true;
    }

    /* M-S-Function: '<S92>/S-Function' incorporates:
     *  Constant: '<S79>/Constant4'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_e = CanIoGetMessage(1, 21U, NULL,
      &canRxData_1_21U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_e > 0) {
      /* read the data */
      rtb_SFunction_o2_ho = canRxData_1_21U.uint8_T_info[0];
      rtb_SFunction_o3_e = canRxData_1_21U.uint8_T_info[1];
      rtb_SFunction_o4_ny = canRxData_1_21U.uint8_T_info[2];
      rtb_SFunction_o5_pj = canRxData_1_21U.uint8_T_info[3];
      rtb_SFunction_o6_k = canRxData_1_21U.uint8_T_info[4];
      rtb_SFunction_o7_l = canRxData_1_21U.uint8_T_info[5];
      rtb_SFunction_o8_i = canRxData_1_21U.uint8_T_info[6];
      rtb_SFunction_o9_j = canRxData_1_21U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S92>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S93>/Enable'
     */
    if (localB->SFunction_o1_e > 0) {
      /* Inport: '<S93>/In1' */
      localB->In1_mc = rtb_SFunction_o2_ho;

      /* Inport: '<S93>/In2' */
      localB->In2_i4 = rtb_SFunction_o3_e;

      /* Inport: '<S93>/In3' */
      localB->In3_m = rtb_SFunction_o4_ny;

      /* Inport: '<S93>/In4' */
      localB->In4_f = rtb_SFunction_o5_pj;

      /* Inport: '<S93>/In5' */
      localB->In5_l = rtb_SFunction_o6_k;

      /* Inport: '<S93>/In6' */
      localB->In6_o = rtb_SFunction_o7_l;

      /* Inport: '<S93>/In7' */
      localB->In7_eu = rtb_SFunction_o8_i;

      /* Inport: '<S93>/In8' */
      localB->In8_c = rtb_SFunction_o9_j;
    }

    /* End of Outputs for SubSystem: '<S92>/Enabled Subsystem' */
  } else {
    if (localDW->SetValues_ID_CAN_MODE) {
      /* Disable for Outport: '<S79>/CAN_new' */
      localB->SFunction_o1_e = 0;

      /* Disable for Outport: '<S79>/Out2' */
      localB->In1_mc = ((uint8_T)0U);

      /* Disable for Outport: '<S79>/Out3' */
      localB->In2_i4 = ((uint8_T)0U);

      /* Disable for Outport: '<S79>/Out4' */
      localB->In3_m = ((uint8_T)0U);

      /* Disable for Outport: '<S79>/Out5' */
      localB->In4_f = ((uint8_T)0U);

      /* Disable for Outport: '<S79>/Out6' */
      localB->In5_l = ((uint8_T)0U);

      /* Disable for Outport: '<S79>/Out7' */
      localB->In6_o = ((uint8_T)0U);

      /* Disable for Outport: '<S79>/Out8' */
      localB->In7_eu = ((uint8_T)0U);

      /* Disable for Outport: '<S79>/Out9' */
      localB->In8_c = ((uint8_T)0U);
      localDW->SetValues_ID_CAN_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S73>/SetValues_ID_CAN' */

  /* RelationalOperator: '<S73>/Equal5' incorporates:
   *  Constant: '<S73>/Constant5'
   */
  rtb_Equal5_on = (RxID_CAN2_s == 22.0);

  /* Outputs for Enabled SubSystem: '<S73>/SensorValues_ID_CAN' incorporates:
   *  EnablePort: '<S78>/Enable'
   */
  if (rtb_Equal5_on) {
    if (!localDW->SensorValues_ID_CAN_MODE) {
      localDW->SensorValues_ID_CAN_MODE = true;
    }

    /* M-S-Function: '<S90>/S-Function' incorporates:
     *  Constant: '<S78>/Constant5'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_mp = CanIoGetMessage(1, 22U, NULL,
      &canRxData_1_22U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_mp > 0) {
      /* read the data */
      rtb_SFunction_o2_hx = canRxData_1_22U.uint8_T_info[0];
      rtb_SFunction_o3_nv = canRxData_1_22U.uint8_T_info[1];
      rtb_SFunction_o4_jg = canRxData_1_22U.uint8_T_info[2];
      rtb_SFunction_o5_h = canRxData_1_22U.uint8_T_info[3];
      rtb_SFunction_o6_aj = canRxData_1_22U.uint8_T_info[4];
      rtb_SFunction_o7_b = canRxData_1_22U.uint8_T_info[5];
      rtb_SFunction_o8_h = canRxData_1_22U.uint8_T_info[6];
      rtb_SFunction_o9_e = canRxData_1_22U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S90>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S91>/Enable'
     */
    if (localB->SFunction_o1_mp > 0) {
      /* Inport: '<S91>/In1' */
      localB->In1_n = rtb_SFunction_o2_hx;

      /* Inport: '<S91>/In2' */
      localB->In2_ie = rtb_SFunction_o3_nv;

      /* Inport: '<S91>/In3' */
      localB->In3_p = rtb_SFunction_o4_jg;

      /* Inport: '<S91>/In4' */
      localB->In4_c = rtb_SFunction_o5_h;

      /* Inport: '<S91>/In5' */
      localB->In5_kx = rtb_SFunction_o6_aj;

      /* Inport: '<S91>/In6' */
      localB->In6_f = rtb_SFunction_o7_b;

      /* Inport: '<S91>/In7' */
      localB->In7_d = rtb_SFunction_o8_h;

      /* Inport: '<S91>/In8' */
      localB->In8_j = rtb_SFunction_o9_e;
    }

    /* End of Outputs for SubSystem: '<S90>/Enabled Subsystem' */
  } else {
    if (localDW->SensorValues_ID_CAN_MODE) {
      /* Disable for Outport: '<S78>/CAN_new' */
      localB->SFunction_o1_mp = 0;

      /* Disable for Outport: '<S78>/Out2' */
      localB->In1_n = ((uint8_T)0U);

      /* Disable for Outport: '<S78>/Out3' */
      localB->In2_ie = ((uint8_T)0U);

      /* Disable for Outport: '<S78>/Out4' */
      localB->In3_p = ((uint8_T)0U);

      /* Disable for Outport: '<S78>/Out5' */
      localB->In4_c = ((uint8_T)0U);

      /* Disable for Outport: '<S78>/Out6' */
      localB->In5_kx = ((uint8_T)0U);

      /* Disable for Outport: '<S78>/Out7' */
      localB->In6_f = ((uint8_T)0U);

      /* Disable for Outport: '<S78>/Out8' */
      localB->In7_d = ((uint8_T)0U);

      /* Disable for Outport: '<S78>/Out9' */
      localB->In8_j = ((uint8_T)0U);
      localDW->SensorValues_ID_CAN_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S73>/SensorValues_ID_CAN' */

  /* RelationalOperator: '<S73>/Equal6' incorporates:
   *  Constant: '<S73>/Constant6'
   */
  rtb_Equal6_a = (RxID_CAN2_s == 23.0);

  /* Outputs for Enabled SubSystem: '<S73>/OutControl1_ID_CAN' incorporates:
   *  EnablePort: '<S75>/Enable'
   */
  if (rtb_Equal6_a) {
    if (!localDW->OutControl1_ID_CAN_MODE) {
      localDW->OutControl1_ID_CAN_MODE = true;
    }

    /* M-S-Function: '<S84>/S-Function' incorporates:
     *  Constant: '<S75>/Constant6'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_f = CanIoGetMessage(1, 23U, NULL,
      &canRxData_1_23U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_f > 0) {
      /* read the data */
      rtb_SFunction_o2_ej = canRxData_1_23U.uint8_T_info[0];
      rtb_SFunction_o3_p = canRxData_1_23U.uint8_T_info[1];
      rtb_SFunction_o4_cg = canRxData_1_23U.uint8_T_info[2];
      rtb_SFunction_o5_b = canRxData_1_23U.uint8_T_info[3];
      rtb_SFunction_o6_o = canRxData_1_23U.uint8_T_info[4];
      rtb_SFunction_o7_i = canRxData_1_23U.uint8_T_info[5];
      rtb_SFunction_o8_nb = canRxData_1_23U.uint8_T_info[6];
      rtb_SFunction_o9_ib = canRxData_1_23U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S84>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S85>/Enable'
     */
    if (localB->SFunction_o1_f > 0) {
      /* Inport: '<S85>/In1' */
      localB->In1_b4 = rtb_SFunction_o2_ej;

      /* Inport: '<S85>/In2' */
      localB->In2_it = rtb_SFunction_o3_p;

      /* Inport: '<S85>/In3' */
      localB->In3_c = rtb_SFunction_o4_cg;

      /* Inport: '<S85>/In4' */
      localB->In4_p = rtb_SFunction_o5_b;

      /* Inport: '<S85>/In5' */
      localB->In5_j = rtb_SFunction_o6_o;

      /* Inport: '<S85>/In6' */
      localB->In6_c = rtb_SFunction_o7_i;

      /* Inport: '<S85>/In7' */
      localB->In7_f = rtb_SFunction_o8_nb;

      /* Inport: '<S85>/In8' */
      localB->In8_kt = rtb_SFunction_o9_ib;
    }

    /* End of Outputs for SubSystem: '<S84>/Enabled Subsystem' */
  } else {
    if (localDW->OutControl1_ID_CAN_MODE) {
      /* Disable for Outport: '<S75>/CAN_new' */
      localB->SFunction_o1_f = 0;

      /* Disable for Outport: '<S75>/Out2' */
      localB->In1_b4 = ((uint8_T)0U);

      /* Disable for Outport: '<S75>/Out3' */
      localB->In2_it = ((uint8_T)0U);

      /* Disable for Outport: '<S75>/Out4' */
      localB->In3_c = ((uint8_T)0U);

      /* Disable for Outport: '<S75>/Out5' */
      localB->In4_p = ((uint8_T)0U);

      /* Disable for Outport: '<S75>/Out6' */
      localB->In5_j = ((uint8_T)0U);

      /* Disable for Outport: '<S75>/Out7' */
      localB->In6_c = ((uint8_T)0U);

      /* Disable for Outport: '<S75>/Out8' */
      localB->In7_f = ((uint8_T)0U);

      /* Disable for Outport: '<S75>/Out9' */
      localB->In8_kt = ((uint8_T)0U);
      localDW->OutControl1_ID_CAN_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S73>/OutControl1_ID_CAN' */

  /* RelationalOperator: '<S73>/Equal7' incorporates:
   *  Constant: '<S73>/Constant7'
   */
  rtb_Equal7_j = (RxID_CAN2_s == 24.0);

  /* Outputs for Enabled SubSystem: '<S73>/OutControl2_ID_CAN' incorporates:
   *  EnablePort: '<S76>/Enable'
   */
  if (rtb_Equal7_j) {
    if (!localDW->OutControl2_ID_CAN_MODE) {
      localDW->OutControl2_ID_CAN_MODE = true;
    }

    /* M-S-Function: '<S86>/S-Function' incorporates:
     *  Constant: '<S76>/Constant7'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_ew = CanIoGetMessage(1, 24U, NULL,
      &canRxData_1_24U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_ew > 0) {
      /* read the data */
      rtb_SFunction_o2_d = canRxData_1_24U.uint8_T_info[0];
      rtb_SFunction_o3_gd = canRxData_1_24U.uint8_T_info[1];
      rtb_SFunction_o4_eq = canRxData_1_24U.uint8_T_info[2];
      rtb_SFunction_o5_n = canRxData_1_24U.uint8_T_info[3];
      rtb_SFunction_o6_b = canRxData_1_24U.uint8_T_info[4];
      rtb_SFunction_o7_hw = canRxData_1_24U.uint8_T_info[5];
      rtb_SFunction_o8_hn = canRxData_1_24U.uint8_T_info[6];
      rtb_SFunction_o9_i1 = canRxData_1_24U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S86>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S87>/Enable'
     */
    if (localB->SFunction_o1_ew > 0) {
      /* Inport: '<S87>/In1' */
      localB->In1_j = rtb_SFunction_o2_d;

      /* Inport: '<S87>/In2' */
      localB->In2_a = rtb_SFunction_o3_gd;

      /* Inport: '<S87>/In3' */
      localB->In3_n2 = rtb_SFunction_o4_eq;

      /* Inport: '<S87>/In4' */
      localB->In4_k = rtb_SFunction_o5_n;

      /* Inport: '<S87>/In5' */
      localB->In5_p = rtb_SFunction_o6_b;

      /* Inport: '<S87>/In6' */
      localB->In6_ht = rtb_SFunction_o7_hw;

      /* Inport: '<S87>/In7' */
      localB->In7_dx = rtb_SFunction_o8_hn;

      /* Inport: '<S87>/In8' */
      localB->In8_l = rtb_SFunction_o9_i1;
    }

    /* End of Outputs for SubSystem: '<S86>/Enabled Subsystem' */
  } else {
    if (localDW->OutControl2_ID_CAN_MODE) {
      /* Disable for Outport: '<S76>/CAN_new' */
      localB->SFunction_o1_ew = 0;

      /* Disable for Outport: '<S76>/Out2' */
      localB->In1_j = ((uint8_T)0U);

      /* Disable for Outport: '<S76>/Out3' */
      localB->In2_a = ((uint8_T)0U);

      /* Disable for Outport: '<S76>/Out4' */
      localB->In3_n2 = ((uint8_T)0U);

      /* Disable for Outport: '<S76>/Out5' */
      localB->In4_k = ((uint8_T)0U);

      /* Disable for Outport: '<S76>/Out6' */
      localB->In5_p = ((uint8_T)0U);

      /* Disable for Outport: '<S76>/Out7' */
      localB->In6_ht = ((uint8_T)0U);

      /* Disable for Outport: '<S76>/Out8' */
      localB->In7_dx = ((uint8_T)0U);

      /* Disable for Outport: '<S76>/Out9' */
      localB->In8_l = ((uint8_T)0U);
      localDW->OutControl2_ID_CAN_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S73>/OutControl2_ID_CAN' */

  /* Outputs for Enabled SubSystem: '<S73>/OutEmulator_ID_CAN' incorporates:
   *  EnablePort: '<S77>/Enable'
   */
  /* RelationalOperator: '<S73>/Equal8' incorporates:
   *  Constant: '<S73>/Constant8'
   *  Inport: '<S89>/In1'
   *  Inport: '<S89>/In2'
   *  Inport: '<S89>/In3'
   *  Inport: '<S89>/In4'
   *  Inport: '<S89>/In5'
   *  Inport: '<S89>/In6'
   *  Inport: '<S89>/In7'
   *  Inport: '<S89>/In8'
   */
  if (RxID_CAN2_s == 25.0) {
    if (!localDW->OutEmulator_ID_CAN_MODE) {
      localDW->OutEmulator_ID_CAN_MODE = true;
    }

    /* M-S-Function: '<S88>/S-Function' incorporates:
     *  Constant: '<S77>/Constant8'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_c5 = CanIoGetMessage(1, 25U, NULL,
      &canRxData_1_25U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_c5 > 0) {
      /* read the data */
      rtb_SFunction_o2_mb = canRxData_1_25U.uint8_T_info[0];
      rtb_SFunction_o3_gq = canRxData_1_25U.uint8_T_info[1];
      rtb_SFunction_o4_c = canRxData_1_25U.uint8_T_info[2];
      rtb_SFunction_o5_cj = canRxData_1_25U.uint8_T_info[3];
      rtb_SFunction_o6_jc = canRxData_1_25U.uint8_T_info[4];
      rtb_SFunction_o7_nl = canRxData_1_25U.uint8_T_info[5];
      rtb_SFunction_o8_m = canRxData_1_25U.uint8_T_info[6];
      rtb_SFunction_o9_fl = canRxData_1_25U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S88>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S89>/Enable'
     */
    if (localB->SFunction_o1_c5 > 0) {
      localB->In1_f = rtb_SFunction_o2_mb;
      localB->In2_h = rtb_SFunction_o3_gq;
      localB->In3_o = rtb_SFunction_o4_c;
      localB->In4_d = rtb_SFunction_o5_cj;
      localB->In5_b = rtb_SFunction_o6_jc;
      localB->In6_h = rtb_SFunction_o7_nl;
      localB->In7_bb = rtb_SFunction_o8_m;
      localB->In8_p1 = rtb_SFunction_o9_fl;
    }

    /* End of Outputs for SubSystem: '<S88>/Enabled Subsystem' */
  } else {
    if (localDW->OutEmulator_ID_CAN_MODE) {
      /* Disable for Outport: '<S77>/CAN_new' */
      localB->SFunction_o1_c5 = 0;

      /* Disable for Outport: '<S77>/Out2' */
      localB->In1_f = ((uint8_T)0U);

      /* Disable for Outport: '<S77>/Out3' */
      localB->In2_h = ((uint8_T)0U);

      /* Disable for Outport: '<S77>/Out4' */
      localB->In3_o = ((uint8_T)0U);

      /* Disable for Outport: '<S77>/Out5' */
      localB->In4_d = ((uint8_T)0U);

      /* Disable for Outport: '<S77>/Out6' */
      localB->In5_b = ((uint8_T)0U);

      /* Disable for Outport: '<S77>/Out7' */
      localB->In6_h = ((uint8_T)0U);

      /* Disable for Outport: '<S77>/Out8' */
      localB->In7_bb = ((uint8_T)0U);

      /* Disable for Outport: '<S77>/Out9' */
      localB->In8_p1 = ((uint8_T)0U);
      localDW->OutEmulator_ID_CAN_MODE = false;
    }
  }

  /* End of RelationalOperator: '<S73>/Equal8' */
  /* End of Outputs for SubSystem: '<S73>/OutEmulator_ID_CAN' */

  /* Switch: '<S73>/Switch' incorporates:
   *  Switch: '<S73>/Switch1'
   *  Switch: '<S73>/Switch2'
   *  Switch: '<S73>/Switch3'
   *  Switch: '<S73>/Switch4'
   *  Switch: '<S73>/Switch5'
   *  Switch: '<S73>/Switch6'
   *  Switch: '<S73>/Switch7'
   */
  if (rtb_Equal_d) {
    rtb_signal1_f4 = localB->SFunction_o1_d;
    rtb_signal2_kw = localB->In1_b;
    rtb_signal3 = localB->In2_c;
    rtb_signal4 = localB->In3_n;
    rtb_signal5 = localB->In4_m;
    rtb_signal6 = localB->In5_k;
    rtb_signal7 = localB->In6_l;
    rtb_signal8 = localB->In7_b;
    rtb_signal9 = localB->In8_k;
  } else {
    if (rtb_Equal1_mu) {
      /* Switch: '<S73>/Switch1' */
      rtb_signal1_f4 = localB->SFunction_o1_m;
    } else if (rtb_Equal2_b4) {
      /* Switch: '<S73>/Switch2' incorporates:
       *  Switch: '<S73>/Switch1'
       */
      rtb_signal1_f4 = localB->SFunction_o1_c;
    } else if (rtb_Equal3_n) {
      /* Switch: '<S73>/Switch3' incorporates:
       *  Switch: '<S73>/Switch1'
       *  Switch: '<S73>/Switch2'
       */
      rtb_signal1_f4 = localB->SFunction_o1;
    } else if (rtb_Equal4_ar) {
      /* Switch: '<S73>/Switch4' incorporates:
       *  Switch: '<S73>/Switch1'
       *  Switch: '<S73>/Switch2'
       *  Switch: '<S73>/Switch3'
       */
      rtb_signal1_f4 = localB->SFunction_o1_e;
    } else if (rtb_Equal5_on) {
      /* Switch: '<S73>/Switch5' incorporates:
       *  Switch: '<S73>/Switch1'
       *  Switch: '<S73>/Switch2'
       *  Switch: '<S73>/Switch3'
       *  Switch: '<S73>/Switch4'
       */
      rtb_signal1_f4 = localB->SFunction_o1_mp;
    } else if (rtb_Equal6_a) {
      /* Switch: '<S73>/Switch6' incorporates:
       *  Switch: '<S73>/Switch1'
       *  Switch: '<S73>/Switch2'
       *  Switch: '<S73>/Switch3'
       *  Switch: '<S73>/Switch4'
       *  Switch: '<S73>/Switch5'
       */
      rtb_signal1_f4 = localB->SFunction_o1_f;
    } else if (rtb_Equal7_j) {
      /* Switch: '<S73>/Switch7' incorporates:
       *  Switch: '<S73>/Switch1'
       *  Switch: '<S73>/Switch2'
       *  Switch: '<S73>/Switch3'
       *  Switch: '<S73>/Switch4'
       *  Switch: '<S73>/Switch5'
       *  Switch: '<S73>/Switch6'
       */
      rtb_signal1_f4 = localB->SFunction_o1_ew;
    } else {
      /* Switch: '<S73>/Switch4' incorporates:
       *  Switch: '<S73>/Switch1'
       *  Switch: '<S73>/Switch2'
       *  Switch: '<S73>/Switch3'
       *  Switch: '<S73>/Switch5'
       *  Switch: '<S73>/Switch6'
       *  Switch: '<S73>/Switch7'
       */
      rtb_signal1_f4 = localB->SFunction_o1_c5;
    }

    /* Switch: '<S73>/Switch1' incorporates:
     *  Switch: '<S73>/Switch2'
     *  Switch: '<S73>/Switch3'
     *  Switch: '<S73>/Switch4'
     *  Switch: '<S73>/Switch5'
     *  Switch: '<S73>/Switch6'
     *  Switch: '<S73>/Switch7'
     */
    if (rtb_Equal1_mu) {
      rtb_signal2_kw = localB->In1_m;
      rtb_signal3 = localB->In2_j;
      rtb_signal4 = localB->In3_d;
      rtb_signal5 = localB->In4_n;
      rtb_signal6 = localB->In5_i;
      rtb_signal7 = localB->In6_n;
      rtb_signal8 = localB->In7_e;
      rtb_signal9 = localB->In8_i;
    } else if (rtb_Equal2_b4) {
      rtb_signal2_kw = localB->In1_l;
      rtb_signal3 = localB->In2_i;
      rtb_signal4 = localB->In3_l;
      rtb_signal5 = localB->In4_e;
      rtb_signal6 = localB->In5_c;
      rtb_signal7 = localB->In6_g;
      rtb_signal8 = localB->In7_j;
      rtb_signal9 = localB->In8_p;
    } else {
      if (rtb_Equal3_n) {
        rtb_signal2_kw = localB->In1;
      } else if (rtb_Equal4_ar) {
        rtb_signal2_kw = localB->In1_mc;
      } else if (rtb_Equal5_on) {
        rtb_signal2_kw = localB->In1_n;
      } else if (rtb_Equal6_a) {
        rtb_signal2_kw = localB->In1_b4;
      } else if (rtb_Equal7_j) {
        rtb_signal2_kw = localB->In1_j;
      } else {
        rtb_signal2_kw = localB->In1_f;
      }

      if (rtb_Equal3_n) {
        rtb_signal3 = localB->In2;
      } else if (rtb_Equal4_ar) {
        rtb_signal3 = localB->In2_i4;
      } else if (rtb_Equal5_on) {
        rtb_signal3 = localB->In2_ie;
      } else if (rtb_Equal6_a) {
        rtb_signal3 = localB->In2_it;
      } else if (rtb_Equal7_j) {
        rtb_signal3 = localB->In2_a;
      } else {
        rtb_signal3 = localB->In2_h;
      }

      if (rtb_Equal3_n) {
        rtb_signal4 = localB->In3;
      } else if (rtb_Equal4_ar) {
        rtb_signal4 = localB->In3_m;
      } else if (rtb_Equal5_on) {
        rtb_signal4 = localB->In3_p;
      } else if (rtb_Equal6_a) {
        rtb_signal4 = localB->In3_c;
      } else if (rtb_Equal7_j) {
        rtb_signal4 = localB->In3_n2;
      } else {
        rtb_signal4 = localB->In3_o;
      }

      if (rtb_Equal3_n) {
        rtb_signal5 = localB->In4;
      } else if (rtb_Equal4_ar) {
        rtb_signal5 = localB->In4_f;
      } else if (rtb_Equal5_on) {
        rtb_signal5 = localB->In4_c;
      } else if (rtb_Equal6_a) {
        rtb_signal5 = localB->In4_p;
      } else if (rtb_Equal7_j) {
        rtb_signal5 = localB->In4_k;
      } else {
        rtb_signal5 = localB->In4_d;
      }

      if (rtb_Equal3_n) {
        rtb_signal6 = localB->In5;
      } else if (rtb_Equal4_ar) {
        rtb_signal6 = localB->In5_l;
      } else if (rtb_Equal5_on) {
        rtb_signal6 = localB->In5_kx;
      } else if (rtb_Equal6_a) {
        rtb_signal6 = localB->In5_j;
      } else if (rtb_Equal7_j) {
        rtb_signal6 = localB->In5_p;
      } else {
        rtb_signal6 = localB->In5_b;
      }

      if (rtb_Equal3_n) {
        rtb_signal7 = localB->In6;
      } else if (rtb_Equal4_ar) {
        rtb_signal7 = localB->In6_o;
      } else if (rtb_Equal5_on) {
        rtb_signal7 = localB->In6_f;
      } else if (rtb_Equal6_a) {
        rtb_signal7 = localB->In6_c;
      } else if (rtb_Equal7_j) {
        rtb_signal7 = localB->In6_ht;
      } else {
        rtb_signal7 = localB->In6_h;
      }

      if (rtb_Equal3_n) {
        rtb_signal8 = localB->In7;
      } else if (rtb_Equal4_ar) {
        rtb_signal8 = localB->In7_eu;
      } else if (rtb_Equal5_on) {
        rtb_signal8 = localB->In7_d;
      } else if (rtb_Equal6_a) {
        rtb_signal8 = localB->In7_f;
      } else if (rtb_Equal7_j) {
        rtb_signal8 = localB->In7_dx;
      } else {
        rtb_signal8 = localB->In7_bb;
      }

      if (rtb_Equal3_n) {
        rtb_signal9 = localB->In8;
      } else if (rtb_Equal4_ar) {
        rtb_signal9 = localB->In8_c;
      } else if (rtb_Equal5_on) {
        rtb_signal9 = localB->In8_j;
      } else if (rtb_Equal6_a) {
        rtb_signal9 = localB->In8_kt;
      } else if (rtb_Equal7_j) {
        rtb_signal9 = localB->In8_l;
      } else {
        rtb_signal9 = localB->In8_p1;
      }
    }
  }

  /* End of Switch: '<S73>/Switch' */

  /* Outputs for Enabled SubSystem: '<S28>/Buffer ready' incorporates:
   *  EnablePort: '<S71>/Enable'
   */
  /* Logic: '<S28>/AND2' incorporates:
   *  Constant: '<S28>/Constant'
   *  Constant: '<S28>/Constant7'
   *  RelationalOperator: '<S28>/Equal3'
   *  RelationalOperator: '<S28>/Equal6'
   */
  if ((*rtd_Rx_State_CAN2 == 1.0) && (0.0 == rtb_signal1_f4)) {
    /* DataStoreWrite: '<S71>/Data Store Write' incorporates:
     *  Constant: '<S71>/New_Msg'
     */
    *rtd_Rx_State_CAN2 = ((uint8_T)2U);

    /* DataStoreWrite: '<S71>/Data Store Write1' incorporates:
     *  Constant: '<S71>/SET'
     */
    *rtd_Toggle_Pin_A0 = true;
  }

  /* End of Logic: '<S28>/AND2' */
  /* End of Outputs for SubSystem: '<S28>/Buffer ready' */

  /* Outputs for Enabled SubSystem: '<S28>/Update message buffers' incorporates:
   *  EnablePort: '<S74>/Enable'
   */
  /* Logic: '<S28>/AND3' incorporates:
   *  Constant: '<S28>/Constant4'
   *  Constant: '<S28>/Constant5'
   *  Constant: '<S74>/Constant'
   *  Constant: '<S74>/Constant2'
   *  Constant: '<S74>/SET'
   *  Logic: '<S74>/AND'
   *  RelationalOperator: '<S28>/Equal4'
   *  RelationalOperator: '<S28>/Equal7'
   *  RelationalOperator: '<S74>/Equal'
   */
  if ((*rtd_Rx_State_CAN2 == 2.0) && (rtb_signal1_f4 >= 1.0)) {
    /* DataStoreWrite: '<S74>/Data Store Write1' */
    rtd_Msg_Rx_CAN2->Buffer_1 = rtb_signal2_kw;
    rtd_Msg_Rx_CAN2->Buffer_2 = rtb_signal3;
    rtd_Msg_Rx_CAN2->Buffer_3 = rtb_signal4;
    rtd_Msg_Rx_CAN2->Buffer_4 = rtb_signal5;
    rtd_Msg_Rx_CAN2->Buffer_5 = rtb_signal6;
    rtd_Msg_Rx_CAN2->Buffer_6 = rtb_signal7;
    rtd_Msg_Rx_CAN2->Buffer_7 = rtb_signal8;
    rtd_Msg_Rx_CAN2->Buffer_8 = rtb_signal9;

    /* DataStoreWrite: '<S74>/Data Store Write' incorporates:
     *  Constant: '<S74>/SET'
     */
    *rtd_Toggle_Pin_A0 = true;

    /* DataStoreWrite: '<S74>/Data Store Write2' incorporates:
     *  Constant: '<S74>/SET'
     */
    *rtd_New_Msg_Ready_CAN2 = true;

    /* DataStoreWrite: '<S74>/Data Store Write5' incorporates:
     *  Constant: '<S74>/Idle_State'
     */
    *rtd_Rx_State_CAN2 = ((uint8_T)3U);

    /* DataStoreRead: '<S74>/Local_Time' */
    Rx_msg_ticks_CAN2 = *rtd_Local_Ticks;

    /* DataStoreWrite: '<S74>/Data Store Write6' */
    *rtd_Msg_Rx_Ticks_CAN2 = Rx_msg_ticks_CAN2;

    /* DataTypeConversion: '<S74>/Cast To Double' */
    Rx_temporal_msg_CAN2 = rtb_signal2_kw;

    /* Outputs for Enabled SubSystem: '<S74>/Logic Analyzer - COMM delay measurement' incorporates:
     *  EnablePort: '<S102>/Enable'
     */
    if ((1.0 != 0.0) && true && (*rtd_RxID_CAN2 == 1.0)) {
      /* DataStoreWrite: '<S102>/Data Store Write2' incorporates:
       *  Constant: '<S102>/Constant2'
       */
      *rtd_Toggle_Pin_D8 = 1.0;
    }

    /* End of Outputs for SubSystem: '<S74>/Logic Analyzer - COMM delay measurement' */
  }

  /* End of Logic: '<S28>/AND3' */
  /* End of Outputs for SubSystem: '<S28>/Update message buffers' */

  /* Outputs for Enabled SubSystem: '<S28>/Prepare buffer' incorporates:
   *  EnablePort: '<S72>/Enable'
   */
  /* RelationalOperator: '<S28>/Equal5' incorporates:
   *  Constant: '<S28>/Constant6'
   */
  if (*rtd_Rx_State_CAN2 == 0.0) {
    /* DataStoreWrite: '<S72>/Data Store Write' incorporates:
     *  Constant: '<S72>/Constant1'
     */
    *rtd_Rx_State_CAN2 = ((uint8_T)1U);

    /* DataStoreWrite: '<S72>/Data Store Write1' incorporates:
     *  Constant: '<S72>/SET'
     */
    *rtd_Toggle_Pin_A0 = true;
  }

  /* End of RelationalOperator: '<S28>/Equal5' */
  /* End of Outputs for SubSystem: '<S28>/Prepare buffer' */
}

/* Output and update for function-call system: '<S10>/CAN2 Send' */
void CAN2Send(rtB_CAN2Send *localB, rtDW_CAN2Send *localDW, msg_buffer_type
              *rtd_Msg_Tx_CAN2, boolean_T *rtd_Toggle_Pin_A0, real_T
              *rtd_Toggle_Pin_D9, uint32_T *rtd_TxID_CAN2, real_T
              *rtd_Tx_msg_count_CAN2)
{
  /* DataStoreWrite: '<S29>/Data Store Write2' incorporates:
   *  Constant: '<S29>/Constant8'
   *  Sum: '<S29>/Plus'
   */
  *rtd_Tx_msg_count_CAN2 += 1.0;

  /* DataStoreWrite: '<S29>/Data Store Write1' incorporates:
   *  Constant: '<S29>/Constant'
   */
  *rtd_Toggle_Pin_A0 = true;

  /* Sum: '<S29>/Sum1' incorporates:
   *  Constant: '<S29>/Constant3'
   *  DataStoreRead: '<S29>/Data Store Read'
   */
  TxCAN2_counter_s = 1U + localDW->fcn_call_counter;

  /* DataStoreWrite: '<S29>/Data Store Write' */
  localDW->fcn_call_counter = TxCAN2_counter_s;

  /* Outputs for Enabled SubSystem: '<S29>/Logic Analyzer - COMM delay measurement' incorporates:
   *  EnablePort: '<S104>/Enable'
   */
  /* Logic: '<S29>/AND' incorporates:
   *  Constant: '<S29>/Constant1'
   *  Constant: '<S29>/Constant2'
   *  RelationalOperator: '<S29>/Equal'
   */
  if ((*rtd_TxID_CAN2 == 1.0) && (1.0 != 0.0)) {
    /* DataStoreWrite: '<S104>/Data Store Write2' incorporates:
     *  Constant: '<S104>/Constant2'
     */
    *rtd_Toggle_Pin_D9 = 1.0;
  }

  /* End of Logic: '<S29>/AND' */
  /* End of Outputs for SubSystem: '<S29>/Logic Analyzer - COMM delay measurement' */
  /* DataTypeConversion: '<S29>/Cast To Double' */
  Tx_temporal_msg_CAN2 = rtd_Msg_Tx_CAN2->Buffer_1;

  /* DataStoreRead: '<S29>/Data Store Read3' */
  TxID_CAN2_s = *rtd_TxID_CAN2;

  /* DataTypeConversion: '<S29>/Data Type Conversion' */
  localB->DataTypeConversion = rtd_Msg_Tx_CAN2->Buffer_1;

  /* DataTypeConversion: '<S29>/Data Type Conversion1' */
  localB->DataTypeConversion1 = TxID_CAN2_s;

  /* DataTypeConversion: '<S29>/Data Type Conversion10' */
  localB->DataTypeConversion10 = rtd_Msg_Tx_CAN2->Buffer_8;

  /* DataTypeConversion: '<S29>/Data Type Conversion4' */
  localB->DataTypeConversion4 = rtd_Msg_Tx_CAN2->Buffer_2;

  /* DataTypeConversion: '<S29>/Data Type Conversion5' */
  localB->DataTypeConversion5 = rtd_Msg_Tx_CAN2->Buffer_3;

  /* DataTypeConversion: '<S29>/Data Type Conversion6' */
  localB->DataTypeConversion6 = rtd_Msg_Tx_CAN2->Buffer_4;

  /* DataTypeConversion: '<S29>/Data Type Conversion7' */
  localB->DataTypeConversion7 = rtd_Msg_Tx_CAN2->Buffer_5;

  /* DataTypeConversion: '<S29>/Data Type Conversion8' */
  localB->DataTypeConversion8 = rtd_Msg_Tx_CAN2->Buffer_6;

  /* DataTypeConversion: '<S29>/Data Type Conversion9' */
  localB->DataTypeConversion9 = rtd_Msg_Tx_CAN2->Buffer_7;

  /* Update for M-S-Function: '<S103>/S-Function' */
  {
    /* prepare the data */
    canTxData.uint8_T_info[0] = localB->DataTypeConversion;
    canTxData.uint8_T_info[1] = localB->DataTypeConversion4;
    canTxData.uint8_T_info[2] = localB->DataTypeConversion5;
    canTxData.uint8_T_info[3] = localB->DataTypeConversion6;
    canTxData.uint8_T_info[4] = localB->DataTypeConversion7;
    canTxData.uint8_T_info[5] = localB->DataTypeConversion8;
    canTxData.uint8_T_info[6] = localB->DataTypeConversion9;
    canTxData.uint8_T_info[7] = localB->DataTypeConversion10;

    /* send the data */
    CanTransmit(1, localB->DataTypeConversion1, 8, &canTxData.uint8_T_info[0]);
  }
}

/* Disable for function-call system: '<S10>/Measure EXecution time' */
void MeasureEXecutiontime_Disable(rtDW_MeasureEXecutiontime *localDW)
{
  /* Disable for Enabled SubSystem: '<S34>/DEBUG - Toggle digital pin A3' */
  if (localDW->DEBUGToggledigitalpinA3_MODE) {
    localDW->DEBUGToggledigitalpinA3_MODE = false;
  }

  /* End of Disable for SubSystem: '<S34>/DEBUG - Toggle digital pin A3' */
}

/* Start for function-call system: '<S10>/Measure EXecution time' */
void MeasureEXecutiontime_Start(void)
{
  /* Start for Enabled SubSystem: '<S34>/DEBUG - Toggle digital pin A3' */

  /* Start for M-S-Function: '<S114>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTF_PIN8, DIGOUT_CFG_OPENDRAIN);

  /* End of Start for SubSystem: '<S34>/DEBUG - Toggle digital pin A3' */
}

/* Output and update for function-call system: '<S10>/Measure EXecution time' */
void MeasureEXecutiontime(rtB_MeasureEXecutiontime *localB,
  rtDW_MeasureEXecutiontime *localDW)
{
  /* Outputs for Enabled SubSystem: '<S34>/DEBUG - Toggle digital pin A3' incorporates:
   *  EnablePort: '<S113>/Enable'
   */
  /* Constant: '<S34>/Constant1' */
  if (1.0 > 0.0) {
    if (!localDW->DEBUGToggledigitalpinA3_MODE) {
      localDW->DEBUGToggledigitalpinA3_MODE = true;
    }

    /* Switch: '<S113>/Switch' incorporates:
     *  DataStoreRead: '<S113>/Data Store Read'
     */
    if (localDW->A3_Pin_State) {
      /* DataStoreWrite: '<S113>/Data Store Write1' incorporates:
       *  Constant: '<S113>/Constant1'
       */
      localDW->A3_Pin_State = false;
    } else {
      /* DataStoreWrite: '<S113>/Data Store Write1' incorporates:
       *  Constant: '<S113>/Constant'
       */
      localDW->A3_Pin_State = true;
    }

    /* End of Switch: '<S113>/Switch' */
    /* DataStoreRead: '<S113>/Data Store Read1' */
    localB->DataStoreRead1 = localDW->A3_Pin_State;

    /* Update for M-S-Function: '<S114>/Level-2 M-file S-Function' */
    /* update digital output */
    if (localB->DataStoreRead1 == 0) {
      DigoutSet(DIGOUT_PORTF_PIN8, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTF_PIN8, DIGOUT_HIGH);
    }
  } else {
    if (localDW->DEBUGToggledigitalpinA3_MODE) {
      localDW->DEBUGToggledigitalpinA3_MODE = false;
    }
  }

  /* End of Constant: '<S34>/Constant1' */
  /* End of Outputs for SubSystem: '<S34>/DEBUG - Toggle digital pin A3' */
}

/*
 * Output and update for atomic system:
 *    '<S142>/Bit Shift3'
 *    '<S267>/Bit Shift3'
 *    '<S279>/Bit Shift3'
 *    '<S303>/Bit Shift3'
 *    '<S315>/Bit Shift3'
 *    '<S332>/Bit Shift3'
 *    '<S344>/Bit Shift3'
 *    '<S361>/Bit Shift3'
 *    '<S373>/Bit Shift3'
 *    '<S414>/Bit Shift3'
 *    '<S426>/Bit Shift3'
 */
void BitShift3(uint8_T rtu_u, rtB_BitShift3 *localB)
{
  /* MATLAB Function: '<S146>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S151>:1' */
  /* '<S151>:1:6' */
  localB->y = (uint8_T)(rtu_u << 1);
}

/*
 * Output and update for atomic system:
 *    '<S142>/Bit Shift4'
 *    '<S188>/Bit Shift'
 *    '<S194>/Bit Shift'
 *    '<S206>/Bit Shift'
 *    '<S212>/Bit Shift'
 *    '<S224>/Bit Shift'
 *    '<S230>/Bit Shift'
 *    '<S242>/Bit Shift'
 *    '<S248>/Bit Shift'
 *    '<S267>/Bit Shift4'
 *    ...
 */
void BitShift4(uint8_T rtu_u, rtB_BitShift4 *localB)
{
  /* MATLAB Function: '<S147>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S152>:1' */
  /* '<S152>:1:6' */
  localB->y = (uint8_T)(rtu_u << 4);
}

/*
 * Disable for enable system:
 *    '<S164>/Reception substasks'
 *    '<S165>/Reception substasks'
 *    '<S166>/Reception substasks'
 *    '<S167>/Reception substasks'
 *    '<S385>/Reception substasks'
 */
void Receptionsubstasks_Disable(rtB_Receptionsubstasks *localB,
  rtDW_Receptionsubstasks *localDW)
{
  /* Disable for Outport: '<S181>/Receive CAN1' */
  localB->AND = false;

  /* Disable for Outport: '<S181>/Receive CAN2' */
  localB->AND1 = false;
  localDW->Receptionsubstasks_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S164>/Reception substasks'
 *    '<S165>/Reception substasks'
 *    '<S166>/Reception substasks'
 *    '<S167>/Reception substasks'
 *    '<S385>/Reception substasks'
 */
void Receptionsubstasks(boolean_T rtu_Enable, real_T rtu_Time_Mark,
  rtB_Receptionsubstasks *localB, const rtC_Receptionsubstasks *localC,
  rtDW_Receptionsubstasks *localDW, uint16_T *rtd_Local_Ticks, msg_buffer_type
  *rtd_Msg_Rx_d, boolean_T *rtd_New_Msg_Ready_CAN1, boolean_T
  *rtd_New_Msg_Ready_CAN2, uint32_T *rtd_RxID_CAN1, uint32_T *rtd_RxID_CAN2,
  uint8_T *rtd_Rx_State_CAN1, uint8_T *rtd_Rx_State_CAN2, boolean_T
  *rtd_new_msg_Rx_l)
{
  boolean_T rtb_Equal2_k;

  /* Outputs for Enabled SubSystem: '<S164>/Reception substasks' incorporates:
   *  EnablePort: '<S181>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->Receptionsubstasks_MODE) {
      localDW->Receptionsubstasks_MODE = true;
    }

    /* Outputs for Enabled SubSystem: '<S181>/RX buffers update' incorporates:
     *  EnablePort: '<S183>/Enable'
     */
    /* RelationalOperator: '<S181>/Equal16' */
    if (*rtd_Local_Ticks == rtu_Time_Mark) {
      /* DataStoreWrite: '<S183>/Data Store Write11' */
      *rtd_RxID_CAN2 = localC->Cast13;

      /* DataStoreWrite: '<S183>/Data Store Write6' */
      *rtd_RxID_CAN1 = localC->Cast3;

      /* DataStoreWrite: '<S183>/Data Store Write9' */
      *rtd_New_Msg_Ready_CAN2 = localC->Cast14;

      /* DataStoreWrite: '<S183>/Data Store Write12' */
      *rtd_Rx_State_CAN2 = localC->Cast15;

      /* DataStoreWrite: '<S183>/Data Store Write2' */
      *rtd_New_Msg_Ready_CAN1 = localC->Cast5;

      /* DataStoreWrite: '<S183>/Data Store Write7' */
      *rtd_Rx_State_CAN1 = localC->Cast6;

      /* DataStoreWrite: '<S183>/Data Store Write' incorporates:
       *  Constant: '<S183>/RESET_Msg_Rx'
       */
      *rtd_Msg_Rx_d = HANcoder_E407_TTA_Template_rtZmsg_buffer_type;

      /* DataStoreWrite: '<S183>/Data Store Write3' incorporates:
       *  Constant: '<S183>/RESET_new_msg_Rx'
       */
      *rtd_new_msg_Rx_l = false;
    }

    /* End of RelationalOperator: '<S181>/Equal16' */
    /* End of Outputs for SubSystem: '<S181>/RX buffers update' */

    /* RelationalOperator: '<S181>/Equal2' */
    rtb_Equal2_k = (*rtd_Local_Ticks > rtu_Time_Mark);

    /* Logic: '<S181>/AND' incorporates:
     *  Logic: '<S181>/NOT'
     */
    localB->AND = (rtb_Equal2_k && (!*rtd_New_Msg_Ready_CAN1));

    /* Logic: '<S181>/AND1' incorporates:
     *  Logic: '<S181>/NOT1'
     */
    localB->AND1 = (rtb_Equal2_k && (!*rtd_New_Msg_Ready_CAN2));
  } else {
    if (localDW->Receptionsubstasks_MODE) {
      Receptionsubstasks_Disable(localB, localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S164>/Reception substasks' */
}

/*
 * Output and update for atomic system:
 *    '<S188>/Bit Shift1'
 *    '<S194>/Bit Shift1'
 *    '<S206>/Bit Shift1'
 *    '<S212>/Bit Shift1'
 *    '<S224>/Bit Shift1'
 *    '<S230>/Bit Shift1'
 *    '<S242>/Bit Shift1'
 *    '<S248>/Bit Shift1'
 *    '<S396>/Bit Shift1'
 *    '<S402>/Bit Shift1'
 */
void BitShift1(uint8_T rtu_u, rtB_BitShift1 *localB)
{
  /* MATLAB Function: '<S190>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S192>:1' */
  /* '<S192>:1:6' */
  localB->y = (uint8_T)(rtu_u << 7);
}

real_T rt_modd(real_T u0, real_T u1)
{
  real_T y;
  boolean_T yEq;
  real_T q;
  y = u0;
  if (u0 == 0.0) {
    y = 0.0;
  } else {
    if (u1 != 0.0) {
      y = fmod(u0, u1);
      yEq = (y == 0.0);
      if ((!yEq) && (u1 > floor(u1))) {
        q = fabs(u0 / u1);
        yEq = (fabs(q - floor(q + 0.5)) <= DBL_EPSILON * q);
      }

      if (yEq) {
        y = 0.0;
      } else {
        if ((u0 < 0.0) != (u1 < 0.0)) {
          y += u1;
        }
      }
    }
  }

  return y;
}

/*
 * Disable for enable system:
 *    '<S164>/Transmission subtasks'
 *    '<S385>/Transmission subtasks1'
 */
void Transmissionsubtasks_Disable(rtB_Transmissionsubtasks *localB,
  rtDW_Transmissionsubtasks *localDW)
{
  /* Disable for Enabled SubSystem: '<S182>/Check msg transmission CAN1' */
  if (localDW->CheckmsgtransmissionCAN1_MODE) {
    /* Disable for Outport: '<S184>/Send CAN1' */
    localB->Equal7_a = false;
    localDW->CheckmsgtransmissionCAN1_MODE = false;
  }

  /* End of Disable for SubSystem: '<S182>/Check msg transmission CAN1' */

  /* Disable for Enabled SubSystem: '<S182>/Check msg transmission CAN2' */
  if (localDW->CheckmsgtransmissionCAN2_MODE) {
    /* Disable for Outport: '<S185>/Send CAN2' */
    localB->Equal7 = false;
    localDW->CheckmsgtransmissionCAN2_MODE = false;
  }

  /* End of Disable for SubSystem: '<S182>/Check msg transmission CAN2' */

  /* Disable for Outport: '<S182>/Send CAN1' */
  localB->Equal7_a = false;

  /* Disable for Outport: '<S182>/Send CAN2' */
  localB->Equal7 = false;
  localDW->Transmissionsubtasks_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S164>/Transmission subtasks'
 *    '<S385>/Transmission subtasks1'
 */
void Transmissionsubtasks(boolean_T rtu_Enable, real_T rtu_Time_Mark,
  rtB_Transmissionsubtasks *localB, const rtC_Transmissionsubtasks *localC,
  rtDW_Transmissionsubtasks *localDW, real_T *rtd_Board_ID, uint16_T
  *rtd_Local_Ticks, msg_buffer_type *rtd_Msg_Tx_CAN1, msg_buffer_type
  *rtd_Msg_Tx_CAN2, uint32_T *rtd_TxID_CAN1, uint32_T *rtd_TxID_CAN2, real_T
  *rtd_Tx_msg_count_CAN1, real_T *rtd_Tx_msg_count_CAN2, uint8_T
  *rtd_basic_cycle_count)
{
  boolean_T rtb_Equal2_pm;
  real_T rtb_Minus2_h;
  uint8_T rtb_Cast4;
  uint8_T rtb_Cast1_o;
  uint8_T rtb_Cast18;
  uint8_T rtb_Cast9;

  /* Outputs for Enabled SubSystem: '<S164>/Transmission subtasks' incorporates:
   *  EnablePort: '<S182>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->Transmissionsubtasks_MODE) {
      localDW->Transmissionsubtasks_MODE = true;
    }

    /* RelationalOperator: '<S182>/Equal2' */
    rtb_Equal2_pm = (*rtd_Local_Ticks > rtu_Time_Mark);

    /* Outputs for Enabled SubSystem: '<S182>/Msg_Value_Data_Encoded' incorporates:
     *  EnablePort: '<S186>/Enable'
     */
    /* RelationalOperator: '<S182>/Equal16' incorporates:
     *  Constant: '<S186>/Constant'
     */
    if (*rtd_Local_Ticks == rtu_Time_Mark) {
      localB->Constant = ((uint8_T)0U);
    }

    /* End of RelationalOperator: '<S182>/Equal16' */
    /* End of Outputs for SubSystem: '<S182>/Msg_Value_Data_Encoded' */

    /* Outputs for Enabled SubSystem: '<S182>/Check msg transmission CAN1' incorporates:
     *  EnablePort: '<S184>/Enable'
     */
    /* Logic: '<S182>/AND' incorporates:
     *  Constant: '<S182>/Constant6'
     *  Constant: '<S184>/Constant22'
     *  Constant: '<S184>/Constant24'
     *  Constant: '<S184>/Constant8'
     *  Math: '<S184>/Mod'
     *  RelationalOperator: '<S182>/GreaterThan2'
     *  RelationalOperator: '<S184>/Equal4'
     *  Sum: '<S184>/Minus'
     */
    if (rtb_Equal2_pm && (*rtd_Tx_msg_count_CAN1 <= 7.0)) {
      if (!localDW->CheckmsgtransmissionCAN1_MODE) {
        localDW->CheckmsgtransmissionCAN1_MODE = true;
      }

      /* Sum: '<S184>/Minus2' incorporates:
       *  Constant: '<S184>/Constant'
       */
      rtb_Minus2_h = rtu_Time_Mark + COMM_Phase_init1;

      /* Outputs for Enabled SubSystem: '<S184>/TX buffer update CAN1' incorporates:
       *  EnablePort: '<S187>/Enable'
       */
      if (rt_modd(((real_T)*rtd_Local_Ticks + 1.0) - rtb_Minus2_h, COMM_Phase1) ==
          0.0) {
        /* DataTypeConversion: '<S187>/Cast4' */
        rtb_Cast4 = *rtd_basic_cycle_count;

        /* Outputs for Atomic SubSystem: '<S188>/Bit Shift1' */
        BitShift1(rtb_Cast4, &localB->BitShift1_a);

        /* End of Outputs for SubSystem: '<S188>/Bit Shift1' */

        /* DataTypeConversion: '<S187>/Cast1' */
        rtb_Cast1_o = (uint8_T)*rtd_Tx_msg_count_CAN1;

        /* Outputs for Atomic SubSystem: '<S188>/Bit Shift' */
        BitShift4(rtb_Cast1_o, &localB->BitShift_f);

        /* End of Outputs for SubSystem: '<S188>/Bit Shift' */

        /* DataStoreWrite: '<S187>/Data Store Write10' incorporates:
         *  DataTypeConversion: '<S187>/Cast16'
         *  Sum: '<S188>/Minus'
         */
        rtd_Msg_Tx_CAN1->Buffer_1 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
          localB->BitShift1_a.y + localB->BitShift_f.y) + (uint8_T)*rtd_Board_ID);
        rtd_Msg_Tx_CAN1->Buffer_2 = localB->Constant;
        rtd_Msg_Tx_CAN1->Buffer_3 = localB->Constant;
        rtd_Msg_Tx_CAN1->Buffer_4 = localB->Constant;
        rtd_Msg_Tx_CAN1->Buffer_5 = localB->Constant;
        rtd_Msg_Tx_CAN1->Buffer_6 = localB->Constant;
        rtd_Msg_Tx_CAN1->Buffer_7 = localB->Constant;
        rtd_Msg_Tx_CAN1->Buffer_8 = localB->Constant;

        /* DataStoreWrite: '<S187>/Data Store Write8' */
        *rtd_TxID_CAN1 = localC->Cast;
      }

      /* End of Outputs for SubSystem: '<S184>/TX buffer update CAN1' */

      /* RelationalOperator: '<S184>/Equal7' incorporates:
       *  Constant: '<S184>/Constant11'
       *  Constant: '<S184>/Constant22'
       *  Constant: '<S184>/Constant24'
       *  Constant: '<S184>/Constant27'
       *  Constant: '<S184>/Constant8'
       *  Math: '<S184>/Mod'
       *  Math: '<S184>/Mod1'
       *  RelationalOperator: '<S184>/Equal4'
       *  Sum: '<S184>/Minus'
       *  Sum: '<S184>/Minus1'
       */
      localB->Equal7_a = (rt_modd((real_T)*rtd_Local_Ticks - rtb_Minus2_h,
        COMM_Phase1) == 0.0);
    } else {
      if (localDW->CheckmsgtransmissionCAN1_MODE) {
        /* Disable for Outport: '<S184>/Send CAN1' */
        localB->Equal7_a = false;
        localDW->CheckmsgtransmissionCAN1_MODE = false;
      }
    }

    /* End of Logic: '<S182>/AND' */
    /* End of Outputs for SubSystem: '<S182>/Check msg transmission CAN1' */

    /* Outputs for Enabled SubSystem: '<S182>/Check msg transmission CAN2' incorporates:
     *  EnablePort: '<S185>/Enable'
     */
    /* Logic: '<S182>/AND1' incorporates:
     *  Constant: '<S182>/Constant7'
     *  Constant: '<S185>/Constant22'
     *  Constant: '<S185>/Constant24'
     *  Constant: '<S185>/Constant8'
     *  Math: '<S185>/Mod'
     *  RelationalOperator: '<S182>/GreaterThan3'
     *  RelationalOperator: '<S185>/Equal4'
     *  Sum: '<S185>/Minus'
     */
    if (rtb_Equal2_pm && (*rtd_Tx_msg_count_CAN2 <= 7.0)) {
      if (!localDW->CheckmsgtransmissionCAN2_MODE) {
        localDW->CheckmsgtransmissionCAN2_MODE = true;
      }

      /* Sum: '<S185>/Minus2' incorporates:
       *  Constant: '<S185>/Constant'
       */
      rtb_Minus2_h = rtu_Time_Mark + COMM_Phase_init2;

      /* Outputs for Enabled SubSystem: '<S185>/TX buffer update CAN2' incorporates:
       *  EnablePort: '<S193>/Enable'
       */
      if (rt_modd(((real_T)*rtd_Local_Ticks + 1.0) - rtb_Minus2_h, COMM_Phase2) ==
          0.0) {
        /* DataTypeConversion: '<S193>/Cast18' */
        rtb_Cast18 = *rtd_basic_cycle_count;

        /* Outputs for Atomic SubSystem: '<S194>/Bit Shift1' */
        BitShift1(rtb_Cast18, &localB->BitShift1_h);

        /* End of Outputs for SubSystem: '<S194>/Bit Shift1' */

        /* DataTypeConversion: '<S193>/Cast9' */
        rtb_Cast9 = (uint8_T)*rtd_Tx_msg_count_CAN2;

        /* Outputs for Atomic SubSystem: '<S194>/Bit Shift' */
        BitShift4(rtb_Cast9, &localB->BitShift_e);

        /* End of Outputs for SubSystem: '<S194>/Bit Shift' */

        /* DataStoreWrite: '<S193>/Data Store Write4' incorporates:
         *  DataTypeConversion: '<S193>/Cast17'
         *  Sum: '<S194>/Minus'
         */
        rtd_Msg_Tx_CAN2->Buffer_1 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
          localB->BitShift1_h.y + localB->BitShift_e.y) + (uint8_T)*rtd_Board_ID);
        rtd_Msg_Tx_CAN2->Buffer_2 = localB->Constant;
        rtd_Msg_Tx_CAN2->Buffer_3 = localB->Constant;
        rtd_Msg_Tx_CAN2->Buffer_4 = localB->Constant;
        rtd_Msg_Tx_CAN2->Buffer_5 = localB->Constant;
        rtd_Msg_Tx_CAN2->Buffer_6 = localB->Constant;
        rtd_Msg_Tx_CAN2->Buffer_7 = localB->Constant;
        rtd_Msg_Tx_CAN2->Buffer_8 = localB->Constant;

        /* DataStoreWrite: '<S193>/Data Store Write5' */
        *rtd_TxID_CAN2 = localC->Cast8;
      }

      /* End of Outputs for SubSystem: '<S185>/TX buffer update CAN2' */

      /* RelationalOperator: '<S185>/Equal7' incorporates:
       *  Constant: '<S185>/Constant11'
       *  Constant: '<S185>/Constant22'
       *  Constant: '<S185>/Constant24'
       *  Constant: '<S185>/Constant27'
       *  Constant: '<S185>/Constant8'
       *  Math: '<S185>/Mod'
       *  Math: '<S185>/Mod1'
       *  RelationalOperator: '<S185>/Equal4'
       *  Sum: '<S185>/Minus'
       *  Sum: '<S185>/Minus1'
       */
      localB->Equal7 = (rt_modd((real_T)*rtd_Local_Ticks - rtb_Minus2_h,
        COMM_Phase2) == 0.0);
    } else {
      if (localDW->CheckmsgtransmissionCAN2_MODE) {
        /* Disable for Outport: '<S185>/Send CAN2' */
        localB->Equal7 = false;
        localDW->CheckmsgtransmissionCAN2_MODE = false;
      }
    }

    /* End of Logic: '<S182>/AND1' */
    /* End of Outputs for SubSystem: '<S182>/Check msg transmission CAN2' */
  } else {
    if (localDW->Transmissionsubtasks_MODE) {
      Transmissionsubtasks_Disable(localB, localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S164>/Transmission subtasks' */
}

/*
 * Disable for enable system:
 *    '<S165>/Transmission subtasks'
 *    '<S166>/Transmission subtasks'
 *    '<S167>/Transmission subtasks'
 */
void Transmissionsubtasks_l_Disable(rtB_Transmissionsubtasks_f *localB,
  rtDW_Transmissionsubtasks_h *localDW)
{
  /* Disable for Enabled SubSystem: '<S200>/Check msg transmission CAN1' */
  if (localDW->CheckmsgtransmissionCAN1_MODE) {
    /* Disable for Outport: '<S202>/Send CAN1' */
    localB->Equal7_m = false;
    localDW->CheckmsgtransmissionCAN1_MODE = false;
  }

  /* End of Disable for SubSystem: '<S200>/Check msg transmission CAN1' */

  /* Disable for Enabled SubSystem: '<S200>/Check msg transmission CAN2' */
  if (localDW->CheckmsgtransmissionCAN2_MODE) {
    /* Disable for Outport: '<S203>/Send CAN2' */
    localB->Equal7 = false;
    localDW->CheckmsgtransmissionCAN2_MODE = false;
  }

  /* End of Disable for SubSystem: '<S200>/Check msg transmission CAN2' */

  /* Disable for Outport: '<S200>/Send CAN1' */
  localB->Equal7_m = false;

  /* Disable for Outport: '<S200>/Send CAN2' */
  localB->Equal7 = false;
  localDW->Transmissionsubtasks_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S165>/Transmission subtasks'
 *    '<S166>/Transmission subtasks'
 *    '<S167>/Transmission subtasks'
 */
void Transmissionsubtasks_p(boolean_T rtu_Enable, real_T rtu_Time_Mark,
  rtB_Transmissionsubtasks_f *localB, const rtC_Transmissionsubtasks_d *localC,
  rtDW_Transmissionsubtasks_h *localDW, real_T *rtd_Board_ID, uint16_T
  *rtd_Local_Ticks, msg_buffer_type *rtd_Msg_Tx_CAN1, msg_buffer_type
  *rtd_Msg_Tx_CAN2, uint8_T *rtd_Own_Vote, uint32_T *rtd_TxID_CAN1, uint32_T
  *rtd_TxID_CAN2, real_T *rtd_Tx_msg_count_CAN1, real_T *rtd_Tx_msg_count_CAN2,
  uint8_T *rtd_basic_cycle_count)
{
  boolean_T rtb_Equal2_hm;
  real_T rtb_Minus2_a;
  uint8_T rtb_Cast4;
  uint8_T rtb_Cast1_f;
  uint8_T rtb_Cast18;
  uint8_T rtb_Cast9;

  /* Outputs for Enabled SubSystem: '<S165>/Transmission subtasks' incorporates:
   *  EnablePort: '<S200>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->Transmissionsubtasks_MODE) {
      localDW->Transmissionsubtasks_MODE = true;
    }

    /* RelationalOperator: '<S200>/Equal2' */
    rtb_Equal2_hm = (*rtd_Local_Ticks > rtu_Time_Mark);

    /* Outputs for Enabled SubSystem: '<S200>/Msg_Value_Data_Encoded' incorporates:
     *  EnablePort: '<S204>/Enable'
     */
    /* RelationalOperator: '<S200>/Equal16' incorporates:
     *  Constant: '<S204>/Constant'
     */
    if (*rtd_Local_Ticks == rtu_Time_Mark) {
      localB->Constant = ((uint8_T)0U);

      /* DataStoreRead: '<S204>/Data Store Read' incorporates:
       *  Constant: '<S204>/Constant'
       */
      localB->DataStoreRead = *rtd_Own_Vote;
    }

    /* End of RelationalOperator: '<S200>/Equal16' */
    /* End of Outputs for SubSystem: '<S200>/Msg_Value_Data_Encoded' */

    /* Outputs for Enabled SubSystem: '<S200>/Check msg transmission CAN1' incorporates:
     *  EnablePort: '<S202>/Enable'
     */
    /* Logic: '<S200>/AND' incorporates:
     *  Constant: '<S200>/Constant6'
     *  Constant: '<S202>/Constant22'
     *  Constant: '<S202>/Constant24'
     *  Constant: '<S202>/Constant8'
     *  Math: '<S202>/Mod'
     *  RelationalOperator: '<S200>/GreaterThan2'
     *  RelationalOperator: '<S202>/Equal4'
     *  Sum: '<S202>/Minus'
     */
    if (rtb_Equal2_hm && (*rtd_Tx_msg_count_CAN1 <= 7.0)) {
      if (!localDW->CheckmsgtransmissionCAN1_MODE) {
        localDW->CheckmsgtransmissionCAN1_MODE = true;
      }

      /* Sum: '<S202>/Minus2' incorporates:
       *  Constant: '<S202>/Constant'
       */
      rtb_Minus2_a = rtu_Time_Mark + COMM_Phase_init1;

      /* Outputs for Enabled SubSystem: '<S202>/TX buffer update CAN1' incorporates:
       *  EnablePort: '<S205>/Enable'
       */
      if (rt_modd(((real_T)*rtd_Local_Ticks + 1.0) - rtb_Minus2_a, COMM_Phase1) ==
          0.0) {
        /* DataTypeConversion: '<S205>/Cast4' */
        rtb_Cast4 = *rtd_basic_cycle_count;

        /* Outputs for Atomic SubSystem: '<S206>/Bit Shift1' */
        BitShift1(rtb_Cast4, &localB->BitShift1_b);

        /* End of Outputs for SubSystem: '<S206>/Bit Shift1' */

        /* DataTypeConversion: '<S205>/Cast1' */
        rtb_Cast1_f = (uint8_T)*rtd_Tx_msg_count_CAN1;

        /* Outputs for Atomic SubSystem: '<S206>/Bit Shift' */
        BitShift4(rtb_Cast1_f, &localB->BitShift_o);

        /* End of Outputs for SubSystem: '<S206>/Bit Shift' */

        /* DataStoreWrite: '<S205>/Data Store Write10' incorporates:
         *  DataTypeConversion: '<S205>/Cast16'
         *  Sum: '<S206>/Minus'
         */
        rtd_Msg_Tx_CAN1->Buffer_1 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
          localB->BitShift1_b.y + localB->BitShift_o.y) + (uint8_T)*rtd_Board_ID);
        rtd_Msg_Tx_CAN1->Buffer_2 = localB->DataStoreRead;
        rtd_Msg_Tx_CAN1->Buffer_3 = localB->Constant;
        rtd_Msg_Tx_CAN1->Buffer_4 = localB->Constant;
        rtd_Msg_Tx_CAN1->Buffer_5 = localB->Constant;
        rtd_Msg_Tx_CAN1->Buffer_6 = localB->Constant;
        rtd_Msg_Tx_CAN1->Buffer_7 = localB->Constant;
        rtd_Msg_Tx_CAN1->Buffer_8 = localB->Constant;

        /* DataStoreWrite: '<S205>/Data Store Write8' */
        *rtd_TxID_CAN1 = localC->Cast;
      }

      /* End of Outputs for SubSystem: '<S202>/TX buffer update CAN1' */

      /* RelationalOperator: '<S202>/Equal7' incorporates:
       *  Constant: '<S202>/Constant11'
       *  Constant: '<S202>/Constant22'
       *  Constant: '<S202>/Constant24'
       *  Constant: '<S202>/Constant27'
       *  Constant: '<S202>/Constant8'
       *  Math: '<S202>/Mod'
       *  Math: '<S202>/Mod1'
       *  RelationalOperator: '<S202>/Equal4'
       *  Sum: '<S202>/Minus'
       *  Sum: '<S202>/Minus1'
       */
      localB->Equal7_m = (rt_modd((real_T)*rtd_Local_Ticks - rtb_Minus2_a,
        COMM_Phase1) == 0.0);
    } else {
      if (localDW->CheckmsgtransmissionCAN1_MODE) {
        /* Disable for Outport: '<S202>/Send CAN1' */
        localB->Equal7_m = false;
        localDW->CheckmsgtransmissionCAN1_MODE = false;
      }
    }

    /* End of Logic: '<S200>/AND' */
    /* End of Outputs for SubSystem: '<S200>/Check msg transmission CAN1' */

    /* Outputs for Enabled SubSystem: '<S200>/Check msg transmission CAN2' incorporates:
     *  EnablePort: '<S203>/Enable'
     */
    /* Logic: '<S200>/AND1' incorporates:
     *  Constant: '<S200>/Constant7'
     *  Constant: '<S203>/Constant22'
     *  Constant: '<S203>/Constant24'
     *  Constant: '<S203>/Constant8'
     *  Math: '<S203>/Mod'
     *  RelationalOperator: '<S200>/GreaterThan3'
     *  RelationalOperator: '<S203>/Equal4'
     *  Sum: '<S203>/Minus'
     */
    if (rtb_Equal2_hm && (*rtd_Tx_msg_count_CAN2 <= 7.0)) {
      if (!localDW->CheckmsgtransmissionCAN2_MODE) {
        localDW->CheckmsgtransmissionCAN2_MODE = true;
      }

      /* Sum: '<S203>/Minus2' incorporates:
       *  Constant: '<S203>/Constant'
       */
      rtb_Minus2_a = rtu_Time_Mark + COMM_Phase_init2;

      /* Outputs for Enabled SubSystem: '<S203>/TX buffer update CAN2' incorporates:
       *  EnablePort: '<S211>/Enable'
       */
      if (rt_modd(((real_T)*rtd_Local_Ticks + 1.0) - rtb_Minus2_a, COMM_Phase2) ==
          0.0) {
        /* DataTypeConversion: '<S211>/Cast18' */
        rtb_Cast18 = *rtd_basic_cycle_count;

        /* Outputs for Atomic SubSystem: '<S212>/Bit Shift1' */
        BitShift1(rtb_Cast18, &localB->BitShift1_f);

        /* End of Outputs for SubSystem: '<S212>/Bit Shift1' */

        /* DataTypeConversion: '<S211>/Cast9' */
        rtb_Cast9 = (uint8_T)*rtd_Tx_msg_count_CAN2;

        /* Outputs for Atomic SubSystem: '<S212>/Bit Shift' */
        BitShift4(rtb_Cast9, &localB->BitShift_i);

        /* End of Outputs for SubSystem: '<S212>/Bit Shift' */

        /* DataStoreWrite: '<S211>/Data Store Write4' incorporates:
         *  DataTypeConversion: '<S211>/Cast17'
         *  Sum: '<S212>/Minus'
         */
        rtd_Msg_Tx_CAN2->Buffer_1 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
          localB->BitShift1_f.y + localB->BitShift_i.y) + (uint8_T)*rtd_Board_ID);
        rtd_Msg_Tx_CAN2->Buffer_2 = localB->DataStoreRead;
        rtd_Msg_Tx_CAN2->Buffer_3 = localB->Constant;
        rtd_Msg_Tx_CAN2->Buffer_4 = localB->Constant;
        rtd_Msg_Tx_CAN2->Buffer_5 = localB->Constant;
        rtd_Msg_Tx_CAN2->Buffer_6 = localB->Constant;
        rtd_Msg_Tx_CAN2->Buffer_7 = localB->Constant;
        rtd_Msg_Tx_CAN2->Buffer_8 = localB->Constant;

        /* DataStoreWrite: '<S211>/Data Store Write5' */
        *rtd_TxID_CAN2 = localC->Cast8;
      }

      /* End of Outputs for SubSystem: '<S203>/TX buffer update CAN2' */

      /* RelationalOperator: '<S203>/Equal7' incorporates:
       *  Constant: '<S203>/Constant11'
       *  Constant: '<S203>/Constant22'
       *  Constant: '<S203>/Constant24'
       *  Constant: '<S203>/Constant27'
       *  Constant: '<S203>/Constant8'
       *  Math: '<S203>/Mod'
       *  Math: '<S203>/Mod1'
       *  RelationalOperator: '<S203>/Equal4'
       *  Sum: '<S203>/Minus'
       *  Sum: '<S203>/Minus1'
       */
      localB->Equal7 = (rt_modd((real_T)*rtd_Local_Ticks - rtb_Minus2_a,
        COMM_Phase2) == 0.0);
    } else {
      if (localDW->CheckmsgtransmissionCAN2_MODE) {
        /* Disable for Outport: '<S203>/Send CAN2' */
        localB->Equal7 = false;
        localDW->CheckmsgtransmissionCAN2_MODE = false;
      }
    }

    /* End of Logic: '<S200>/AND1' */
    /* End of Outputs for SubSystem: '<S200>/Check msg transmission CAN2' */
  } else {
    if (localDW->Transmissionsubtasks_MODE) {
      Transmissionsubtasks_l_Disable(localB, localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S165>/Transmission subtasks' */
}

/*
 * Output and update for atomic system:
 *    '<S267>/Bit Shift'
 *    '<S279>/Bit Shift'
 *    '<S303>/Bit Shift'
 *    '<S315>/Bit Shift'
 *    '<S332>/Bit Shift'
 *    '<S344>/Bit Shift'
 *    '<S361>/Bit Shift'
 *    '<S373>/Bit Shift'
 *    '<S414>/Bit Shift'
 *    '<S426>/Bit Shift'
 */
void BitShift(uint8_T rtu_u, rtB_BitShift *localB)
{
  /* MATLAB Function: '<S269>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S274>:1' */
  /* '<S274>:1:8' */
  localB->y = (uint8_T)((uint32_T)rtu_u >> 7);
}

/*
 * Output and update for atomic system:
 *    '<S267>/Bit Shift1'
 *    '<S279>/Bit Shift1'
 *    '<S303>/Bit Shift1'
 *    '<S315>/Bit Shift1'
 *    '<S332>/Bit Shift1'
 *    '<S344>/Bit Shift1'
 *    '<S361>/Bit Shift1'
 *    '<S373>/Bit Shift1'
 *    '<S414>/Bit Shift1'
 *    '<S426>/Bit Shift1'
 */
void BitShift1_m(uint8_T rtu_u, rtB_BitShift1_j *localB)
{
  /* MATLAB Function: '<S270>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S275>:1' */
  /* '<S275>:1:8' */
  localB->y = (uint8_T)((uint32_T)rtu_u >> 5);
}

/*
 * Output and update for atomic system:
 *    '<S267>/Bit Shift2'
 *    '<S279>/Bit Shift2'
 *    '<S303>/Bit Shift2'
 *    '<S315>/Bit Shift2'
 *    '<S332>/Bit Shift2'
 *    '<S344>/Bit Shift2'
 *    '<S361>/Bit Shift2'
 *    '<S373>/Bit Shift2'
 *    '<S414>/Bit Shift2'
 *    '<S426>/Bit Shift2'
 */
void BitShift2(uint8_T rtu_u, rtB_BitShift2 *localB)
{
  /* MATLAB Function: '<S271>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S276>:1' */
  /* '<S276>:1:8' */
  localB->y = (uint8_T)((uint32_T)rtu_u >> 4);
}

/*
 * Disable for enable system:
 *    '<S262>/Demux message CAN1 and check coherence'
 *    '<S409>/Demux message CAN1 and check coherence'
 */
void DemuxmessageCAN1andchec_Disable(rtB_DemuxmessageCAN1andcheckcoh *localB,
  rtDW_DemuxmessageCAN1andcheckco *localDW)
{
  /* Disable for Outport: '<S264>/CAN1_msg_coherent' */
  localB->AND = false;
  localDW->DemuxmessageCAN1andcheckcoher_f = false;
}

/*
 * Output and update for enable system:
 *    '<S262>/Demux message CAN1 and check coherence'
 *    '<S409>/Demux message CAN1 and check coherence'
 */
void DemuxmessageCAN1andcheckcoheren(boolean_T rtu_Enable, const msg_buffer_type
  *rtu_CAN1_Rx_msg, real_T rtu_expected_basic_cycle, real_T
  rtu_expected_board_id, rtB_DemuxmessageCAN1andcheckcoh *localB,
  rtDW_DemuxmessageCAN1andcheckco *localDW, real_T *rtd_msg_count_DEBUG)
{
  /* Outputs for Enabled SubSystem: '<S262>/Demux message CAN1 and check coherence' incorporates:
   *  EnablePort: '<S264>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->DemuxmessageCAN1andcheckcoher_f) {
      localDW->DemuxmessageCAN1andcheckcoher_f = true;
    }

    /* Outputs for Atomic SubSystem: '<S267>/Bit Shift3' */
    BitShift3(rtu_CAN1_Rx_msg->Buffer_1, &localB->BitShift3_f);

    /* End of Outputs for SubSystem: '<S267>/Bit Shift3' */

    /* Outputs for Atomic SubSystem: '<S267>/Bit Shift1' */
    BitShift1_m(localB->BitShift3_f.y, &localB->BitShift1_mg);

    /* End of Outputs for SubSystem: '<S267>/Bit Shift1' */

    /* Switch: '<S268>/Switch' incorporates:
     *  Constant: '<S268>/Constant'
     *  Constant: '<S268>/Constant1'
     *  RelationalOperator: '<S268>/GreaterThan'
     *  Sum: '<S268>/Plus'
     */
    if (localB->BitShift1_mg.y > 1.0) {
      *rtd_msg_count_DEBUG += 1.0;
    }

    /* End of Switch: '<S268>/Switch' */

    /* Outputs for Atomic SubSystem: '<S267>/Bit Shift' */
    BitShift(rtu_CAN1_Rx_msg->Buffer_1, &localB->BitShift_d);

    /* End of Outputs for SubSystem: '<S267>/Bit Shift' */

    /* Outputs for Atomic SubSystem: '<S267>/Bit Shift4' */
    BitShift4(rtu_CAN1_Rx_msg->Buffer_1, &localB->BitShift4_c);

    /* End of Outputs for SubSystem: '<S267>/Bit Shift4' */

    /* Outputs for Atomic SubSystem: '<S267>/Bit Shift2' */
    BitShift2(localB->BitShift4_c.y, &localB->BitShift2_n);

    /* End of Outputs for SubSystem: '<S267>/Bit Shift2' */

    /* Logic: '<S264>/AND' incorporates:
     *  RelationalOperator: '<S264>/Equal'
     *  RelationalOperator: '<S264>/Equal1'
     */
    localB->AND = ((localB->BitShift_d.y == rtu_expected_basic_cycle) &&
                   (localB->BitShift2_n.y == rtu_expected_board_id));

    /* SignalConversion: '<S264>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
    localB->Buffer_2 = rtu_CAN1_Rx_msg->Buffer_2;

    /* SignalConversion: '<S264>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
    localB->Buffer_3 = rtu_CAN1_Rx_msg->Buffer_3;

    /* SignalConversion: '<S264>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
    localB->Buffer_4 = rtu_CAN1_Rx_msg->Buffer_4;

    /* SignalConversion: '<S264>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
    localB->Buffer_5 = rtu_CAN1_Rx_msg->Buffer_5;

    /* SignalConversion: '<S264>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
    localB->Buffer_6 = rtu_CAN1_Rx_msg->Buffer_6;

    /* SignalConversion: '<S264>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
    localB->Buffer_7 = rtu_CAN1_Rx_msg->Buffer_7;

    /* SignalConversion: '<S264>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
    localB->Buffer_8 = rtu_CAN1_Rx_msg->Buffer_8;

    /* Constant: '<S264>/Constant' */
    localB->Constant = ((uint8_T)0U);
  } else {
    if (localDW->DemuxmessageCAN1andcheckcoher_f) {
      DemuxmessageCAN1andchec_Disable(localB, localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S262>/Demux message CAN1 and check coherence' */
}

/*
 * Disable for enable system:
 *    '<S262>/Demux message CAN1 and check coherence1'
 *    '<S409>/Demux message CAN1 and check coherence1'
 */
void DemuxmessageCAN1andch_l_Disable(rtB_DemuxmessageCAN1andcheckc_k *localB,
  rtDW_DemuxmessageCAN1andcheck_o *localDW)
{
  /* Disable for Outport: '<S265>/CAN2_msg_coherent' */
  localB->AND = false;
  localDW->DemuxmessageCAN1andcheckcoher_m = false;
}

/*
 * Output and update for enable system:
 *    '<S262>/Demux message CAN1 and check coherence1'
 *    '<S409>/Demux message CAN1 and check coherence1'
 */
void DemuxmessageCAN1andcheckcoher_p(boolean_T rtu_Enable, const msg_buffer_type
  *rtu_CAN2_Rx_msg, real_T rtu_expected_basic_cycle, real_T
  rtu_expected_board_id, rtB_DemuxmessageCAN1andcheckc_k *localB,
  rtDW_DemuxmessageCAN1andcheck_o *localDW, real_T *rtd_msg_count_DEBUG)
{
  /* Outputs for Enabled SubSystem: '<S262>/Demux message CAN1 and check coherence1' incorporates:
   *  EnablePort: '<S265>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->DemuxmessageCAN1andcheckcoher_m) {
      localDW->DemuxmessageCAN1andcheckcoher_m = true;
    }

    /* Outputs for Atomic SubSystem: '<S279>/Bit Shift3' */
    BitShift3(rtu_CAN2_Rx_msg->Buffer_1, &localB->BitShift3_p);

    /* End of Outputs for SubSystem: '<S279>/Bit Shift3' */

    /* Outputs for Atomic SubSystem: '<S279>/Bit Shift1' */
    BitShift1_m(localB->BitShift3_p.y, &localB->BitShift1_e);

    /* End of Outputs for SubSystem: '<S279>/Bit Shift1' */

    /* Switch: '<S280>/Switch' incorporates:
     *  Constant: '<S280>/Constant'
     *  Constant: '<S280>/Constant1'
     *  RelationalOperator: '<S280>/GreaterThan'
     *  Sum: '<S280>/Plus'
     */
    if (localB->BitShift1_e.y > 1.0) {
      *rtd_msg_count_DEBUG += 1.0;
    }

    /* End of Switch: '<S280>/Switch' */

    /* Outputs for Atomic SubSystem: '<S279>/Bit Shift' */
    BitShift(rtu_CAN2_Rx_msg->Buffer_1, &localB->BitShift_h);

    /* End of Outputs for SubSystem: '<S279>/Bit Shift' */

    /* Outputs for Atomic SubSystem: '<S279>/Bit Shift4' */
    BitShift4(rtu_CAN2_Rx_msg->Buffer_1, &localB->BitShift4_h);

    /* End of Outputs for SubSystem: '<S279>/Bit Shift4' */

    /* Outputs for Atomic SubSystem: '<S279>/Bit Shift2' */
    BitShift2(localB->BitShift4_h.y, &localB->BitShift2_d);

    /* End of Outputs for SubSystem: '<S279>/Bit Shift2' */

    /* Logic: '<S265>/AND' incorporates:
     *  RelationalOperator: '<S265>/Equal'
     *  RelationalOperator: '<S265>/Equal1'
     */
    localB->AND = ((localB->BitShift_h.y == rtu_expected_basic_cycle) &&
                   (localB->BitShift2_d.y == rtu_expected_board_id));

    /* SignalConversion: '<S265>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
    localB->Buffer_2 = rtu_CAN2_Rx_msg->Buffer_2;

    /* SignalConversion: '<S265>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
    localB->Buffer_3 = rtu_CAN2_Rx_msg->Buffer_3;

    /* SignalConversion: '<S265>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
    localB->Buffer_4 = rtu_CAN2_Rx_msg->Buffer_4;

    /* SignalConversion: '<S265>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
    localB->Buffer_5 = rtu_CAN2_Rx_msg->Buffer_5;

    /* SignalConversion: '<S265>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
    localB->Buffer_6 = rtu_CAN2_Rx_msg->Buffer_6;

    /* SignalConversion: '<S265>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
    localB->Buffer_7 = rtu_CAN2_Rx_msg->Buffer_7;

    /* SignalConversion: '<S265>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
    localB->Buffer_8 = rtu_CAN2_Rx_msg->Buffer_8;

    /* Constant: '<S265>/Constant' */
    localB->Constant = ((uint8_T)0U);
  } else {
    if (localDW->DemuxmessageCAN1andcheckcoher_m) {
      DemuxmessageCAN1andch_l_Disable(localB, localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S262>/Demux message CAN1 and check coherence1' */
}

/*
 * Output and update for enable system:
 *    '<S172>/Reset Tx msg counter'
 *    '<S176>/Reset Tx msg counter'
 *    '<S178>/Reset Tx msg counter'
 *    '<S180>/Reset Tx msg counter'
 *    '<S387>/Reset Tx msg counter'
 */
void ResetTxmsgcounter(boolean_T rtu_Enable, real_T *rtd_Tx_msg_count_CAN1,
  real_T *rtd_Tx_msg_count_CAN2)
{
  /* Outputs for Enabled SubSystem: '<S172>/Reset Tx msg counter' incorporates:
   *  EnablePort: '<S263>/Enable'
   */
  if (rtu_Enable) {
    /* DataStoreWrite: '<S263>/Data Store Write2' incorporates:
     *  Constant: '<S263>/Constant1'
     */
    *rtd_Tx_msg_count_CAN2 = 1.0;

    /* DataStoreWrite: '<S263>/Data Store Write1' incorporates:
     *  Constant: '<S263>/Constant6'
     */
    *rtd_Tx_msg_count_CAN1 = 1.0;
  }

  /* End of Outputs for SubSystem: '<S172>/Reset Tx msg counter' */
}

/*
 * Output and update for enable system:
 *    '<S292>/Desync_Negative'
 *    '<S439>/Desync_Negative'
 */
void Desync_Negative(boolean_T rtu_Enable, real_T rtu_Current_Local_Time, real_T
                     *rtd_Desync_Ticks, uint16_T *rtd_Local_Ticks)
{
  /* Outputs for Enabled SubSystem: '<S292>/Desync_Negative' incorporates:
   *  EnablePort: '<S293>/Enable'
   */
  if (rtu_Enable) {
    /* DataTypeConversion: '<S293>/Cast' incorporates:
     *  Sum: '<S293>/Minus'
     */
    *rtd_Local_Ticks = (uint16_T)(rtu_Current_Local_Time + *rtd_Desync_Ticks);
  }

  /* End of Outputs for SubSystem: '<S292>/Desync_Negative' */
}

/*
 * Disable for enable system:
 *    '<S176>/Process_Messages1'
 *    '<S178>/Process_Messages'
 *    '<S180>/Process_Messages'
 */
void Process_Messages1_Disable(rtB_Process_Messages1 *localB,
  rtDW_Process_Messages1 *localDW)
{
  /* Disable for Enabled SubSystem: '<S299>/Demux message CAN1 and check coherence' */
  if (localDW->DemuxmessageCAN1andcheckcoher_d) {
    /* Disable for Outport: '<S301>/CAN1_msg_coherent' */
    localB->Equal_h = false;
    localDW->DemuxmessageCAN1andcheckcoher_d = false;
  }

  /* End of Disable for SubSystem: '<S299>/Demux message CAN1 and check coherence' */

  /* Disable for Enabled SubSystem: '<S299>/Demux message CAN1 and check coherence1' */
  if (localDW->DemuxmessageCAN1andcheckcoher_g) {
    /* Disable for Outport: '<S302>/CAN2_msg_coherent' */
    localB->Equal = false;
    localDW->DemuxmessageCAN1andcheckcoher_g = false;
  }

  /* End of Disable for SubSystem: '<S299>/Demux message CAN1 and check coherence1' */
  localDW->Process_Messages1_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S176>/Process_Messages1'
 *    '<S178>/Process_Messages'
 *    '<S180>/Process_Messages'
 */
void Process_Messages1(boolean_T rtu_Enable, boolean_T rtu_new_CAN1_msg,
  boolean_T rtu_new_CAN2_msg, const msg_buffer_type *rtu_Rx_msg_CAN1, const
  msg_buffer_type *rtu_Rx_Msg_CAN2, real_T rtu_expected_board_id,
  rtB_Process_Messages1 *localB, rtDW_Process_Messages1 *localDW,
  msg_buffer_type *rtd_Msg_Rx_d, boolean_T *rtd_Toggle_Pin_A0, real_T
  *rtd_msg_count_DEBUG, boolean_T *rtd_new_msg_Rx_l)
{
  /* Outputs for Enabled SubSystem: '<S176>/Process_Messages1' incorporates:
   *  EnablePort: '<S299>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->Process_Messages1_MODE) {
      localDW->Process_Messages1_MODE = true;
    }

    /* Outputs for Enabled SubSystem: '<S299>/Demux message CAN1 and check coherence' incorporates:
     *  EnablePort: '<S301>/Enable'
     */
    if (rtu_new_CAN1_msg) {
      if (!localDW->DemuxmessageCAN1andcheckcoher_d) {
        localDW->DemuxmessageCAN1andcheckcoher_d = true;
      }

      /* Outputs for Atomic SubSystem: '<S303>/Bit Shift3' */
      BitShift3(rtu_Rx_msg_CAN1->Buffer_1, &localB->BitShift3_a);

      /* End of Outputs for SubSystem: '<S303>/Bit Shift3' */

      /* Outputs for Atomic SubSystem: '<S303>/Bit Shift1' */
      BitShift1_m(localB->BitShift3_a.y, &localB->BitShift1_i);

      /* End of Outputs for SubSystem: '<S303>/Bit Shift1' */

      /* Switch: '<S304>/Switch' incorporates:
       *  Constant: '<S304>/Constant1'
       *  RelationalOperator: '<S304>/GreaterThan'
       */
      if (localB->BitShift1_i.y > 1.0) {
        /* DataStoreWrite: '<S304>/Data Store Write' incorporates:
         *  Constant: '<S304>/Constant'
         *  Sum: '<S304>/Plus'
         */
        *rtd_msg_count_DEBUG += 1.0;
      }

      /* End of Switch: '<S304>/Switch' */

      /* SignalConversion: '<S301>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
      localB->Buffer_2_i = rtu_Rx_msg_CAN1->Buffer_2;

      /* SignalConversion: '<S301>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
      localB->Buffer_3_p = rtu_Rx_msg_CAN1->Buffer_3;

      /* SignalConversion: '<S301>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
      localB->Buffer_4_k = rtu_Rx_msg_CAN1->Buffer_4;

      /* SignalConversion: '<S301>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
      localB->Buffer_5_b = rtu_Rx_msg_CAN1->Buffer_5;

      /* SignalConversion: '<S301>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
      localB->Buffer_6_d = rtu_Rx_msg_CAN1->Buffer_6;

      /* SignalConversion: '<S301>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
      localB->Buffer_7_h = rtu_Rx_msg_CAN1->Buffer_7;

      /* SignalConversion: '<S301>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
      localB->Buffer_8_p = rtu_Rx_msg_CAN1->Buffer_8;

      /* Constant: '<S301>/Constant' */
      localB->Constant_p = ((uint8_T)0U);

      /* Outputs for Atomic SubSystem: '<S303>/Bit Shift4' */
      BitShift4(rtu_Rx_msg_CAN1->Buffer_1, &localB->BitShift4_i);

      /* End of Outputs for SubSystem: '<S303>/Bit Shift4' */

      /* Outputs for Atomic SubSystem: '<S303>/Bit Shift2' */
      BitShift2(localB->BitShift4_i.y, &localB->BitShift2_e);

      /* End of Outputs for SubSystem: '<S303>/Bit Shift2' */

      /* RelationalOperator: '<S301>/Equal' */
      localB->Equal_h = (localB->BitShift2_e.y == rtu_expected_board_id);

      /* Outputs for Atomic SubSystem: '<S303>/Bit Shift' */
      BitShift(rtu_Rx_msg_CAN1->Buffer_1, &localB->BitShift_b);

      /* End of Outputs for SubSystem: '<S303>/Bit Shift' */
    } else {
      if (localDW->DemuxmessageCAN1andcheckcoher_d) {
        /* Disable for Outport: '<S301>/CAN1_msg_coherent' */
        localB->Equal_h = false;
        localDW->DemuxmessageCAN1andcheckcoher_d = false;
      }
    }

    /* End of Outputs for SubSystem: '<S299>/Demux message CAN1 and check coherence' */

    /* Outputs for Enabled SubSystem: '<S299>/Demux message CAN1 and check coherence1' incorporates:
     *  EnablePort: '<S302>/Enable'
     */
    if (rtu_new_CAN2_msg) {
      if (!localDW->DemuxmessageCAN1andcheckcoher_g) {
        localDW->DemuxmessageCAN1andcheckcoher_g = true;
      }

      /* Outputs for Atomic SubSystem: '<S315>/Bit Shift3' */
      BitShift3(rtu_Rx_Msg_CAN2->Buffer_1, &localB->BitShift3_e);

      /* End of Outputs for SubSystem: '<S315>/Bit Shift3' */

      /* Outputs for Atomic SubSystem: '<S315>/Bit Shift1' */
      BitShift1_m(localB->BitShift3_e.y, &localB->BitShift1_g);

      /* End of Outputs for SubSystem: '<S315>/Bit Shift1' */

      /* Switch: '<S316>/Switch' incorporates:
       *  Constant: '<S316>/Constant1'
       *  RelationalOperator: '<S316>/GreaterThan'
       */
      if (localB->BitShift1_g.y > 1.0) {
        /* DataStoreWrite: '<S316>/Data Store Write' incorporates:
         *  Constant: '<S316>/Constant'
         *  Sum: '<S316>/Plus'
         */
        *rtd_msg_count_DEBUG += 1.0;
      }

      /* End of Switch: '<S316>/Switch' */

      /* SignalConversion: '<S302>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
      localB->Buffer_2 = rtu_Rx_Msg_CAN2->Buffer_2;

      /* SignalConversion: '<S302>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
      localB->Buffer_3 = rtu_Rx_Msg_CAN2->Buffer_3;

      /* SignalConversion: '<S302>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
      localB->Buffer_4 = rtu_Rx_Msg_CAN2->Buffer_4;

      /* SignalConversion: '<S302>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
      localB->Buffer_5 = rtu_Rx_Msg_CAN2->Buffer_5;

      /* SignalConversion: '<S302>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
      localB->Buffer_6 = rtu_Rx_Msg_CAN2->Buffer_6;

      /* SignalConversion: '<S302>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
      localB->Buffer_7 = rtu_Rx_Msg_CAN2->Buffer_7;

      /* SignalConversion: '<S302>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
      localB->Buffer_8 = rtu_Rx_Msg_CAN2->Buffer_8;

      /* Constant: '<S302>/Constant' */
      localB->Constant = ((uint8_T)0U);

      /* Outputs for Atomic SubSystem: '<S315>/Bit Shift4' */
      BitShift4(rtu_Rx_Msg_CAN2->Buffer_1, &localB->BitShift4_k);

      /* End of Outputs for SubSystem: '<S315>/Bit Shift4' */

      /* Outputs for Atomic SubSystem: '<S315>/Bit Shift2' */
      BitShift2(localB->BitShift4_k.y, &localB->BitShift2_b);

      /* End of Outputs for SubSystem: '<S315>/Bit Shift2' */

      /* RelationalOperator: '<S302>/Equal' */
      localB->Equal = (localB->BitShift2_b.y == rtu_expected_board_id);

      /* Outputs for Atomic SubSystem: '<S315>/Bit Shift' */
      BitShift(rtu_Rx_Msg_CAN2->Buffer_1, &localB->BitShift_h);

      /* End of Outputs for SubSystem: '<S315>/Bit Shift' */
    } else {
      if (localDW->DemuxmessageCAN1andcheckcoher_g) {
        /* Disable for Outport: '<S302>/CAN2_msg_coherent' */
        localB->Equal = false;
        localDW->DemuxmessageCAN1andcheckcoher_g = false;
      }
    }

    /* End of Outputs for SubSystem: '<S299>/Demux message CAN1 and check coherence1' */

    /* Switch: '<S299>/Switch' incorporates:
     *  DataStoreWrite: '<S299>/Data Store Write'
     */
    if (localB->Equal_h) {
      rtd_Msg_Rx_d->Buffer_1 = localB->Constant_p;
      rtd_Msg_Rx_d->Buffer_2 = localB->Buffer_2_i;
      rtd_Msg_Rx_d->Buffer_3 = localB->Buffer_3_p;
      rtd_Msg_Rx_d->Buffer_4 = localB->Buffer_4_k;
      rtd_Msg_Rx_d->Buffer_5 = localB->Buffer_5_b;
      rtd_Msg_Rx_d->Buffer_6 = localB->Buffer_6_d;
      rtd_Msg_Rx_d->Buffer_7 = localB->Buffer_7_h;
      rtd_Msg_Rx_d->Buffer_8 = localB->Buffer_8_p;
    } else {
      rtd_Msg_Rx_d->Buffer_1 = localB->Constant;
      rtd_Msg_Rx_d->Buffer_2 = localB->Buffer_2;
      rtd_Msg_Rx_d->Buffer_3 = localB->Buffer_3;
      rtd_Msg_Rx_d->Buffer_4 = localB->Buffer_4;
      rtd_Msg_Rx_d->Buffer_5 = localB->Buffer_5;
      rtd_Msg_Rx_d->Buffer_6 = localB->Buffer_6;
      rtd_Msg_Rx_d->Buffer_7 = localB->Buffer_7;
      rtd_Msg_Rx_d->Buffer_8 = localB->Buffer_8;
    }

    /* End of Switch: '<S299>/Switch' */

    /* Logic: '<S299>/OR' */
    *rtd_new_msg_Rx_l = (localB->Equal_h || localB->Equal);

    /* DataStoreWrite: '<S299>/Data Store Write3' incorporates:
     *  Constant: '<S299>/Constant2'
     */
    *rtd_Toggle_Pin_A0 = true;
  } else {
    if (localDW->Process_Messages1_MODE) {
      Process_Messages1_Disable(localB, localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S176>/Process_Messages1' */
}

real_T rt_roundd(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

/* System initialize for function-call system: '<S10>/TTA System' */
void TTASystem_Init(rtB_TTASystem *localB)
{
  /* SystemInitialize for Enabled SubSystem: '<S36>/Initialization' */
  /* SystemInitialize for Enabled SubSystem: '<S126>/RoleID and Global Time init' */
  /* SystemInitialize for Outport: '<S139>/Finish Initialization' */
  localB->SET = 0.0;

  /* End of SystemInitialize for SubSystem: '<S126>/RoleID and Global Time init' */
  /* End of SystemInitialize for SubSystem: '<S36>/Initialization' */
}

/* System reset for function-call system: '<S10>/TTA System' */
void TTASystem_Reset(rtDW_TTASystem *localDW)
{
  /* SystemReset for Chart: '<S36>/Chart' */
  localDW->bitsForTID1.is_active_c4_HANcoder_E407_TTA_ = 0U;

  /* SystemReset for Chart: '<S36>/Chart1' */
  localDW->bitsForTID1.is_active_c5_HANcoder_E407_TTA_ = 0U;

  /* SystemReset for Chart: '<S36>/Chart2' */
  localDW->bitsForTID1.is_active_c6_HANcoder_E407_TTA_ = 0U;

  /* SystemReset for Chart: '<S36>/Chart3' */
  localDW->bitsForTID1.is_active_c7_HANcoder_E407_TTA_ = 0U;

  /* SystemReset for Chart: '<S36>/Chart4' */
  localDW->bitsForTID1.is_active_c8_HANcoder_E407_TTA_ = 0U;
}

/* Disable for function-call system: '<S10>/TTA System' */
void TTASystem_Disable(rtB_TTASystem *localB, rtDW_TTASystem *localDW)
{
  /* Disable for Enabled SubSystem: '<S36>/DEBUG - Toggle digital pin A2' */
  if (localDW->DEBUGToggledigitalpinA2_MODE) {
    localDW->DEBUGToggledigitalpinA2_MODE = false;
  }

  /* End of Disable for SubSystem: '<S36>/DEBUG - Toggle digital pin A2' */

  /* Disable for Enabled SubSystem: '<S36>/Initialization' */
  if (localDW->Initialization_MODE) {
    /* Disable for Enabled SubSystem: '<S126>/RoleID and Global Time init' */
    if (localDW->RoleIDandGlobalTimeinit_MODE) {
      /* Disable for Outport: '<S139>/Finish Initialization' */
      localB->SET = 0.0;
      localDW->RoleIDandGlobalTimeinit_MODE = false;
    }

    /* End of Disable for SubSystem: '<S126>/RoleID and Global Time init' */
    localDW->Initialization_MODE = false;
  }

  /* End of Disable for SubSystem: '<S36>/Initialization' */

  /* Disable for Enabled SubSystem: '<S36>/Matrix Cycle Manager' */
  if (localDW->MatrixCycleManager_MODE) {
    /* Disable for Enabled SubSystem: '<S132>/Controller Matrix Cycle' */
    if (localDW->ControllerMatrixCycle_MODE) {
      /* Disable for Enabled SubSystem: '<S159>/controller basic cycle 0' */
      if (localDW->controllerbasiccycle0_MODE) {
        /* Disable for Enabled SubSystem: '<S161>/COMP Task - Sync bc0 check' */
        if (localDW->COMPTaskSyncbc0check_MODE) {
          /* Disable for Enabled SubSystem: '<S172>/Process_Messages' */
          if (localDW->Process_Messages_MODE_e) {
            /* Disable for Enabled SubSystem: '<S262>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_g.DemuxmessageCAN1andcheckcoher_f)
            {
              DemuxmessageCAN1andchec_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_g,
                 &localDW->DemuxmessageCAN1andcheckcoher_g);
            }

            /* End of Disable for SubSystem: '<S262>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S262>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_p3.DemuxmessageCAN1andcheckcoher_m)
            {
              DemuxmessageCAN1andch_l_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_p3,
                 &localDW->DemuxmessageCAN1andcheckcohe_p3);
            }

            /* End of Disable for SubSystem: '<S262>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_e = false;
          }

          /* End of Disable for SubSystem: '<S172>/Process_Messages' */
          localDW->COMPTaskSyncbc0check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S161>/COMP Task - Sync bc0 check' */

        /* Disable for Enabled SubSystem: '<S161>/COMP Task - Vote1 check' */
        if (localDW->COMPTaskVote1check_MODE) {
          /* Disable for Enabled SubSystem: '<S176>/Process_Messages1' */
          if (localDW->Process_Messages1_c.Process_Messages1_MODE) {
            Process_Messages1_Disable(&localB->Process_Messages1_c,
              &localDW->Process_Messages1_c);
          }

          /* End of Disable for SubSystem: '<S176>/Process_Messages1' */
          localDW->COMPTaskVote1check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S161>/COMP Task - Vote1 check' */

        /* Disable for Enabled SubSystem: '<S161>/COMP Task - Vote2 check' */
        if (localDW->COMPTaskVote2check_MODE) {
          /* Disable for Enabled SubSystem: '<S178>/Process_Messages' */
          if (localDW->Process_Messages_g.Process_Messages1_MODE) {
            Process_Messages1_Disable(&localB->Process_Messages_g,
              &localDW->Process_Messages_g);
          }

          /* End of Disable for SubSystem: '<S178>/Process_Messages' */
          localDW->COMPTaskVote2check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S161>/COMP Task - Vote2 check' */

        /* Disable for Enabled SubSystem: '<S161>/COMP Task - Vote3 check' */
        if (localDW->COMPTaskVote3check_MODE) {
          /* Disable for Enabled SubSystem: '<S180>/Process_Messages' */
          if (localDW->Process_Messages_gc.Process_Messages1_MODE) {
            Process_Messages1_Disable(&localB->Process_Messages_gc,
              &localDW->Process_Messages_gc);
          }

          /* End of Disable for SubSystem: '<S180>/Process_Messages' */
          localDW->COMPTaskVote3check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S161>/COMP Task - Vote3 check' */

        /* Disable for Enabled SubSystem: '<S161>/COMM Task - Sync bc 0' */
        if (localDW->COMMTaskSyncbc0_MODE) {
          /* Disable for Enabled SubSystem: '<S164>/Reception substasks' */
          if (localDW->Receptionsubstasks_h.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_h,
              &localDW->Receptionsubstasks_h);
          }

          /* End of Disable for SubSystem: '<S164>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S164>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_l.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_Disable(&localB->Transmissionsubtasks_l,
              &localDW->Transmissionsubtasks_l);
          }

          /* End of Disable for SubSystem: '<S164>/Transmission subtasks' */

          /* Disable for Outport: '<S164>/Send CAN1' */
          localB->Transmissionsubtasks_l.Equal7_a = false;

          /* Disable for Outport: '<S164>/Receive CAN1' */
          localB->Receptionsubstasks_h.AND = false;

          /* Disable for Outport: '<S164>/Send CAN2' */
          localB->Transmissionsubtasks_l.Equal7 = false;

          /* Disable for Outport: '<S164>/Receive CAN2' */
          localB->Receptionsubstasks_h.AND1 = false;
          localDW->COMMTaskSyncbc0_MODE = false;
        }

        /* End of Disable for SubSystem: '<S161>/COMM Task - Sync bc 0' */

        /* Disable for Enabled SubSystem: '<S161>/COMM Task - Vote1' */
        if (localDW->COMMTaskVote1_MODE) {
          /* Disable for Enabled SubSystem: '<S165>/Reception substasks' */
          if (localDW->Receptionsubstasks_k.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_k,
              &localDW->Receptionsubstasks_k);
          }

          /* End of Disable for SubSystem: '<S165>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S165>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_pw.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_pw,
              &localDW->Transmissionsubtasks_pw);
          }

          /* End of Disable for SubSystem: '<S165>/Transmission subtasks' */

          /* Disable for Outport: '<S165>/Send CAN1' */
          localB->Transmissionsubtasks_pw.Equal7_m = false;

          /* Disable for Outport: '<S165>/Receive CAN1' */
          localB->Receptionsubstasks_k.AND = false;

          /* Disable for Outport: '<S165>/Send CAN2' */
          localB->Transmissionsubtasks_pw.Equal7 = false;

          /* Disable for Outport: '<S165>/Receive CAN2' */
          localB->Receptionsubstasks_k.AND1 = false;
          localDW->COMMTaskVote1_MODE = false;
        }

        /* End of Disable for SubSystem: '<S161>/COMM Task - Vote1' */

        /* Disable for Enabled SubSystem: '<S161>/COMM Task - Vote2' */
        if (localDW->COMMTaskVote2_MODE) {
          /* Disable for Enabled SubSystem: '<S166>/Reception substasks' */
          if (localDW->Receptionsubstasks_g.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_g,
              &localDW->Receptionsubstasks_g);
          }

          /* End of Disable for SubSystem: '<S166>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S166>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_d.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_d,
              &localDW->Transmissionsubtasks_d);
          }

          /* End of Disable for SubSystem: '<S166>/Transmission subtasks' */

          /* Disable for Outport: '<S166>/Send CAN1' */
          localB->Transmissionsubtasks_d.Equal7_m = false;

          /* Disable for Outport: '<S166>/Receive CAN1' */
          localB->Receptionsubstasks_g.AND = false;

          /* Disable for Outport: '<S166>/Send CAN2' */
          localB->Transmissionsubtasks_d.Equal7 = false;

          /* Disable for Outport: '<S166>/Receive CAN2' */
          localB->Receptionsubstasks_g.AND1 = false;
          localDW->COMMTaskVote2_MODE = false;
        }

        /* End of Disable for SubSystem: '<S161>/COMM Task - Vote2' */

        /* Disable for Enabled SubSystem: '<S161>/COMM Task - Vote3' */
        if (localDW->COMMTaskVote3_MODE) {
          /* Disable for Enabled SubSystem: '<S167>/Reception substasks' */
          if (localDW->Receptionsubstasks_e.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_e,
              &localDW->Receptionsubstasks_e);
          }

          /* End of Disable for SubSystem: '<S167>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S167>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_a.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_a,
              &localDW->Transmissionsubtasks_a);
          }

          /* End of Disable for SubSystem: '<S167>/Transmission subtasks' */

          /* Disable for Outport: '<S167>/Send CAN1' */
          localB->Transmissionsubtasks_a.Equal7_m = false;

          /* Disable for Outport: '<S167>/Receive CAN1' */
          localB->Receptionsubstasks_e.AND = false;

          /* Disable for Outport: '<S167>/Send CAN2' */
          localB->Transmissionsubtasks_a.Equal7 = false;

          /* Disable for Outport: '<S167>/Receive CAN2' */
          localB->Receptionsubstasks_e.AND1 = false;
          localDW->COMMTaskVote3_MODE = false;
        }

        /* End of Disable for SubSystem: '<S161>/COMM Task - Vote3' */

        /* Disable for Outport: '<S161>/Send_Message_CAN1' */
        localB->OR1 = false;

        /* Disable for Outport: '<S161>/Send_Message_CAN2' */
        localB->OR4 = false;

        /* Disable for Outport: '<S161>/Receive_Message_CAN1' */
        localB->OR2 = false;

        /* Disable for Outport: '<S161>/Receive_Message_CAN2' */
        localB->OR3 = false;
        localDW->controllerbasiccycle0_MODE = false;
      }

      /* End of Disable for SubSystem: '<S159>/controller basic cycle 0' */

      /* Disable for Enabled SubSystem: '<S159>/controller basic cycle 1' */
      if (localDW->controllerbasiccycle1_MODE) {
        /* Disable for Enabled SubSystem: '<S162>/COMP Task - Sync bc1 check' */
        if (localDW->COMPTaskSyncbc1check_MODE) {
          /* Disable for Enabled SubSystem: '<S387>/Process_Messages' */
          if (localDW->Process_Messages_MODE) {
            /* Disable for Enabled SubSystem: '<S409>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_a.DemuxmessageCAN1andcheckcoher_f)
            {
              DemuxmessageCAN1andchec_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_a,
                 &localDW->DemuxmessageCAN1andcheckcoher_a);
            }

            /* End of Disable for SubSystem: '<S409>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S409>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_i.DemuxmessageCAN1andcheckcoher_m)
            {
              DemuxmessageCAN1andch_l_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_i,
                 &localDW->DemuxmessageCAN1andcheckcoher_i);
            }

            /* End of Disable for SubSystem: '<S409>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE = false;
          }

          /* End of Disable for SubSystem: '<S387>/Process_Messages' */
          localDW->COMPTaskSyncbc1check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S162>/COMP Task - Sync bc1 check' */

        /* Disable for Enabled SubSystem: '<S162>/COMM Task - Sync bc 1' */
        if (localDW->COMMTaskSyncbc1_MODE) {
          /* Disable for Enabled SubSystem: '<S385>/Reception substasks' */
          if (localDW->Receptionsubstasks_j.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_j,
              &localDW->Receptionsubstasks_j);
          }

          /* End of Disable for SubSystem: '<S385>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S385>/Transmission subtasks1' */
          if (localDW->Transmissionsubtasks1.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_Disable(&localB->Transmissionsubtasks1,
              &localDW->Transmissionsubtasks1);
          }

          /* End of Disable for SubSystem: '<S385>/Transmission subtasks1' */

          /* Disable for Outport: '<S385>/Send CAN1' */
          localB->Transmissionsubtasks1.Equal7_a = false;

          /* Disable for Outport: '<S385>/Receive CAN1' */
          localB->Receptionsubstasks_j.AND = false;

          /* Disable for Outport: '<S385>/Send CAN2' */
          localB->Transmissionsubtasks1.Equal7 = false;

          /* Disable for Outport: '<S385>/Receive CAN2' */
          localB->Receptionsubstasks_j.AND1 = false;
          localDW->COMMTaskSyncbc1_MODE = false;
        }

        /* End of Disable for SubSystem: '<S162>/COMM Task - Sync bc 1' */

        /* Disable for Outport: '<S162>/Send_Message_CAN1' */
        localB->Transmissionsubtasks1.Equal7_a = false;

        /* Disable for Outport: '<S162>/Send_Message_CAN2' */
        localB->Transmissionsubtasks1.Equal7 = false;

        /* Disable for Outport: '<S162>/Receive_Message_CAN1' */
        localB->Receptionsubstasks_j.AND = false;

        /* Disable for Outport: '<S162>/Receive_Message_CAN2' */
        localB->Receptionsubstasks_j.AND1 = false;
        localDW->controllerbasiccycle1_MODE = false;
      }

      /* End of Disable for SubSystem: '<S159>/controller basic cycle 1' */

      /* Disable for Outport: '<S159>/Send_CAN1' */
      localB->signal1 = false;

      /* Disable for Outport: '<S159>/Send_CAN2' */
      localB->signal2 = false;

      /* Disable for Outport: '<S159>/Receive_CAN1' */
      localB->signal3 = false;

      /* Disable for Outport: '<S159>/Receive_CAN2' */
      localB->signal4 = false;
      localDW->ControllerMatrixCycle_MODE = false;
    }

    /* End of Disable for SubSystem: '<S132>/Controller Matrix Cycle' */

    /* Disable for Outport: '<S132>/Send_Message_CAN1' */
    localB->signal1 = false;

    /* Disable for Outport: '<S132>/Send_Message_CAN2' */
    localB->signal2 = false;

    /* Disable for Outport: '<S132>/Receive_Message_CAN1' */
    localB->signal3 = false;

    /* Disable for Outport: '<S132>/Receive_Message_CAN2' */
    localB->signal4 = false;
    localDW->MatrixCycleManager_MODE = false;
  }

  /* End of Disable for SubSystem: '<S36>/Matrix Cycle Manager' */

  /* Disable for Chart: '<S36>/Chart1' incorporates:
   *  SubSystem: '<S10>/CAN1 Recieve'
   */
  CAN1Recieve_Disable(&localB->CAN1Recieve_h, &localDW->CAN1Recieve_h);

  /* Disable for Chart: '<S36>/Chart2' incorporates:
   *  SubSystem: '<S10>/CAN2 Recieve'
   */
  CAN2Recieve_Disable(&localB->CAN2Recieve_b, &localDW->CAN2Recieve_b);

  /* Disable for Enabled SubSystem: '<S36>/DEBUG - Toggle digital pin A0' */
  if (localDW->DEBUGToggledigitalpinA0_MODE) {
    localDW->DEBUGToggledigitalpinA0_MODE = false;
  }

  /* End of Disable for SubSystem: '<S36>/DEBUG - Toggle digital pin A0' */

  /* Disable for Enabled SubSystem: '<S36>/DEBUG - Toggle digital pin A1' */
  if (localDW->DEBUGToggledigitalpinA1_MODE) {
    localDW->DEBUGToggledigitalpinA1_MODE = false;
  }

  /* End of Disable for SubSystem: '<S36>/DEBUG - Toggle digital pin A1' */

  /* Disable for Enabled SubSystem: '<S36>/DEBUG - Toggle digital pin D10' */
  if (localDW->DEBUGToggledigitalpinD10_MODE) {
    localDW->DEBUGToggledigitalpinD10_MODE = false;
  }

  /* End of Disable for SubSystem: '<S36>/DEBUG - Toggle digital pin D10' */

  /* Disable for Enabled SubSystem: '<S36>/DEBUG - Toggle digital pin A4' */
  if (localDW->DEBUGToggledigitalpinA4_MODE) {
    localDW->DEBUGToggledigitalpinA4_MODE = false;
  }

  /* End of Disable for SubSystem: '<S36>/DEBUG - Toggle digital pin A4' */

  /* Disable for Enabled SubSystem: '<S36>/Logic Analyzer - COMM delay CAN1 - Rx' */
  if (localDW->LogicAnalyzerCOMMdelayCAN1Rx_MO) {
    localDW->LogicAnalyzerCOMMdelayCAN1Rx_MO = false;
  }

  /* End of Disable for SubSystem: '<S36>/Logic Analyzer - COMM delay CAN1 - Rx' */

  /* Disable for Enabled SubSystem: '<S36>/Logic Analyzer - COMM delay CAN1 - Tx' */
  if (localDW->LogicAnalyzerCOMMdelayCAN1Tx_MO) {
    localDW->LogicAnalyzerCOMMdelayCAN1Tx_MO = false;
  }

  /* End of Disable for SubSystem: '<S36>/Logic Analyzer - COMM delay CAN1 - Tx' */

  /* Disable for Enabled SubSystem: '<S36>/Logic Analyzer - COMM delay CAN2 - Rx' */
  if (localDW->LogicAnalyzerCOMMdelayCAN2Rx_MO) {
    localDW->LogicAnalyzerCOMMdelayCAN2Rx_MO = false;
  }

  /* End of Disable for SubSystem: '<S36>/Logic Analyzer - COMM delay CAN2 - Rx' */

  /* Disable for Enabled SubSystem: '<S36>/Logic Analyzer - COMM delay CAN2 - Tx' */
  if (localDW->LogicAnalyzerCOMMdelayCAN2Tx_MO) {
    localDW->LogicAnalyzerCOMMdelayCAN2Tx_MO = false;
  }

  /* End of Disable for SubSystem: '<S36>/Logic Analyzer - COMM delay CAN2 - Tx' */

  /* Disable for Chart: '<S36>/Chart4' incorporates:
   *  SubSystem: '<S10>/Measure EXecution time'
   */
  MeasureEXecutiontime_Disable(&localDW->MeasureEXecutiontime_d);
}

/* Start for function-call system: '<S10>/TTA System' */
void TTASystem_Start(rtDW_TTASystem *localDW)
{
  /* Start for Enabled SubSystem: '<S36>/DEBUG - Toggle digital pin A2' */

  /* Start for M-S-Function: '<S135>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTF_PIN7, DIGOUT_CFG_OPENDRAIN);

  /* End of Start for SubSystem: '<S36>/DEBUG - Toggle digital pin A2' */

  /* Start for DataStoreMemory: '<S36>/Data Store Memory13' */
  localDW->Initialization_flag = true;

  /* Start for Chart: '<S36>/Chart1' incorporates:
   *  SubSystem: '<S10>/CAN1 Recieve'
   */
  CAN1Recieve_Start();

  /* Start for Chart: '<S36>/Chart2' incorporates:
   *  SubSystem: '<S10>/CAN2 Recieve'
   */
  CAN2Recieve_Start();

  /* Start for Enabled SubSystem: '<S36>/DEBUG - Toggle digital pin A0' */

  /* Start for M-S-Function: '<S133>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTC_PIN0, DIGOUT_CFG_OPENDRAIN);

  /* End of Start for SubSystem: '<S36>/DEBUG - Toggle digital pin A0' */

  /* Start for Enabled SubSystem: '<S36>/DEBUG - Toggle digital pin A1' */

  /* Start for M-S-Function: '<S134>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTF_PIN6, DIGOUT_CFG_OPENDRAIN);

  /* End of Start for SubSystem: '<S36>/DEBUG - Toggle digital pin A1' */

  /* Start for Enabled SubSystem: '<S36>/DEBUG - Toggle digital pin D10' */

  /* Start for M-S-Function: '<S137>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTA_PIN4, DIGOUT_CFG_OPENDRAIN);

  /* End of Start for SubSystem: '<S36>/DEBUG - Toggle digital pin D10' */

  /* Start for Enabled SubSystem: '<S36>/DEBUG - Toggle digital pin A4' */

  /* Start for M-S-Function: '<S136>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTF_PIN9, DIGOUT_CFG_OPENDRAIN);

  /* End of Start for SubSystem: '<S36>/DEBUG - Toggle digital pin A4' */

  /* Start for Enabled SubSystem: '<S36>/Logic Analyzer - COMM delay CAN1 - Rx' */

  /* Start for M-S-Function: '<S155>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTA_PIN6, DIGOUT_CFG_OPENDRAIN);

  /* End of Start for SubSystem: '<S36>/Logic Analyzer - COMM delay CAN1 - Rx' */

  /* Start for Enabled SubSystem: '<S36>/Logic Analyzer - COMM delay CAN1 - Tx' */

  /* Start for M-S-Function: '<S156>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTA_PIN5, DIGOUT_CFG_OPENDRAIN);

  /* End of Start for SubSystem: '<S36>/Logic Analyzer - COMM delay CAN1 - Tx' */

  /* Start for Enabled SubSystem: '<S36>/Logic Analyzer - COMM delay CAN2 - Rx' */

  /* Start for M-S-Function: '<S157>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTG_PIN12, DIGOUT_CFG_OPENDRAIN);

  /* End of Start for SubSystem: '<S36>/Logic Analyzer - COMM delay CAN2 - Rx' */

  /* Start for Enabled SubSystem: '<S36>/Logic Analyzer - COMM delay CAN2 - Tx' */

  /* Start for M-S-Function: '<S158>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTG_PIN15, DIGOUT_CFG_OPENDRAIN);

  /* End of Start for SubSystem: '<S36>/Logic Analyzer - COMM delay CAN2 - Tx' */

  /* Start for Chart: '<S36>/Chart4' incorporates:
   *  SubSystem: '<S10>/Measure EXecution time'
   */
  MeasureEXecutiontime_Start();
}

/* Output and update for function-call system: '<S10>/TTA System' */
void TTASystem(rtB_TTASystem *localB, const rtC_TTASystem *localC,
               rtDW_TTASystem *localDW, real_T *rtd_Board_ID, uint16_T
               *rtd_Local_Ticks, real_T *rtd_Master_ID, msg_buffer_type
               *rtd_Msg_Rx_CAN1, msg_buffer_type *rtd_Msg_Rx_CAN2, uint16_T
               *rtd_Msg_Rx_Ticks_CAN1, uint16_T *rtd_Msg_Rx_Ticks_CAN2,
               msg_buffer_type *rtd_Msg_Tx_CAN1, msg_buffer_type
               *rtd_Msg_Tx_CAN2, boolean_T *rtd_New_Msg_Ready_CAN1, boolean_T
               *rtd_New_Msg_Ready_CAN2, uint32_T *rtd_RxID_CAN1, uint32_T
               *rtd_RxID_CAN2, uint8_T *rtd_Rx_State_CAN1, uint8_T
               *rtd_Rx_State_CAN2, boolean_T *rtd_Toggle_Pin_A0, real_T
               *rtd_Toggle_Pin_D12, real_T *rtd_Toggle_Pin_D13, real_T
               *rtd_Toggle_Pin_D8, real_T *rtd_Toggle_Pin_D9, uint32_T
               *rtd_TxID_CAN1, uint32_T *rtd_TxID_CAN2, real_T
               *rtd_Tx_msg_count_CAN1, real_T *rtd_Tx_msg_count_CAN2)
{
  int32_T sigIdx;
  int_T linIx;
  boolean_T rtb_OR1_l;
  boolean_T rtb_Equal_f;
  real_T rtb_Switch1_f;
  uint16_T rtb_DataStoreRead8_c;
  boolean_T rtb_AND1_e;
  boolean_T rtb_AND2_n;
  boolean_T rtb_AND6_f;
  boolean_T rtb_AND8_k;
  boolean_T rtb_AND7_m;
  real_T rtb_Plus_j;
  real_T rtb_Plus1_b;
  real_T rtb_Plus2_p;
  int8_T rtb_FindNonzeroElements[3];
  real_T rtb_signal1[20];
  real_T rtb_signal2[20];
  uint8_T rtb_Switch_j_Buffer_1;
  boolean_T rtb_DataStoreRead1_bw;
  boolean_T rtb_DataStoreRead2_e;
  msg_buffer_type rtb_DataStoreRead_pt;
  msg_buffer_type rtb_DataStoreRead3_p;
  real_T rtb_DataStoreRead15_b;
  boolean_T rtb_AND1_ml;
  boolean_T rtb_DataStoreRead1_il;
  boolean_T rtb_DataStoreRead2_oh;
  msg_buffer_type rtb_DataStoreRead_m3;
  msg_buffer_type rtb_DataStoreRead3_kw;
  boolean_T rtb_AND_hx;
  boolean_T rtb_AND1_km;
  boolean_T rtb_DataStoreRead1_j2;
  boolean_T rtb_DataStoreRead2_l;
  msg_buffer_type rtb_DataStoreRead_ak;
  msg_buffer_type rtb_DataStoreRead3_e;
  boolean_T rtb_AND_cyo;
  boolean_T rtb_AND1_bt;
  boolean_T rtb_DataStoreRead1_ax;
  boolean_T rtb_DataStoreRead2_ft;
  msg_buffer_type rtb_DataStoreRead_ec;
  msg_buffer_type rtb_DataStoreRead3_j5;
  boolean_T rtb_AND_c;
  boolean_T rtb_AND1_d;
  boolean_T rtb_Equal1_fp;
  boolean_T rtb_NOT_k;
  boolean_T rtb_Equal2_d;
  boolean_T rtb_NOT_im;
  boolean_T rtb_Equal2_lw;
  boolean_T rtb_NOT_l;
  boolean_T rtb_Equal2_fs;
  boolean_T rtb_NOT_c3;
  boolean_T rtb_DataStoreRead1_nj;
  boolean_T rtb_DataStoreRead2_c;
  msg_buffer_type rtb_DataStoreRead_n;
  msg_buffer_type rtb_DataStoreRead3;
  real_T rtb_DataStoreRead15;
  boolean_T rtb_AND1_j;
  boolean_T rtb_Equal1_mg;
  boolean_T rtb_NOT_lv;
  boolean_T rtb_NOT_d;
  boolean_T rtb_NOT_ce;
  msg_buffer_type Msg_Rx;
  uint32_T qY;
  uint32_T qY_0;
  uint16_T u0;
  uint16_T u1;
  boolean_T rtb_AND6_d_tmp;
  int32_T exitg1;

  /* Outputs for Enabled SubSystem: '<S36>/DEBUG - Toggle digital pin A2' incorporates:
   *  EnablePort: '<S123>/Enable'
   */
  /* Constant: '<S36>/Constant2' */
  if (1.0 > 0.0) {
    if (!localDW->DEBUGToggledigitalpinA2_MODE) {
      localDW->DEBUGToggledigitalpinA2_MODE = true;
    }

    /* Switch: '<S123>/Switch' incorporates:
     *  DataStoreRead: '<S123>/Data Store Read'
     */
    if (localDW->A2_Pin_State) {
      /* DataStoreWrite: '<S123>/Data Store Write1' incorporates:
       *  Constant: '<S123>/Constant1'
       */
      localDW->A2_Pin_State = false;
    } else {
      /* DataStoreWrite: '<S123>/Data Store Write1' incorporates:
       *  Constant: '<S123>/Constant'
       */
      localDW->A2_Pin_State = true;
    }

    /* End of Switch: '<S123>/Switch' */
    /* DataStoreRead: '<S123>/Data Store Read1' */
    localB->DataStoreRead1_o = localDW->A2_Pin_State;

    /* Update for M-S-Function: '<S135>/Level-2 M-file S-Function' */
    /* update digital output */
    if (localB->DataStoreRead1_o == 0) {
      DigoutSet(DIGOUT_PORTF_PIN7, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTF_PIN7, DIGOUT_HIGH);
    }
  } else {
    if (localDW->DEBUGToggledigitalpinA2_MODE) {
      localDW->DEBUGToggledigitalpinA2_MODE = false;
    }
  }

  /* End of Constant: '<S36>/Constant2' */
  /* End of Outputs for SubSystem: '<S36>/DEBUG - Toggle digital pin A2' */

  /* Outputs for Enabled SubSystem: '<S36>/Initialization' incorporates:
   *  EnablePort: '<S126>/Enable'
   */
  /* DataStoreRead: '<S36>/Data Store Read' incorporates:
   *  Constant: '<S126>/Board nr1'
   *  Constant: '<S126>/Board nr2'
   *  Constant: '<S126>/Board nr3'
   *  Constant: '<S139>/SET'
   *  DataStoreRead: '<S126>/Data Store Read1'
   *  Logic: '<S126>/AND'
   *  Logic: '<S126>/OR'
   *  Logic: '<S126>/OR2'
   *  RelationalOperator: '<S126>/Equal'
   *  RelationalOperator: '<S126>/Equal1'
   *  RelationalOperator: '<S126>/Equal2'
   */
  if (localDW->Initialization_flag) {
    if (!localDW->Initialization_MODE) {
      localDW->Initialization_MODE = true;
    }

    /* Logic: '<S126>/OR1' */
    rtb_OR1_l = ((*rtd_New_Msg_Ready_CAN1) || (*rtd_New_Msg_Ready_CAN2));

    /* Outputs for Enabled SubSystem: '<S126>/RoleID and Global Time init' incorporates:
     *  EnablePort: '<S139>/Enable'
     */
    if ((((*rtd_Board_ID == 1.0) || (*rtd_Board_ID == 2.0) || (*rtd_Board_ID ==
           3.0)) && localDW->Initialization_Timeout) || rtb_OR1_l) {
      if (!localDW->RoleIDandGlobalTimeinit_MODE) {
        localDW->RoleIDandGlobalTimeinit_MODE = true;
      }

      /* Outputs for Enabled SubSystem: '<S139>/Global Time Initialization Slave' incorporates:
       *  EnablePort: '<S141>/Enable'
       */
      if (rtb_OR1_l) {
        /* DataStoreWrite: '<S141>/Data Store Write4' incorporates:
         *  Constant: '<S141>/SET1 '
         */
        localDW->BC0_Sync_processed = true;

        /* RelationalOperator: '<S141>/Equal' incorporates:
         *  Constant: '<S141>/Constant'
         */
        rtb_Equal_f = (*rtd_New_Msg_Ready_CAN1 == 1.0);

        /* Switch: '<S141>/Switch' incorporates:
         *  DataStoreRead: '<S141>/Data Store Read1'
         *  DataStoreRead: '<S141>/Data Store Read2'
         */
        if (rtb_Equal_f) {
          rtb_Switch_j_Buffer_1 = rtd_Msg_Rx_CAN1->Buffer_1;
        } else {
          rtb_Switch_j_Buffer_1 = rtd_Msg_Rx_CAN2->Buffer_1;
        }

        /* End of Switch: '<S141>/Switch' */

        /* Outputs for Atomic SubSystem: '<S142>/Bit Shift3' */
        BitShift3(rtb_Switch_j_Buffer_1, &localB->BitShift3_i);

        /* End of Outputs for SubSystem: '<S142>/Bit Shift3' */

        /* Outputs for Atomic SubSystem: '<S142>/Bit Shift1' */
        /* MATLAB Function: '<S144>/bit_shift' */
        /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S149>:1' */
        /* '<S149>:1:8' */
        Rx_init_mc = (uint8_T)((uint32_T)localB->BitShift3_i.y >> 5);

        /* End of Outputs for SubSystem: '<S142>/Bit Shift1' */

        /* Switch: '<S141>/Switch1' */
        if (rtb_Equal_f) {
          /* DataTypeConversion: '<S141>/Cast' incorporates:
           *  Constant: '<S141>/Constant1'
           *  Constant: '<S141>/Constant3'
           *  Constant: '<S141>/delay_estimation_1'
           *  Product: '<S141>/Multiply'
           *  Sum: '<S141>/Sum'
           */
          Rx_init_LT = (uint16_T)((COMM_Phase1 * (real_T)Rx_init_mc + 0.0) + 3.0);
        } else {
          /* DataTypeConversion: '<S141>/Cast' incorporates:
           *  Constant: '<S141>/Constant2'
           *  Constant: '<S141>/Constant3'
           *  Constant: '<S141>/delay_estimation_2'
           *  Product: '<S141>/Multiply1'
           *  Sum: '<S141>/Sum1'
           */
          Rx_init_LT = (uint16_T)((COMM_Phase2 * (real_T)Rx_init_mc + 0.0) + 3.0);
        }

        /* End of Switch: '<S141>/Switch1' */

        /* DataStoreWrite: '<S141>/Data Store Write1' */
        *rtd_Local_Ticks = Rx_init_LT;

        /* Outputs for Atomic SubSystem: '<S142>/Bit Shift' */
        /* MATLAB Function: '<S143>/bit_shift' */
        /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S148>:1' */
        /* '<S148>:1:8' */
        Rx_init_bc = (uint8_T)((uint32_T)rtb_Switch_j_Buffer_1 >> 7);

        /* End of Outputs for SubSystem: '<S142>/Bit Shift' */

        /* DataStoreWrite: '<S141>/Data Store Write2' */
        localDW->basic_cycle_count = Rx_init_bc;

        /* Outputs for Atomic SubSystem: '<S142>/Bit Shift4' */
        BitShift4(rtb_Switch_j_Buffer_1, &localB->BitShift4_d);

        /* End of Outputs for SubSystem: '<S142>/Bit Shift4' */

        /* Outputs for Atomic SubSystem: '<S142>/Bit Shift2' */
        /* MATLAB Function: '<S145>/bit_shift' */
        /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S150>:1' */
        /* '<S150>:1:8' */
        Rx_init_id = (uint8_T)((uint32_T)localB->BitShift4_d.y >> 4);

        /* End of Outputs for SubSystem: '<S142>/Bit Shift2' */

        /* DataStoreWrite: '<S141>/Data Store Write3' incorporates:
         *  DataTypeConversion: '<S141>/Cast1'
         */
        *rtd_Master_ID = Rx_init_id;
      }

      /* End of Outputs for SubSystem: '<S139>/Global Time Initialization Slave' */

      /* Outputs for Enabled SubSystem: '<S139>/Global Time Initialization Master' incorporates:
       *  EnablePort: '<S140>/Enable'
       */
      if (localDW->Initialization_Timeout) {
        /* DataStoreWrite: '<S140>/Data Store Write3' incorporates:
         *  Constant: '<S140>/Board nr1'
         */
        *rtd_Master_ID = 1.0;

        /* DataStoreWrite: '<S140>/Data Store Write' */
        *rtd_Local_Ticks = localC->Cast;

        /* DataStoreWrite: '<S140>/Data Store Write1' */
        localDW->basic_cycle_count = localC->Cast1;
      }

      /* End of Outputs for SubSystem: '<S139>/Global Time Initialization Master' */

      /* Switch: '<S139>/Switch2' incorporates:
       *  Constant: '<S139>/Constant1'
       *  DataStoreWrite: '<S139>/Data Store Write'
       *  Switch: '<S139>/Switch1'
       */
      if (rtb_OR1_l) {
        localDW->Role_ID = 2.0;
      } else {
        if (localDW->Initialization_Timeout) {
          /* Switch: '<S139>/Switch1' incorporates:
           *  Constant: '<S139>/Constant'
           *  DataStoreWrite: '<S139>/Data Store Write'
           */
          localDW->Role_ID = 1.0;
        }
      }

      /* End of Switch: '<S139>/Switch2' */

      /* DataStoreWrite: '<S139>/Data Store Write3' incorporates:
       *  Constant: '<S139>/RESET2'
       */
      *rtd_New_Msg_Ready_CAN1 = false;

      /* DataStoreWrite: '<S139>/Data Store Write5' incorporates:
       *  Constant: '<S139>/RESET3'
       */
      *rtd_New_Msg_Ready_CAN2 = false;

      /* DataStoreWrite: '<S139>/Data Store Write4' incorporates:
       *  Constant: '<S139>/RESET'
       */
      localDW->Initialization_Timeout = false;

      /* DataStoreWrite: '<S139>/Data Store Write2' incorporates:
       *  Constant: '<S139>/RESET1'
       */
      localDW->Delay_Counter = 0.0;
      localB->SET = 1.0;
    } else {
      if (localDW->RoleIDandGlobalTimeinit_MODE) {
        /* Disable for Outport: '<S139>/Finish Initialization' */
        localB->SET = 0.0;
        localDW->RoleIDandGlobalTimeinit_MODE = false;
      }
    }

    /* End of Outputs for SubSystem: '<S126>/RoleID and Global Time init' */

    /* Logic: '<S126>/NOT' incorporates:
     *  Constant: '<S126>/Board nr1'
     *  Constant: '<S126>/Board nr2'
     *  Constant: '<S126>/Board nr3'
     *  Constant: '<S139>/SET'
     *  DataStoreRead: '<S126>/Data Store Read1'
     *  DataStoreWrite: '<S126>/Data Store Write1'
     *  Logic: '<S126>/AND'
     *  Logic: '<S126>/OR'
     *  Logic: '<S126>/OR2'
     *  RelationalOperator: '<S126>/Equal'
     *  RelationalOperator: '<S126>/Equal1'
     *  RelationalOperator: '<S126>/Equal2'
     */
    localDW->Initialization_flag = (localB->SET == 0.0);

    /* RelationalOperator: '<S138>/GreaterThan' incorporates:
     *  Constant: '<S126>/Constant'
     *  DataStoreRead: '<S138>/Data Store Read1'
     *  DataStoreWrite: '<S126>/Data Store Write'
     */
    localDW->Initialization_Timeout = (localDW->Delay_Counter >= 424.0);

    /* Switch: '<S138>/Switch' incorporates:
     *  Constant: '<S138>/Increment1'
     *  Constant: '<S138>/Reset'
     *  DataStoreRead: '<S138>/Data Store Read'
     *  DataStoreWrite: '<S126>/Data Store Write'
     *  DataStoreWrite: '<S138>/Data Store Write2'
     *  Sum: '<S138>/Add2'
     */
    if (localDW->Initialization_Timeout) {
      localDW->Delay_Counter = (-1.0);
    } else {
      localDW->Delay_Counter += 1.0;
    }

    /* End of Switch: '<S138>/Switch' */
  } else {
    if (localDW->Initialization_MODE) {
      /* Disable for Enabled SubSystem: '<S126>/RoleID and Global Time init' */
      if (localDW->RoleIDandGlobalTimeinit_MODE) {
        /* Disable for Outport: '<S139>/Finish Initialization' */
        localB->SET = 0.0;
        localDW->RoleIDandGlobalTimeinit_MODE = false;
      }

      /* End of Disable for SubSystem: '<S126>/RoleID and Global Time init' */
      localDW->Initialization_MODE = false;
    }
  }

  /* End of DataStoreRead: '<S36>/Data Store Read' */
  /* End of Outputs for SubSystem: '<S36>/Initialization' */

  /* Outputs for Enabled SubSystem: '<S36>/Basic Cycle Increment' incorporates:
   *  EnablePort: '<S115>/Enable'
   */
  /* RelationalOperator: '<S36>/Equal' incorporates:
   *  Constant: '<S36>/Constant'
   *  Switch: '<S36>/Switch'
   */
  if (*rtd_Local_Ticks == 212.0) {
    /* DataStoreWrite: '<S115>/Data Store Write' incorporates:
     *  Constant: '<S115>/Reset'
     */
    *rtd_Local_Ticks = ((uint16_T)0U);

    /* Switch: '<S115>/Switch' incorporates:
     *  Constant: '<S115>/Increment'
     *  DataStoreRead: '<S115>/Data Store Read4'
     *  DataStoreRead: '<S115>/Data Store Read5'
     *  RelationalOperator: '<S115>/LessThanOrEqual'
     *  Sum: '<S115>/Add'
     */
    if (localDW->basic_cycle_count < localC->Add1) {
      bacic_cycle_s = (uint8_T)((uint32_T)localDW->basic_cycle_count + ((uint8_T)
        1U));
    } else {
      bacic_cycle_s = localC->Cast_e;
    }

    /* End of Switch: '<S115>/Switch' */

    /* DataStoreWrite: '<S115>/Data Store Write3' */
    localDW->basic_cycle_count = bacic_cycle_s;
  }

  /* End of RelationalOperator: '<S36>/Equal' */
  /* End of Outputs for SubSystem: '<S36>/Basic Cycle Increment' */

  /* Outputs for Enabled SubSystem: '<S36>/Matrix Cycle Manager' incorporates:
   *  EnablePort: '<S132>/Enable'
   */
  /* Logic: '<S36>/NOT1' incorporates:
   *  Constant: '<S132>/Constant'
   *  Constant: '<S132>/Constant1'
   *  Constant: '<S132>/Constant2'
   *  Constant: '<S159>/Constant1'
   *  Constant: '<S161>/Constant'
   *  Constant: '<S161>/Constant12'
   *  Constant: '<S161>/Constant14'
   *  Constant: '<S161>/Constant17'
   *  Constant: '<S161>/Constant19'
   *  Constant: '<S161>/Constant2'
   *  Constant: '<S161>/Constant21'
   *  Constant: '<S161>/Constant23'
   *  Constant: '<S161>/Constant25'
   *  Constant: '<S161>/Constant27'
   *  Constant: '<S161>/Constant28'
   *  Constant: '<S161>/Constant3'
   *  Constant: '<S161>/Constant31'
   *  Constant: '<S161>/Constant33'
   *  Constant: '<S161>/Constant34'
   *  Constant: '<S161>/Constant6'
   *  Constant: '<S161>/Constant8'
   *  Constant: '<S161>/Constant9'
   *  Constant: '<S162>/Constant'
   *  Constant: '<S162>/Constant16'
   *  Constant: '<S162>/Constant17'
   *  Constant: '<S162>/Constant4'
   *  Constant: '<S162>/Constant41'
   *  Constant: '<S162>/Constant6'
   *  Constant: '<S172>/Constant'
   *  Constant: '<S173>/Constant1'
   *  Constant: '<S173>/Constant4'
   *  Constant: '<S175>/Constant4'
   *  Constant: '<S176>/Constant1'
   *  Constant: '<S177>/Constant4'
   *  Constant: '<S178>/Constant1'
   *  Constant: '<S179>/Constant4'
   *  Constant: '<S180>/Constant1'
   *  Constant: '<S387>/Constant'
   *  Constant: '<S388>/Constant1'
   *  Constant: '<S388>/Constant4'
   *  DataStoreRead: '<S132>/Data Store Read10'
   *  DataStoreRead: '<S161>/Data Store Read11'
   *  DataStoreRead: '<S162>/Data Store Read11'
   *  DataStoreRead: '<S173>/Data Store Read'
   *  DataStoreRead: '<S173>/Data Store Read1'
   *  DataStoreRead: '<S175>/Data Store Read5'
   *  DataStoreRead: '<S177>/Data Store Read5'
   *  DataStoreRead: '<S179>/Data Store Read5'
   *  DataStoreRead: '<S36>/Data Store Read8'
   *  DataStoreRead: '<S388>/Data Store Read'
   *  DataStoreRead: '<S388>/Data Store Read1'
   *  DataStoreWrite: '<S262>/Data Store Write2'
   *  DataStoreWrite: '<S409>/Data Store Write2'
   *  Logic: '<S132>/OR'
   *  Logic: '<S161>/AND'
   *  Logic: '<S161>/AND1'
   *  Logic: '<S161>/AND10'
   *  Logic: '<S161>/AND11'
   *  Logic: '<S161>/AND12'
   *  Logic: '<S161>/AND13'
   *  Logic: '<S161>/AND14'
   *  Logic: '<S161>/AND15'
   *  Logic: '<S161>/AND16'
   *  Logic: '<S161>/AND17'
   *  Logic: '<S161>/AND18'
   *  Logic: '<S161>/AND19'
   *  Logic: '<S161>/AND2'
   *  Logic: '<S161>/AND3'
   *  Logic: '<S161>/AND4'
   *  Logic: '<S161>/AND5'
   *  Logic: '<S161>/AND6'
   *  Logic: '<S161>/AND7'
   *  Logic: '<S161>/AND8'
   *  Logic: '<S161>/AND9'
   *  Logic: '<S161>/NOT1'
   *  Logic: '<S161>/NOT2'
   *  Logic: '<S162>/AND'
   *  Logic: '<S162>/AND1'
   *  Logic: '<S162>/AND17'
   *  Logic: '<S162>/AND18'
   *  Logic: '<S162>/AND19'
   *  Logic: '<S162>/AND2'
   *  Logic: '<S162>/AND20'
   *  Logic: '<S162>/NOT2'
   *  Logic: '<S162>/NOT4'
   *  Logic: '<S170>/AND'
   *  Logic: '<S172>/AND'
   *  Logic: '<S173>/AND'
   *  Logic: '<S173>/AND1'
   *  Logic: '<S175>/AND'
   *  Logic: '<S177>/AND'
   *  Logic: '<S179>/AND'
   *  Logic: '<S387>/AND'
   *  Logic: '<S388>/AND'
   *  Logic: '<S388>/AND1'
   *  RelationalOperator: '<S132>/Equal'
   *  RelationalOperator: '<S132>/Equal1'
   *  RelationalOperator: '<S132>/Equal2'
   *  RelationalOperator: '<S159>/Equal1'
   *  RelationalOperator: '<S161>/GreaterThan'
   *  RelationalOperator: '<S161>/GreaterThan1'
   *  RelationalOperator: '<S161>/GreaterThan10'
   *  RelationalOperator: '<S161>/GreaterThan11'
   *  RelationalOperator: '<S161>/GreaterThan12'
   *  RelationalOperator: '<S161>/GreaterThan13'
   *  RelationalOperator: '<S161>/GreaterThan14'
   *  RelationalOperator: '<S161>/GreaterThan15'
   *  RelationalOperator: '<S161>/GreaterThan16'
   *  RelationalOperator: '<S161>/GreaterThan17'
   *  RelationalOperator: '<S161>/GreaterThan18'
   *  RelationalOperator: '<S161>/GreaterThan19'
   *  RelationalOperator: '<S161>/GreaterThan2'
   *  RelationalOperator: '<S161>/GreaterThan20'
   *  RelationalOperator: '<S161>/GreaterThan21'
   *  RelationalOperator: '<S161>/GreaterThan22'
   *  RelationalOperator: '<S161>/GreaterThan23'
   *  RelationalOperator: '<S161>/GreaterThan24'
   *  RelationalOperator: '<S161>/GreaterThan25'
   *  RelationalOperator: '<S161>/GreaterThan26'
   *  RelationalOperator: '<S161>/GreaterThan27'
   *  RelationalOperator: '<S161>/GreaterThan28'
   *  RelationalOperator: '<S161>/GreaterThan29'
   *  RelationalOperator: '<S161>/GreaterThan3'
   *  RelationalOperator: '<S161>/GreaterThan30'
   *  RelationalOperator: '<S161>/GreaterThan31'
   *  RelationalOperator: '<S161>/GreaterThan32'
   *  RelationalOperator: '<S161>/GreaterThan33'
   *  RelationalOperator: '<S161>/GreaterThan4'
   *  RelationalOperator: '<S161>/GreaterThan5'
   *  RelationalOperator: '<S161>/GreaterThan6'
   *  RelationalOperator: '<S161>/GreaterThan7'
   *  RelationalOperator: '<S161>/GreaterThan8'
   *  RelationalOperator: '<S161>/GreaterThan9'
   *  RelationalOperator: '<S162>/GreaterThan'
   *  RelationalOperator: '<S162>/GreaterThan1'
   *  RelationalOperator: '<S162>/GreaterThan2'
   *  RelationalOperator: '<S162>/GreaterThan3'
   *  RelationalOperator: '<S162>/GreaterThan34'
   *  RelationalOperator: '<S162>/GreaterThan35'
   *  RelationalOperator: '<S162>/GreaterThan4'
   *  RelationalOperator: '<S162>/GreaterThan5'
   *  RelationalOperator: '<S168>/Equal'
   *  RelationalOperator: '<S169>/Equal'
   *  RelationalOperator: '<S170>/Equal2'
   *  RelationalOperator: '<S171>/Equal2'
   *  RelationalOperator: '<S173>/Equal'
   *  RelationalOperator: '<S173>/Equal1'
   *  RelationalOperator: '<S173>/Equal2'
   *  RelationalOperator: '<S174>/Equal'
   *  RelationalOperator: '<S175>/Equal'
   *  RelationalOperator: '<S175>/Equal2'
   *  RelationalOperator: '<S177>/Equal'
   *  RelationalOperator: '<S177>/Equal2'
   *  RelationalOperator: '<S179>/Equal'
   *  RelationalOperator: '<S179>/Equal2'
   *  RelationalOperator: '<S386>/Equal1'
   *  RelationalOperator: '<S386>/Equal2'
   *  RelationalOperator: '<S388>/Equal1'
   *  RelationalOperator: '<S388>/Equal2'
   *  RelationalOperator: '<S388>/Equal3'
   */
  if (!localDW->Initialization_flag) {
    if (!localDW->MatrixCycleManager_MODE) {
      localDW->MatrixCycleManager_MODE = true;
    }

    /* Outputs for Enabled SubSystem: '<S132>/Controller Matrix Cycle' incorporates:
     *  EnablePort: '<S159>/Enable'
     */
    if ((*rtd_Board_ID == 1.0) || (*rtd_Board_ID == 2.0) || (*rtd_Board_ID ==
         3.0)) {
      if (!localDW->ControllerMatrixCycle_MODE) {
        localDW->ControllerMatrixCycle_MODE = true;
      }

      /* RelationalOperator: '<S159>/Equal' incorporates:
       *  Constant: '<S159>/Constant'
       *  DataStoreRead: '<S132>/Data Store Read10'
       */
      rtb_OR1_l = (localDW->basic_cycle_count == 0.0);

      /* Outputs for Enabled SubSystem: '<S159>/controller basic cycle 0' incorporates:
       *  EnablePort: '<S161>/Enable'
       */
      if (rtb_OR1_l) {
        if (!localDW->controllerbasiccycle0_MODE) {
          localDW->controllerbasiccycle0_MODE = true;
        }

        /* DataStoreRead: '<S161>/Data Store Read8' */
        rtb_DataStoreRead8_c = *rtd_Local_Ticks;

        /* Outputs for Enabled SubSystem: '<S161>/COMP Task - Check Timeouts' incorporates:
         *  EnablePort: '<S168>/Enable'
         */
        /* Outputs for Enabled SubSystem: '<S168>/Timeout and Board error counter' incorporates:
         *  EnablePort: '<S253>/Enable'
         */
        if ((*rtd_Local_Ticks >= 196.0) && (*rtd_Local_Ticks < localC->Sum14) &&
            (*rtd_Local_Ticks == 196.0)) {
          /* Logic: '<S253>/AND' incorporates:
           *  Constant: '<S253>/Constant'
           *  DataStoreRead: '<S253>/Data Store Read1'
           *  Logic: '<S253>/NOT'
           *  RelationalOperator: '<S253>/Equal'
           */
          rtb_Equal_f = ((1.0 != *rtd_Board_ID) &&
                         (!localDW->BC0_Vote1_processed));

          /* Switch: '<S253>/Switch2' incorporates:
           *  Constant: '<S253>/Constant6'
           *  DataStoreRead: '<S253>/Data Store Read5'
           *  DataStoreWrite: '<S253>/Data Store Write1'
           *  Sum: '<S253>/Plus'
           */
          if (rtb_Equal_f) {
            localDW->Board1_error_counter += 1.0;
          }

          /* End of Switch: '<S253>/Switch2' */

          /* Logic: '<S253>/AND1' incorporates:
           *  Constant: '<S253>/Constant3'
           *  DataStoreRead: '<S253>/Data Store Read2'
           *  Logic: '<S253>/NOT1'
           *  RelationalOperator: '<S253>/Equal1'
           */
          rtb_AND1_e = ((2.0 != *rtd_Board_ID) && (!localDW->BC0_Vote2_processed));

          /* Switch: '<S253>/Switch1' incorporates:
           *  Constant: '<S253>/Constant1'
           *  DataStoreRead: '<S253>/Data Store Read6'
           *  DataStoreWrite: '<S253>/Data Store Write2'
           *  Sum: '<S253>/Plus1'
           */
          if (rtb_AND1_e) {
            localDW->Board2_error_counter += 1.0;
          }

          /* End of Switch: '<S253>/Switch1' */

          /* Logic: '<S253>/AND2' incorporates:
           *  Constant: '<S253>/Constant4'
           *  DataStoreRead: '<S253>/Data Store Read3'
           *  Logic: '<S253>/NOT2'
           *  RelationalOperator: '<S253>/Equal2'
           */
          rtb_AND2_n = ((3.0 != *rtd_Board_ID) && (!localDW->BC0_Vote3_processed));

          /* Switch: '<S253>/Switch3' incorporates:
           *  Constant: '<S253>/Constant2'
           *  DataStoreRead: '<S253>/Data Store Read8'
           *  DataStoreWrite: '<S253>/Data Store Write3'
           *  Sum: '<S253>/Plus2'
           */
          if (rtb_AND2_n) {
            localDW->Board3_error_counter += 1.0;
          }

          /* End of Switch: '<S253>/Switch3' */

          /* Logic: '<S253>/NOT3' incorporates:
           *  DataStoreRead: '<S253>/Data Store Read13'
           *  Logic: '<S253>/NOT4'
           */
          rtb_AND6_d_tmp = !localDW->BC0_Sync_processed;

          /* Logic: '<S253>/AND8' incorporates:
           *  Constant: '<S253>/Constant10'
           *  Constant: '<S253>/Constant9'
           *  Logic: '<S253>/AND5'
           *  Logic: '<S253>/NOT3'
           *  RelationalOperator: '<S253>/Equal5'
           *  RelationalOperator: '<S253>/Equal6'
           */
          rtb_AND8_k = (rtb_AND6_d_tmp && ((*rtd_Master_ID == 3.0) && (3.0 !=
            *rtd_Board_ID)));

          /* Switch: '<S253>/Switch4' incorporates:
           *  Constant: '<S253>/Constant13'
           *  DataStoreRead: '<S253>/Data Store Read18'
           *  DataStoreWrite: '<S253>/Data Store Write5'
           *  Sum: '<S253>/Plus3'
           */
          if (rtb_AND8_k) {
            localDW->Board3_error_counter += 1.0;
          }

          /* End of Switch: '<S253>/Switch4' */

          /* Logic: '<S253>/AND7' incorporates:
           *  Constant: '<S253>/Constant11'
           *  Constant: '<S253>/Constant8'
           *  Logic: '<S253>/AND4'
           *  Logic: '<S253>/NOT3'
           *  RelationalOperator: '<S253>/Equal4'
           *  RelationalOperator: '<S253>/Equal7'
           */
          rtb_AND7_m = (rtb_AND6_d_tmp && ((*rtd_Master_ID == 2.0) && (2.0 !=
            *rtd_Board_ID)));

          /* Switch: '<S253>/Switch5' incorporates:
           *  Constant: '<S253>/Constant14'
           *  DataStoreRead: '<S253>/Data Store Read20'
           *  DataStoreWrite: '<S253>/Data Store Write6'
           *  Sum: '<S253>/Plus4'
           */
          if (rtb_AND7_m) {
            localDW->Board2_error_counter += 1.0;
          }

          /* End of Switch: '<S253>/Switch5' */

          /* Logic: '<S253>/AND6' incorporates:
           *  Constant: '<S253>/Constant12'
           *  Constant: '<S253>/Constant7'
           *  Logic: '<S253>/AND3'
           *  Logic: '<S253>/NOT3'
           *  RelationalOperator: '<S253>/Equal3'
           *  RelationalOperator: '<S253>/Equal8'
           */
          rtb_AND6_f = (rtb_AND6_d_tmp && ((*rtd_Master_ID == 1.0) && (1.0 !=
            *rtd_Board_ID)));

          /* Switch: '<S253>/Switch6' incorporates:
           *  Constant: '<S253>/Constant15'
           *  DataStoreRead: '<S253>/Data Store Read22'
           *  DataStoreWrite: '<S253>/Data Store Write7'
           *  Sum: '<S253>/Plus5'
           */
          if (rtb_AND6_f) {
            localDW->Board1_error_counter += 1.0;
          }

          /* End of Switch: '<S253>/Switch6' */

          /* Logic: '<S253>/OR' incorporates:
           *  DataStoreWrite: '<S253>/Data Store Write8'
           */
          localDW->Toggle_Pin_A1 = (rtb_Equal_f || rtb_AND1_e || rtb_AND2_n ||
            rtb_AND6_f || rtb_AND7_m || rtb_AND8_k);

          /* Switch: '<S254>/Switch' incorporates:
           *  Constant: '<S254>/Constant'
           *  DataStoreRead: '<S254>/Data Store Read'
           *  DataStoreRead: '<S254>/Data Store Read1'
           *  Sum: '<S254>/Plus'
           */
          if (rtb_Equal_f) {
            TM1_timeout_counter_s = localDW->BC0_TM1_timeout_counter + 1.0;
          } else {
            TM1_timeout_counter_s = localDW->BC0_TM1_timeout_counter;
          }

          /* End of Switch: '<S254>/Switch' */

          /* DataStoreWrite: '<S254>/Data Store Write' */
          localDW->BC0_TM1_timeout_counter = TM1_timeout_counter_s;

          /* Switch: '<S255>/Switch' incorporates:
           *  Constant: '<S255>/Constant'
           *  DataStoreRead: '<S255>/Data Store Read'
           *  DataStoreRead: '<S255>/Data Store Read1'
           *  Sum: '<S255>/Plus'
           */
          if (rtb_AND1_e) {
            TM2_timeout_counter_s = localDW->BC0_TM2_timeout_counter + 1.0;
          } else {
            TM2_timeout_counter_s = localDW->BC0_TM2_timeout_counter;
          }

          /* End of Switch: '<S255>/Switch' */

          /* DataStoreWrite: '<S255>/Data Store Write' */
          localDW->BC0_TM2_timeout_counter = TM2_timeout_counter_s;

          /* Switch: '<S256>/Switch' incorporates:
           *  Constant: '<S256>/Constant'
           *  DataStoreRead: '<S256>/Data Store Read'
           *  DataStoreRead: '<S256>/Data Store Read1'
           *  Sum: '<S256>/Plus'
           */
          if (rtb_AND2_n) {
            TM3_timeout_counter_s = localDW->BC0_TM3_timeout_counter + 1.0;
          } else {
            TM3_timeout_counter_s = localDW->BC0_TM3_timeout_counter;
          }

          /* End of Switch: '<S256>/Switch' */

          /* DataStoreWrite: '<S256>/Data Store Write' */
          localDW->BC0_TM3_timeout_counter = TM3_timeout_counter_s;

          /* Switch: '<S253>/Switch7' incorporates:
           *  Constant: '<S253>/Constant16'
           *  DataStoreRead: '<S253>/Data Store Read23'
           *  DataStoreWrite: '<S253>/Data Store Write9'
           *  Logic: '<S253>/AND9'
           *  RelationalOperator: '<S253>/Equal9'
           *  Sum: '<S253>/Plus6'
           */
          if (rtb_AND6_d_tmp && (*rtd_Master_ID != *rtd_Board_ID)) {
            localDW->Sync_bc0_missed_counter += 1.0;
          }

          /* End of Switch: '<S253>/Switch7' */

          /* DataStoreWrite: '<S253>/Data Store Write4' incorporates:
           *  Constant: '<S253>/Constant5'
           */
          *rtd_Toggle_Pin_A0 = true;
        }

        /* End of Outputs for SubSystem: '<S168>/Timeout and Board error counter' */
        /* End of Outputs for SubSystem: '<S161>/COMP Task - Check Timeouts' */

        /* Outputs for Enabled SubSystem: '<S161>/COMP Task - New Master' incorporates:
         *  EnablePort: '<S169>/Enable'
         */
        /* Outputs for Enabled SubSystem: '<S169>/New Master' incorporates:
         *  EnablePort: '<S257>/Enable'
         */
        if ((*rtd_Local_Ticks >= 200.0) && (*rtd_Local_Ticks < localC->Sum15) &&
            (*rtd_Local_Ticks == 200.0)) {
          /* MinMax: '<S258>/Max1' incorporates:
           *  DataStoreRead: '<S258>/Data Store Read25'
           */
          if (localDW->Votes_count.First_Board >
              localDW->Votes_count.Second_Board) {
            rtb_Switch1_f = localDW->Votes_count.First_Board;
          } else {
            rtb_Switch1_f = localDW->Votes_count.Second_Board;
          }

          if (rtb_Switch1_f <= localDW->Votes_count.Third_Board) {
            rtb_Switch1_f = localDW->Votes_count.Third_Board;
          }

          /* RelationalOperator: '<S258>/Equal' incorporates:
           *  Constant: '<S258>/Constant'
           *  DataStoreWrite: '<S257>/Data Store Write'
           *  MinMax: '<S258>/Max1'
           */
          localDW->Reset_Board = (0.0 == rtb_Switch1_f);

          /* Sum: '<S258>/Plus' incorporates:
           *  Constant: '<S258>/Constant15'
           *  DataStoreRead: '<S258>/Data Store Read25'
           *  DataStoreRead: '<S258>/Data Store Read29'
           *  RelationalOperator: '<S258>/Equal17'
           */
          rtb_Plus_j = (real_T)(1.0 == localDW->Own_Vote) +
            localDW->Votes_count.First_Board;

          /* Sum: '<S258>/Plus1' incorporates:
           *  Constant: '<S258>/Constant16'
           *  DataStoreRead: '<S258>/Data Store Read25'
           *  DataStoreRead: '<S258>/Data Store Read29'
           *  RelationalOperator: '<S258>/Equal18'
           */
          rtb_Plus1_b = (real_T)(2.0 == localDW->Own_Vote) +
            localDW->Votes_count.Second_Board;

          /* Sum: '<S258>/Plus2' incorporates:
           *  Constant: '<S258>/Constant17'
           *  DataStoreRead: '<S258>/Data Store Read25'
           *  DataStoreRead: '<S258>/Data Store Read29'
           *  RelationalOperator: '<S258>/Equal19'
           */
          rtb_Plus2_p = (real_T)(3.0 == localDW->Own_Vote) +
            localDW->Votes_count.Third_Board;

          /* MinMax: '<S258>/Max' */
          if (rtb_Plus_j > rtb_Plus1_b) {
            rtb_Switch1_f = rtb_Plus_j;
          } else {
            rtb_Switch1_f = rtb_Plus1_b;
          }

          if (rtb_Switch1_f <= rtb_Plus2_p) {
            rtb_Switch1_f = rtb_Plus2_p;
          }

          /* Find: '<S258>/Find Nonzero Elements' incorporates:
           *  Constant: '<S259>/Constant'
           *  MinMax: '<S258>/Max'
           *  RelationalOperator: '<S259>/Compare'
           *  Sum: '<S258>/Subtract'
           */
          sigIdx = 0;
          if (rtb_Plus_j - rtb_Switch1_f == 0.0) {
            rtb_FindNonzeroElements[0] = 0;
            sigIdx = 1;
          }

          if (rtb_Plus1_b - rtb_Switch1_f == 0.0) {
            rtb_FindNonzeroElements[sigIdx] = 1;
            sigIdx++;
          }

          if (rtb_Plus2_p - rtb_Switch1_f == 0.0) {
            rtb_FindNonzeroElements[sigIdx] = 2;
            sigIdx++;
          }

          localDW->FindNonzeroElements_DIMS1 = sigIdx;

          /* End of Find: '<S258>/Find Nonzero Elements' */

          /* MinMax: '<S258>/Min' */
          linIx = rtb_FindNonzeroElements[0];
          for (sigIdx = 1; sigIdx < localDW->FindNonzeroElements_DIMS1; sigIdx++)
          {
            if (linIx >= rtb_FindNonzeroElements[sigIdx]) {
              linIx = rtb_FindNonzeroElements[sigIdx];
            }
          }

          /* Sum: '<S258>/Minus' incorporates:
           *  Constant: '<S258>/Index Corrector'
           *  MinMax: '<S258>/Min'
           */
          rtb_Switch1_f = (real_T)linIx + 1.0;

          /* DataStoreWrite: '<S257>/Data Store Write13' */
          *rtd_Master_ID = rtb_Switch1_f;

          /* Switch: '<S257>/Switch16' incorporates:
           *  Constant: '<S257>/Constant10'
           *  Constant: '<S257>/Constant9'
           *  DataStoreWrite: '<S257>/Data Store Write15'
           *  RelationalOperator: '<S257>/Equal6'
           */
          if (rtb_Switch1_f == *rtd_Board_ID) {
            localDW->Role_ID = 1.0;
          } else {
            localDW->Role_ID = 2.0;
          }

          /* End of Switch: '<S257>/Switch16' */

          /* DataStoreWrite: '<S257>/Data Store Write3' incorporates:
           *  Constant: '<S257>/Constant3'
           */
          *rtd_Toggle_Pin_A0 = true;
        }

        /* End of Outputs for SubSystem: '<S169>/New Master' */
        /* End of Outputs for SubSystem: '<S161>/COMP Task - New Master' */

        /* Outputs for Enabled SubSystem: '<S161>/COMP Task - Reset Board' incorporates:
         *  EnablePort: '<S170>/Enable'
         */
        if ((*rtd_Local_Ticks >= 208.0) && (*rtd_Local_Ticks < localC->Sum17)) {
          /* DataStoreRead: '<S170>/Data Store Read' */
          reset_s = localDW->Reset_Board;

          /* Outputs for Enabled SubSystem: '<S170>/RESET Board - Return to initialization' incorporates:
           *  EnablePort: '<S260>/Enable'
           */
          if ((*rtd_Local_Ticks == 208.0) && reset_s) {
            /* DataStoreWrite: '<S260>/Data Store Write' */
            localDW->Reset_Board = localC->Cast_p;

            /* DataStoreWrite: '<S260>/Data Store Write1' */
            *rtd_New_Msg_Ready_CAN1 = localC->Cast_p;

            /* DataStoreWrite: '<S260>/Data Store Write10' */
            *rtd_New_Msg_Ready_CAN2 = localC->Cast_p;

            /* DataStoreWrite: '<S260>/Data Store Write2' */
            localDW->Initialization_flag = localC->NOT;

            /* DataStoreWrite: '<S260>/Data Store Write4' incorporates:
             *  Constant: '<S260>/Constant'
             */
            localDW->Role_ID = 0.0;

            /* DataStoreWrite: '<S260>/Data Store Write5' incorporates:
             *  Constant: '<S260>/Constant'
             */
            *rtd_Master_ID = 0.0;

            /* DataStoreWrite: '<S260>/Data Store Write6' */
            *rtd_Rx_State_CAN1 = localC->Cast6;

            /* DataStoreWrite: '<S260>/Data Store Write9' */
            *rtd_Rx_State_CAN2 = localC->Cast6;

            /* DataStoreWrite: '<S260>/Data Store Write3' incorporates:
             *  Constant: '<S260>/Constant1'
             */
            *rtd_RxID_CAN1 = 1U;

            /* DataStoreWrite: '<S260>/Data Store Write8' incorporates:
             *  Constant: '<S260>/Constant1'
             */
            *rtd_RxID_CAN2 = 1U;

            /* DataStoreWrite: '<S260>/Data Store Write7' incorporates:
             *  Constant: '<S260>/Constant3'
             */
            *rtd_Toggle_Pin_A0 = true;
          }

          /* End of Outputs for SubSystem: '<S170>/RESET Board - Return to initialization' */
        }

        /* End of Outputs for SubSystem: '<S161>/COMP Task - Reset Board' */

        /* Outputs for Enabled SubSystem: '<S161>/COMP Task - Reset Variables BC0' incorporates:
         *  EnablePort: '<S171>/Enable'
         */
        /* Outputs for Enabled SubSystem: '<S171>/Reset variables' incorporates:
         *  EnablePort: '<S261>/Enable'
         */
        if ((*rtd_Local_Ticks >= 204.0) && (*rtd_Local_Ticks < localC->Sum16) &&
            (*rtd_Local_Ticks == 204.0)) {
          /* DataStoreWrite: '<S261>/Data Store Write' */
          localDW->Desync_Positive = localC->Cast_h;

          /* DataStoreWrite: '<S261>/Data Store Write1' */
          localDW->BC0_Sync_processed = localC->Cast_h;

          /* DataStoreWrite: '<S261>/Data Store Write16' incorporates:
           *  Constant: '<S261>/Constant'
           */
          localDW->Votes_count.First_Board = 0.0;
          localDW->Votes_count.Second_Board = 0.0;
          localDW->Votes_count.Third_Board = 0.0;

          /* DataStoreWrite: '<S261>/Data Store Write2' */
          localDW->BC0_Vote1_processed = localC->Cast_h;

          /* DataStoreWrite: '<S261>/Data Store Write3' */
          localDW->BC0_Vote2_processed = localC->Cast_h;

          /* DataStoreWrite: '<S261>/Data Store Write4' */
          localDW->BC0_Vote3_processed = localC->Cast_h;

          /* DataStoreWrite: '<S261>/Data Store Write5' incorporates:
           *  Constant: '<S261>/Constant3'
           */
          *rtd_Toggle_Pin_A0 = true;
        }

        /* End of Outputs for SubSystem: '<S171>/Reset variables' */
        /* End of Outputs for SubSystem: '<S161>/COMP Task - Reset Variables BC0' */

        /* Logic: '<S161>/NOT1' incorporates:
         *  Constant: '<S161>/Constant12'
         *  Constant: '<S161>/Constant14'
         *  Constant: '<S161>/Constant25'
         *  Constant: '<S161>/Constant31'
         *  DataStoreRead: '<S161>/Data Store Read6'
         *  Logic: '<S161>/AND13'
         *  Logic: '<S161>/AND14'
         *  Logic: '<S161>/AND15'
         *  Logic: '<S161>/AND16'
         *  Logic: '<S161>/NOT3'
         *  Logic: '<S170>/AND'
         *  RelationalOperator: '<S161>/GreaterThan26'
         *  RelationalOperator: '<S161>/GreaterThan27'
         *  RelationalOperator: '<S161>/GreaterThan28'
         *  RelationalOperator: '<S161>/GreaterThan29'
         *  RelationalOperator: '<S161>/GreaterThan30'
         *  RelationalOperator: '<S161>/GreaterThan31'
         *  RelationalOperator: '<S161>/GreaterThan32'
         *  RelationalOperator: '<S161>/GreaterThan33'
         *  RelationalOperator: '<S168>/Equal'
         *  RelationalOperator: '<S169>/Equal'
         *  RelationalOperator: '<S170>/Equal2'
         *  RelationalOperator: '<S171>/Equal2'
         */
        rtb_AND2_n = !localDW->BC0_Sync_processed;

        /* Outputs for Enabled SubSystem: '<S161>/COMP Task - Sync bc0 check' incorporates:
         *  EnablePort: '<S172>/Enable'
         */
        if ((*rtd_Local_Ticks >= 40.0) && (*rtd_Local_Ticks < localC->Sum1_j) &&
            rtb_AND2_n) {
          if (!localDW->COMPTaskSyncbc0check_MODE) {
            localDW->COMPTaskSyncbc0check_MODE = true;
          }

          /* DataStoreRead: '<S172>/Data Store Read1' */
          rtb_DataStoreRead1_bw = *rtd_New_Msg_Ready_CAN1;

          /* DataStoreRead: '<S172>/Data Store Read2' */
          rtb_DataStoreRead2_e = *rtd_New_Msg_Ready_CAN2;

          /* DataStoreRead: '<S172>/Data Store Read' */
          rtb_DataStoreRead_pt = *rtd_Msg_Rx_CAN1;

          /* DataStoreRead: '<S172>/Data Store Read3' */
          rtb_DataStoreRead3_p = *rtd_Msg_Rx_CAN2;

          /* DataStoreRead: '<S172>/Data Store Read15' */
          rtb_DataStoreRead15_b = *rtd_Master_ID;

          /* RelationalOperator: '<S172>/Equal' */
          rtb_Equal_f = (*rtd_Local_Ticks == 40.0);

          /* RelationalOperator: '<S172>/Equal5' incorporates:
           *  Constant: '<S172>/Constant26'
           *  DataStoreRead: '<S172>/Data Store Read6'
           */
          rtb_AND1_e = (localDW->Role_ID == 2.0);

          /* Outputs for Enabled SubSystem: '<S172>/Process_Messages' incorporates:
           *  EnablePort: '<S262>/Enable'
           */
          if (rtb_Equal_f && rtb_AND1_e) {
            if (!localDW->Process_Messages_MODE_e) {
              localDW->Process_Messages_MODE_e = true;
            }

            /* Outputs for Enabled SubSystem: '<S262>/Demux message CAN1 and check coherence' */
            DemuxmessageCAN1andcheckcoheren(rtb_DataStoreRead1_bw,
              &rtb_DataStoreRead_pt, 0.0, rtb_DataStoreRead15_b,
              &localB->DemuxmessageCAN1andcheckcoher_g,
              &localDW->DemuxmessageCAN1andcheckcoher_g,
              &localDW->msg_count_DEBUG);

            /* End of Outputs for SubSystem: '<S262>/Demux message CAN1 and check coherence' */

            /* Outputs for Enabled SubSystem: '<S262>/Demux message CAN1 and check coherence1' */
            DemuxmessageCAN1andcheckcoher_p(rtb_DataStoreRead2_e,
              &rtb_DataStoreRead3_p, 0.0, rtb_DataStoreRead15_b,
              &localB->DemuxmessageCAN1andcheckcohe_p3,
              &localDW->DemuxmessageCAN1andcheckcohe_p3,
              &localDW->msg_count_DEBUG);

            /* End of Outputs for SubSystem: '<S262>/Demux message CAN1 and check coherence1' */

            /* Switch: '<S262>/Switch' incorporates:
             *  Constant: '<S172>/Constant'
             *  DataStoreWrite: '<S262>/Data Store Write'
             */
            if (localB->DemuxmessageCAN1andcheckcoher_g.AND) {
              localDW->Msg_Rx_d.Buffer_1 =
                localB->DemuxmessageCAN1andcheckcoher_g.Constant;
              localDW->Msg_Rx_d.Buffer_2 =
                localB->DemuxmessageCAN1andcheckcoher_g.Buffer_2;
              localDW->Msg_Rx_d.Buffer_3 =
                localB->DemuxmessageCAN1andcheckcoher_g.Buffer_3;
              localDW->Msg_Rx_d.Buffer_4 =
                localB->DemuxmessageCAN1andcheckcoher_g.Buffer_4;
              localDW->Msg_Rx_d.Buffer_5 =
                localB->DemuxmessageCAN1andcheckcoher_g.Buffer_5;
              localDW->Msg_Rx_d.Buffer_6 =
                localB->DemuxmessageCAN1andcheckcoher_g.Buffer_6;
              localDW->Msg_Rx_d.Buffer_7 =
                localB->DemuxmessageCAN1andcheckcoher_g.Buffer_7;
              localDW->Msg_Rx_d.Buffer_8 =
                localB->DemuxmessageCAN1andcheckcoher_g.Buffer_8;
            } else {
              localDW->Msg_Rx_d.Buffer_1 =
                localB->DemuxmessageCAN1andcheckcohe_p3.Constant;
              localDW->Msg_Rx_d.Buffer_2 =
                localB->DemuxmessageCAN1andcheckcohe_p3.Buffer_2;
              localDW->Msg_Rx_d.Buffer_3 =
                localB->DemuxmessageCAN1andcheckcohe_p3.Buffer_3;
              localDW->Msg_Rx_d.Buffer_4 =
                localB->DemuxmessageCAN1andcheckcohe_p3.Buffer_4;
              localDW->Msg_Rx_d.Buffer_5 =
                localB->DemuxmessageCAN1andcheckcohe_p3.Buffer_5;
              localDW->Msg_Rx_d.Buffer_6 =
                localB->DemuxmessageCAN1andcheckcohe_p3.Buffer_6;
              localDW->Msg_Rx_d.Buffer_7 =
                localB->DemuxmessageCAN1andcheckcohe_p3.Buffer_7;
              localDW->Msg_Rx_d.Buffer_8 =
                localB->DemuxmessageCAN1andcheckcohe_p3.Buffer_8;
            }

            /* End of Switch: '<S262>/Switch' */

            /* Logic: '<S262>/OR' incorporates:
             *  DataStoreWrite: '<S262>/Data Store Write2'
             */
            localDW->new_msg_Rx_l = (localB->DemuxmessageCAN1andcheckcoher_g.AND
              || localB->DemuxmessageCAN1andcheckcohe_p3.AND);

            /* Outputs for Enabled SubSystem: '<S262>/Desync calculation' incorporates:
             *  EnablePort: '<S266>/Enable'
             */
            if (localDW->new_msg_Rx_l) {
              /* Switch: '<S266>/Switch1' incorporates:
               *  Constant: '<S161>/Constant'
               *  Constant: '<S266>/Constant'
               *  Constant: '<S266>/Constant1'
               *  Constant: '<S266>/delay_estimation_1'
               *  Constant: '<S266>/delay_estimation_2'
               *  Product: '<S266>/Multiply'
               *  Product: '<S266>/Multiply1'
               *  Sum: '<S266>/Minus'
               *  Sum: '<S266>/Minus1'
               *  Sum: '<S266>/Sum'
               *  Sum: '<S266>/Sum1'
               */
              if (localB->DemuxmessageCAN1andcheckcoher_g.AND) {
                rtb_Switch1_f = ((COMM_Phase1 * (real_T)
                                  localB->DemuxmessageCAN1andcheckcoher_g.BitShift1_mg.y
                                  + 0.0) + 3.0) - (real_T)*rtd_Msg_Rx_Ticks_CAN1;
              } else {
                rtb_Switch1_f = ((COMM_Phase2 * (real_T)
                                  localB->DemuxmessageCAN1andcheckcohe_p3.BitShift1_e.y
                                  + 0.0) + 3.0) - (real_T)*rtd_Msg_Rx_Ticks_CAN2;
              }

              /* End of Switch: '<S266>/Switch1' */

              /* Saturate: '<S266>/Saturation' */
              if (rtb_Switch1_f > 15.0) {
                Desync_Sync_bc0_s = 15.0;
              } else if (rtb_Switch1_f < (-15.0)) {
                Desync_Sync_bc0_s = (-15.0);
              } else {
                Desync_Sync_bc0_s = rtb_Switch1_f;
              }

              /* End of Saturate: '<S266>/Saturation' */

              /* DataStoreWrite: '<S266>/Data Store Write1' */
              localDW->Desync_Ticks = Desync_Sync_bc0_s;
            }

            /* End of Outputs for SubSystem: '<S262>/Desync calculation' */

            /* DataStoreWrite: '<S262>/Data Store Write3' incorporates:
             *  Constant: '<S262>/Constant2'
             *  DataStoreWrite: '<S262>/Data Store Write2'
             */
            *rtd_Toggle_Pin_A0 = true;
          } else {
            if (localDW->Process_Messages_MODE_e) {
              /* Disable for Enabled SubSystem: '<S262>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_g.DemuxmessageCAN1andcheckcoher_f)
              {
                DemuxmessageCAN1andchec_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_g,
                   &localDW->DemuxmessageCAN1andcheckcoher_g);
              }

              /* End of Disable for SubSystem: '<S262>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S262>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcohe_p3.DemuxmessageCAN1andcheckcoher_m)
              {
                DemuxmessageCAN1andch_l_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_p3,
                   &localDW->DemuxmessageCAN1andcheckcohe_p3);
              }

              /* End of Disable for SubSystem: '<S262>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE_e = false;
            }
          }

          /* End of Outputs for SubSystem: '<S172>/Process_Messages' */

          /* Logic: '<S172>/AND1' incorporates:
           *  Constant: '<S172>/Constant'
           *  DataStoreWrite: '<S262>/Data Store Write2'
           *  Logic: '<S172>/AND'
           *  Logic: '<S172>/NOT'
           */
          rtb_AND1_ml = (rtb_Equal_f && (!rtb_AND1_e));

          /* Outputs for Enabled SubSystem: '<S172>/Reset Tx msg counter' */
          ResetTxmsgcounter(rtb_AND1_ml, rtd_Tx_msg_count_CAN1,
                            rtd_Tx_msg_count_CAN2);

          /* End of Outputs for SubSystem: '<S172>/Reset Tx msg counter' */
        } else {
          if (localDW->COMPTaskSyncbc0check_MODE) {
            /* Disable for Enabled SubSystem: '<S172>/Process_Messages' */
            if (localDW->Process_Messages_MODE_e) {
              /* Disable for Enabled SubSystem: '<S262>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_g.DemuxmessageCAN1andcheckcoher_f)
              {
                DemuxmessageCAN1andchec_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_g,
                   &localDW->DemuxmessageCAN1andcheckcoher_g);
              }

              /* End of Disable for SubSystem: '<S262>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S262>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcohe_p3.DemuxmessageCAN1andcheckcoher_m)
              {
                DemuxmessageCAN1andch_l_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_p3,
                   &localDW->DemuxmessageCAN1andcheckcohe_p3);
              }

              /* End of Disable for SubSystem: '<S262>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE_e = false;
            }

            /* End of Disable for SubSystem: '<S172>/Process_Messages' */
            localDW->COMPTaskSyncbc0check_MODE = false;
          }
        }

        /* End of Outputs for SubSystem: '<S161>/COMP Task - Sync bc0 check' */

        /* Outputs for Enabled SubSystem: '<S161>/COMP Task - Update LT' incorporates:
         *  EnablePort: '<S173>/Enable'
         */
        if ((*rtd_Local_Ticks >= 44.0) && (*rtd_Local_Ticks < localC->Sum2_n) &&
            rtb_AND2_n) {
          /* Outputs for Enabled SubSystem: '<S173>/LA - Ensemble precision' incorporates:
           *  EnablePort: '<S291>/Enable'
           */
          if ((*rtd_Local_Ticks == 44.0) && (1.0 != 0.0)) {
            /* DataStoreWrite: '<S291>/Data Store Write1' incorporates:
             *  Constant: '<S291>/Constant2'
             */
            localDW->Toggle_Pin_D10 = true;
          }

          /* End of Outputs for SubSystem: '<S173>/LA - Ensemble precision' */

          /* Outputs for Enabled SubSystem: '<S173>/Local Time Update' incorporates:
           *  EnablePort: '<S292>/Enable'
           */
          if ((*rtd_Local_Ticks == 46.0) && (localDW->Role_ID == 2.0) &&
              localDW->new_msg_Rx_l) {
            /* RelationalOperator: '<S292>/GreaterThan' incorporates:
             *  Constant: '<S292>/Constant4'
             *  DataStoreRead: '<S292>/Data Store Read1'
             *  DataStoreWrite: '<S292>/Data Store Write'
             */
            localDW->Desync_Positive = (localDW->Desync_Ticks > 0.0);

            /* Logic: '<S292>/NOT' incorporates:
             *  DataStoreWrite: '<S292>/Data Store Write'
             */
            rtb_NOT_d = !localDW->Desync_Positive;

            /* Outputs for Enabled SubSystem: '<S292>/Desync_Negative' */
            Desync_Negative(rtb_NOT_d, 44.0, &localDW->Desync_Ticks,
                            rtd_Local_Ticks);

            /* End of Outputs for SubSystem: '<S292>/Desync_Negative' */

            /* DataStoreWrite: '<S292>/Data Store Write13' incorporates:
             *  Constant: '<S292>/Constant3'
             */
            localDW->BC0_Sync_processed = true;

            /* DataStoreWrite: '<S292>/Data Store Write3' incorporates:
             *  Constant: '<S292>/Constant1'
             */
            *rtd_Toggle_Pin_A0 = true;
          }

          /* End of Outputs for SubSystem: '<S173>/Local Time Update' */
        }

        /* End of Outputs for SubSystem: '<S161>/COMP Task - Update LT' */

        /* Outputs for Enabled SubSystem: '<S161>/COMP Task - Vote Decision' incorporates:
         *  EnablePort: '<S174>/Enable'
         */
        /* Outputs for Enabled SubSystem: '<S174>/Vote Decision' incorporates:
         *  EnablePort: '<S294>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 48.0) && (rtb_DataStoreRead8_c <
             localC->Sum3) && (*rtd_Local_Ticks == 48.0)) {
          /* Switch: '<S295>/Switch' incorporates:
           *  Constant: '<S294>/Constant'
           *  Constant: '<S295>/MAX error count'
           *  DataStoreRead: '<S294>/Data Store Read'
           *  DataStoreRead: '<S294>/Data Store Read1'
           *  Logic: '<S295>/AND'
           *  Logic: '<S295>/NOT'
           *  Logic: '<S295>/OR'
           *  RelationalOperator: '<S295>/Equal1'
           *  RelationalOperator: '<S295>/Equal2'
           */
          if ((1.0 == *rtd_Board_ID) || ((*rtd_Master_ID == 1.0) &&
               (!localDW->BC0_Sync_processed))) {
            rtb_Switch1_f = 4294967295U;
          } else {
            rtb_Switch1_f = localDW->Board1_error_counter;
          }

          /* End of Switch: '<S295>/Switch' */

          /* Switch: '<S296>/Switch' incorporates:
           *  Constant: '<S294>/Constant1'
           *  Constant: '<S296>/MAX error count'
           *  DataStoreRead: '<S294>/Data Store Read'
           *  DataStoreRead: '<S294>/Data Store Read2'
           *  Logic: '<S296>/AND'
           *  Logic: '<S296>/NOT'
           *  Logic: '<S296>/OR'
           *  RelationalOperator: '<S296>/Equal1'
           *  RelationalOperator: '<S296>/Equal2'
           */
          if ((2.0 == *rtd_Board_ID) || ((*rtd_Master_ID == 2.0) &&
               (!localDW->BC0_Sync_processed))) {
            rtb_Plus_j = 4294967295U;
          } else {
            rtb_Plus_j = localDW->Board2_error_counter;
          }

          /* End of Switch: '<S296>/Switch' */

          /* Switch: '<S297>/Switch' incorporates:
           *  Constant: '<S294>/Constant2'
           *  Constant: '<S297>/MAX error count'
           *  DataStoreRead: '<S294>/Data Store Read'
           *  DataStoreRead: '<S294>/Data Store Read3'
           *  Logic: '<S297>/AND'
           *  Logic: '<S297>/NOT'
           *  Logic: '<S297>/OR'
           *  RelationalOperator: '<S297>/Equal1'
           *  RelationalOperator: '<S297>/Equal2'
           */
          if ((3.0 == *rtd_Board_ID) || ((*rtd_Master_ID == 3.0) &&
               (!localDW->BC0_Sync_processed))) {
            rtb_Plus1_b = 4294967295U;
          } else {
            rtb_Plus1_b = localDW->Board3_error_counter;
          }

          /* End of Switch: '<S297>/Switch' */

          /* MinMax: '<S294>/Max' */
          if (rtb_Switch1_f < rtb_Plus_j) {
            rtb_Plus2_p = rtb_Switch1_f;
          } else {
            rtb_Plus2_p = rtb_Plus_j;
          }

          if (rtb_Plus2_p < rtb_Plus1_b) {
            rtb_Plus1_b = rtb_Plus2_p;
          }

          /* End of MinMax: '<S294>/Max' */

          /* Switch: '<S294>/Switch5' incorporates:
           *  DataStoreRead: '<S294>/Data Store Read'
           *  RelationalOperator: '<S294>/Equal'
           *  RelationalOperator: '<S294>/Equal5'
           *  Switch: '<S294>/Switch6'
           *  Switch: '<S294>/Switch7'
           */
          if (localDW->BC0_Sync_processed) {
            /* DataTypeConversion: '<S294>/Cast' */
            Vote_s = (uint8_T)*rtd_Master_ID;
          } else if (rtb_Switch1_f == rtb_Plus1_b) {
            /* Switch: '<S294>/Switch6' incorporates:
             *  Constant: '<S294>/Constant4'
             *  DataTypeConversion: '<S294>/Cast'
             */
            Vote_s = (uint8_T)1.0;
          } else if (rtb_Plus1_b == rtb_Plus_j) {
            /* Switch: '<S294>/Switch7' incorporates:
             *  Constant: '<S294>/Constant5'
             *  DataTypeConversion: '<S294>/Cast'
             */
            Vote_s = (uint8_T)2.0;
          } else {
            /* DataTypeConversion: '<S294>/Cast' incorporates:
             *  Constant: '<S294>/Constant6'
             *  Switch: '<S294>/Switch7'
             */
            Vote_s = (uint8_T)3.0;
          }

          /* End of Switch: '<S294>/Switch5' */

          /* DataStoreWrite: '<S294>/Data Store Write5' */
          localDW->Own_Vote = Vote_s;

          /* DataStoreWrite: '<S294>/Data Store Write3' incorporates:
           *  Constant: '<S294>/Constant3'
           */
          *rtd_Toggle_Pin_A0 = true;
        }

        /* End of Outputs for SubSystem: '<S174>/Vote Decision' */
        /* End of Outputs for SubSystem: '<S161>/COMP Task - Vote Decision' */

        /* Outputs for Enabled SubSystem: '<S161>/COMP Task - Vote1 Count' incorporates:
         *  EnablePort: '<S175>/Enable'
         */
        /* Outputs for Enabled SubSystem: '<S175>/Vote Count 1' incorporates:
         *  EnablePort: '<S298>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 96.0) && (rtb_DataStoreRead8_c <
             localC->Sum7) && ((*rtd_Local_Ticks == 96.0) &&
                               localDW->new_msg_Rx_l && (*rtd_Board_ID != 1.0)))
        {
          /* DataStoreWrite: '<S298>/Data Store Write12' incorporates:
           *  Constant: '<S298>/Constant10'
           *  Constant: '<S298>/Constant11'
           *  Constant: '<S298>/Constant12'
           *  DataStoreRead: '<S175>/Data Store Read4'
           *  DataStoreRead: '<S298>/Data Store Read15'
           *  DataStoreRead: '<S298>/Data Store Read16'
           *  DataStoreRead: '<S298>/Data Store Read17'
           *  RelationalOperator: '<S298>/Equal13'
           *  RelationalOperator: '<S298>/Equal15'
           *  RelationalOperator: '<S298>/Equal17'
           *  Sum: '<S298>/Add'
           *  Sum: '<S298>/Add1'
           *  Sum: '<S298>/Add2'
           */
          localDW->Votes_count.Third_Board += (real_T)(3.0 ==
            localDW->Msg_Rx_d.Buffer_2);
          localDW->Votes_count.First_Board += (real_T)(1.0 ==
            localDW->Msg_Rx_d.Buffer_2);
          localDW->Votes_count.Second_Board += (real_T)(2.0 ==
            localDW->Msg_Rx_d.Buffer_2);

          /* DataStoreWrite: '<S298>/Data Store Write3' incorporates:
           *  Constant: '<S298>/Constant1'
           */
          *rtd_Toggle_Pin_A0 = true;

          /* DataStoreWrite: '<S298>/Data Store Write' incorporates:
           *  Constant: '<S298>/HIGH'
           */
          localDW->BC0_Vote1_processed = true;
        }

        /* End of Outputs for SubSystem: '<S175>/Vote Count 1' */
        /* End of Outputs for SubSystem: '<S161>/COMP Task - Vote1 Count' */

        /* Outputs for Enabled SubSystem: '<S161>/COMP Task - Vote1 check' incorporates:
         *  EnablePort: '<S176>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 92.0) && (rtb_DataStoreRead8_c <
             localC->Sum6)) {
          if (!localDW->COMPTaskVote1check_MODE) {
            localDW->COMPTaskVote1check_MODE = true;
          }

          /* DataStoreRead: '<S176>/Data Store Read1' */
          rtb_DataStoreRead1_il = *rtd_New_Msg_Ready_CAN1;

          /* DataStoreRead: '<S176>/Data Store Read2' */
          rtb_DataStoreRead2_oh = *rtd_New_Msg_Ready_CAN2;

          /* DataStoreRead: '<S176>/Data Store Read' */
          rtb_DataStoreRead_m3 = *rtd_Msg_Rx_CAN1;

          /* DataStoreRead: '<S176>/Data Store Read3' */
          rtb_DataStoreRead3_kw = *rtd_Msg_Rx_CAN2;

          /* RelationalOperator: '<S176>/Equal' */
          rtb_Equal_f = (*rtd_Local_Ticks == 92.0);

          /* RelationalOperator: '<S176>/Equal6' incorporates:
           *  Constant: '<S176>/Constant2'
           */
          rtb_AND1_e = (*rtd_Board_ID != 1.0);

          /* Logic: '<S176>/AND' */
          rtb_AND_hx = (rtb_Equal_f && rtb_AND1_e);

          /* Outputs for Enabled SubSystem: '<S176>/Process_Messages1' */
          Process_Messages1(rtb_AND_hx, rtb_DataStoreRead1_il,
                            rtb_DataStoreRead2_oh, &rtb_DataStoreRead_m3,
                            &rtb_DataStoreRead3_kw, 1.0,
                            &localB->Process_Messages1_c,
                            &localDW->Process_Messages1_c, &localDW->Msg_Rx_d,
                            rtd_Toggle_Pin_A0, &localDW->msg_count_DEBUG,
                            &localDW->new_msg_Rx_l);

          /* End of Outputs for SubSystem: '<S176>/Process_Messages1' */

          /* Logic: '<S176>/AND1' incorporates:
           *  Constant: '<S176>/Constant1'
           *  Logic: '<S176>/NOT'
           */
          rtb_AND1_km = (rtb_Equal_f && (!rtb_AND1_e));

          /* Outputs for Enabled SubSystem: '<S176>/Reset Tx msg counter' */
          ResetTxmsgcounter(rtb_AND1_km, rtd_Tx_msg_count_CAN1,
                            rtd_Tx_msg_count_CAN2);

          /* End of Outputs for SubSystem: '<S176>/Reset Tx msg counter' */
        } else {
          if (localDW->COMPTaskVote1check_MODE) {
            /* Disable for Enabled SubSystem: '<S176>/Process_Messages1' */
            if (localDW->Process_Messages1_c.Process_Messages1_MODE) {
              Process_Messages1_Disable(&localB->Process_Messages1_c,
                &localDW->Process_Messages1_c);
            }

            /* End of Disable for SubSystem: '<S176>/Process_Messages1' */
            localDW->COMPTaskVote1check_MODE = false;
          }
        }

        /* End of Outputs for SubSystem: '<S161>/COMP Task - Vote1 check' */

        /* Outputs for Enabled SubSystem: '<S161>/COMP Task - Vote2 Count' incorporates:
         *  EnablePort: '<S177>/Enable'
         */
        /* Outputs for Enabled SubSystem: '<S177>/Vote Count 2' incorporates:
         *  EnablePort: '<S327>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 144.0) && (rtb_DataStoreRead8_c <
             localC->Sum10) && ((*rtd_Local_Ticks == 144.0) &&
                                localDW->new_msg_Rx_l && (*rtd_Board_ID != 2.0)))
        {
          /* DataStoreWrite: '<S327>/Data Store Write12' incorporates:
           *  Constant: '<S327>/Constant10'
           *  Constant: '<S327>/Constant11'
           *  Constant: '<S327>/Constant12'
           *  DataStoreRead: '<S177>/Data Store Read4'
           *  DataStoreRead: '<S327>/Data Store Read15'
           *  DataStoreRead: '<S327>/Data Store Read16'
           *  DataStoreRead: '<S327>/Data Store Read17'
           *  RelationalOperator: '<S327>/Equal13'
           *  RelationalOperator: '<S327>/Equal15'
           *  RelationalOperator: '<S327>/Equal17'
           *  Sum: '<S327>/Add'
           *  Sum: '<S327>/Add1'
           *  Sum: '<S327>/Add2'
           */
          localDW->Votes_count.Third_Board += (real_T)(3.0 ==
            localDW->Msg_Rx_d.Buffer_2);
          localDW->Votes_count.First_Board += (real_T)(1.0 ==
            localDW->Msg_Rx_d.Buffer_2);
          localDW->Votes_count.Second_Board += (real_T)(2.0 ==
            localDW->Msg_Rx_d.Buffer_2);

          /* DataStoreWrite: '<S327>/Data Store Write3' incorporates:
           *  Constant: '<S327>/Constant1'
           */
          *rtd_Toggle_Pin_A0 = true;

          /* DataStoreWrite: '<S327>/Data Store Write' incorporates:
           *  Constant: '<S327>/HIGH'
           */
          localDW->BC0_Vote2_processed = true;
        }

        /* End of Outputs for SubSystem: '<S177>/Vote Count 2' */
        /* End of Outputs for SubSystem: '<S161>/COMP Task - Vote2 Count' */

        /* Outputs for Enabled SubSystem: '<S161>/COMP Task - Vote2 check' incorporates:
         *  EnablePort: '<S178>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 140.0) && (rtb_DataStoreRead8_c <
             localC->Sum9)) {
          if (!localDW->COMPTaskVote2check_MODE) {
            localDW->COMPTaskVote2check_MODE = true;
          }

          /* DataStoreRead: '<S178>/Data Store Read1' */
          rtb_DataStoreRead1_j2 = *rtd_New_Msg_Ready_CAN1;

          /* DataStoreRead: '<S178>/Data Store Read2' */
          rtb_DataStoreRead2_l = *rtd_New_Msg_Ready_CAN2;

          /* DataStoreRead: '<S178>/Data Store Read' */
          rtb_DataStoreRead_ak = *rtd_Msg_Rx_CAN1;

          /* DataStoreRead: '<S178>/Data Store Read3' */
          rtb_DataStoreRead3_e = *rtd_Msg_Rx_CAN2;

          /* RelationalOperator: '<S178>/Equal' */
          rtb_Equal_f = (*rtd_Local_Ticks == 140.0);

          /* RelationalOperator: '<S178>/Equal6' incorporates:
           *  Constant: '<S178>/Constant2'
           */
          rtb_AND1_e = (*rtd_Board_ID != 2.0);

          /* Logic: '<S178>/AND' */
          rtb_AND_cyo = (rtb_Equal_f && rtb_AND1_e);

          /* Outputs for Enabled SubSystem: '<S178>/Process_Messages' */
          Process_Messages1(rtb_AND_cyo, rtb_DataStoreRead1_j2,
                            rtb_DataStoreRead2_l, &rtb_DataStoreRead_ak,
                            &rtb_DataStoreRead3_e, 2.0,
                            &localB->Process_Messages_g,
                            &localDW->Process_Messages_g, &localDW->Msg_Rx_d,
                            rtd_Toggle_Pin_A0, &localDW->msg_count_DEBUG,
                            &localDW->new_msg_Rx_l);

          /* End of Outputs for SubSystem: '<S178>/Process_Messages' */

          /* Logic: '<S178>/AND1' incorporates:
           *  Constant: '<S178>/Constant1'
           *  Logic: '<S178>/NOT'
           */
          rtb_AND1_bt = (rtb_Equal_f && (!rtb_AND1_e));

          /* Outputs for Enabled SubSystem: '<S178>/Reset Tx msg counter' */
          ResetTxmsgcounter(rtb_AND1_bt, rtd_Tx_msg_count_CAN1,
                            rtd_Tx_msg_count_CAN2);

          /* End of Outputs for SubSystem: '<S178>/Reset Tx msg counter' */
        } else {
          if (localDW->COMPTaskVote2check_MODE) {
            /* Disable for Enabled SubSystem: '<S178>/Process_Messages' */
            if (localDW->Process_Messages_g.Process_Messages1_MODE) {
              Process_Messages1_Disable(&localB->Process_Messages_g,
                &localDW->Process_Messages_g);
            }

            /* End of Disable for SubSystem: '<S178>/Process_Messages' */
            localDW->COMPTaskVote2check_MODE = false;
          }
        }

        /* End of Outputs for SubSystem: '<S161>/COMP Task - Vote2 check' */

        /* Outputs for Enabled SubSystem: '<S161>/COMP Task - Vote3 Count' incorporates:
         *  EnablePort: '<S179>/Enable'
         */
        /* Outputs for Enabled SubSystem: '<S179>/Vote Count 3' incorporates:
         *  EnablePort: '<S356>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 192.0) && (rtb_DataStoreRead8_c <
             localC->Sum11) && ((*rtd_Local_Ticks == 192.0) &&
                                localDW->new_msg_Rx_l && (*rtd_Board_ID != 3.0)))
        {
          /* DataStoreWrite: '<S356>/Data Store Write12' incorporates:
           *  Constant: '<S356>/Constant10'
           *  Constant: '<S356>/Constant11'
           *  Constant: '<S356>/Constant12'
           *  DataStoreRead: '<S179>/Data Store Read4'
           *  DataStoreRead: '<S356>/Data Store Read15'
           *  DataStoreRead: '<S356>/Data Store Read16'
           *  DataStoreRead: '<S356>/Data Store Read17'
           *  RelationalOperator: '<S356>/Equal13'
           *  RelationalOperator: '<S356>/Equal15'
           *  RelationalOperator: '<S356>/Equal17'
           *  Sum: '<S356>/Add'
           *  Sum: '<S356>/Add1'
           *  Sum: '<S356>/Add2'
           */
          localDW->Votes_count.Third_Board += (real_T)(3.0 ==
            localDW->Msg_Rx_d.Buffer_2);
          localDW->Votes_count.First_Board += (real_T)(1.0 ==
            localDW->Msg_Rx_d.Buffer_2);
          localDW->Votes_count.Second_Board += (real_T)(2.0 ==
            localDW->Msg_Rx_d.Buffer_2);

          /* DataStoreWrite: '<S356>/Data Store Write3' incorporates:
           *  Constant: '<S356>/Constant1'
           */
          *rtd_Toggle_Pin_A0 = true;

          /* DataStoreWrite: '<S356>/Data Store Write' incorporates:
           *  Constant: '<S356>/HIGH'
           */
          localDW->BC0_Vote3_processed = true;
        }

        /* End of Outputs for SubSystem: '<S179>/Vote Count 3' */
        /* End of Outputs for SubSystem: '<S161>/COMP Task - Vote3 Count' */

        /* Outputs for Enabled SubSystem: '<S161>/COMP Task - Vote3 check' incorporates:
         *  EnablePort: '<S180>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 188.0) && (rtb_DataStoreRead8_c <
             localC->Sum13)) {
          if (!localDW->COMPTaskVote3check_MODE) {
            localDW->COMPTaskVote3check_MODE = true;
          }

          /* DataStoreRead: '<S180>/Data Store Read1' */
          rtb_DataStoreRead1_ax = *rtd_New_Msg_Ready_CAN1;

          /* DataStoreRead: '<S180>/Data Store Read2' */
          rtb_DataStoreRead2_ft = *rtd_New_Msg_Ready_CAN2;

          /* DataStoreRead: '<S180>/Data Store Read' */
          rtb_DataStoreRead_ec = *rtd_Msg_Rx_CAN1;

          /* DataStoreRead: '<S180>/Data Store Read3' */
          rtb_DataStoreRead3_j5 = *rtd_Msg_Rx_CAN2;

          /* RelationalOperator: '<S180>/Equal' */
          rtb_Equal_f = (*rtd_Local_Ticks == 188.0);

          /* RelationalOperator: '<S180>/Equal6' incorporates:
           *  Constant: '<S180>/Constant2'
           */
          rtb_AND1_e = (*rtd_Board_ID != 3.0);

          /* Logic: '<S180>/AND' */
          rtb_AND_c = (rtb_Equal_f && rtb_AND1_e);

          /* Outputs for Enabled SubSystem: '<S180>/Process_Messages' */
          Process_Messages1(rtb_AND_c, rtb_DataStoreRead1_ax,
                            rtb_DataStoreRead2_ft, &rtb_DataStoreRead_ec,
                            &rtb_DataStoreRead3_j5, 3.0,
                            &localB->Process_Messages_gc,
                            &localDW->Process_Messages_gc, &localDW->Msg_Rx_d,
                            rtd_Toggle_Pin_A0, &localDW->msg_count_DEBUG,
                            &localDW->new_msg_Rx_l);

          /* End of Outputs for SubSystem: '<S180>/Process_Messages' */

          /* Logic: '<S180>/AND1' incorporates:
           *  Constant: '<S180>/Constant1'
           *  Logic: '<S180>/NOT'
           */
          rtb_AND1_d = (rtb_Equal_f && (!rtb_AND1_e));

          /* Outputs for Enabled SubSystem: '<S180>/Reset Tx msg counter' */
          ResetTxmsgcounter(rtb_AND1_d, rtd_Tx_msg_count_CAN1,
                            rtd_Tx_msg_count_CAN2);

          /* End of Outputs for SubSystem: '<S180>/Reset Tx msg counter' */
        } else {
          if (localDW->COMPTaskVote3check_MODE) {
            /* Disable for Enabled SubSystem: '<S180>/Process_Messages' */
            if (localDW->Process_Messages_gc.Process_Messages1_MODE) {
              Process_Messages1_Disable(&localB->Process_Messages_gc,
                &localDW->Process_Messages_gc);
            }

            /* End of Disable for SubSystem: '<S180>/Process_Messages' */
            localDW->COMPTaskVote3check_MODE = false;
          }
        }

        /* End of Outputs for SubSystem: '<S161>/COMP Task - Vote3 check' */

        /* Outputs for Enabled SubSystem: '<S161>/COMM Task - Sync bc 0' incorporates:
         *  EnablePort: '<S164>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 0.0) && (rtb_DataStoreRead8_c <
             localC->Sum4_p) && (!localDW->BC0_Sync_processed)) {
          if (!localDW->COMMTaskSyncbc0_MODE) {
            localDW->COMMTaskSyncbc0_MODE = true;
          }

          /* RelationalOperator: '<S164>/Equal1' incorporates:
           *  Constant: '<S164>/Constant2'
           *  DataStoreRead: '<S164>/Data Store Read1'
           */
          rtb_Equal1_fp = (localDW->Role_ID == 1.0);

          /* Logic: '<S164>/NOT' */
          rtb_NOT_k = !rtb_Equal1_fp;

          /* Outputs for Enabled SubSystem: '<S164>/Reception substasks' */
          Receptionsubstasks(rtb_NOT_k, 0.0, &localB->Receptionsubstasks_h,
                             &localC->Receptionsubstasks_h,
                             &localDW->Receptionsubstasks_h, rtd_Local_Ticks,
                             &localDW->Msg_Rx_d, rtd_New_Msg_Ready_CAN1,
                             rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN1,
                             rtd_RxID_CAN2, rtd_Rx_State_CAN1, rtd_Rx_State_CAN2,
                             &localDW->new_msg_Rx_l);

          /* End of Outputs for SubSystem: '<S164>/Reception substasks' */

          /* Outputs for Enabled SubSystem: '<S164>/Transmission subtasks' */
          Transmissionsubtasks(rtb_Equal1_fp, 0.0,
                               &localB->Transmissionsubtasks_l,
                               &localC->Transmissionsubtasks_l,
                               &localDW->Transmissionsubtasks_l, rtd_Board_ID,
                               rtd_Local_Ticks, rtd_Msg_Tx_CAN1, rtd_Msg_Tx_CAN2,
                               rtd_TxID_CAN1, rtd_TxID_CAN2,
                               rtd_Tx_msg_count_CAN1, rtd_Tx_msg_count_CAN2,
                               &localDW->basic_cycle_count);

          /* End of Outputs for SubSystem: '<S164>/Transmission subtasks' */
        } else {
          if (localDW->COMMTaskSyncbc0_MODE) {
            /* Disable for Enabled SubSystem: '<S164>/Reception substasks' */
            if (localDW->Receptionsubstasks_h.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_h,
                &localDW->Receptionsubstasks_h);
            }

            /* End of Disable for SubSystem: '<S164>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S164>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_l.Transmissionsubtasks_MODE) {
              Transmissionsubtasks_Disable(&localB->Transmissionsubtasks_l,
                &localDW->Transmissionsubtasks_l);
            }

            /* End of Disable for SubSystem: '<S164>/Transmission subtasks' */

            /* Disable for Outport: '<S164>/Send CAN1' */
            localB->Transmissionsubtasks_l.Equal7_a = false;

            /* Disable for Outport: '<S164>/Receive CAN1' */
            localB->Receptionsubstasks_h.AND = false;

            /* Disable for Outport: '<S164>/Send CAN2' */
            localB->Transmissionsubtasks_l.Equal7 = false;

            /* Disable for Outport: '<S164>/Receive CAN2' */
            localB->Receptionsubstasks_h.AND1 = false;
            localDW->COMMTaskSyncbc0_MODE = false;
          }
        }

        /* End of Outputs for SubSystem: '<S161>/COMM Task - Sync bc 0' */

        /* Outputs for Enabled SubSystem: '<S161>/COMM Task - Vote1' incorporates:
         *  EnablePort: '<S165>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 52.0) && (rtb_DataStoreRead8_c <
             localC->Sum5)) {
          if (!localDW->COMMTaskVote1_MODE) {
            localDW->COMMTaskVote1_MODE = true;
          }

          /* RelationalOperator: '<S165>/Equal2' incorporates:
           *  Constant: '<S165>/Constant3'
           */
          rtb_Equal2_d = (*rtd_Board_ID == 1.0);

          /* Logic: '<S165>/NOT' */
          rtb_NOT_im = !rtb_Equal2_d;

          /* Outputs for Enabled SubSystem: '<S165>/Reception substasks' */
          Receptionsubstasks(rtb_NOT_im, 52.0, &localB->Receptionsubstasks_k,
                             &localC->Receptionsubstasks_k,
                             &localDW->Receptionsubstasks_k, rtd_Local_Ticks,
                             &localDW->Msg_Rx_d, rtd_New_Msg_Ready_CAN1,
                             rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN1,
                             rtd_RxID_CAN2, rtd_Rx_State_CAN1, rtd_Rx_State_CAN2,
                             &localDW->new_msg_Rx_l);

          /* End of Outputs for SubSystem: '<S165>/Reception substasks' */

          /* Outputs for Enabled SubSystem: '<S165>/Transmission subtasks' */
          Transmissionsubtasks_p(rtb_Equal2_d, 52.0,
            &localB->Transmissionsubtasks_pw, &localC->Transmissionsubtasks_pw,
            &localDW->Transmissionsubtasks_pw, rtd_Board_ID, rtd_Local_Ticks,
            rtd_Msg_Tx_CAN1, rtd_Msg_Tx_CAN2, &localDW->Own_Vote, rtd_TxID_CAN1,
            rtd_TxID_CAN2, rtd_Tx_msg_count_CAN1, rtd_Tx_msg_count_CAN2,
            &localDW->basic_cycle_count);

          /* End of Outputs for SubSystem: '<S165>/Transmission subtasks' */
        } else {
          if (localDW->COMMTaskVote1_MODE) {
            /* Disable for Enabled SubSystem: '<S165>/Reception substasks' */
            if (localDW->Receptionsubstasks_k.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_k,
                &localDW->Receptionsubstasks_k);
            }

            /* End of Disable for SubSystem: '<S165>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S165>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_pw.Transmissionsubtasks_MODE) {
              Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_pw,
                &localDW->Transmissionsubtasks_pw);
            }

            /* End of Disable for SubSystem: '<S165>/Transmission subtasks' */

            /* Disable for Outport: '<S165>/Send CAN1' */
            localB->Transmissionsubtasks_pw.Equal7_m = false;

            /* Disable for Outport: '<S165>/Receive CAN1' */
            localB->Receptionsubstasks_k.AND = false;

            /* Disable for Outport: '<S165>/Send CAN2' */
            localB->Transmissionsubtasks_pw.Equal7 = false;

            /* Disable for Outport: '<S165>/Receive CAN2' */
            localB->Receptionsubstasks_k.AND1 = false;
            localDW->COMMTaskVote1_MODE = false;
          }
        }

        /* End of Outputs for SubSystem: '<S161>/COMM Task - Vote1' */

        /* Outputs for Enabled SubSystem: '<S161>/COMM Task - Vote2' incorporates:
         *  EnablePort: '<S166>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 100.0) && (rtb_DataStoreRead8_c <
             localC->Sum8)) {
          if (!localDW->COMMTaskVote2_MODE) {
            localDW->COMMTaskVote2_MODE = true;
          }

          /* RelationalOperator: '<S166>/Equal2' incorporates:
           *  Constant: '<S166>/Constant3'
           */
          rtb_Equal2_lw = (*rtd_Board_ID == 2.0);

          /* Logic: '<S166>/NOT' */
          rtb_NOT_l = !rtb_Equal2_lw;

          /* Outputs for Enabled SubSystem: '<S166>/Reception substasks' */
          Receptionsubstasks(rtb_NOT_l, 100.0, &localB->Receptionsubstasks_g,
                             &localC->Receptionsubstasks_g,
                             &localDW->Receptionsubstasks_g, rtd_Local_Ticks,
                             &localDW->Msg_Rx_d, rtd_New_Msg_Ready_CAN1,
                             rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN1,
                             rtd_RxID_CAN2, rtd_Rx_State_CAN1, rtd_Rx_State_CAN2,
                             &localDW->new_msg_Rx_l);

          /* End of Outputs for SubSystem: '<S166>/Reception substasks' */

          /* Outputs for Enabled SubSystem: '<S166>/Transmission subtasks' */
          Transmissionsubtasks_p(rtb_Equal2_lw, 100.0,
            &localB->Transmissionsubtasks_d, &localC->Transmissionsubtasks_d,
            &localDW->Transmissionsubtasks_d, rtd_Board_ID, rtd_Local_Ticks,
            rtd_Msg_Tx_CAN1, rtd_Msg_Tx_CAN2, &localDW->Own_Vote, rtd_TxID_CAN1,
            rtd_TxID_CAN2, rtd_Tx_msg_count_CAN1, rtd_Tx_msg_count_CAN2,
            &localDW->basic_cycle_count);

          /* End of Outputs for SubSystem: '<S166>/Transmission subtasks' */
        } else {
          if (localDW->COMMTaskVote2_MODE) {
            /* Disable for Enabled SubSystem: '<S166>/Reception substasks' */
            if (localDW->Receptionsubstasks_g.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_g,
                &localDW->Receptionsubstasks_g);
            }

            /* End of Disable for SubSystem: '<S166>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S166>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_d.Transmissionsubtasks_MODE) {
              Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_d,
                &localDW->Transmissionsubtasks_d);
            }

            /* End of Disable for SubSystem: '<S166>/Transmission subtasks' */

            /* Disable for Outport: '<S166>/Send CAN1' */
            localB->Transmissionsubtasks_d.Equal7_m = false;

            /* Disable for Outport: '<S166>/Receive CAN1' */
            localB->Receptionsubstasks_g.AND = false;

            /* Disable for Outport: '<S166>/Send CAN2' */
            localB->Transmissionsubtasks_d.Equal7 = false;

            /* Disable for Outport: '<S166>/Receive CAN2' */
            localB->Receptionsubstasks_g.AND1 = false;
            localDW->COMMTaskVote2_MODE = false;
          }
        }

        /* End of Outputs for SubSystem: '<S161>/COMM Task - Vote2' */

        /* Outputs for Enabled SubSystem: '<S161>/COMM Task - Vote3' incorporates:
         *  EnablePort: '<S167>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 148.0) && (rtb_DataStoreRead8_c <
             localC->Sum12)) {
          if (!localDW->COMMTaskVote3_MODE) {
            localDW->COMMTaskVote3_MODE = true;
          }

          /* RelationalOperator: '<S167>/Equal2' incorporates:
           *  Constant: '<S167>/Constant3'
           */
          rtb_Equal2_fs = (*rtd_Board_ID == 3.0);

          /* Logic: '<S167>/NOT' */
          rtb_NOT_c3 = !rtb_Equal2_fs;

          /* Outputs for Enabled SubSystem: '<S167>/Reception substasks' */
          Receptionsubstasks(rtb_NOT_c3, 148.0, &localB->Receptionsubstasks_e,
                             &localC->Receptionsubstasks_e,
                             &localDW->Receptionsubstasks_e, rtd_Local_Ticks,
                             &localDW->Msg_Rx_d, rtd_New_Msg_Ready_CAN1,
                             rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN1,
                             rtd_RxID_CAN2, rtd_Rx_State_CAN1, rtd_Rx_State_CAN2,
                             &localDW->new_msg_Rx_l);

          /* End of Outputs for SubSystem: '<S167>/Reception substasks' */

          /* Outputs for Enabled SubSystem: '<S167>/Transmission subtasks' */
          Transmissionsubtasks_p(rtb_Equal2_fs, 148.0,
            &localB->Transmissionsubtasks_a, &localC->Transmissionsubtasks_a,
            &localDW->Transmissionsubtasks_a, rtd_Board_ID, rtd_Local_Ticks,
            rtd_Msg_Tx_CAN1, rtd_Msg_Tx_CAN2, &localDW->Own_Vote, rtd_TxID_CAN1,
            rtd_TxID_CAN2, rtd_Tx_msg_count_CAN1, rtd_Tx_msg_count_CAN2,
            &localDW->basic_cycle_count);

          /* End of Outputs for SubSystem: '<S167>/Transmission subtasks' */
        } else {
          if (localDW->COMMTaskVote3_MODE) {
            /* Disable for Enabled SubSystem: '<S167>/Reception substasks' */
            if (localDW->Receptionsubstasks_e.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_e,
                &localDW->Receptionsubstasks_e);
            }

            /* End of Disable for SubSystem: '<S167>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S167>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_a.Transmissionsubtasks_MODE) {
              Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_a,
                &localDW->Transmissionsubtasks_a);
            }

            /* End of Disable for SubSystem: '<S167>/Transmission subtasks' */

            /* Disable for Outport: '<S167>/Send CAN1' */
            localB->Transmissionsubtasks_a.Equal7_m = false;

            /* Disable for Outport: '<S167>/Receive CAN1' */
            localB->Receptionsubstasks_e.AND = false;

            /* Disable for Outport: '<S167>/Send CAN2' */
            localB->Transmissionsubtasks_a.Equal7 = false;

            /* Disable for Outport: '<S167>/Receive CAN2' */
            localB->Receptionsubstasks_e.AND1 = false;
            localDW->COMMTaskVote3_MODE = false;
          }
        }

        /* End of Outputs for SubSystem: '<S161>/COMM Task - Vote3' */

        /* Logic: '<S161>/OR1' incorporates:
         *  Constant: '<S161>/Constant'
         *  Constant: '<S161>/Constant17'
         *  Constant: '<S161>/Constant19'
         *  Constant: '<S161>/Constant2'
         *  Constant: '<S161>/Constant21'
         *  Constant: '<S161>/Constant23'
         *  Constant: '<S161>/Constant27'
         *  Constant: '<S161>/Constant28'
         *  Constant: '<S161>/Constant3'
         *  Constant: '<S161>/Constant33'
         *  Constant: '<S161>/Constant34'
         *  Constant: '<S161>/Constant6'
         *  Constant: '<S161>/Constant8'
         *  Constant: '<S161>/Constant9'
         *  Constant: '<S172>/Constant'
         *  Constant: '<S173>/Constant1'
         *  Constant: '<S173>/Constant4'
         *  Constant: '<S175>/Constant4'
         *  Constant: '<S176>/Constant1'
         *  Constant: '<S177>/Constant4'
         *  Constant: '<S178>/Constant1'
         *  Constant: '<S179>/Constant4'
         *  Constant: '<S180>/Constant1'
         *  DataStoreRead: '<S161>/Data Store Read11'
         *  DataStoreRead: '<S173>/Data Store Read'
         *  DataStoreRead: '<S173>/Data Store Read1'
         *  DataStoreRead: '<S175>/Data Store Read5'
         *  DataStoreRead: '<S177>/Data Store Read5'
         *  DataStoreRead: '<S179>/Data Store Read5'
         *  DataStoreWrite: '<S262>/Data Store Write2'
         *  Logic: '<S161>/AND'
         *  Logic: '<S161>/AND1'
         *  Logic: '<S161>/AND10'
         *  Logic: '<S161>/AND11'
         *  Logic: '<S161>/AND12'
         *  Logic: '<S161>/AND17'
         *  Logic: '<S161>/AND18'
         *  Logic: '<S161>/AND19'
         *  Logic: '<S161>/AND2'
         *  Logic: '<S161>/AND3'
         *  Logic: '<S161>/AND4'
         *  Logic: '<S161>/AND5'
         *  Logic: '<S161>/AND6'
         *  Logic: '<S161>/AND7'
         *  Logic: '<S161>/AND8'
         *  Logic: '<S161>/AND9'
         *  Logic: '<S161>/NOT1'
         *  Logic: '<S161>/NOT2'
         *  Logic: '<S172>/AND'
         *  Logic: '<S173>/AND'
         *  Logic: '<S173>/AND1'
         *  Logic: '<S175>/AND'
         *  Logic: '<S177>/AND'
         *  Logic: '<S179>/AND'
         *  RelationalOperator: '<S161>/GreaterThan'
         *  RelationalOperator: '<S161>/GreaterThan1'
         *  RelationalOperator: '<S161>/GreaterThan10'
         *  RelationalOperator: '<S161>/GreaterThan11'
         *  RelationalOperator: '<S161>/GreaterThan12'
         *  RelationalOperator: '<S161>/GreaterThan13'
         *  RelationalOperator: '<S161>/GreaterThan14'
         *  RelationalOperator: '<S161>/GreaterThan15'
         *  RelationalOperator: '<S161>/GreaterThan16'
         *  RelationalOperator: '<S161>/GreaterThan17'
         *  RelationalOperator: '<S161>/GreaterThan18'
         *  RelationalOperator: '<S161>/GreaterThan19'
         *  RelationalOperator: '<S161>/GreaterThan2'
         *  RelationalOperator: '<S161>/GreaterThan20'
         *  RelationalOperator: '<S161>/GreaterThan21'
         *  RelationalOperator: '<S161>/GreaterThan22'
         *  RelationalOperator: '<S161>/GreaterThan23'
         *  RelationalOperator: '<S161>/GreaterThan24'
         *  RelationalOperator: '<S161>/GreaterThan25'
         *  RelationalOperator: '<S161>/GreaterThan3'
         *  RelationalOperator: '<S161>/GreaterThan4'
         *  RelationalOperator: '<S161>/GreaterThan5'
         *  RelationalOperator: '<S161>/GreaterThan6'
         *  RelationalOperator: '<S161>/GreaterThan7'
         *  RelationalOperator: '<S161>/GreaterThan8'
         *  RelationalOperator: '<S161>/GreaterThan9'
         *  RelationalOperator: '<S173>/Equal'
         *  RelationalOperator: '<S173>/Equal1'
         *  RelationalOperator: '<S173>/Equal2'
         *  RelationalOperator: '<S174>/Equal'
         *  RelationalOperator: '<S175>/Equal'
         *  RelationalOperator: '<S175>/Equal2'
         *  RelationalOperator: '<S177>/Equal'
         *  RelationalOperator: '<S177>/Equal2'
         *  RelationalOperator: '<S179>/Equal'
         *  RelationalOperator: '<S179>/Equal2'
         */
        localB->OR1 = (localB->Transmissionsubtasks_l.Equal7_a ||
                       localB->Transmissionsubtasks_pw.Equal7_m ||
                       localB->Transmissionsubtasks_d.Equal7_m ||
                       localB->Transmissionsubtasks_a.Equal7_m);

        /* Logic: '<S161>/OR2' */
        localB->OR2 = (localB->Receptionsubstasks_h.AND ||
                       localB->Receptionsubstasks_k.AND ||
                       localB->Receptionsubstasks_g.AND ||
                       localB->Receptionsubstasks_e.AND);

        /* Logic: '<S161>/OR3' */
        localB->OR3 = (localB->Receptionsubstasks_h.AND1 ||
                       localB->Receptionsubstasks_k.AND1 ||
                       localB->Receptionsubstasks_g.AND1 ||
                       localB->Receptionsubstasks_e.AND1);

        /* Logic: '<S161>/OR4' */
        localB->OR4 = (localB->Transmissionsubtasks_l.Equal7 ||
                       localB->Transmissionsubtasks_pw.Equal7 ||
                       localB->Transmissionsubtasks_d.Equal7 ||
                       localB->Transmissionsubtasks_a.Equal7);
      } else {
        if (localDW->controllerbasiccycle0_MODE) {
          /* Disable for Enabled SubSystem: '<S161>/COMP Task - Sync bc0 check' */
          if (localDW->COMPTaskSyncbc0check_MODE) {
            /* Disable for Enabled SubSystem: '<S172>/Process_Messages' */
            if (localDW->Process_Messages_MODE_e) {
              /* Disable for Enabled SubSystem: '<S262>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_g.DemuxmessageCAN1andcheckcoher_f)
              {
                DemuxmessageCAN1andchec_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_g,
                   &localDW->DemuxmessageCAN1andcheckcoher_g);
              }

              /* End of Disable for SubSystem: '<S262>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S262>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcohe_p3.DemuxmessageCAN1andcheckcoher_m)
              {
                DemuxmessageCAN1andch_l_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_p3,
                   &localDW->DemuxmessageCAN1andcheckcohe_p3);
              }

              /* End of Disable for SubSystem: '<S262>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE_e = false;
            }

            /* End of Disable for SubSystem: '<S172>/Process_Messages' */
            localDW->COMPTaskSyncbc0check_MODE = false;
          }

          /* End of Disable for SubSystem: '<S161>/COMP Task - Sync bc0 check' */

          /* Disable for Enabled SubSystem: '<S161>/COMP Task - Vote1 check' */
          if (localDW->COMPTaskVote1check_MODE) {
            /* Disable for Enabled SubSystem: '<S176>/Process_Messages1' */
            if (localDW->Process_Messages1_c.Process_Messages1_MODE) {
              Process_Messages1_Disable(&localB->Process_Messages1_c,
                &localDW->Process_Messages1_c);
            }

            /* End of Disable for SubSystem: '<S176>/Process_Messages1' */
            localDW->COMPTaskVote1check_MODE = false;
          }

          /* End of Disable for SubSystem: '<S161>/COMP Task - Vote1 check' */

          /* Disable for Enabled SubSystem: '<S161>/COMP Task - Vote2 check' */
          if (localDW->COMPTaskVote2check_MODE) {
            /* Disable for Enabled SubSystem: '<S178>/Process_Messages' */
            if (localDW->Process_Messages_g.Process_Messages1_MODE) {
              Process_Messages1_Disable(&localB->Process_Messages_g,
                &localDW->Process_Messages_g);
            }

            /* End of Disable for SubSystem: '<S178>/Process_Messages' */
            localDW->COMPTaskVote2check_MODE = false;
          }

          /* End of Disable for SubSystem: '<S161>/COMP Task - Vote2 check' */

          /* Disable for Enabled SubSystem: '<S161>/COMP Task - Vote3 check' */
          if (localDW->COMPTaskVote3check_MODE) {
            /* Disable for Enabled SubSystem: '<S180>/Process_Messages' */
            if (localDW->Process_Messages_gc.Process_Messages1_MODE) {
              Process_Messages1_Disable(&localB->Process_Messages_gc,
                &localDW->Process_Messages_gc);
            }

            /* End of Disable for SubSystem: '<S180>/Process_Messages' */
            localDW->COMPTaskVote3check_MODE = false;
          }

          /* End of Disable for SubSystem: '<S161>/COMP Task - Vote3 check' */

          /* Disable for Enabled SubSystem: '<S161>/COMM Task - Sync bc 0' */
          if (localDW->COMMTaskSyncbc0_MODE) {
            /* Disable for Enabled SubSystem: '<S164>/Reception substasks' */
            if (localDW->Receptionsubstasks_h.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_h,
                &localDW->Receptionsubstasks_h);
            }

            /* End of Disable for SubSystem: '<S164>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S164>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_l.Transmissionsubtasks_MODE) {
              Transmissionsubtasks_Disable(&localB->Transmissionsubtasks_l,
                &localDW->Transmissionsubtasks_l);
            }

            /* End of Disable for SubSystem: '<S164>/Transmission subtasks' */

            /* Disable for Outport: '<S164>/Send CAN1' */
            localB->Transmissionsubtasks_l.Equal7_a = false;

            /* Disable for Outport: '<S164>/Receive CAN1' */
            localB->Receptionsubstasks_h.AND = false;

            /* Disable for Outport: '<S164>/Send CAN2' */
            localB->Transmissionsubtasks_l.Equal7 = false;

            /* Disable for Outport: '<S164>/Receive CAN2' */
            localB->Receptionsubstasks_h.AND1 = false;
            localDW->COMMTaskSyncbc0_MODE = false;
          }

          /* End of Disable for SubSystem: '<S161>/COMM Task - Sync bc 0' */

          /* Disable for Enabled SubSystem: '<S161>/COMM Task - Vote1' */
          if (localDW->COMMTaskVote1_MODE) {
            /* Disable for Enabled SubSystem: '<S165>/Reception substasks' */
            if (localDW->Receptionsubstasks_k.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_k,
                &localDW->Receptionsubstasks_k);
            }

            /* End of Disable for SubSystem: '<S165>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S165>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_pw.Transmissionsubtasks_MODE) {
              Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_pw,
                &localDW->Transmissionsubtasks_pw);
            }

            /* End of Disable for SubSystem: '<S165>/Transmission subtasks' */

            /* Disable for Outport: '<S165>/Send CAN1' */
            localB->Transmissionsubtasks_pw.Equal7_m = false;

            /* Disable for Outport: '<S165>/Receive CAN1' */
            localB->Receptionsubstasks_k.AND = false;

            /* Disable for Outport: '<S165>/Send CAN2' */
            localB->Transmissionsubtasks_pw.Equal7 = false;

            /* Disable for Outport: '<S165>/Receive CAN2' */
            localB->Receptionsubstasks_k.AND1 = false;
            localDW->COMMTaskVote1_MODE = false;
          }

          /* End of Disable for SubSystem: '<S161>/COMM Task - Vote1' */

          /* Disable for Enabled SubSystem: '<S161>/COMM Task - Vote2' */
          if (localDW->COMMTaskVote2_MODE) {
            /* Disable for Enabled SubSystem: '<S166>/Reception substasks' */
            if (localDW->Receptionsubstasks_g.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_g,
                &localDW->Receptionsubstasks_g);
            }

            /* End of Disable for SubSystem: '<S166>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S166>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_d.Transmissionsubtasks_MODE) {
              Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_d,
                &localDW->Transmissionsubtasks_d);
            }

            /* End of Disable for SubSystem: '<S166>/Transmission subtasks' */

            /* Disable for Outport: '<S166>/Send CAN1' */
            localB->Transmissionsubtasks_d.Equal7_m = false;

            /* Disable for Outport: '<S166>/Receive CAN1' */
            localB->Receptionsubstasks_g.AND = false;

            /* Disable for Outport: '<S166>/Send CAN2' */
            localB->Transmissionsubtasks_d.Equal7 = false;

            /* Disable for Outport: '<S166>/Receive CAN2' */
            localB->Receptionsubstasks_g.AND1 = false;
            localDW->COMMTaskVote2_MODE = false;
          }

          /* End of Disable for SubSystem: '<S161>/COMM Task - Vote2' */

          /* Disable for Enabled SubSystem: '<S161>/COMM Task - Vote3' */
          if (localDW->COMMTaskVote3_MODE) {
            /* Disable for Enabled SubSystem: '<S167>/Reception substasks' */
            if (localDW->Receptionsubstasks_e.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_e,
                &localDW->Receptionsubstasks_e);
            }

            /* End of Disable for SubSystem: '<S167>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S167>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_a.Transmissionsubtasks_MODE) {
              Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_a,
                &localDW->Transmissionsubtasks_a);
            }

            /* End of Disable for SubSystem: '<S167>/Transmission subtasks' */

            /* Disable for Outport: '<S167>/Send CAN1' */
            localB->Transmissionsubtasks_a.Equal7_m = false;

            /* Disable for Outport: '<S167>/Receive CAN1' */
            localB->Receptionsubstasks_e.AND = false;

            /* Disable for Outport: '<S167>/Send CAN2' */
            localB->Transmissionsubtasks_a.Equal7 = false;

            /* Disable for Outport: '<S167>/Receive CAN2' */
            localB->Receptionsubstasks_e.AND1 = false;
            localDW->COMMTaskVote3_MODE = false;
          }

          /* End of Disable for SubSystem: '<S161>/COMM Task - Vote3' */

          /* Disable for Outport: '<S161>/Send_Message_CAN1' */
          localB->OR1 = false;

          /* Disable for Outport: '<S161>/Send_Message_CAN2' */
          localB->OR4 = false;

          /* Disable for Outport: '<S161>/Receive_Message_CAN1' */
          localB->OR2 = false;

          /* Disable for Outport: '<S161>/Receive_Message_CAN2' */
          localB->OR3 = false;
          localDW->controllerbasiccycle0_MODE = false;
        }
      }

      /* End of Outputs for SubSystem: '<S159>/controller basic cycle 0' */

      /* Outputs for Enabled SubSystem: '<S159>/controller basic cycle 1' incorporates:
       *  EnablePort: '<S162>/Enable'
       */
      if (localDW->basic_cycle_count == 1.0) {
        if (!localDW->controllerbasiccycle1_MODE) {
          localDW->controllerbasiccycle1_MODE = true;
        }

        /* DataStoreRead: '<S162>/Data Store Read1' */
        rtb_DataStoreRead8_c = *rtd_Local_Ticks;

        /* Outputs for Enabled SubSystem: '<S162>/COMP Task - Reset Variables BC1' incorporates:
         *  EnablePort: '<S386>/Enable'
         */
        if ((*rtd_Local_Ticks >= 284.0) && (*rtd_Local_Ticks < localC->Sum18)) {
          /* Outputs for Enabled SubSystem: '<S386>/Check Timeouts' incorporates:
           *  EnablePort: '<S407>/Enable'
           */
          if (*rtd_Local_Ticks == 284.0) {
            /* Logic: '<S407>/AND9' incorporates:
             *  DataStoreRead: '<S407>/Data Store Read25'
             *  DataStoreWrite: '<S407>/Data Store Write8'
             *  Logic: '<S407>/NOT4'
             *  RelationalOperator: '<S407>/Equal9'
             */
            localDW->Toggle_Pin_A1 = ((!localDW->BC1_Sync_processed) &&
              (*rtd_Master_ID != *rtd_Board_ID));

            /* Switch: '<S407>/Switch7' incorporates:
             *  Constant: '<S407>/Constant16'
             *  DataStoreRead: '<S407>/Data Store Read23'
             *  DataStoreWrite: '<S407>/Data Store Write8'
             *  DataStoreWrite: '<S407>/Data Store Write9'
             *  Sum: '<S407>/Plus6'
             */
            if (localDW->Toggle_Pin_A1) {
              localDW->Sync_bc1_missed_counter += 1.0;
            }

            /* End of Switch: '<S407>/Switch7' */
          }

          /* End of Outputs for SubSystem: '<S386>/Check Timeouts' */

          /* Outputs for Enabled SubSystem: '<S386>/Reset Variables' incorporates:
           *  EnablePort: '<S408>/Enable'
           */
          if (*rtd_Local_Ticks == 286.0) {
            /* DataStoreWrite: '<S408>/Data Store Write' incorporates:
             *  Constant: '<S408>/Constant'
             */
            localDW->Desync_Positive = false;

            /* DataStoreWrite: '<S408>/Data Store Write1' incorporates:
             *  Constant: '<S408>/Constant'
             */
            localDW->BC1_Sync_processed = false;

            /* DataStoreWrite: '<S408>/Data Store Write3' incorporates:
             *  Constant: '<S408>/Constant3'
             */
            *rtd_Toggle_Pin_A0 = true;
          }

          /* End of Outputs for SubSystem: '<S386>/Reset Variables' */
        }

        /* End of Outputs for SubSystem: '<S162>/COMP Task - Reset Variables BC1' */

        /* Logic: '<S162>/NOT2' incorporates:
         *  Constant: '<S162>/Constant16'
         *  Constant: '<S162>/Constant41'
         *  DataStoreRead: '<S162>/Data Store Read6'
         *  Logic: '<S162>/AND20'
         *  Logic: '<S162>/NOT5'
         *  RelationalOperator: '<S162>/GreaterThan34'
         *  RelationalOperator: '<S162>/GreaterThan35'
         *  RelationalOperator: '<S386>/Equal1'
         *  RelationalOperator: '<S386>/Equal2'
         */
        rtb_AND2_n = !localDW->BC1_Sync_processed;

        /* Outputs for Enabled SubSystem: '<S162>/COMP Task - Sync bc1 check' incorporates:
         *  EnablePort: '<S387>/Enable'
         */
        if ((*rtd_Local_Ticks >= 40.0) && (*rtd_Local_Ticks < localC->Sum1) &&
            rtb_AND2_n) {
          if (!localDW->COMPTaskSyncbc1check_MODE) {
            localDW->COMPTaskSyncbc1check_MODE = true;
          }

          /* DataStoreRead: '<S387>/Data Store Read1' */
          rtb_DataStoreRead1_nj = *rtd_New_Msg_Ready_CAN1;

          /* DataStoreRead: '<S387>/Data Store Read2' */
          rtb_DataStoreRead2_c = *rtd_New_Msg_Ready_CAN2;

          /* DataStoreRead: '<S387>/Data Store Read' */
          rtb_DataStoreRead_n = *rtd_Msg_Rx_CAN1;

          /* DataStoreRead: '<S387>/Data Store Read3' */
          rtb_DataStoreRead3 = *rtd_Msg_Rx_CAN2;

          /* DataStoreRead: '<S387>/Data Store Read15' */
          rtb_DataStoreRead15 = *rtd_Master_ID;

          /* RelationalOperator: '<S387>/Equal' */
          rtb_Equal_f = (*rtd_Local_Ticks == 40.0);

          /* RelationalOperator: '<S387>/Equal5' incorporates:
           *  Constant: '<S387>/Constant26'
           *  DataStoreRead: '<S387>/Data Store Read6'
           */
          rtb_AND1_e = (localDW->Role_ID == 2.0);

          /* Outputs for Enabled SubSystem: '<S387>/Process_Messages' incorporates:
           *  EnablePort: '<S409>/Enable'
           */
          if (rtb_Equal_f && rtb_AND1_e) {
            if (!localDW->Process_Messages_MODE) {
              localDW->Process_Messages_MODE = true;
            }

            /* Outputs for Enabled SubSystem: '<S409>/Demux message CAN1 and check coherence' */
            DemuxmessageCAN1andcheckcoheren(rtb_DataStoreRead1_nj,
              &rtb_DataStoreRead_n, 1.0, rtb_DataStoreRead15,
              &localB->DemuxmessageCAN1andcheckcoher_a,
              &localDW->DemuxmessageCAN1andcheckcoher_a,
              &localDW->msg_count_DEBUG);

            /* End of Outputs for SubSystem: '<S409>/Demux message CAN1 and check coherence' */

            /* Outputs for Enabled SubSystem: '<S409>/Demux message CAN1 and check coherence1' */
            DemuxmessageCAN1andcheckcoher_p(rtb_DataStoreRead2_c,
              &rtb_DataStoreRead3, 1.0, rtb_DataStoreRead15,
              &localB->DemuxmessageCAN1andcheckcoher_i,
              &localDW->DemuxmessageCAN1andcheckcoher_i,
              &localDW->msg_count_DEBUG);

            /* End of Outputs for SubSystem: '<S409>/Demux message CAN1 and check coherence1' */

            /* Switch: '<S409>/Switch' incorporates:
             *  Constant: '<S387>/Constant'
             *  DataStoreWrite: '<S409>/Data Store Write'
             */
            if (localB->DemuxmessageCAN1andcheckcoher_a.AND) {
              Msg_Rx.Buffer_1 = localB->DemuxmessageCAN1andcheckcoher_a.Constant;
              Msg_Rx.Buffer_2 = localB->DemuxmessageCAN1andcheckcoher_a.Buffer_2;
              Msg_Rx.Buffer_3 = localB->DemuxmessageCAN1andcheckcoher_a.Buffer_3;
              Msg_Rx.Buffer_4 = localB->DemuxmessageCAN1andcheckcoher_a.Buffer_4;
              Msg_Rx.Buffer_5 = localB->DemuxmessageCAN1andcheckcoher_a.Buffer_5;
              Msg_Rx.Buffer_6 = localB->DemuxmessageCAN1andcheckcoher_a.Buffer_6;
              Msg_Rx.Buffer_7 = localB->DemuxmessageCAN1andcheckcoher_a.Buffer_7;
              Msg_Rx.Buffer_8 = localB->DemuxmessageCAN1andcheckcoher_a.Buffer_8;
            } else {
              Msg_Rx.Buffer_1 = localB->DemuxmessageCAN1andcheckcoher_i.Constant;
              Msg_Rx.Buffer_2 = localB->DemuxmessageCAN1andcheckcoher_i.Buffer_2;
              Msg_Rx.Buffer_3 = localB->DemuxmessageCAN1andcheckcoher_i.Buffer_3;
              Msg_Rx.Buffer_4 = localB->DemuxmessageCAN1andcheckcoher_i.Buffer_4;
              Msg_Rx.Buffer_5 = localB->DemuxmessageCAN1andcheckcoher_i.Buffer_5;
              Msg_Rx.Buffer_6 = localB->DemuxmessageCAN1andcheckcoher_i.Buffer_6;
              Msg_Rx.Buffer_7 = localB->DemuxmessageCAN1andcheckcoher_i.Buffer_7;
              Msg_Rx.Buffer_8 = localB->DemuxmessageCAN1andcheckcoher_i.Buffer_8;
            }

            /* End of Switch: '<S409>/Switch' */

            /* Logic: '<S409>/OR' incorporates:
             *  DataStoreWrite: '<S409>/Data Store Write2'
             */
            localDW->new_msg_Rx = (localB->DemuxmessageCAN1andcheckcoher_a.AND ||
              localB->DemuxmessageCAN1andcheckcoher_i.AND);

            /* Outputs for Enabled SubSystem: '<S409>/Desync calculation' incorporates:
             *  EnablePort: '<S413>/Enable'
             */
            if (localDW->new_msg_Rx) {
              /* Switch: '<S413>/Switch1' incorporates:
               *  Constant: '<S162>/Constant'
               *  Constant: '<S413>/Constant'
               *  Constant: '<S413>/Constant1'
               *  Constant: '<S413>/delay_estimation_1'
               *  Constant: '<S413>/delay_estimation_2'
               *  Product: '<S413>/Multiply'
               *  Product: '<S413>/Multiply1'
               *  Sum: '<S413>/Minus'
               *  Sum: '<S413>/Minus1'
               *  Sum: '<S413>/Sum'
               *  Sum: '<S413>/Sum1'
               */
              if (localB->DemuxmessageCAN1andcheckcoher_a.AND) {
                rtb_Switch1_f = ((COMM_Phase1 * (real_T)
                                  localB->DemuxmessageCAN1andcheckcoher_a.BitShift1_mg.y
                                  + 0.0) + 3.0) - (real_T)*rtd_Msg_Rx_Ticks_CAN1;
              } else {
                rtb_Switch1_f = ((COMM_Phase2 * (real_T)
                                  localB->DemuxmessageCAN1andcheckcoher_i.BitShift1_e.y
                                  + 0.0) + 3.0) - (real_T)*rtd_Msg_Rx_Ticks_CAN2;
              }

              /* End of Switch: '<S413>/Switch1' */

              /* Saturate: '<S413>/Saturation' */
              if (rtb_Switch1_f > 15.0) {
                Desync_Sync_bc1_s = 15.0;
              } else if (rtb_Switch1_f < (-15.0)) {
                Desync_Sync_bc1_s = (-15.0);
              } else {
                Desync_Sync_bc1_s = rtb_Switch1_f;
              }

              /* End of Saturate: '<S413>/Saturation' */

              /* DataStoreWrite: '<S413>/Data Store Write1' */
              localDW->Desync_Ticks = Desync_Sync_bc1_s;
            }

            /* End of Outputs for SubSystem: '<S409>/Desync calculation' */

            /* DataStoreWrite: '<S409>/Data Store Write3' incorporates:
             *  Constant: '<S409>/Constant2'
             *  DataStoreWrite: '<S409>/Data Store Write2'
             */
            *rtd_Toggle_Pin_A0 = true;
          } else {
            if (localDW->Process_Messages_MODE) {
              /* Disable for Enabled SubSystem: '<S409>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_a.DemuxmessageCAN1andcheckcoher_f)
              {
                DemuxmessageCAN1andchec_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_a,
                   &localDW->DemuxmessageCAN1andcheckcoher_a);
              }

              /* End of Disable for SubSystem: '<S409>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S409>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcoher_i.DemuxmessageCAN1andcheckcoher_m)
              {
                DemuxmessageCAN1andch_l_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_i,
                   &localDW->DemuxmessageCAN1andcheckcoher_i);
              }

              /* End of Disable for SubSystem: '<S409>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE = false;
            }
          }

          /* End of Outputs for SubSystem: '<S387>/Process_Messages' */

          /* Logic: '<S387>/AND1' incorporates:
           *  Constant: '<S387>/Constant'
           *  DataStoreWrite: '<S409>/Data Store Write2'
           *  Logic: '<S387>/AND'
           *  Logic: '<S387>/NOT'
           */
          rtb_AND1_j = (rtb_Equal_f && (!rtb_AND1_e));

          /* Outputs for Enabled SubSystem: '<S387>/Reset Tx msg counter' */
          ResetTxmsgcounter(rtb_AND1_j, rtd_Tx_msg_count_CAN1,
                            rtd_Tx_msg_count_CAN2);

          /* End of Outputs for SubSystem: '<S387>/Reset Tx msg counter' */
        } else {
          if (localDW->COMPTaskSyncbc1check_MODE) {
            /* Disable for Enabled SubSystem: '<S387>/Process_Messages' */
            if (localDW->Process_Messages_MODE) {
              /* Disable for Enabled SubSystem: '<S409>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_a.DemuxmessageCAN1andcheckcoher_f)
              {
                DemuxmessageCAN1andchec_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_a,
                   &localDW->DemuxmessageCAN1andcheckcoher_a);
              }

              /* End of Disable for SubSystem: '<S409>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S409>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcoher_i.DemuxmessageCAN1andcheckcoher_m)
              {
                DemuxmessageCAN1andch_l_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_i,
                   &localDW->DemuxmessageCAN1andcheckcoher_i);
              }

              /* End of Disable for SubSystem: '<S409>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE = false;
            }

            /* End of Disable for SubSystem: '<S387>/Process_Messages' */
            localDW->COMPTaskSyncbc1check_MODE = false;
          }
        }

        /* End of Outputs for SubSystem: '<S162>/COMP Task - Sync bc1 check' */

        /* Outputs for Enabled SubSystem: '<S162>/COMP Task - Update LT1' incorporates:
         *  EnablePort: '<S388>/Enable'
         */
        if ((*rtd_Local_Ticks >= 44.0) && (*rtd_Local_Ticks < localC->Sum2) &&
            rtb_AND2_n) {
          /* Outputs for Enabled SubSystem: '<S388>/LA - Ensemble precision' incorporates:
           *  EnablePort: '<S438>/Enable'
           */
          if ((*rtd_Local_Ticks == 44.0) && (1.0 != 0.0)) {
            /* DataStoreWrite: '<S438>/Data Store Write1' incorporates:
             *  Constant: '<S438>/Constant2'
             */
            localDW->Toggle_Pin_D10 = true;
          }

          /* End of Outputs for SubSystem: '<S388>/LA - Ensemble precision' */

          /* Outputs for Enabled SubSystem: '<S388>/Local Time Update' incorporates:
           *  EnablePort: '<S439>/Enable'
           */
          if ((*rtd_Local_Ticks == 46.0) && (localDW->Role_ID == 2.0) &&
              localDW->new_msg_Rx) {
            /* RelationalOperator: '<S439>/GreaterThan' incorporates:
             *  Constant: '<S439>/Constant4'
             *  DataStoreRead: '<S439>/Data Store Read1'
             *  DataStoreWrite: '<S439>/Data Store Write'
             */
            localDW->Desync_Positive = (localDW->Desync_Ticks > 0.0);

            /* Logic: '<S439>/NOT' incorporates:
             *  DataStoreWrite: '<S439>/Data Store Write'
             */
            rtb_NOT_ce = !localDW->Desync_Positive;

            /* Outputs for Enabled SubSystem: '<S439>/Desync_Negative' */
            Desync_Negative(rtb_NOT_ce, 44.0, &localDW->Desync_Ticks,
                            rtd_Local_Ticks);

            /* End of Outputs for SubSystem: '<S439>/Desync_Negative' */

            /* DataStoreWrite: '<S439>/Data Store Write13' incorporates:
             *  Constant: '<S439>/Constant3'
             */
            localDW->BC1_Sync_processed = true;

            /* DataStoreWrite: '<S439>/Data Store Write3' incorporates:
             *  Constant: '<S439>/Constant1'
             */
            *rtd_Toggle_Pin_A0 = true;

            /* DataStoreWrite: '<S439>/Data Store Write1' incorporates:
             *  Constant: '<S439>/Constant2'
             */
            localDW->Toggle_Pin_D10 = true;
          }

          /* End of Outputs for SubSystem: '<S388>/Local Time Update' */
        }

        /* End of Outputs for SubSystem: '<S162>/COMP Task - Update LT1' */

        /* Outputs for Enabled SubSystem: '<S162>/COMM Task - Sync bc 1' incorporates:
         *  EnablePort: '<S385>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 0.0) && (rtb_DataStoreRead8_c <
             localC->Sum4) && (!localDW->BC1_Sync_processed)) {
          if (!localDW->COMMTaskSyncbc1_MODE) {
            localDW->COMMTaskSyncbc1_MODE = true;
          }

          /* RelationalOperator: '<S385>/Equal1' incorporates:
           *  Constant: '<S385>/Constant2'
           *  DataStoreRead: '<S385>/Data Store Read1'
           */
          rtb_Equal1_mg = (localDW->Role_ID == 1.0);

          /* Logic: '<S385>/NOT' */
          rtb_NOT_lv = !rtb_Equal1_mg;

          /* Outputs for Enabled SubSystem: '<S385>/Reception substasks' */
          Receptionsubstasks(rtb_NOT_lv, 0.0, &localB->Receptionsubstasks_j,
                             &localC->Receptionsubstasks_j,
                             &localDW->Receptionsubstasks_j, rtd_Local_Ticks,
                             &Msg_Rx, rtd_New_Msg_Ready_CAN1,
                             rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN1,
                             rtd_RxID_CAN2, rtd_Rx_State_CAN1, rtd_Rx_State_CAN2,
                             &localDW->new_msg_Rx);

          /* End of Outputs for SubSystem: '<S385>/Reception substasks' */

          /* Outputs for Enabled SubSystem: '<S385>/Transmission subtasks1' */
          Transmissionsubtasks(rtb_Equal1_mg, 0.0,
                               &localB->Transmissionsubtasks1,
                               &localC->Transmissionsubtasks1,
                               &localDW->Transmissionsubtasks1, rtd_Board_ID,
                               rtd_Local_Ticks, rtd_Msg_Tx_CAN1, rtd_Msg_Tx_CAN2,
                               rtd_TxID_CAN1, rtd_TxID_CAN2,
                               rtd_Tx_msg_count_CAN1, rtd_Tx_msg_count_CAN2,
                               &localDW->basic_cycle_count);

          /* End of Outputs for SubSystem: '<S385>/Transmission subtasks1' */
        } else {
          if (localDW->COMMTaskSyncbc1_MODE) {
            /* Disable for Enabled SubSystem: '<S385>/Reception substasks' */
            if (localDW->Receptionsubstasks_j.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_j,
                &localDW->Receptionsubstasks_j);
            }

            /* End of Disable for SubSystem: '<S385>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S385>/Transmission subtasks1' */
            if (localDW->Transmissionsubtasks1.Transmissionsubtasks_MODE) {
              Transmissionsubtasks_Disable(&localB->Transmissionsubtasks1,
                &localDW->Transmissionsubtasks1);
            }

            /* End of Disable for SubSystem: '<S385>/Transmission subtasks1' */

            /* Disable for Outport: '<S385>/Send CAN1' */
            localB->Transmissionsubtasks1.Equal7_a = false;

            /* Disable for Outport: '<S385>/Receive CAN1' */
            localB->Receptionsubstasks_j.AND = false;

            /* Disable for Outport: '<S385>/Send CAN2' */
            localB->Transmissionsubtasks1.Equal7 = false;

            /* Disable for Outport: '<S385>/Receive CAN2' */
            localB->Receptionsubstasks_j.AND1 = false;
            localDW->COMMTaskSyncbc1_MODE = false;
          }
        }

        /* End of Outputs for SubSystem: '<S162>/COMM Task - Sync bc 1' */
      } else {
        if (localDW->controllerbasiccycle1_MODE) {
          /* Disable for Enabled SubSystem: '<S162>/COMP Task - Sync bc1 check' */
          if (localDW->COMPTaskSyncbc1check_MODE) {
            /* Disable for Enabled SubSystem: '<S387>/Process_Messages' */
            if (localDW->Process_Messages_MODE) {
              /* Disable for Enabled SubSystem: '<S409>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_a.DemuxmessageCAN1andcheckcoher_f)
              {
                DemuxmessageCAN1andchec_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_a,
                   &localDW->DemuxmessageCAN1andcheckcoher_a);
              }

              /* End of Disable for SubSystem: '<S409>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S409>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcoher_i.DemuxmessageCAN1andcheckcoher_m)
              {
                DemuxmessageCAN1andch_l_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_i,
                   &localDW->DemuxmessageCAN1andcheckcoher_i);
              }

              /* End of Disable for SubSystem: '<S409>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE = false;
            }

            /* End of Disable for SubSystem: '<S387>/Process_Messages' */
            localDW->COMPTaskSyncbc1check_MODE = false;
          }

          /* End of Disable for SubSystem: '<S162>/COMP Task - Sync bc1 check' */

          /* Disable for Enabled SubSystem: '<S162>/COMM Task - Sync bc 1' */
          if (localDW->COMMTaskSyncbc1_MODE) {
            /* Disable for Enabled SubSystem: '<S385>/Reception substasks' */
            if (localDW->Receptionsubstasks_j.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_j,
                &localDW->Receptionsubstasks_j);
            }

            /* End of Disable for SubSystem: '<S385>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S385>/Transmission subtasks1' */
            if (localDW->Transmissionsubtasks1.Transmissionsubtasks_MODE) {
              Transmissionsubtasks_Disable(&localB->Transmissionsubtasks1,
                &localDW->Transmissionsubtasks1);
            }

            /* End of Disable for SubSystem: '<S385>/Transmission subtasks1' */

            /* Disable for Outport: '<S385>/Send CAN1' */
            localB->Transmissionsubtasks1.Equal7_a = false;

            /* Disable for Outport: '<S385>/Receive CAN1' */
            localB->Receptionsubstasks_j.AND = false;

            /* Disable for Outport: '<S385>/Send CAN2' */
            localB->Transmissionsubtasks1.Equal7 = false;

            /* Disable for Outport: '<S385>/Receive CAN2' */
            localB->Receptionsubstasks_j.AND1 = false;
            localDW->COMMTaskSyncbc1_MODE = false;
          }

          /* End of Disable for SubSystem: '<S162>/COMM Task - Sync bc 1' */

          /* Disable for Outport: '<S162>/Send_Message_CAN1' */
          localB->Transmissionsubtasks1.Equal7_a = false;

          /* Disable for Outport: '<S162>/Send_Message_CAN2' */
          localB->Transmissionsubtasks1.Equal7 = false;

          /* Disable for Outport: '<S162>/Receive_Message_CAN1' */
          localB->Receptionsubstasks_j.AND = false;

          /* Disable for Outport: '<S162>/Receive_Message_CAN2' */
          localB->Receptionsubstasks_j.AND1 = false;
          localDW->controllerbasiccycle1_MODE = false;
        }
      }

      /* End of Outputs for SubSystem: '<S159>/controller basic cycle 1' */

      /* Switch: '<S159>/Switch' incorporates:
       *  Constant: '<S159>/Constant1'
       *  Constant: '<S161>/Constant'
       *  Constant: '<S161>/Constant12'
       *  Constant: '<S161>/Constant14'
       *  Constant: '<S161>/Constant17'
       *  Constant: '<S161>/Constant19'
       *  Constant: '<S161>/Constant2'
       *  Constant: '<S161>/Constant21'
       *  Constant: '<S161>/Constant23'
       *  Constant: '<S161>/Constant25'
       *  Constant: '<S161>/Constant27'
       *  Constant: '<S161>/Constant28'
       *  Constant: '<S161>/Constant3'
       *  Constant: '<S161>/Constant31'
       *  Constant: '<S161>/Constant33'
       *  Constant: '<S161>/Constant34'
       *  Constant: '<S161>/Constant6'
       *  Constant: '<S161>/Constant8'
       *  Constant: '<S161>/Constant9'
       *  Constant: '<S162>/Constant'
       *  Constant: '<S162>/Constant16'
       *  Constant: '<S162>/Constant17'
       *  Constant: '<S162>/Constant4'
       *  Constant: '<S162>/Constant41'
       *  Constant: '<S162>/Constant6'
       *  Constant: '<S172>/Constant'
       *  Constant: '<S173>/Constant1'
       *  Constant: '<S173>/Constant4'
       *  Constant: '<S175>/Constant4'
       *  Constant: '<S176>/Constant1'
       *  Constant: '<S177>/Constant4'
       *  Constant: '<S178>/Constant1'
       *  Constant: '<S179>/Constant4'
       *  Constant: '<S180>/Constant1'
       *  Constant: '<S387>/Constant'
       *  Constant: '<S388>/Constant1'
       *  Constant: '<S388>/Constant4'
       *  DataStoreRead: '<S132>/Data Store Read10'
       *  DataStoreRead: '<S161>/Data Store Read11'
       *  DataStoreRead: '<S162>/Data Store Read11'
       *  DataStoreRead: '<S173>/Data Store Read'
       *  DataStoreRead: '<S173>/Data Store Read1'
       *  DataStoreRead: '<S175>/Data Store Read5'
       *  DataStoreRead: '<S177>/Data Store Read5'
       *  DataStoreRead: '<S179>/Data Store Read5'
       *  DataStoreRead: '<S388>/Data Store Read'
       *  DataStoreRead: '<S388>/Data Store Read1'
       *  DataStoreWrite: '<S262>/Data Store Write2'
       *  DataStoreWrite: '<S409>/Data Store Write2'
       *  Logic: '<S161>/AND'
       *  Logic: '<S161>/AND1'
       *  Logic: '<S161>/AND10'
       *  Logic: '<S161>/AND11'
       *  Logic: '<S161>/AND12'
       *  Logic: '<S161>/AND13'
       *  Logic: '<S161>/AND14'
       *  Logic: '<S161>/AND15'
       *  Logic: '<S161>/AND16'
       *  Logic: '<S161>/AND17'
       *  Logic: '<S161>/AND18'
       *  Logic: '<S161>/AND19'
       *  Logic: '<S161>/AND2'
       *  Logic: '<S161>/AND3'
       *  Logic: '<S161>/AND4'
       *  Logic: '<S161>/AND5'
       *  Logic: '<S161>/AND6'
       *  Logic: '<S161>/AND7'
       *  Logic: '<S161>/AND8'
       *  Logic: '<S161>/AND9'
       *  Logic: '<S161>/NOT1'
       *  Logic: '<S161>/NOT2'
       *  Logic: '<S162>/AND'
       *  Logic: '<S162>/AND1'
       *  Logic: '<S162>/AND17'
       *  Logic: '<S162>/AND18'
       *  Logic: '<S162>/AND19'
       *  Logic: '<S162>/AND2'
       *  Logic: '<S162>/AND20'
       *  Logic: '<S162>/NOT2'
       *  Logic: '<S162>/NOT4'
       *  Logic: '<S170>/AND'
       *  Logic: '<S172>/AND'
       *  Logic: '<S173>/AND'
       *  Logic: '<S173>/AND1'
       *  Logic: '<S175>/AND'
       *  Logic: '<S177>/AND'
       *  Logic: '<S179>/AND'
       *  Logic: '<S387>/AND'
       *  Logic: '<S388>/AND'
       *  Logic: '<S388>/AND1'
       *  RelationalOperator: '<S159>/Equal1'
       *  RelationalOperator: '<S161>/GreaterThan'
       *  RelationalOperator: '<S161>/GreaterThan1'
       *  RelationalOperator: '<S161>/GreaterThan10'
       *  RelationalOperator: '<S161>/GreaterThan11'
       *  RelationalOperator: '<S161>/GreaterThan12'
       *  RelationalOperator: '<S161>/GreaterThan13'
       *  RelationalOperator: '<S161>/GreaterThan14'
       *  RelationalOperator: '<S161>/GreaterThan15'
       *  RelationalOperator: '<S161>/GreaterThan16'
       *  RelationalOperator: '<S161>/GreaterThan17'
       *  RelationalOperator: '<S161>/GreaterThan18'
       *  RelationalOperator: '<S161>/GreaterThan19'
       *  RelationalOperator: '<S161>/GreaterThan2'
       *  RelationalOperator: '<S161>/GreaterThan20'
       *  RelationalOperator: '<S161>/GreaterThan21'
       *  RelationalOperator: '<S161>/GreaterThan22'
       *  RelationalOperator: '<S161>/GreaterThan23'
       *  RelationalOperator: '<S161>/GreaterThan24'
       *  RelationalOperator: '<S161>/GreaterThan25'
       *  RelationalOperator: '<S161>/GreaterThan26'
       *  RelationalOperator: '<S161>/GreaterThan27'
       *  RelationalOperator: '<S161>/GreaterThan28'
       *  RelationalOperator: '<S161>/GreaterThan29'
       *  RelationalOperator: '<S161>/GreaterThan3'
       *  RelationalOperator: '<S161>/GreaterThan30'
       *  RelationalOperator: '<S161>/GreaterThan31'
       *  RelationalOperator: '<S161>/GreaterThan32'
       *  RelationalOperator: '<S161>/GreaterThan33'
       *  RelationalOperator: '<S161>/GreaterThan4'
       *  RelationalOperator: '<S161>/GreaterThan5'
       *  RelationalOperator: '<S161>/GreaterThan6'
       *  RelationalOperator: '<S161>/GreaterThan7'
       *  RelationalOperator: '<S161>/GreaterThan8'
       *  RelationalOperator: '<S161>/GreaterThan9'
       *  RelationalOperator: '<S162>/GreaterThan'
       *  RelationalOperator: '<S162>/GreaterThan1'
       *  RelationalOperator: '<S162>/GreaterThan2'
       *  RelationalOperator: '<S162>/GreaterThan3'
       *  RelationalOperator: '<S162>/GreaterThan34'
       *  RelationalOperator: '<S162>/GreaterThan35'
       *  RelationalOperator: '<S162>/GreaterThan4'
       *  RelationalOperator: '<S162>/GreaterThan5'
       *  RelationalOperator: '<S168>/Equal'
       *  RelationalOperator: '<S169>/Equal'
       *  RelationalOperator: '<S170>/Equal2'
       *  RelationalOperator: '<S171>/Equal2'
       *  RelationalOperator: '<S173>/Equal'
       *  RelationalOperator: '<S173>/Equal1'
       *  RelationalOperator: '<S173>/Equal2'
       *  RelationalOperator: '<S174>/Equal'
       *  RelationalOperator: '<S175>/Equal'
       *  RelationalOperator: '<S175>/Equal2'
       *  RelationalOperator: '<S177>/Equal'
       *  RelationalOperator: '<S177>/Equal2'
       *  RelationalOperator: '<S179>/Equal'
       *  RelationalOperator: '<S179>/Equal2'
       *  RelationalOperator: '<S386>/Equal1'
       *  RelationalOperator: '<S386>/Equal2'
       *  RelationalOperator: '<S388>/Equal1'
       *  RelationalOperator: '<S388>/Equal2'
       *  RelationalOperator: '<S388>/Equal3'
       */
      if (rtb_OR1_l) {
        localB->signal1 = localB->OR1;
        localB->signal2 = localB->OR4;
        localB->signal3 = localB->OR2;
        localB->signal4 = localB->OR3;
      } else {
        localB->signal1 = localB->Transmissionsubtasks1.Equal7_a;
        localB->signal2 = localB->Transmissionsubtasks1.Equal7;
        localB->signal3 = localB->Receptionsubstasks_j.AND;
        localB->signal4 = localB->Receptionsubstasks_j.AND1;
      }

      /* End of Switch: '<S159>/Switch' */

      /* DataStoreRead: '<S160>/Data Store Read' */
      Master_ID_s = *rtd_Master_ID;

      /* DataStoreRead: '<S160>/Data Store Read1' */
      Role_ID_s = localDW->Role_ID;

      /* DataStoreRead: '<S160>/Data Store Read10' */
      BC1_sync_processed_s = localDW->BC1_Sync_processed;

      /* DataStoreRead: '<S160>/Data Store Read11' */
      sync_bc0_miss_counter_s = localDW->Sync_bc0_missed_counter;

      /* DataStoreRead: '<S160>/Data Store Read12' */
      sync_bc1_miss_counter_s = localDW->Sync_bc1_missed_counter;

      /* DataStoreRead: '<S160>/Data Store Read2' */
      BC0_sync_processed_s = localDW->BC0_Sync_processed;

      /* DataStoreRead: '<S160>/Data Store Read3' */
      votes_Board_1_DEBUG = localDW->Votes_count.First_Board;
      votes_Board_2_DEBUG = localDW->Votes_count.Second_Board;
      votes_Board_3_DEBUG = localDW->Votes_count.Third_Board;

      /* DataStoreRead: '<S160>/Data Store Read4' */
      Board_1_error_counter_s = localDW->Board1_error_counter;

      /* DataStoreRead: '<S160>/Data Store Read5' */
      Board_2_error_counter_s = localDW->Board2_error_counter;

      /* DataStoreRead: '<S160>/Data Store Read6' */
      Board_3_error_counter_s = localDW->Board3_error_counter;

      /* DataStoreRead: '<S160>/Data Store Read7' */
      BC0_vote1_processed_s = localDW->BC0_Vote1_processed;

      /* DataStoreRead: '<S160>/Data Store Read8' */
      BC0_vote2_processed_s = localDW->BC0_Vote2_processed;

      /* DataStoreRead: '<S160>/Data Store Read9' */
      BC0_vote3_processed_s = localDW->BC0_Vote3_processed;

      /* DataStoreRead: '<S163>/Data Store Read24' */
      msg_count_DEBUG_s = localDW->msg_count_DEBUG;
    } else {
      if (localDW->ControllerMatrixCycle_MODE) {
        /* Disable for Enabled SubSystem: '<S159>/controller basic cycle 0' */
        if (localDW->controllerbasiccycle0_MODE) {
          /* Disable for Enabled SubSystem: '<S161>/COMP Task - Sync bc0 check' */
          if (localDW->COMPTaskSyncbc0check_MODE) {
            /* Disable for Enabled SubSystem: '<S172>/Process_Messages' */
            if (localDW->Process_Messages_MODE_e) {
              /* Disable for Enabled SubSystem: '<S262>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_g.DemuxmessageCAN1andcheckcoher_f)
              {
                DemuxmessageCAN1andchec_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_g,
                   &localDW->DemuxmessageCAN1andcheckcoher_g);
              }

              /* End of Disable for SubSystem: '<S262>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S262>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcohe_p3.DemuxmessageCAN1andcheckcoher_m)
              {
                DemuxmessageCAN1andch_l_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_p3,
                   &localDW->DemuxmessageCAN1andcheckcohe_p3);
              }

              /* End of Disable for SubSystem: '<S262>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE_e = false;
            }

            /* End of Disable for SubSystem: '<S172>/Process_Messages' */
            localDW->COMPTaskSyncbc0check_MODE = false;
          }

          /* End of Disable for SubSystem: '<S161>/COMP Task - Sync bc0 check' */

          /* Disable for Enabled SubSystem: '<S161>/COMP Task - Vote1 check' */
          if (localDW->COMPTaskVote1check_MODE) {
            /* Disable for Enabled SubSystem: '<S176>/Process_Messages1' */
            if (localDW->Process_Messages1_c.Process_Messages1_MODE) {
              Process_Messages1_Disable(&localB->Process_Messages1_c,
                &localDW->Process_Messages1_c);
            }

            /* End of Disable for SubSystem: '<S176>/Process_Messages1' */
            localDW->COMPTaskVote1check_MODE = false;
          }

          /* End of Disable for SubSystem: '<S161>/COMP Task - Vote1 check' */

          /* Disable for Enabled SubSystem: '<S161>/COMP Task - Vote2 check' */
          if (localDW->COMPTaskVote2check_MODE) {
            /* Disable for Enabled SubSystem: '<S178>/Process_Messages' */
            if (localDW->Process_Messages_g.Process_Messages1_MODE) {
              Process_Messages1_Disable(&localB->Process_Messages_g,
                &localDW->Process_Messages_g);
            }

            /* End of Disable for SubSystem: '<S178>/Process_Messages' */
            localDW->COMPTaskVote2check_MODE = false;
          }

          /* End of Disable for SubSystem: '<S161>/COMP Task - Vote2 check' */

          /* Disable for Enabled SubSystem: '<S161>/COMP Task - Vote3 check' */
          if (localDW->COMPTaskVote3check_MODE) {
            /* Disable for Enabled SubSystem: '<S180>/Process_Messages' */
            if (localDW->Process_Messages_gc.Process_Messages1_MODE) {
              Process_Messages1_Disable(&localB->Process_Messages_gc,
                &localDW->Process_Messages_gc);
            }

            /* End of Disable for SubSystem: '<S180>/Process_Messages' */
            localDW->COMPTaskVote3check_MODE = false;
          }

          /* End of Disable for SubSystem: '<S161>/COMP Task - Vote3 check' */

          /* Disable for Enabled SubSystem: '<S161>/COMM Task - Sync bc 0' */
          if (localDW->COMMTaskSyncbc0_MODE) {
            /* Disable for Enabled SubSystem: '<S164>/Reception substasks' */
            if (localDW->Receptionsubstasks_h.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_h,
                &localDW->Receptionsubstasks_h);
            }

            /* End of Disable for SubSystem: '<S164>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S164>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_l.Transmissionsubtasks_MODE) {
              Transmissionsubtasks_Disable(&localB->Transmissionsubtasks_l,
                &localDW->Transmissionsubtasks_l);
            }

            /* End of Disable for SubSystem: '<S164>/Transmission subtasks' */

            /* Disable for Outport: '<S164>/Send CAN1' */
            localB->Transmissionsubtasks_l.Equal7_a = false;

            /* Disable for Outport: '<S164>/Receive CAN1' */
            localB->Receptionsubstasks_h.AND = false;

            /* Disable for Outport: '<S164>/Send CAN2' */
            localB->Transmissionsubtasks_l.Equal7 = false;

            /* Disable for Outport: '<S164>/Receive CAN2' */
            localB->Receptionsubstasks_h.AND1 = false;
            localDW->COMMTaskSyncbc0_MODE = false;
          }

          /* End of Disable for SubSystem: '<S161>/COMM Task - Sync bc 0' */

          /* Disable for Enabled SubSystem: '<S161>/COMM Task - Vote1' */
          if (localDW->COMMTaskVote1_MODE) {
            /* Disable for Enabled SubSystem: '<S165>/Reception substasks' */
            if (localDW->Receptionsubstasks_k.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_k,
                &localDW->Receptionsubstasks_k);
            }

            /* End of Disable for SubSystem: '<S165>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S165>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_pw.Transmissionsubtasks_MODE) {
              Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_pw,
                &localDW->Transmissionsubtasks_pw);
            }

            /* End of Disable for SubSystem: '<S165>/Transmission subtasks' */

            /* Disable for Outport: '<S165>/Send CAN1' */
            localB->Transmissionsubtasks_pw.Equal7_m = false;

            /* Disable for Outport: '<S165>/Receive CAN1' */
            localB->Receptionsubstasks_k.AND = false;

            /* Disable for Outport: '<S165>/Send CAN2' */
            localB->Transmissionsubtasks_pw.Equal7 = false;

            /* Disable for Outport: '<S165>/Receive CAN2' */
            localB->Receptionsubstasks_k.AND1 = false;
            localDW->COMMTaskVote1_MODE = false;
          }

          /* End of Disable for SubSystem: '<S161>/COMM Task - Vote1' */

          /* Disable for Enabled SubSystem: '<S161>/COMM Task - Vote2' */
          if (localDW->COMMTaskVote2_MODE) {
            /* Disable for Enabled SubSystem: '<S166>/Reception substasks' */
            if (localDW->Receptionsubstasks_g.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_g,
                &localDW->Receptionsubstasks_g);
            }

            /* End of Disable for SubSystem: '<S166>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S166>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_d.Transmissionsubtasks_MODE) {
              Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_d,
                &localDW->Transmissionsubtasks_d);
            }

            /* End of Disable for SubSystem: '<S166>/Transmission subtasks' */

            /* Disable for Outport: '<S166>/Send CAN1' */
            localB->Transmissionsubtasks_d.Equal7_m = false;

            /* Disable for Outport: '<S166>/Receive CAN1' */
            localB->Receptionsubstasks_g.AND = false;

            /* Disable for Outport: '<S166>/Send CAN2' */
            localB->Transmissionsubtasks_d.Equal7 = false;

            /* Disable for Outport: '<S166>/Receive CAN2' */
            localB->Receptionsubstasks_g.AND1 = false;
            localDW->COMMTaskVote2_MODE = false;
          }

          /* End of Disable for SubSystem: '<S161>/COMM Task - Vote2' */

          /* Disable for Enabled SubSystem: '<S161>/COMM Task - Vote3' */
          if (localDW->COMMTaskVote3_MODE) {
            /* Disable for Enabled SubSystem: '<S167>/Reception substasks' */
            if (localDW->Receptionsubstasks_e.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_e,
                &localDW->Receptionsubstasks_e);
            }

            /* End of Disable for SubSystem: '<S167>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S167>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_a.Transmissionsubtasks_MODE) {
              Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_a,
                &localDW->Transmissionsubtasks_a);
            }

            /* End of Disable for SubSystem: '<S167>/Transmission subtasks' */

            /* Disable for Outport: '<S167>/Send CAN1' */
            localB->Transmissionsubtasks_a.Equal7_m = false;

            /* Disable for Outport: '<S167>/Receive CAN1' */
            localB->Receptionsubstasks_e.AND = false;

            /* Disable for Outport: '<S167>/Send CAN2' */
            localB->Transmissionsubtasks_a.Equal7 = false;

            /* Disable for Outport: '<S167>/Receive CAN2' */
            localB->Receptionsubstasks_e.AND1 = false;
            localDW->COMMTaskVote3_MODE = false;
          }

          /* End of Disable for SubSystem: '<S161>/COMM Task - Vote3' */

          /* Disable for Outport: '<S161>/Send_Message_CAN1' */
          localB->OR1 = false;

          /* Disable for Outport: '<S161>/Send_Message_CAN2' */
          localB->OR4 = false;

          /* Disable for Outport: '<S161>/Receive_Message_CAN1' */
          localB->OR2 = false;

          /* Disable for Outport: '<S161>/Receive_Message_CAN2' */
          localB->OR3 = false;
          localDW->controllerbasiccycle0_MODE = false;
        }

        /* End of Disable for SubSystem: '<S159>/controller basic cycle 0' */

        /* Disable for Enabled SubSystem: '<S159>/controller basic cycle 1' */
        if (localDW->controllerbasiccycle1_MODE) {
          /* Disable for Enabled SubSystem: '<S162>/COMP Task - Sync bc1 check' */
          if (localDW->COMPTaskSyncbc1check_MODE) {
            /* Disable for Enabled SubSystem: '<S387>/Process_Messages' */
            if (localDW->Process_Messages_MODE) {
              /* Disable for Enabled SubSystem: '<S409>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_a.DemuxmessageCAN1andcheckcoher_f)
              {
                DemuxmessageCAN1andchec_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_a,
                   &localDW->DemuxmessageCAN1andcheckcoher_a);
              }

              /* End of Disable for SubSystem: '<S409>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S409>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcoher_i.DemuxmessageCAN1andcheckcoher_m)
              {
                DemuxmessageCAN1andch_l_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_i,
                   &localDW->DemuxmessageCAN1andcheckcoher_i);
              }

              /* End of Disable for SubSystem: '<S409>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE = false;
            }

            /* End of Disable for SubSystem: '<S387>/Process_Messages' */
            localDW->COMPTaskSyncbc1check_MODE = false;
          }

          /* End of Disable for SubSystem: '<S162>/COMP Task - Sync bc1 check' */

          /* Disable for Enabled SubSystem: '<S162>/COMM Task - Sync bc 1' */
          if (localDW->COMMTaskSyncbc1_MODE) {
            /* Disable for Enabled SubSystem: '<S385>/Reception substasks' */
            if (localDW->Receptionsubstasks_j.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_j,
                &localDW->Receptionsubstasks_j);
            }

            /* End of Disable for SubSystem: '<S385>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S385>/Transmission subtasks1' */
            if (localDW->Transmissionsubtasks1.Transmissionsubtasks_MODE) {
              Transmissionsubtasks_Disable(&localB->Transmissionsubtasks1,
                &localDW->Transmissionsubtasks1);
            }

            /* End of Disable for SubSystem: '<S385>/Transmission subtasks1' */

            /* Disable for Outport: '<S385>/Send CAN1' */
            localB->Transmissionsubtasks1.Equal7_a = false;

            /* Disable for Outport: '<S385>/Receive CAN1' */
            localB->Receptionsubstasks_j.AND = false;

            /* Disable for Outport: '<S385>/Send CAN2' */
            localB->Transmissionsubtasks1.Equal7 = false;

            /* Disable for Outport: '<S385>/Receive CAN2' */
            localB->Receptionsubstasks_j.AND1 = false;
            localDW->COMMTaskSyncbc1_MODE = false;
          }

          /* End of Disable for SubSystem: '<S162>/COMM Task - Sync bc 1' */

          /* Disable for Outport: '<S162>/Send_Message_CAN1' */
          localB->Transmissionsubtasks1.Equal7_a = false;

          /* Disable for Outport: '<S162>/Send_Message_CAN2' */
          localB->Transmissionsubtasks1.Equal7 = false;

          /* Disable for Outport: '<S162>/Receive_Message_CAN1' */
          localB->Receptionsubstasks_j.AND = false;

          /* Disable for Outport: '<S162>/Receive_Message_CAN2' */
          localB->Receptionsubstasks_j.AND1 = false;
          localDW->controllerbasiccycle1_MODE = false;
        }

        /* End of Disable for SubSystem: '<S159>/controller basic cycle 1' */

        /* Disable for Outport: '<S159>/Send_CAN1' */
        localB->signal1 = false;

        /* Disable for Outport: '<S159>/Send_CAN2' */
        localB->signal2 = false;

        /* Disable for Outport: '<S159>/Receive_CAN1' */
        localB->signal3 = false;

        /* Disable for Outport: '<S159>/Receive_CAN2' */
        localB->signal4 = false;
        localDW->ControllerMatrixCycle_MODE = false;
      }
    }

    /* End of Outputs for SubSystem: '<S132>/Controller Matrix Cycle' */
  } else {
    if (localDW->MatrixCycleManager_MODE) {
      /* Disable for Enabled SubSystem: '<S132>/Controller Matrix Cycle' */
      if (localDW->ControllerMatrixCycle_MODE) {
        /* Disable for Enabled SubSystem: '<S159>/controller basic cycle 0' */
        if (localDW->controllerbasiccycle0_MODE) {
          /* Disable for Enabled SubSystem: '<S161>/COMP Task - Sync bc0 check' */
          if (localDW->COMPTaskSyncbc0check_MODE) {
            /* Disable for Enabled SubSystem: '<S172>/Process_Messages' */
            if (localDW->Process_Messages_MODE_e) {
              /* Disable for Enabled SubSystem: '<S262>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_g.DemuxmessageCAN1andcheckcoher_f)
              {
                DemuxmessageCAN1andchec_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_g,
                   &localDW->DemuxmessageCAN1andcheckcoher_g);
              }

              /* End of Disable for SubSystem: '<S262>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S262>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcohe_p3.DemuxmessageCAN1andcheckcoher_m)
              {
                DemuxmessageCAN1andch_l_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_p3,
                   &localDW->DemuxmessageCAN1andcheckcohe_p3);
              }

              /* End of Disable for SubSystem: '<S262>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE_e = false;
            }

            /* End of Disable for SubSystem: '<S172>/Process_Messages' */
            localDW->COMPTaskSyncbc0check_MODE = false;
          }

          /* End of Disable for SubSystem: '<S161>/COMP Task - Sync bc0 check' */

          /* Disable for Enabled SubSystem: '<S161>/COMP Task - Vote1 check' */
          if (localDW->COMPTaskVote1check_MODE) {
            /* Disable for Enabled SubSystem: '<S176>/Process_Messages1' */
            if (localDW->Process_Messages1_c.Process_Messages1_MODE) {
              Process_Messages1_Disable(&localB->Process_Messages1_c,
                &localDW->Process_Messages1_c);
            }

            /* End of Disable for SubSystem: '<S176>/Process_Messages1' */
            localDW->COMPTaskVote1check_MODE = false;
          }

          /* End of Disable for SubSystem: '<S161>/COMP Task - Vote1 check' */

          /* Disable for Enabled SubSystem: '<S161>/COMP Task - Vote2 check' */
          if (localDW->COMPTaskVote2check_MODE) {
            /* Disable for Enabled SubSystem: '<S178>/Process_Messages' */
            if (localDW->Process_Messages_g.Process_Messages1_MODE) {
              Process_Messages1_Disable(&localB->Process_Messages_g,
                &localDW->Process_Messages_g);
            }

            /* End of Disable for SubSystem: '<S178>/Process_Messages' */
            localDW->COMPTaskVote2check_MODE = false;
          }

          /* End of Disable for SubSystem: '<S161>/COMP Task - Vote2 check' */

          /* Disable for Enabled SubSystem: '<S161>/COMP Task - Vote3 check' */
          if (localDW->COMPTaskVote3check_MODE) {
            /* Disable for Enabled SubSystem: '<S180>/Process_Messages' */
            if (localDW->Process_Messages_gc.Process_Messages1_MODE) {
              Process_Messages1_Disable(&localB->Process_Messages_gc,
                &localDW->Process_Messages_gc);
            }

            /* End of Disable for SubSystem: '<S180>/Process_Messages' */
            localDW->COMPTaskVote3check_MODE = false;
          }

          /* End of Disable for SubSystem: '<S161>/COMP Task - Vote3 check' */

          /* Disable for Enabled SubSystem: '<S161>/COMM Task - Sync bc 0' */
          if (localDW->COMMTaskSyncbc0_MODE) {
            /* Disable for Enabled SubSystem: '<S164>/Reception substasks' */
            if (localDW->Receptionsubstasks_h.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_h,
                &localDW->Receptionsubstasks_h);
            }

            /* End of Disable for SubSystem: '<S164>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S164>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_l.Transmissionsubtasks_MODE) {
              Transmissionsubtasks_Disable(&localB->Transmissionsubtasks_l,
                &localDW->Transmissionsubtasks_l);
            }

            /* End of Disable for SubSystem: '<S164>/Transmission subtasks' */

            /* Disable for Outport: '<S164>/Send CAN1' */
            localB->Transmissionsubtasks_l.Equal7_a = false;

            /* Disable for Outport: '<S164>/Receive CAN1' */
            localB->Receptionsubstasks_h.AND = false;

            /* Disable for Outport: '<S164>/Send CAN2' */
            localB->Transmissionsubtasks_l.Equal7 = false;

            /* Disable for Outport: '<S164>/Receive CAN2' */
            localB->Receptionsubstasks_h.AND1 = false;
            localDW->COMMTaskSyncbc0_MODE = false;
          }

          /* End of Disable for SubSystem: '<S161>/COMM Task - Sync bc 0' */

          /* Disable for Enabled SubSystem: '<S161>/COMM Task - Vote1' */
          if (localDW->COMMTaskVote1_MODE) {
            /* Disable for Enabled SubSystem: '<S165>/Reception substasks' */
            if (localDW->Receptionsubstasks_k.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_k,
                &localDW->Receptionsubstasks_k);
            }

            /* End of Disable for SubSystem: '<S165>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S165>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_pw.Transmissionsubtasks_MODE) {
              Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_pw,
                &localDW->Transmissionsubtasks_pw);
            }

            /* End of Disable for SubSystem: '<S165>/Transmission subtasks' */

            /* Disable for Outport: '<S165>/Send CAN1' */
            localB->Transmissionsubtasks_pw.Equal7_m = false;

            /* Disable for Outport: '<S165>/Receive CAN1' */
            localB->Receptionsubstasks_k.AND = false;

            /* Disable for Outport: '<S165>/Send CAN2' */
            localB->Transmissionsubtasks_pw.Equal7 = false;

            /* Disable for Outport: '<S165>/Receive CAN2' */
            localB->Receptionsubstasks_k.AND1 = false;
            localDW->COMMTaskVote1_MODE = false;
          }

          /* End of Disable for SubSystem: '<S161>/COMM Task - Vote1' */

          /* Disable for Enabled SubSystem: '<S161>/COMM Task - Vote2' */
          if (localDW->COMMTaskVote2_MODE) {
            /* Disable for Enabled SubSystem: '<S166>/Reception substasks' */
            if (localDW->Receptionsubstasks_g.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_g,
                &localDW->Receptionsubstasks_g);
            }

            /* End of Disable for SubSystem: '<S166>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S166>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_d.Transmissionsubtasks_MODE) {
              Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_d,
                &localDW->Transmissionsubtasks_d);
            }

            /* End of Disable for SubSystem: '<S166>/Transmission subtasks' */

            /* Disable for Outport: '<S166>/Send CAN1' */
            localB->Transmissionsubtasks_d.Equal7_m = false;

            /* Disable for Outport: '<S166>/Receive CAN1' */
            localB->Receptionsubstasks_g.AND = false;

            /* Disable for Outport: '<S166>/Send CAN2' */
            localB->Transmissionsubtasks_d.Equal7 = false;

            /* Disable for Outport: '<S166>/Receive CAN2' */
            localB->Receptionsubstasks_g.AND1 = false;
            localDW->COMMTaskVote2_MODE = false;
          }

          /* End of Disable for SubSystem: '<S161>/COMM Task - Vote2' */

          /* Disable for Enabled SubSystem: '<S161>/COMM Task - Vote3' */
          if (localDW->COMMTaskVote3_MODE) {
            /* Disable for Enabled SubSystem: '<S167>/Reception substasks' */
            if (localDW->Receptionsubstasks_e.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_e,
                &localDW->Receptionsubstasks_e);
            }

            /* End of Disable for SubSystem: '<S167>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S167>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_a.Transmissionsubtasks_MODE) {
              Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_a,
                &localDW->Transmissionsubtasks_a);
            }

            /* End of Disable for SubSystem: '<S167>/Transmission subtasks' */

            /* Disable for Outport: '<S167>/Send CAN1' */
            localB->Transmissionsubtasks_a.Equal7_m = false;

            /* Disable for Outport: '<S167>/Receive CAN1' */
            localB->Receptionsubstasks_e.AND = false;

            /* Disable for Outport: '<S167>/Send CAN2' */
            localB->Transmissionsubtasks_a.Equal7 = false;

            /* Disable for Outport: '<S167>/Receive CAN2' */
            localB->Receptionsubstasks_e.AND1 = false;
            localDW->COMMTaskVote3_MODE = false;
          }

          /* End of Disable for SubSystem: '<S161>/COMM Task - Vote3' */

          /* Disable for Outport: '<S161>/Send_Message_CAN1' */
          localB->OR1 = false;

          /* Disable for Outport: '<S161>/Send_Message_CAN2' */
          localB->OR4 = false;

          /* Disable for Outport: '<S161>/Receive_Message_CAN1' */
          localB->OR2 = false;

          /* Disable for Outport: '<S161>/Receive_Message_CAN2' */
          localB->OR3 = false;
          localDW->controllerbasiccycle0_MODE = false;
        }

        /* End of Disable for SubSystem: '<S159>/controller basic cycle 0' */

        /* Disable for Enabled SubSystem: '<S159>/controller basic cycle 1' */
        if (localDW->controllerbasiccycle1_MODE) {
          /* Disable for Enabled SubSystem: '<S162>/COMP Task - Sync bc1 check' */
          if (localDW->COMPTaskSyncbc1check_MODE) {
            /* Disable for Enabled SubSystem: '<S387>/Process_Messages' */
            if (localDW->Process_Messages_MODE) {
              /* Disable for Enabled SubSystem: '<S409>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_a.DemuxmessageCAN1andcheckcoher_f)
              {
                DemuxmessageCAN1andchec_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_a,
                   &localDW->DemuxmessageCAN1andcheckcoher_a);
              }

              /* End of Disable for SubSystem: '<S409>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S409>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcoher_i.DemuxmessageCAN1andcheckcoher_m)
              {
                DemuxmessageCAN1andch_l_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_i,
                   &localDW->DemuxmessageCAN1andcheckcoher_i);
              }

              /* End of Disable for SubSystem: '<S409>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE = false;
            }

            /* End of Disable for SubSystem: '<S387>/Process_Messages' */
            localDW->COMPTaskSyncbc1check_MODE = false;
          }

          /* End of Disable for SubSystem: '<S162>/COMP Task - Sync bc1 check' */

          /* Disable for Enabled SubSystem: '<S162>/COMM Task - Sync bc 1' */
          if (localDW->COMMTaskSyncbc1_MODE) {
            /* Disable for Enabled SubSystem: '<S385>/Reception substasks' */
            if (localDW->Receptionsubstasks_j.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_j,
                &localDW->Receptionsubstasks_j);
            }

            /* End of Disable for SubSystem: '<S385>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S385>/Transmission subtasks1' */
            if (localDW->Transmissionsubtasks1.Transmissionsubtasks_MODE) {
              Transmissionsubtasks_Disable(&localB->Transmissionsubtasks1,
                &localDW->Transmissionsubtasks1);
            }

            /* End of Disable for SubSystem: '<S385>/Transmission subtasks1' */

            /* Disable for Outport: '<S385>/Send CAN1' */
            localB->Transmissionsubtasks1.Equal7_a = false;

            /* Disable for Outport: '<S385>/Receive CAN1' */
            localB->Receptionsubstasks_j.AND = false;

            /* Disable for Outport: '<S385>/Send CAN2' */
            localB->Transmissionsubtasks1.Equal7 = false;

            /* Disable for Outport: '<S385>/Receive CAN2' */
            localB->Receptionsubstasks_j.AND1 = false;
            localDW->COMMTaskSyncbc1_MODE = false;
          }

          /* End of Disable for SubSystem: '<S162>/COMM Task - Sync bc 1' */

          /* Disable for Outport: '<S162>/Send_Message_CAN1' */
          localB->Transmissionsubtasks1.Equal7_a = false;

          /* Disable for Outport: '<S162>/Send_Message_CAN2' */
          localB->Transmissionsubtasks1.Equal7 = false;

          /* Disable for Outport: '<S162>/Receive_Message_CAN1' */
          localB->Receptionsubstasks_j.AND = false;

          /* Disable for Outport: '<S162>/Receive_Message_CAN2' */
          localB->Receptionsubstasks_j.AND1 = false;
          localDW->controllerbasiccycle1_MODE = false;
        }

        /* End of Disable for SubSystem: '<S159>/controller basic cycle 1' */

        /* Disable for Outport: '<S159>/Send_CAN1' */
        localB->signal1 = false;

        /* Disable for Outport: '<S159>/Send_CAN2' */
        localB->signal2 = false;

        /* Disable for Outport: '<S159>/Receive_CAN1' */
        localB->signal3 = false;

        /* Disable for Outport: '<S159>/Receive_CAN2' */
        localB->signal4 = false;
        localDW->ControllerMatrixCycle_MODE = false;
      }

      /* End of Disable for SubSystem: '<S132>/Controller Matrix Cycle' */

      /* Disable for Outport: '<S132>/Send_Message_CAN1' */
      localB->signal1 = false;

      /* Disable for Outport: '<S132>/Send_Message_CAN2' */
      localB->signal2 = false;

      /* Disable for Outport: '<S132>/Receive_Message_CAN1' */
      localB->signal3 = false;

      /* Disable for Outport: '<S132>/Receive_Message_CAN2' */
      localB->signal4 = false;
      localDW->MatrixCycleManager_MODE = false;
    }
  }

  /* End of Logic: '<S36>/NOT1' */
  /* End of Outputs for SubSystem: '<S36>/Matrix Cycle Manager' */

  /* Logic: '<S36>/OR' incorporates:
   *  DataStoreRead: '<S36>/Data Store Read1'
   */
  rtb_OR1_l = (localB->signal3 || localDW->Initialization_flag);

  /* Chart: '<S36>/Chart' */
  /* Gateway: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart */
  /* During: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart */
  if (localDW->bitsForTID1.is_active_c4_HANcoder_E407_TTA_ == 0U) {
    /* Entry: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart */
    localDW->bitsForTID1.is_active_c4_HANcoder_E407_TTA_ = 1U;

    /* Entry Internal: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart */
    /* Transition: '<S116>:10' */
    /* Entry 'Send_Trigger': '<S116>:9' */
    if (localB->signal1) {
      /* Outputs for Function Call SubSystem: '<S10>/CAN1 Send' */
      /* Event: '<S116>:3' */
      CAN1Send(&localB->CAN1Send_o, &localDW->CAN1Send_o, rtd_Msg_Tx_CAN1,
               rtd_Toggle_Pin_A0, rtd_Toggle_Pin_D13, rtd_TxID_CAN1,
               rtd_Tx_msg_count_CAN1);

      /* End of Outputs for SubSystem: '<S10>/CAN1 Send' */
    }
  } else {
    /* During 'Send_Trigger': '<S116>:9' */
    if (localB->signal1) {
      /* Outputs for Function Call SubSystem: '<S10>/CAN1 Send' */
      /* Event: '<S116>:3' */
      CAN1Send(&localB->CAN1Send_o, &localDW->CAN1Send_o, rtd_Msg_Tx_CAN1,
               rtd_Toggle_Pin_A0, rtd_Toggle_Pin_D13, rtd_TxID_CAN1,
               rtd_Tx_msg_count_CAN1);

      /* End of Outputs for SubSystem: '<S10>/CAN1 Send' */
    }
  }

  /* End of Chart: '<S36>/Chart' */

  /* Chart: '<S36>/Chart1' */
  /* Gateway: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart1 */
  /* During: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart1 */
  if (localDW->bitsForTID1.is_active_c5_HANcoder_E407_TTA_ == 0U) {
    /* Entry: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart1 */
    localDW->bitsForTID1.is_active_c5_HANcoder_E407_TTA_ = 1U;

    /* Entry Internal: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart1 */
    /* Transition: '<S117>:10' */
    /* Entry 'Send_Trigger': '<S117>:9' */
    if (rtb_OR1_l) {
      /* Outputs for Function Call SubSystem: '<S10>/CAN1 Recieve' */
      /* Event: '<S117>:3' */
      CAN1Recieve(&localB->CAN1Recieve_h, &localDW->CAN1Recieve_h,
                  rtd_Local_Ticks, rtd_Msg_Rx_CAN1, rtd_Msg_Rx_Ticks_CAN1,
                  rtd_New_Msg_Ready_CAN1, rtd_RxID_CAN1, rtd_Rx_State_CAN1,
                  rtd_Toggle_Pin_A0, rtd_Toggle_Pin_D12);

      /* End of Outputs for SubSystem: '<S10>/CAN1 Recieve' */
    }
  } else {
    /* During 'Send_Trigger': '<S117>:9' */
    if (rtb_OR1_l) {
      /* Outputs for Function Call SubSystem: '<S10>/CAN1 Recieve' */
      /* Event: '<S117>:3' */
      CAN1Recieve(&localB->CAN1Recieve_h, &localDW->CAN1Recieve_h,
                  rtd_Local_Ticks, rtd_Msg_Rx_CAN1, rtd_Msg_Rx_Ticks_CAN1,
                  rtd_New_Msg_Ready_CAN1, rtd_RxID_CAN1, rtd_Rx_State_CAN1,
                  rtd_Toggle_Pin_A0, rtd_Toggle_Pin_D12);

      /* End of Outputs for SubSystem: '<S10>/CAN1 Recieve' */
    }
  }

  /* End of Chart: '<S36>/Chart1' */

  /* Logic: '<S36>/OR1' incorporates:
   *  DataStoreRead: '<S36>/Data Store Read1'
   */
  rtb_OR1_l = (localDW->Initialization_flag || localB->signal4);

  /* Chart: '<S36>/Chart2' */
  /* Gateway: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart2 */
  /* During: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart2 */
  if (localDW->bitsForTID1.is_active_c6_HANcoder_E407_TTA_ == 0U) {
    /* Entry: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart2 */
    localDW->bitsForTID1.is_active_c6_HANcoder_E407_TTA_ = 1U;

    /* Entry Internal: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart2 */
    /* Transition: '<S118>:10' */
    /* Entry 'Send_Trigger': '<S118>:9' */
    if (rtb_OR1_l) {
      /* Outputs for Function Call SubSystem: '<S10>/CAN2 Recieve' */
      /* Event: '<S118>:3' */
      CAN2Recieve(&localB->CAN2Recieve_b, &localDW->CAN2Recieve_b,
                  rtd_Local_Ticks, rtd_Msg_Rx_CAN2, rtd_Msg_Rx_Ticks_CAN2,
                  rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN2, rtd_Rx_State_CAN2,
                  rtd_Toggle_Pin_A0, rtd_Toggle_Pin_D8);

      /* End of Outputs for SubSystem: '<S10>/CAN2 Recieve' */
    }
  } else {
    /* During 'Send_Trigger': '<S118>:9' */
    if (rtb_OR1_l) {
      /* Outputs for Function Call SubSystem: '<S10>/CAN2 Recieve' */
      /* Event: '<S118>:3' */
      CAN2Recieve(&localB->CAN2Recieve_b, &localDW->CAN2Recieve_b,
                  rtd_Local_Ticks, rtd_Msg_Rx_CAN2, rtd_Msg_Rx_Ticks_CAN2,
                  rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN2, rtd_Rx_State_CAN2,
                  rtd_Toggle_Pin_A0, rtd_Toggle_Pin_D8);

      /* End of Outputs for SubSystem: '<S10>/CAN2 Recieve' */
    }
  }

  /* End of Chart: '<S36>/Chart2' */

  /* Chart: '<S36>/Chart3' */
  /* Gateway: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart3 */
  /* During: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart3 */
  if (localDW->bitsForTID1.is_active_c7_HANcoder_E407_TTA_ == 0U) {
    /* Entry: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart3 */
    localDW->bitsForTID1.is_active_c7_HANcoder_E407_TTA_ = 1U;

    /* Entry Internal: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart3 */
    /* Transition: '<S119>:10' */
    /* Entry 'Send_Trigger': '<S119>:9' */
    if (localB->signal2) {
      /* Outputs for Function Call SubSystem: '<S10>/CAN2 Send' */
      /* Event: '<S119>:3' */
      CAN2Send(&localB->CAN2Send_h, &localDW->CAN2Send_h, rtd_Msg_Tx_CAN2,
               rtd_Toggle_Pin_A0, rtd_Toggle_Pin_D9, rtd_TxID_CAN2,
               rtd_Tx_msg_count_CAN2);

      /* End of Outputs for SubSystem: '<S10>/CAN2 Send' */
    }
  } else {
    /* During 'Send_Trigger': '<S119>:9' */
    if (localB->signal2) {
      /* Outputs for Function Call SubSystem: '<S10>/CAN2 Send' */
      /* Event: '<S119>:3' */
      CAN2Send(&localB->CAN2Send_h, &localDW->CAN2Send_h, rtd_Msg_Tx_CAN2,
               rtd_Toggle_Pin_A0, rtd_Toggle_Pin_D9, rtd_TxID_CAN2,
               rtd_Tx_msg_count_CAN2);

      /* End of Outputs for SubSystem: '<S10>/CAN2 Send' */
    }
  }

  /* End of Chart: '<S36>/Chart3' */

  /* Outputs for Enabled SubSystem: '<S36>/DEBUG - Toggle digital pin A0' incorporates:
   *  EnablePort: '<S121>/Enable'
   */
  /* Logic: '<S36>/AND' incorporates:
   *  Constant: '<S36>/Constant1'
   */
  if ((*rtd_Toggle_Pin_A0) && (1.0 != 0.0)) {
    if (!localDW->DEBUGToggledigitalpinA0_MODE) {
      localDW->DEBUGToggledigitalpinA0_MODE = true;
    }

    /* Switch: '<S121>/Switch' incorporates:
     *  DataStoreRead: '<S121>/Data Store Read'
     */
    if (localDW->A0_Pin_State) {
      /* DataStoreWrite: '<S121>/Data Store Write1' incorporates:
       *  Constant: '<S121>/Constant1'
       */
      localDW->A0_Pin_State = false;
    } else {
      /* DataStoreWrite: '<S121>/Data Store Write1' incorporates:
       *  Constant: '<S121>/Constant'
       */
      localDW->A0_Pin_State = true;
    }

    /* End of Switch: '<S121>/Switch' */

    /* DataStoreWrite: '<S121>/Data Store Write' incorporates:
     *  Constant: '<S121>/Constant2'
     */
    *rtd_Toggle_Pin_A0 = false;

    /* DataStoreRead: '<S121>/Data Store Read1' */
    localB->DataStoreRead1_o1 = localDW->A0_Pin_State;

    /* Update for M-S-Function: '<S133>/Level-2 M-file S-Function' */
    /* update digital output */
    if (localB->DataStoreRead1_o1 == 0) {
      DigoutSet(DIGOUT_PORTC_PIN0, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTC_PIN0, DIGOUT_HIGH);
    }
  } else {
    if (localDW->DEBUGToggledigitalpinA0_MODE) {
      localDW->DEBUGToggledigitalpinA0_MODE = false;
    }
  }

  /* End of Logic: '<S36>/AND' */
  /* End of Outputs for SubSystem: '<S36>/DEBUG - Toggle digital pin A0' */

  /* Outputs for Enabled SubSystem: '<S36>/DEBUG - Toggle digital pin A1' incorporates:
   *  EnablePort: '<S122>/Enable'
   */
  /* Logic: '<S36>/AND1' incorporates:
   *  Constant: '<S36>/Constant4'
   *  DataStoreRead: '<S36>/Data Store Read3'
   */
  if (localDW->Toggle_Pin_A1 && (1.0 != 0.0)) {
    if (!localDW->DEBUGToggledigitalpinA1_MODE) {
      localDW->DEBUGToggledigitalpinA1_MODE = true;
    }

    /* Switch: '<S122>/Switch' incorporates:
     *  DataStoreRead: '<S122>/Data Store Read'
     */
    if (localDW->A1_Pin_State) {
      /* DataStoreWrite: '<S122>/Data Store Write1' incorporates:
       *  Constant: '<S122>/Constant1'
       */
      localDW->A1_Pin_State = false;
    } else {
      /* DataStoreWrite: '<S122>/Data Store Write1' incorporates:
       *  Constant: '<S122>/Constant'
       */
      localDW->A1_Pin_State = true;
    }

    /* End of Switch: '<S122>/Switch' */

    /* DataStoreWrite: '<S122>/Data Store Write' incorporates:
     *  Constant: '<S122>/Constant2'
     */
    localDW->Toggle_Pin_A1 = false;

    /* DataStoreRead: '<S122>/Data Store Read1' */
    localB->DataStoreRead1_e = localDW->A1_Pin_State;

    /* Update for M-S-Function: '<S134>/Level-2 M-file S-Function' */
    /* update digital output */
    if (localB->DataStoreRead1_e == 0) {
      DigoutSet(DIGOUT_PORTF_PIN6, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTF_PIN6, DIGOUT_HIGH);
    }
  } else {
    if (localDW->DEBUGToggledigitalpinA1_MODE) {
      localDW->DEBUGToggledigitalpinA1_MODE = false;
    }
  }

  /* End of Logic: '<S36>/AND1' */
  /* End of Outputs for SubSystem: '<S36>/DEBUG - Toggle digital pin A1' */

  /* Outputs for Enabled SubSystem: '<S36>/DEBUG - Toggle digital pin D10' incorporates:
   *  EnablePort: '<S125>/Enable'
   */
  /* Logic: '<S36>/AND6' incorporates:
   *  Constant: '<S36>/Constant9'
   *  DataStoreRead: '<S36>/Data Store Read14'
   */
  if (localDW->Toggle_Pin_D10 && (1.0 != 0.0)) {
    if (!localDW->DEBUGToggledigitalpinD10_MODE) {
      localDW->DEBUGToggledigitalpinD10_MODE = true;
    }

    /* Switch: '<S125>/Switch' incorporates:
     *  DataStoreRead: '<S125>/Data Store Read'
     */
    if (localDW->D10_Pin_State) {
      /* DataStoreWrite: '<S125>/Data Store Write1' incorporates:
       *  Constant: '<S125>/Constant1'
       */
      localDW->D10_Pin_State = false;
    } else {
      /* DataStoreWrite: '<S125>/Data Store Write1' incorporates:
       *  Constant: '<S125>/Constant'
       */
      localDW->D10_Pin_State = true;
    }

    /* End of Switch: '<S125>/Switch' */

    /* DataStoreWrite: '<S125>/Data Store Write' incorporates:
     *  Constant: '<S125>/Constant2'
     */
    localDW->Toggle_Pin_D10 = false;

    /* DataStoreRead: '<S125>/Data Store Read1' */
    localB->DataStoreRead1_h = localDW->D10_Pin_State;

    /* Update for M-S-Function: '<S137>/Level-2 M-file S-Function' */
    /* update digital output */
    if (localB->DataStoreRead1_h == 0) {
      DigoutSet(DIGOUT_PORTA_PIN4, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTA_PIN4, DIGOUT_HIGH);
    }
  } else {
    if (localDW->DEBUGToggledigitalpinD10_MODE) {
      localDW->DEBUGToggledigitalpinD10_MODE = false;
    }
  }

  /* End of Logic: '<S36>/AND6' */
  /* End of Outputs for SubSystem: '<S36>/DEBUG - Toggle digital pin D10' */

  /* Outputs for Enabled SubSystem: '<S36>/DEBUG - Toggle digital pin A4' incorporates:
   *  EnablePort: '<S124>/Enable'
   */
  /* Constant: '<S36>/Constant7' */
  if (1.0 > 0.0) {
    if (!localDW->DEBUGToggledigitalpinA4_MODE) {
      localDW->DEBUGToggledigitalpinA4_MODE = true;
    }

    /* Switch: '<S124>/Switch' incorporates:
     *  DataStoreRead: '<S124>/Data Store Read'
     */
    if (localDW->A4_Pin_State) {
      /* DataStoreWrite: '<S124>/Data Store Write1' incorporates:
       *  Constant: '<S124>/Constant1'
       */
      localDW->A4_Pin_State = false;
    } else {
      /* DataStoreWrite: '<S124>/Data Store Write1' incorporates:
       *  Constant: '<S124>/Constant'
       */
      localDW->A4_Pin_State = true;
    }

    /* End of Switch: '<S124>/Switch' */
    /* DataStoreRead: '<S124>/Data Store Read1' */
    localB->DataStoreRead1_m = localDW->A4_Pin_State;

    /* Update for M-S-Function: '<S136>/Level-2 M-file S-Function' */
    /* update digital output */
    if (localB->DataStoreRead1_m == 0) {
      DigoutSet(DIGOUT_PORTF_PIN9, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTF_PIN9, DIGOUT_HIGH);
    }
  } else {
    if (localDW->DEBUGToggledigitalpinA4_MODE) {
      localDW->DEBUGToggledigitalpinA4_MODE = false;
    }
  }

  /* End of Constant: '<S36>/Constant7' */
  /* End of Outputs for SubSystem: '<S36>/DEBUG - Toggle digital pin A4' */

  /* Outputs for Enabled SubSystem: '<S36>/Logic Analyzer - COMM delay CAN1 - Rx' incorporates:
   *  EnablePort: '<S128>/Enable'
   */
  /* Logic: '<S36>/AND3' incorporates:
   *  Constant: '<S36>/Constant8'
   */
  if ((1.0 != 0.0) && (*rtd_Toggle_Pin_D12 != 0.0)) {
    if (!localDW->LogicAnalyzerCOMMdelayCAN1Rx_MO) {
      localDW->LogicAnalyzerCOMMdelayCAN1Rx_MO = true;
    }

    /* Switch: '<S128>/Switch' incorporates:
     *  DataStoreRead: '<S128>/Data Store Read'
     */
    if (localDW->D12_Pin_State) {
      /* DataStoreWrite: '<S128>/Data Store Write1' incorporates:
       *  Constant: '<S128>/Constant1'
       */
      localDW->D12_Pin_State = false;
    } else {
      /* DataStoreWrite: '<S128>/Data Store Write1' incorporates:
       *  Constant: '<S128>/Constant'
       */
      localDW->D12_Pin_State = true;
    }

    /* End of Switch: '<S128>/Switch' */
    /* DataStoreRead: '<S128>/Data Store Read1' */
    localB->DataStoreRead1_c = localDW->D12_Pin_State;

    /* DataStoreWrite: '<S128>/Data Store Write2' incorporates:
     *  Constant: '<S128>/Constant2'
     */
    *rtd_Toggle_Pin_D12 = 0.0;

    /* Update for M-S-Function: '<S155>/Level-2 M-file S-Function' */
    /* update digital output */
    if (localB->DataStoreRead1_c == 0) {
      DigoutSet(DIGOUT_PORTA_PIN6, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTA_PIN6, DIGOUT_HIGH);
    }
  } else {
    if (localDW->LogicAnalyzerCOMMdelayCAN1Rx_MO) {
      localDW->LogicAnalyzerCOMMdelayCAN1Rx_MO = false;
    }
  }

  /* End of Logic: '<S36>/AND3' */
  /* End of Outputs for SubSystem: '<S36>/Logic Analyzer - COMM delay CAN1 - Rx' */

  /* Outputs for Enabled SubSystem: '<S36>/Logic Analyzer - COMM delay CAN1 - Tx' incorporates:
   *  EnablePort: '<S129>/Enable'
   */
  /* Logic: '<S36>/AND2' incorporates:
   *  Constant: '<S36>/Constant8'
   */
  if ((1.0 != 0.0) && (*rtd_Toggle_Pin_D13 != 0.0)) {
    if (!localDW->LogicAnalyzerCOMMdelayCAN1Tx_MO) {
      localDW->LogicAnalyzerCOMMdelayCAN1Tx_MO = true;
    }

    /* Switch: '<S129>/Switch' incorporates:
     *  DataStoreRead: '<S129>/Data Store Read'
     */
    if (localDW->D13_Pin_State) {
      /* DataStoreWrite: '<S129>/Data Store Write1' incorporates:
       *  Constant: '<S129>/Constant1'
       */
      localDW->D13_Pin_State = false;
    } else {
      /* DataStoreWrite: '<S129>/Data Store Write1' incorporates:
       *  Constant: '<S129>/Constant'
       */
      localDW->D13_Pin_State = true;
    }

    /* End of Switch: '<S129>/Switch' */
    /* DataStoreRead: '<S129>/Data Store Read1' */
    localB->DataStoreRead1_a = localDW->D13_Pin_State;

    /* DataStoreWrite: '<S129>/Data Store Write2' incorporates:
     *  Constant: '<S129>/Constant2'
     */
    *rtd_Toggle_Pin_D13 = 0.0;

    /* Update for M-S-Function: '<S156>/Level-2 M-file S-Function' */
    /* update digital output */
    if (localB->DataStoreRead1_a == 0) {
      DigoutSet(DIGOUT_PORTA_PIN5, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTA_PIN5, DIGOUT_HIGH);
    }
  } else {
    if (localDW->LogicAnalyzerCOMMdelayCAN1Tx_MO) {
      localDW->LogicAnalyzerCOMMdelayCAN1Tx_MO = false;
    }
  }

  /* End of Logic: '<S36>/AND2' */
  /* End of Outputs for SubSystem: '<S36>/Logic Analyzer - COMM delay CAN1 - Tx' */

  /* Outputs for Enabled SubSystem: '<S36>/Logic Analyzer - COMM delay CAN2 - Rx' incorporates:
   *  EnablePort: '<S130>/Enable'
   */
  /* Logic: '<S36>/AND5' incorporates:
   *  Constant: '<S36>/Constant8'
   */
  if ((1.0 != 0.0) && (*rtd_Toggle_Pin_D8 != 0.0)) {
    if (!localDW->LogicAnalyzerCOMMdelayCAN2Rx_MO) {
      localDW->LogicAnalyzerCOMMdelayCAN2Rx_MO = true;
    }

    /* Switch: '<S130>/Switch' incorporates:
     *  DataStoreRead: '<S130>/Data Store Read'
     */
    if (localDW->D8_Pin_State) {
      /* DataStoreWrite: '<S130>/Data Store Write1' incorporates:
       *  Constant: '<S130>/Constant1'
       */
      localDW->D8_Pin_State = false;
    } else {
      /* DataStoreWrite: '<S130>/Data Store Write1' incorporates:
       *  Constant: '<S130>/Constant'
       */
      localDW->D8_Pin_State = true;
    }

    /* End of Switch: '<S130>/Switch' */
    /* DataStoreRead: '<S130>/Data Store Read1' */
    localB->DataStoreRead1_d = localDW->D8_Pin_State;

    /* DataStoreWrite: '<S130>/Data Store Write2' incorporates:
     *  Constant: '<S130>/Constant2'
     */
    *rtd_Toggle_Pin_D8 = 0.0;

    /* Update for M-S-Function: '<S157>/Level-2 M-file S-Function' */
    /* update digital output */
    if (localB->DataStoreRead1_d == 0) {
      DigoutSet(DIGOUT_PORTG_PIN12, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTG_PIN12, DIGOUT_HIGH);
    }
  } else {
    if (localDW->LogicAnalyzerCOMMdelayCAN2Rx_MO) {
      localDW->LogicAnalyzerCOMMdelayCAN2Rx_MO = false;
    }
  }

  /* End of Logic: '<S36>/AND5' */
  /* End of Outputs for SubSystem: '<S36>/Logic Analyzer - COMM delay CAN2 - Rx' */

  /* Outputs for Enabled SubSystem: '<S36>/Logic Analyzer - COMM delay CAN2 - Tx' incorporates:
   *  EnablePort: '<S131>/Enable'
   */
  /* Logic: '<S36>/AND4' incorporates:
   *  Constant: '<S36>/Constant8'
   */
  if ((1.0 != 0.0) && (*rtd_Toggle_Pin_D9 != 0.0)) {
    if (!localDW->LogicAnalyzerCOMMdelayCAN2Tx_MO) {
      localDW->LogicAnalyzerCOMMdelayCAN2Tx_MO = true;
    }

    /* Switch: '<S131>/Switch' incorporates:
     *  DataStoreRead: '<S131>/Data Store Read'
     */
    if (localDW->D9_Pin_State) {
      /* DataStoreWrite: '<S131>/Data Store Write1' incorporates:
       *  Constant: '<S131>/Constant1'
       */
      localDW->D9_Pin_State = false;
    } else {
      /* DataStoreWrite: '<S131>/Data Store Write1' incorporates:
       *  Constant: '<S131>/Constant'
       */
      localDW->D9_Pin_State = true;
    }

    /* End of Switch: '<S131>/Switch' */
    /* DataStoreRead: '<S131>/Data Store Read1' */
    localB->DataStoreRead1 = localDW->D9_Pin_State;

    /* DataStoreWrite: '<S131>/Data Store Write2' incorporates:
     *  Constant: '<S131>/Constant2'
     */
    *rtd_Toggle_Pin_D9 = 0.0;

    /* Update for M-S-Function: '<S158>/Level-2 M-file S-Function' */
    /* update digital output */
    if (localB->DataStoreRead1 == 0) {
      DigoutSet(DIGOUT_PORTG_PIN15, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTG_PIN15, DIGOUT_HIGH);
    }
  } else {
    if (localDW->LogicAnalyzerCOMMdelayCAN2Tx_MO) {
      localDW->LogicAnalyzerCOMMdelayCAN2Tx_MO = false;
    }
  }

  /* End of Logic: '<S36>/AND4' */
  /* End of Outputs for SubSystem: '<S36>/Logic Analyzer - COMM delay CAN2 - Tx' */

  /* Outputs for Enabled SubSystem: '<S36>/LT_Update Desync_Positive' incorporates:
   *  EnablePort: '<S127>/Enable'
   */
  /* DataStoreRead: '<S36>/Data Store Read6' */
  if (localDW->Desync_Positive) {
    /* Switch: '<S127>/Switch' incorporates:
     *  Constant: '<S127>/Constant'
     *  Constant: '<S127>/Constant1'
     *  Constant: '<S127>/Constant4'
     *  Constant: '<S127>/Constant5'
     *  Constant: '<S127>/Constant8'
     *  DataStoreRead: '<S36>/Data Store Read7'
     *  RelationalOperator: '<S127>/Equal'
     */
    if (localDW->basic_cycle_count == 0.0) {
      localDW->Switch_1_DIMS1 = 20;
      localDW->Switch_2_DIMS1 = 20;
      memcpy(&rtb_signal1[0], rtConstP.Constant_Value_f, 20U * sizeof(real_T));
      memcpy(&rtb_signal2[0], rtConstP.Constant1_Value, 20U * sizeof(real_T));
    } else {
      localDW->Switch_1_DIMS1 = 4;
      localDW->Switch_2_DIMS1 = 4;
      rtb_signal1[0] = 0.0;
      rtb_signal2[0] = 0.0;
      rtb_signal1[1] = 40.0;
      rtb_signal2[1] = 1.0;
      rtb_signal1[2] = 44.0;
      rtb_signal2[2] = 1.0;
      rtb_signal1[3] = 46.0;
      rtb_signal2[3] = 1.0;
    }

    /* End of Switch: '<S127>/Switch' */

    /* MATLAB Function: '<S127>/MATLAB Function' incorporates:
     *  Constant: '<S127>/Constant2'
     *  Constant: '<S127>/Constant3'
     *  Constant: '<S127>/Constant6'
     *  Constant: '<S127>/Constant7'
     */
    /* MATLAB Function 'HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/LT_Update Desync_Positive/MATLAB Function': '<S154>:1' */
    /* '<S154>:1:13' */
    rtb_Switch1_f = 1.0;
    do {
      exitg1 = 0;
      rtb_Plus_j = rtb_signal1[(int32_T)rtb_Switch1_f - 1];
      if (*rtd_Local_Ticks > rtb_Plus_j) {
        /* '<S154>:1:16' */
        /* '<S154>:1:17' */
        rtb_Switch1_f++;
      } else {
        exitg1 = 1;
      }
    } while (exitg1 == 0);

    sigIdx = (int32_T)(rtb_Switch1_f - 1.0) - 1;
    if (rtb_signal2[sigIdx] != 0.0) {
      /* '<S154>:1:22' */
      rtb_Plus_j = rt_roundd(rtb_Plus_j - (real_T)*rtd_Local_Ticks);
      if (rtb_Plus_j < 65536.0) {
        if (rtb_Plus_j >= 0.0) {
          u1 = (uint16_T)rtb_Plus_j;
        } else {
          u1 = 0U;
        }
      } else {
        u1 = MAX_uint16_T;
      }

      qY_0 = u1 - 1U;
      if (qY_0 > u1) {
        qY_0 = 0U;
      }

      rtb_DataStoreRead8_c = (uint16_T)qY_0;
    } else {
      /* '<S154>:1:26' */
      rtb_Plus_j = rt_roundd((real_T)*rtd_Local_Ticks - rtb_signal1[sigIdx]);
      if (rtb_Plus_j < 65536.0) {
        if (rtb_Plus_j >= 0.0) {
          rtb_DataStoreRead8_c = (uint16_T)rtb_Plus_j;
        } else {
          rtb_DataStoreRead8_c = 0U;
        }
      } else {
        rtb_DataStoreRead8_c = MAX_uint16_T;
      }

      /* '<S154>:1:28' */
      /* '<S154>:1:31' */
      /* '<S154>:1:34' */
      /* '<S154>:1:39' */
      rtb_Plus_j = rt_roundd((real_T)rtb_DataStoreRead8_c - COMM_Phase_init1);
      if (rtb_Plus_j < 65536.0) {
        if (rtb_Plus_j >= 0.0) {
          u1 = (uint16_T)rtb_Plus_j;
        } else {
          u1 = 0U;
        }
      } else {
        u1 = MAX_uint16_T;
      }

      rtb_Plus_j = rt_roundd((real_T)u1 / COMM_Phase1);
      if (rtb_Plus_j < 65536.0) {
        if (rtb_Plus_j >= 0.0) {
          u1 = (uint16_T)rtb_Plus_j;
        } else {
          u1 = 0U;
        }
      } else {
        u1 = MAX_uint16_T;
      }

      qY_0 = u1 + 1U;
      if (qY_0 > 65535U) {
        qY_0 = 65535U;
      }

      rtb_Plus_j = rt_roundd((real_T)qY_0 * COMM_Phase1);
      if (rtb_Plus_j < 65536.0) {
        if (rtb_Plus_j >= 0.0) {
          u1 = (uint16_T)rtb_Plus_j;
        } else {
          u1 = 0U;
        }
      } else {
        u1 = MAX_uint16_T;
      }

      rtb_Plus_j = rt_roundd((real_T)u1 + COMM_Phase_init1);
      if (rtb_Plus_j < 65536.0) {
        if (rtb_Plus_j >= 0.0) {
          u0 = (uint16_T)rtb_Plus_j;
        } else {
          u0 = 0U;
        }
      } else {
        u0 = MAX_uint16_T;
      }

      rtb_Plus_j = rt_roundd((real_T)rtb_DataStoreRead8_c - COMM_Phase_init2);
      if (rtb_Plus_j < 65536.0) {
        if (rtb_Plus_j >= 0.0) {
          u1 = (uint16_T)rtb_Plus_j;
        } else {
          u1 = 0U;
        }
      } else {
        u1 = MAX_uint16_T;
      }

      rtb_Plus_j = rt_roundd((real_T)u1 / COMM_Phase2);
      if (rtb_Plus_j < 65536.0) {
        if (rtb_Plus_j >= 0.0) {
          u1 = (uint16_T)rtb_Plus_j;
        } else {
          u1 = 0U;
        }
      } else {
        u1 = MAX_uint16_T;
      }

      qY_0 = u1 + 1U;
      if (qY_0 > 65535U) {
        qY_0 = 65535U;
      }

      rtb_Plus_j = rt_roundd((real_T)qY_0 * COMM_Phase2);
      if (rtb_Plus_j < 65536.0) {
        if (rtb_Plus_j >= 0.0) {
          u1 = (uint16_T)rtb_Plus_j;
        } else {
          u1 = 0U;
        }
      } else {
        u1 = MAX_uint16_T;
      }

      rtb_Plus_j = rt_roundd((real_T)u1 + COMM_Phase_init2);
      if (rtb_Plus_j < 65536.0) {
        if (rtb_Plus_j >= 0.0) {
          u1 = (uint16_T)rtb_Plus_j;
        } else {
          u1 = 0U;
        }
      } else {
        u1 = MAX_uint16_T;
      }

      if (u0 < u1) {
        u1 = u0;
      }

      qY_0 = (uint32_T)u1 - rtb_DataStoreRead8_c;
      if (qY_0 > u1) {
        qY_0 = 0U;
      }

      qY = qY_0 - 2U;
      if (qY > qY_0) {
        qY = 0U;
      }

      rtb_DataStoreRead8_c = (uint16_T)qY;
    }

    /* End of MATLAB Function: '<S127>/MATLAB Function' */

    /* Outputs for Atomic SubSystem: '<S127>/Local Time Update with Positive Desync' */
    /* Switch: '<S153>/Switch' incorporates:
     *  DataStoreRead: '<S153>/Data Store Read2'
     *  RelationalOperator: '<S153>/GreaterThan'
     */
    if (rtb_DataStoreRead8_c <= localDW->Desync_Ticks) {
      rtb_Switch1_f = rtb_DataStoreRead8_c;
    } else {
      rtb_Switch1_f = localDW->Desync_Ticks;
    }

    /* End of Switch: '<S153>/Switch' */

    /* Sum: '<S153>/Minus' */
    rtb_Plus_j = (real_T)*rtd_Local_Ticks + rtb_Switch1_f;

    /* Sum: '<S153>/Minus1' incorporates:
     *  DataStoreRead: '<S153>/Data Store Read2'
     */
    rtb_Switch1_f -= localDW->Desync_Ticks;

    /* Logic: '<S153>/NOT' incorporates:
     *  Constant: '<S153>/Constant'
     *  DataStoreWrite: '<S153>/Data Store Write'
     *  RelationalOperator: '<S153>/Equal'
     */
    localDW->Desync_Positive = (rtb_Switch1_f > 0.0);

    /* DataStoreWrite: '<S153>/Data Store Write1' incorporates:
     *  DataTypeConversion: '<S153>/Cast'
     */
    *rtd_Local_Ticks = (uint16_T)rtb_Plus_j;

    /* DataStoreWrite: '<S153>/Data Store Write2' */
    localDW->Desync_Ticks = rtb_Switch1_f;

    /* End of Outputs for SubSystem: '<S127>/Local Time Update with Positive Desync' */
  }

  /* End of DataStoreRead: '<S36>/Data Store Read6' */
  /* End of Outputs for SubSystem: '<S36>/LT_Update Desync_Positive' */

  /* Chart: '<S36>/Chart4' incorporates:
   *  Constant: '<S36>/Constant3'
   */
  /* Gateway: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart4 */
  /* During: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart4 */
  if (localDW->bitsForTID1.is_active_c8_HANcoder_E407_TTA_ == 0U) {
    /* Entry: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart4 */
    localDW->bitsForTID1.is_active_c8_HANcoder_E407_TTA_ = 1U;

    /* Entry Internal: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart4 */
    /* Transition: '<S120>:10' */
    /* Entry 'Send_Trigger': '<S120>:9' */
    if (1.0 != 0.0) {
      /* Outputs for Function Call SubSystem: '<S10>/Measure EXecution time' */
      /* Event: '<S120>:3' */
      MeasureEXecutiontime(&localB->MeasureEXecutiontime_d,
                           &localDW->MeasureEXecutiontime_d);

      /* End of Outputs for SubSystem: '<S10>/Measure EXecution time' */
    }
  } else {
    /* During 'Send_Trigger': '<S120>:9' */
    if (1.0 != 0.0) {
      /* Outputs for Function Call SubSystem: '<S10>/Measure EXecution time' */
      /* Event: '<S120>:3' */
      MeasureEXecutiontime(&localB->MeasureEXecutiontime_d,
                           &localDW->MeasureEXecutiontime_d);

      /* End of Outputs for SubSystem: '<S10>/Measure EXecution time' */
    }
  }

  /* End of Chart: '<S36>/Chart4' */
}

/* Model step function */
void HANcoder_E407_TTA_Template_step(void)
{
  /* local block i/o variables */
  boolean_T rtb_Level2MfileSFunction_l;
  boolean_T rtb_Level2MfileSFunction_g;
  int32_T rowIdx;
  int8_T rtPrevAction;
  int8_T rtAction;
  uint8_T rtb_Output;
  real_T rtb_Multiply;
  real_T rtb_Multiply1;
  real_T rtb_Multiply2;
  uint8_T rtb_FixPtSum1;
  uint8_T rtb_FixPtSum1_b;
  boolean_T rtb_SampleTimeCrowBar;

  /* DigitalClock: '<S10>/Digital Clock' */
  simulation_time = (((rtM->Timing.clockTick0+rtM->Timing.clockTickH0*
                       4294967296.0)) * 0.01);

  /* Outputs for Enabled SubSystem: '<S10>/Initialize Clock Schedule' incorporates:
   *  EnablePort: '<S32>/Enable'
   */
  /* Logic: '<S10>/NOT' incorporates:
   *  DataStoreRead: '<S10>/If 1 -> Clock initialized '
   */
  if (rtDWork.init_clock == 0.0) {
    if (!rtDWork.InitializeClockSchedule_MODE) {
      rtDWork.InitializeClockSchedule_MODE = true;
    }

    /* DataStoreWrite: '<S32>/Data Store Write' incorporates:
     *  Constant: '<S32>/Constant2'
     */
    rtDWork.init_clock = 1.0;

    /* Update for M-S-Function: '<S109>/Level-2 M-file S-Function' incorporates:
     *  Constant: '<S32>/Constant'
     *  Constant: '<S32>/Constant1'
     */
    /* schedule the next output compare event */
    TimeoutScheduleCompareEvent(TIMEOUT_TIM4_PIN_PD12, ((uint16_T)1U),
      (tTimeoutAction)((uint8_T)3U));
  } else {
    if (rtDWork.InitializeClockSchedule_MODE) {
      rtDWork.InitializeClockSchedule_MODE = false;
    }
  }

  /* End of Logic: '<S10>/NOT' */
  /* End of Outputs for SubSystem: '<S10>/Initialize Clock Schedule' */

  /* If: '<S10>/If' incorporates:
   *  DataStoreRead: '<S10>/Data Store Read1'
   */
  rtPrevAction = rtDWork.If_ActiveSubsystem;
  rtAction = -1;
  if (rtDWork.Board_ID == 0.0) {
    rtAction = 0;
  }

  rtDWork.If_ActiveSubsystem = rtAction;
  if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
  }

  if (rtAction == 0) {
    if (0 != rtPrevAction) {
    }

    /* Outputs for IfAction SubSystem: '<S10>/If Action Subsystem' incorporates:
     *  ActionPort: '<S31>/Action Port'
     */
    /* M-S-Function: '<S105>/Level-2 M-file S-Function' */
    /* read from digital input */
    rtb_Level2MfileSFunction_l = DiginGet(DIGIN_PORTE_PIN2);

    /* Product: '<S31>/Multiply' incorporates:
     *  Constant: '<S31>/Constant'
     */
    rtb_Multiply = rtb_Level2MfileSFunction_l ? 1.0 : 0.0;

    /* M-S-Function: '<S106>/Level-2 M-file S-Function' */
    /* read from digital input */
    rtb_Level2MfileSFunction_l = DiginGet(DIGIN_PORTE_PIN4);

    /* Product: '<S31>/Multiply1' incorporates:
     *  Constant: '<S31>/Constant1'
     */
    rtb_Multiply1 = rtb_Level2MfileSFunction_l ? 2.0 : 0.0;

    /* M-S-Function: '<S107>/Level-2 M-file S-Function' */
    /* read from digital input */
    rtb_Level2MfileSFunction_l = DiginGet(DIGIN_PORTE_PIN5);

    /* Product: '<S31>/Multiply2' incorporates:
     *  Constant: '<S31>/Constant2'
     */
    rtb_Multiply2 = rtb_Level2MfileSFunction_l ? 4.0 : 0.0;

    /* M-S-Function: '<S108>/Level-2 M-file S-Function' */
    /* read from digital input */
    rtb_Level2MfileSFunction_l = DiginGet(DIGIN_PORTE_PIN6);

    /* Sum: '<S31>/Add' incorporates:
     *  Constant: '<S31>/Constant3'
     *  Product: '<S31>/Multiply3'
     */
    Board_ID_s = ((rtb_Multiply + rtb_Multiply1) + rtb_Multiply2) +
      (rtb_Level2MfileSFunction_l ? 8.0 : 0.0);

    /* End of Outputs for SubSystem: '<S10>/If Action Subsystem' */
  }

  /* End of If: '<S10>/If' */

  /* DataStoreWrite: '<S10>/Data Store Write' */
  rtDWork.Board_ID = Board_ID_s;
  if (rtM->Timing.TaskCounters.TID[1] == 0) {
    /* M-S-Function: '<S18>/Level-2 M-file S-Function' */
    /* read from digital input */
    rtb_Level2MfileSFunction_g = DiginGet(DIGIN_PORTA_PIN0);

    /* Outputs for Triggered SubSystem: '<S20>/J-K Flip-Flop' incorporates:
     *  TriggerPort: '<S21>/Trigger'
     */
    if ((!rtb_Level2MfileSFunction_g) && (rtPrevZCSigState.JKFlipFlop_Trig_ZCE
         != ZERO_ZCSIG)) {
      /* CombinatorialLogic: '<S21>/Logic' incorporates:
       *  Memory: '<S20>/TmpLatchAtJ-K Flip-FlopInport1'
       *  Memory: '<S21>/Memory'
       */
      rowIdx = (int32_T)(((((uint32_T)rtDWork.Memory_PreviousInput << 1) +
                           rtDWork.TmpLatchAtJKFlipFlopInport1_Pre) << 1) +
                         rtDWork.TmpLatchAtJKFlipFlopInport2_Pre);
      rtB.Logic[0U] = rtConstP.Logic_table[(uint32_T)rowIdx];
      rtB.Logic[1U] = rtConstP.Logic_table[rowIdx + 8U];

      /* Update for Memory: '<S21>/Memory' */
      rtDWork.Memory_PreviousInput = rtB.Logic[0];
    }

    rtPrevZCSigState.JKFlipFlop_Trig_ZCE = rtb_Level2MfileSFunction_g;

    /* End of Outputs for SubSystem: '<S20>/J-K Flip-Flop' */
  }

  /* Constant: '<S10>/Constant' */
  script_run_s = script_run;
  if (rtM->Timing.TaskCounters.TID[1] == 0) {
    /* UnitDelay: '<S12>/Output' */
    rtb_Output = rtDWork.Output_DSTATE;

    /* Sum: '<S14>/FixPt Sum1' incorporates:
     *  Constant: '<S14>/FixPt Constant'
     *  UnitDelay: '<S12>/Output'
     */
    rtb_FixPtSum1 = (uint8_T)((uint32_T)rtDWork.Output_DSTATE + ((uint8_T)1U));

    /* Switch: '<S15>/FixPt Switch' incorporates:
     *  Constant: '<S15>/Constant'
     */
    if (rtb_FixPtSum1 > ((uint8_T)1U)) {
      rtb_FixPtSum1 = ((uint8_T)0U);
    }

    /* End of Switch: '<S15>/FixPt Switch' */
  }

  if (rtM->Timing.TaskCounters.TID[2] == 0) {
    /* UnitDelay: '<S13>/Output' */
    rtB.Output = rtDWork.Output_DSTATE_k;

    /* Sum: '<S16>/FixPt Sum1' incorporates:
     *  Constant: '<S16>/FixPt Constant'
     */
    rtb_FixPtSum1_b = (uint8_T)((uint32_T)rtB.Output + ((uint8_T)1U));

    /* Switch: '<S17>/FixPt Switch' incorporates:
     *  Constant: '<S17>/Constant'
     */
    if (rtb_FixPtSum1_b > ((uint8_T)1U)) {
      rtb_FixPtSum1_b = ((uint8_T)0U);
    }

    /* End of Switch: '<S17>/FixPt Switch' */
  }

  if (rtM->Timing.TaskCounters.TID[1] == 0) {
    /* Switch: '<S2>/Switch' incorporates:
     *  Constant: '<S2>/Constant'
     *  Logic: '<S2>/Logical Operator'
     */
    if (HANtuneOverride || rtb_Level2MfileSFunction_g) {
      /* DataTypeConversion: '<S2>/Data Type Conversion' */
      LedValue = (rtb_Output != 0);
    } else {
      /* DataTypeConversion: '<S2>/Data Type Conversion' */
      LedValue = (rtB.Output != 0);
    }

    /* End of Switch: '<S2>/Switch' */
  }

  /* Constant: '<S3>/SampleTimeCrowBar' */
  rtb_SampleTimeCrowBar = true;

  /* M-S-Function: '<S23>/Level-2 M-file S-Function' */
  /* read the current CPU load */
  SI_CPUload = OsGetCpuLoad();

  /* M-S-Function: '<S24>/Level-2 M-file S-Function' */
  /* read the free heap size */
  SI_FreeHeap = OsGetFreeHeapSize();

  /* M-S-Function: '<S25>/Level-2 M-file S-Function' */
  /* read the task's free stack size */
  SI_FreeStack = OsGetTaskFreeStackSize("AppCtrlTask");
  if (rtM->Timing.TaskCounters.TID[1] == 0) {
    /* Update for Memory: '<S20>/TmpLatchAtJ-K Flip-FlopInport1' incorporates:
     *  Constant: '<S7>/Constant'
     */
    rtDWork.TmpLatchAtJKFlipFlopInport1_Pre = true;

    /* Update for Memory: '<S20>/TmpLatchAtJ-K Flip-FlopInport2' incorporates:
     *  Constant: '<S7>/Constant'
     */
    rtDWork.TmpLatchAtJKFlipFlopInport2_Pre = true;

    /* Update for M-S-Function: '<S22>/Level-2 M-file S-Function' */
    /* update digital output */
    if (LedValue == 0) {
      DigoutSet(DIGOUT_PORTC_PIN13, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTC_PIN13, DIGOUT_HIGH);
    }

    /* Update for UnitDelay: '<S12>/Output' */
    rtDWork.Output_DSTATE = rtb_FixPtSum1;
  }

  if (rtM->Timing.TaskCounters.TID[2] == 0) {
    /* Update for UnitDelay: '<S13>/Output' */
    rtDWork.Output_DSTATE_k = rtb_FixPtSum1_b;
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 0.01, which is the step size
   * of the task. Size of "clockTick0" ensures timer will not overflow during the
   * application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  rtM->Timing.clockTick0++;
  if (!rtM->Timing.clockTick0) {
    rtM->Timing.clockTickH0++;
  }

  rate_scheduler();
}

/* Model initialize function */
void HANcoder_E407_TTA_Template_initialize(void)
{
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

    /* initialize the timer module for output compare. */
    TimeoutInitModule(TIMEOUT_MODULE_TIM4, 1000000);

    /* Start for DataStoreMemory: '<S10>/Data Store Memory5' */
    rtDWork.Master_ID = 1.0;

    /* Start for If: '<S10>/If' */
    rtDWork.If_ActiveSubsystem = -1;

    /* Start for IfAction SubSystem: '<S10>/If Action Subsystem' */

    /* Start for M-S-Function: '<S105>/Level-2 M-file S-Function' */

    /* configure the digital input */
    DiginConfigure(DIGIN_PORTE_PIN2, DIGIN_CFG_PULLDOWN);

    /* Start for M-S-Function: '<S106>/Level-2 M-file S-Function' */

    /* configure the digital input */
    DiginConfigure(DIGIN_PORTE_PIN4, DIGIN_CFG_PULLDOWN);

    /* Start for M-S-Function: '<S107>/Level-2 M-file S-Function' */

    /* configure the digital input */
    DiginConfigure(DIGIN_PORTE_PIN5, DIGIN_CFG_PULLDOWN);

    /* Start for M-S-Function: '<S108>/Level-2 M-file S-Function' */

    /* configure the digital input */
    DiginConfigure(DIGIN_PORTE_PIN6, DIGIN_CFG_PULLDOWN);

    /* End of Start for SubSystem: '<S10>/If Action Subsystem' */

    /* Start for M-S-Function: '<S18>/Level-2 M-file S-Function' */

    /* configure the digital input */
    DiginConfigure(DIGIN_PORTA_PIN0, DIGIN_CFG_PULLDOWN);

    /* Start for S-Function (sfcn_timeout_event_irq): '<S30>/S-Function' incorporates:
     *  SubSystem: '<S10>/Local Time generation'
     */

    /* Start for function-call system: '<S10>/Local Time generation' */

    /* Start for Chart: '<S33>/Chart' incorporates:
     *  SubSystem: '<S10>/TTA System'
     */
    TTASystem_Start(&rtDWork.TTASystem_c);

    /* register the callback handler */
    TimeoutRegisterCompareEventCallback(TIMEOUT_TIM4_PIN_PD12,
      TimeoutEventIRQ_TIMEOUT_TIM4_PIN_PD12);

    /* End of Start for S-Function (sfcn_timeout_event_irq): '<S30>/S-Function' */

    /* Start for DataStoreMemory: '<S10>/Data Store Memory14' */
    rtDWork.RxID_CAN2 = 1U;

    /* Start for DataStoreMemory: '<S10>/Data Store Memory8' */
    rtDWork.RxID_CAN1 = 1U;

    /* Start for S-Function (sfcn_timeout_init): '<S35>/S-Function' */

    /* register the free running counter overflow callback handler */
    TimeoutRegisterOverflowCallback(TIMEOUT_MODULE_TIM4,
      TimeoutOverflowIRQ_TIMEOUT_MODULE_TIM4);

    /* Start for DataStoreMemory: '<S10>/Data Store Memory' */
    rtDWork.Tx_msg_count_CAN1 = 1.0;

    /* Start for DataStoreMemory: '<S10>/Data Store Memory20' */
    rtDWork.Tx_msg_count_CAN2 = 1.0;

    /* Start for M-S-Function: '<S22>/Level-2 M-file S-Function' */

    /* configure the digital output */
    DigoutConfigure(DIGOUT_PORTC_PIN13, DIGOUT_CFG_PUSHPULL);

    /* Start for M-S-Function: '<S3>/Level-2 M-file S-Function' */

    /* configure the stack size for the task that executes the model */
    AppCtrlTaskSetStackSize((configMINIMAL_STACK_SIZE*sizeof(portBASE_TYPE)) +
      100);

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
    canResult1 = CanConnect(0, 1000000, &canFilter1);
    configASSERT(canResult1 == TRUE);

    /* store the CAN controller's filter configuration */
    canFilter2.mask = 0x00000000;
    canFilter2.code = 0x00000000;
    canFilter2.mode = CAN_FILTER_MODE_STDID_ONLY;

    /* connect and synchronize the CAN bus */
    canResult2 = CanConnect(1, 1000000, &canFilter2);
    configASSERT(canResult2 == TRUE);

    /* Start for M-S-Function: '<S11>/Level-2 M-file S-Function' */

    /* initialize the measurement and calibration interface */
    MacUsbComInit();
    MacInit();
  }

  rtPrevZCSigState.JKFlipFlop_Trig_ZCE = ZERO_ZCSIG;

  /* SystemInitialize for Triggered SubSystem: '<S20>/J-K Flip-Flop' */
  /* SystemInitialize for Outport: '<S21>/!Q' */
  rtB.Logic[1] = true;

  /* End of SystemInitialize for SubSystem: '<S20>/J-K Flip-Flop' */

  /* SystemInitialize for S-Function (sfcn_timeout_event_irq): '<S30>/S-Function' incorporates:
   *  SubSystem: '<S10>/Local Time generation'
   */

  /* System initialize for function-call system: '<S10>/Local Time generation' */

  /* SystemInitialize for Chart: '<S33>/Chart' incorporates:
   *  SubSystem: '<S10>/TTA System'
   */
  TTASystem_Init(&rtB.TTASystem_c);

  /* End of SystemInitialize for S-Function (sfcn_timeout_event_irq): '<S30>/S-Function' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
