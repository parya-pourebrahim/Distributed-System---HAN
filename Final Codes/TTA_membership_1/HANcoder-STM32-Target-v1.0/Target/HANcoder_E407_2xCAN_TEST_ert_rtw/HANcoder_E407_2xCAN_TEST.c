/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_2xCAN_TEST.c
 *
 * Code generated for Simulink model 'HANcoder_E407_2xCAN_TEST'.
 *
 * Model version                  : 1.120
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Feb 15 08:50:12 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->32-bit Embedded Processor
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "HANcoder_E407_2xCAN_TEST.h"
#include "HANcoder_E407_2xCAN_TEST_private.h"

/* map ByteSwap function */
#define ByteSwap(x)                    (ByteSwap_x((uint8_t *) &x, sizeof(x)))

/* Exported block signals */
uint32_T SI_FreeHeap;                  /* '<S33>/Level-2 M-file S-Function' */
uint32_T SI_FreeStack;                 /* '<S34>/Level-2 M-file S-Function' */
uint32_T RX_MSG_2;                     /* '<S31>/In1' */
uint32_T RX_MSG_1;                     /* '<S30>/In1' */
uint32_T TX_MSG;                       /* '<S23>/Output' */
uint32_T TX_MSG_1;                     /* '<S8>/Data Type Conversion2' */
uint32_T TX_MSG_2;                     /* '<S8>/Data Type Conversion3' */
uint8_T SI_CPUload;                    /* '<S32>/Level-2 M-file S-Function' */
boolean_T WKUP_button;                 /* '<S26>/Level-2 M-file S-Function' */
boolean_T sender_id;                   /* '<S6>/Level-2 M-file S-Function' */
boolean_T LedValue;                    /* '<S2>/Data Type Conversion' */
boolean_T receiver_id;                 /* '<S7>/Level-2 M-file S-Function' */

/* Exported block parameters */
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
static tCanDataTypes canTxData;
static tCanDataTypes canRxData_1_1U;
static tCanDataTypes canRxData_0_1U;

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

