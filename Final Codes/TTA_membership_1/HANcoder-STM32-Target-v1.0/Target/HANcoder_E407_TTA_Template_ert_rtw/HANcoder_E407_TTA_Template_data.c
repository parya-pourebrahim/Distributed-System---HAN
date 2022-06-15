/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_TTA_Template_data.c
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

/* Invariant block signals (default storage) */
const ConstBlockIO rtConstB = {
  /* Start of '<S10>/TTA System' */
  {
    288.0,                             /* '<S162>/Sum18' */
    44.0,                              /* '<S162>/Sum1' */
    48.0,                              /* '<S162>/Sum2' */
    40.0,                              /* '<S162>/Sum4' */
    200.0,                             /* '<S161>/Sum14' */
    204.0,                             /* '<S161>/Sum15' */
    212.0,                             /* '<S161>/Sum17' */
    208.0,                             /* '<S161>/Sum16' */
    44.0,                              /* '<S161>/Sum1' */
    48.0,                              /* '<S161>/Sum2' */
    52.0,                              /* '<S161>/Sum3' */
    100.0,                             /* '<S161>/Sum7' */
    96.0,                              /* '<S161>/Sum6' */
    148.0,                             /* '<S161>/Sum10' */
    144.0,                             /* '<S161>/Sum9' */
    196.0,                             /* '<S161>/Sum11' */
    192.0,                             /* '<S161>/Sum13' */
    40.0,                              /* '<S161>/Sum4' */
    188.0,                             /* '<S161>/Sum12' */
    92.0,                              /* '<S161>/Sum5' */
    140.0,                             /* '<S161>/Sum8' */
    1.0,                               /* '<S115>/Add1' */
    0U,                                /* '<S140>/Cast' */
    0U,                                /* '<S260>/Cast6' */
    0U,                                /* '<S140>/Cast1' */
    0U,                                /* '<S115>/Cast' */
    0,                                 /* '<S261>/Cast' */
    0,                                 /* '<S260>/Cast' */
    1,                                 /* '<S260>/NOT' */

    /* Start of '<S385>/Transmission subtasks1' */
    {
      1U,                              /* '<S401>/Cast8' */
      1U                               /* '<S395>/Cast' */
    }
    ,

    /* End of '<S385>/Transmission subtasks1' */

    /* Start of '<S385>/Reception substasks' */
    {
      1U,                              /* '<S391>/Cast13' */
      1U,                              /* '<S391>/Cast3' */
      0U,                              /* '<S391>/Cast15' */
      0U,                              /* '<S391>/Cast6' */
      0,                               /* '<S391>/Cast14' */
      0                                /* '<S391>/Cast5' */
    }
    ,

    /* End of '<S385>/Reception substasks' */

    /* Start of '<S167>/Transmission subtasks' */
    {
      13U,                             /* '<S247>/Cast8' */
      13U                              /* '<S241>/Cast' */
    }
    ,

    /* End of '<S167>/Transmission subtasks' */

    /* Start of '<S167>/Reception substasks' */
    {
      13U,                             /* '<S237>/Cast13' */
      13U,                             /* '<S237>/Cast3' */
      0U,                              /* '<S237>/Cast15' */
      0U,                              /* '<S237>/Cast6' */
      0,                               /* '<S237>/Cast14' */
      0                                /* '<S237>/Cast5' */
    }
    ,

    /* End of '<S167>/Reception substasks' */

    /* Start of '<S166>/Transmission subtasks' */
    {
      12U,                             /* '<S229>/Cast8' */
      12U                              /* '<S223>/Cast' */
    }
    ,

    /* End of '<S166>/Transmission subtasks' */

    /* Start of '<S166>/Reception substasks' */
    {
      12U,                             /* '<S219>/Cast13' */
      12U,                             /* '<S219>/Cast3' */
      0U,                              /* '<S219>/Cast15' */
      0U,                              /* '<S219>/Cast6' */
      0,                               /* '<S219>/Cast14' */
      0                                /* '<S219>/Cast5' */
    }
    ,

    /* End of '<S166>/Reception substasks' */

    /* Start of '<S165>/Transmission subtasks' */
    {
      11U,                             /* '<S211>/Cast8' */
      11U                              /* '<S205>/Cast' */
    }
    ,

    /* End of '<S165>/Transmission subtasks' */

    /* Start of '<S165>/Reception substasks' */
    {
      11U,                             /* '<S201>/Cast13' */
      11U,                             /* '<S201>/Cast3' */
      0U,                              /* '<S201>/Cast15' */
      0U,                              /* '<S201>/Cast6' */
      0,                               /* '<S201>/Cast14' */
      0                                /* '<S201>/Cast5' */
    }
    ,

    /* End of '<S165>/Reception substasks' */

    /* Start of '<S164>/Transmission subtasks' */
    {
      1U,                              /* '<S193>/Cast8' */
      1U                               /* '<S187>/Cast' */
    }
    ,

    /* End of '<S164>/Transmission subtasks' */

    /* Start of '<S164>/Reception substasks' */
    {
      1U,                              /* '<S183>/Cast13' */
      1U,                              /* '<S183>/Cast3' */
      0U,                              /* '<S183>/Cast15' */
      0U,                              /* '<S183>/Cast6' */
      0,                               /* '<S183>/Cast14' */
      0                                /* '<S183>/Cast5' */
    }
    /* End of '<S164>/Reception substasks' */
  }
  /* End of '<S10>/TTA System' */
};

/* Constant parameters (default storage) */
const ConstParam rtConstP = {
  /* Expression: TM_Data_bc0
   * Referenced by: '<S127>/Constant'
   */
  { 0.0, 40.0, 44.0, 46.0, 48.0, 50.0, 52.0, 92.0, 96.0, 100.0, 140.0, 142.0,
    144.0, 148.0, 188.0, 192.0, 196.0, 200.0, 204.0, 208.0 },

  /* Expression: TM_Type_bc0
   * Referenced by: '<S127>/Constant1'
   */
  { 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 0.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0 },

  /* Computed Parameter: Logic_table
   * Referenced by: '<S21>/Logic'
   */
  { 0, 0, 1, 1, 1, 0, 1, 0, 1, 1, 0, 0, 0, 1, 0, 1 }
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