/* Model step function */
void HANcoder_E407_2xCAN_TEST_step(void)
{
  /* local block i/o variables */
  uint32_T rtb_SFunction_o2;
  uint32_T rtb_SFunction_o3;
  uint32_T rtb_SFunction_o4;
  uint32_T rtb_SFunction_o5;
  uint32_T rtb_SFunction_o6;
  uint32_T rtb_SFunction_o7;
  uint32_T rtb_SFunction_o8;
  uint32_T rtb_SFunction_o9;
  uint32_T rtb_SFunction_o2_k;
  uint32_T rtb_SFunction_o3_b;
  uint32_T rtb_SFunction_o4_o;
  uint32_T rtb_SFunction_o5_j;
  uint32_T rtb_SFunction_o6_o;
  uint32_T rtb_SFunction_o7_d;
  uint32_T rtb_SFunction_o8_f;
  uint32_T rtb_SFunction_o9_a;
  int8_T rtb_SFunction_o1;
  int8_T rtb_SFunction_o1_a;
  uint8_T rtb_Output;
  uint8_T rtb_FixPtSum1_j;
  uint8_T rtb_FixPtSum1_k;
  uint32_T rtb_FixPtSum1;
  boolean_T rtb_SampleTimeCrowBar;
  uint32_T rtb_In2_k;
  uint32_T rtb_In3_k;
  uint32_T rtb_In4_n;
  uint32_T rtb_In5_b;
  uint32_T rtb_In6_i;
  uint32_T rtb_In7_c;
  uint32_T rtb_In8_g;
  uint32_T rtb_In2;
  uint32_T rtb_In3;
  uint32_T rtb_In4;
  uint32_T rtb_In5;
  uint32_T rtb_In6;
  uint32_T rtb_In7;
  uint32_T rtb_In8;
  if (rtM->Timing.TaskCounters.TID[1] == 0) {
    /* M-S-Function: '<S26>/Level-2 M-file S-Function' */
    /* read from digital input */
    WKUP_button = DiginGet(DIGIN_PORTA_PIN0);

    /* M-S-Function: '<S6>/Level-2 M-file S-Function' */
    /* read from digital input */
    sender_id = DiginGet(DIGIN_PORTE_PIN2);

    /* Outputs for Enabled SubSystem: '<S1>/If Action Subsystem' incorporates:
     *  EnablePort: '<S8>/Enable'
     */
    /* Logic: '<S1>/AND3' */
    if (WKUP_button && sender_id) {
      if (!rtDWork.IfActionSubsystem_MODE) {
        rtDWork.IfActionSubsystem_MODE = true;
      }

      /* UnitDelay: '<S23>/Output' */
      TX_MSG = rtDWork.Output_DSTATE;

      /* Sum: '<S24>/FixPt Sum1' incorporates:
       *  Constant: '<S24>/FixPt Constant'
       */
      rtb_FixPtSum1 = TX_MSG + 1U;

      /* DataTypeConversion: '<S8>/Data Type Conversion2' */
      TX_MSG_1 = TX_MSG;

      /* DataTypeConversion: '<S8>/Data Type Conversion3' */
      TX_MSG_2 = TX_MSG;

      /* Update for M-S-Function: '<S21>/S-Function' */
      {
        /* prepare the data */
        canTxData.uint32_T_info[0] = TX_MSG_1;

        /* send the data */
        CanTransmit(1, rtConstB.DataTypeConversion1, 4, &canTxData.uint8_T_info
                    [0]);
      }

      /* Update for M-S-Function: '<S22>/S-Function' */
      {
        /* prepare the data */
        canTxData.uint32_T_info[0] = TX_MSG_2;

        /* send the data */
        CanTransmit(0, rtConstB.DataTypeConversion1, 4, &canTxData.uint8_T_info
                    [0]);
      }

      /* Switch: '<S25>/FixPt Switch' */
      if (rtb_FixPtSum1 > 4294967295U) {
        /* Update for UnitDelay: '<S23>/Output' incorporates:
         *  Constant: '<S25>/Constant'
         */
        rtDWork.Output_DSTATE = 0U;
      } else {
        /* Update for UnitDelay: '<S23>/Output' */
        rtDWork.Output_DSTATE = rtb_FixPtSum1;
      }

      /* End of Switch: '<S25>/FixPt Switch' */
    } else {
      if (rtDWork.IfActionSubsystem_MODE) {
        rtDWork.IfActionSubsystem_MODE = false;
      }
    }

    /* End of Logic: '<S1>/AND3' */
    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem' */
    /* UnitDelay: '<S15>/Output' */
    rtb_Output = rtDWork.Output_DSTATE_d;

    /* Sum: '<S17>/FixPt Sum1' incorporates:
     *  Constant: '<S17>/FixPt Constant'
     *  UnitDelay: '<S15>/Output'
     */
    rtb_FixPtSum1_j = (uint8_T)((uint32_T)rtDWork.Output_DSTATE_d + ((uint8_T)1U));

    /* Switch: '<S18>/FixPt Switch' incorporates:
     *  Constant: '<S18>/Constant'
     */
    if (rtb_FixPtSum1_j > ((uint8_T)1U)) {
      rtb_FixPtSum1_j = ((uint8_T)0U);
    }

    /* End of Switch: '<S18>/FixPt Switch' */
  }

  if (rtM->Timing.TaskCounters.TID[2] == 0) {
    /* UnitDelay: '<S16>/Output' */
    rtB.Output = rtDWork.Output_DSTATE_k;

    /* Sum: '<S19>/FixPt Sum1' incorporates:
     *  Constant: '<S19>/FixPt Constant'
     */
    rtb_FixPtSum1_k = (uint8_T)((uint32_T)rtB.Output + ((uint8_T)1U));

    /* Switch: '<S20>/FixPt Switch' incorporates:
     *  Constant: '<S20>/Constant'
     */
    if (rtb_FixPtSum1_k > ((uint8_T)1U)) {
      rtb_FixPtSum1_k = ((uint8_T)0U);
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

  /* M-S-Function: '<S7>/Level-2 M-file S-Function' */
  /* read from digital input */
  receiver_id = DiginGet(DIGIN_PORTE_PIN4);

  /* Outputs for Enabled SubSystem: '<S1>/Subsystem' incorporates:
   *  EnablePort: '<S11>/Enable'
   */
  if (receiver_id) {
    if (!rtDWork.Subsystem_MODE) {
      rtDWork.Subsystem_MODE = true;
    }

    /* M-S-Function: '<S28>/S-Function' incorporates:
     *  Constant: '<S11>/Constant2'
     */

    /* read the message data and store the new parameter */
    rtb_SFunction_o1 = CanIoGetMessage(1, 1U, NULL,
      &canRxData_1_1U.uint8_T_info[0], NULL);

    /* process the message data */
    if (rtb_SFunction_o1 > 0) {
      /* read the data */
      rtb_SFunction_o2 = canRxData_1_1U.uint32_T_info[0];
    }

    /* Outputs for Enabled SubSystem: '<S28>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S30>/Enable'
     */
    if (rtb_SFunction_o1 > 0) {
      /* Inport: '<S30>/In1' */
      RX_MSG_1 = rtb_SFunction_o2;

      /* Inport: '<S30>/In2' */
      rtb_In2_k = rtb_SFunction_o3;

      /* Inport: '<S30>/In3' */
      rtb_In3_k = rtb_SFunction_o4;

      /* Inport: '<S30>/In4' */
      rtb_In4_n = rtb_SFunction_o5;

      /* Inport: '<S30>/In5' */
      rtb_In5_b = rtb_SFunction_o6;

      /* Inport: '<S30>/In6' */
      rtb_In6_i = rtb_SFunction_o7;

      /* Inport: '<S30>/In7' */
      rtb_In7_c = rtb_SFunction_o8;

      /* Inport: '<S30>/In8' */
      rtb_In8_g = rtb_SFunction_o9;
    }

    /* End of Outputs for SubSystem: '<S28>/Enabled Subsystem' */

    /* M-S-Function: '<S29>/S-Function' incorporates:
     *  Constant: '<S11>/Constant1'
     */

    /* read the message data and store the new parameter */
    rtb_SFunction_o1_a = CanIoGetMessage(0, 1U, NULL,
      &canRxData_0_1U.uint8_T_info[0], NULL);

    /* process the message data */
    if (rtb_SFunction_o1_a > 0) {
      /* read the data */
      rtb_SFunction_o2_k = canRxData_0_1U.uint32_T_info[0];
    }

    /* Outputs for Enabled SubSystem: '<S29>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S31>/Enable'
     */
    if (rtb_SFunction_o1_a > 0) {
      /* Inport: '<S31>/In1' */
      RX_MSG_2 = rtb_SFunction_o2_k;

      /* Inport: '<S31>/In2' */
      rtb_In2 = rtb_SFunction_o3_b;

      /* Inport: '<S31>/In3' */
      rtb_In3 = rtb_SFunction_o4_o;

      /* Inport: '<S31>/In4' */
      rtb_In4 = rtb_SFunction_o5_j;

      /* Inport: '<S31>/In5' */
      rtb_In5 = rtb_SFunction_o6_o;

      /* Inport: '<S31>/In6' */
      rtb_In6 = rtb_SFunction_o7_d;

      /* Inport: '<S31>/In7' */
      rtb_In7 = rtb_SFunction_o8_f;

      /* Inport: '<S31>/In8' */
      rtb_In8 = rtb_SFunction_o9_a;
    }

    /* End of Outputs for SubSystem: '<S29>/Enabled Subsystem' */
  } else {
    if (rtDWork.Subsystem_MODE) {
      rtDWork.Subsystem_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S1>/Subsystem' */

  /* Constant: '<S3>/SampleTimeCrowBar' */
  rtb_SampleTimeCrowBar = true;

  /* M-S-Function: '<S32>/Level-2 M-file S-Function' */
  /* read the current CPU load */
  SI_CPUload = OsGetCpuLoad();

  /* M-S-Function: '<S33>/Level-2 M-file S-Function' */
  /* read the free heap size */
  SI_FreeHeap = OsGetFreeHeapSize();

  /* M-S-Function: '<S34>/Level-2 M-file S-Function' */
  /* read the task's free stack size */
  SI_FreeStack = OsGetTaskFreeStackSize("AppCtrlTask");
  if (rtM->Timing.TaskCounters.TID[1] == 0) {
    /* Update for M-S-Function: '<S27>/Level-2 M-file S-Function' */
    /* update digital output */
    if (LedValue == 0) {
      DigoutSet(DIGOUT_PORTC_PIN13, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTC_PIN13, DIGOUT_HIGH);
    }

    /* Update for UnitDelay: '<S15>/Output' */
    rtDWork.Output_DSTATE_d = rtb_FixPtSum1_j;
  }

  if (rtM->Timing.TaskCounters.TID[2] == 0) {
    /* Update for UnitDelay: '<S16>/Output' */
    rtDWork.Output_DSTATE_k = rtb_FixPtSum1_k;
  }

  rate_scheduler();
}

/* Model initialize function */
void HANcoder_E407_2xCAN_TEST_initialize(void)
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

    /* Start for M-S-Function: '<S26>/Level-2 M-file S-Function' */

    /* configure the digital input */
    DiginConfigure(DIGIN_PORTA_PIN0, DIGIN_CFG_PULLDOWN);

    /* Start for M-S-Function: '<S6>/Level-2 M-file S-Function' */

    /* configure the digital input */
    DiginConfigure(DIGIN_PORTE_PIN2, DIGIN_CFG_PULLDOWN);

    /* Start for M-S-Function: '<S27>/Level-2 M-file S-Function' */

    /* configure the digital output */
    DigoutConfigure(DIGOUT_PORTC_PIN13, DIGOUT_CFG_PUSHPULL);

    /* Start for M-S-Function: '<S7>/Level-2 M-file S-Function' */

    /* configure the digital input */
    DiginConfigure(DIGIN_PORTE_PIN4, DIGIN_CFG_PULLDOWN);

    /* Start for Enabled SubSystem: '<S1>/Subsystem' */

    /* Start for M-S-Function: '<S28>/S-Function' incorporates:
     *  Constant: '<S11>/Constant2'
     */

    /* register a CAN storage buffer for the message with this ID */
    CanIoCreateMessageReceivedStorage(1, 1U);

    /* Start for M-S-Function: '<S29>/S-Function' incorporates:
     *  Constant: '<S11>/Constant1'
     */

    /* register a CAN storage buffer for the message with this ID */
    CanIoCreateMessageReceivedStorage(0, 1U);

    /* End of Start for SubSystem: '<S1>/Subsystem' */

    /* Start for M-S-Function: '<S3>/Level-2 M-file S-Function' */

    /* configure the stack size for the task that executes the model */
    AppCtrlTaskSetStackSize((configMINIMAL_STACK_SIZE*sizeof(portBASE_TYPE)) + 0);

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
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
