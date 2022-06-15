/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_TTA_Controller_v3_data.c
 *
 * Code generated for Simulink model 'HANcoder_E407_TTA_Controller_v3'.
 *
 * Model version                  : 1.153
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed May 25 15:28:48 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "HANcoder_E407_TTA_Controller_v3.h"
#include "HANcoder_E407_TTA_Controller_v3_private.h"

/* Invariant block signals (default storage) */
const ConstBlockIO rtConstB = {
  /* Start of '<S10>/TTA System' */
  {
    288.0,                             /* '<S1137>/Sum18' */
    284.0,                             /* '<S1137>/Sum17' */
    136.0,                             /* '<S1137>/Sum7' */
    44.0,                              /* '<S1137>/Sum1' */
    48.0,                              /* '<S1137>/Sum2' */
    40.0,                              /* '<S1137>/Sum4' */
    280.0,                             /* '<S1137>/Sum16' */
    132.0,                             /* '<S1137>/Sum6' */
    0.05,                              /* '<S1357>/Multiply' */
    16.0,                              /* '<S1359>/Power1' */
    0.0625,                            /* '<S1359>/Power' */
    16.0,                              /* '<S1360>/Power1' */
    0.0625,                            /* '<S1360>/Power' */
    16.0,                              /* '<S1361>/Power1' */
    0.0625,                            /* '<S1361>/Power' */
    16.0,                              /* '<S1362>/Power1' */
    0.0625,                            /* '<S1362>/Power' */
    0.0625,                            /* '<S1281>/Power' */
    16.0,                              /* '<S1281>/Power1' */
    0.0625,                            /* '<S1282>/Power' */
    16.0,                              /* '<S1282>/Power1' */
    0.0625,                            /* '<S1283>/Power' */
    16.0,                              /* '<S1283>/Power1' */
    0.0625,                            /* '<S1284>/Power' */
    16.0,                              /* '<S1284>/Power1' */
    144.0,                             /* '<S1136>/Sum17' */
    208.0,                             /* '<S1136>/Sum16' */
    44.0,                              /* '<S1136>/Sum1' */
    48.0,                              /* '<S1136>/Sum2' */
    100.0,                             /* '<S1136>/Sum7' */
    52.0,                              /* '<S1136>/Sum3' */
    96.0,                              /* '<S1136>/Sum6' */
    40.0,                              /* '<S1136>/Sum4' */
    136.0,                             /* '<S954>/Sum5' */
    288.0,                             /* '<S954>/Sum18' */
    92.0,                              /* '<S954>/Sum6' */
    44.0,                              /* '<S954>/Sum1' */
    48.0,                              /* '<S954>/Sum2' */
    40.0,                              /* '<S954>/Sum4' */
    88.0,                              /* '<S954>/Sum3' */
    0.015625,                          /* '<S1055>/Power' */
    64.0,                              /* '<S1055>/Power1' */
    0.125,                             /* '<S1056>/Power' */
    8.0,                               /* '<S1056>/Power1' */
    0.015625,                          /* '<S1057>/Power' */
    64.0,                              /* '<S1057>/Power1' */
    52.0,                              /* '<S953>/Sum17' */
    208.0,                             /* '<S953>/Sum16' */
    44.0,                              /* '<S953>/Sum1' */
    48.0,                              /* '<S953>/Sum2' */
    40.0,                              /* '<S953>/Sum4' */
    148.0,                             /* '<S192>/Sum10' */
    140.0,                             /* '<S192>/Sum8' */
    144.0,                             /* '<S192>/Sum9' */
    288.0,                             /* '<S192>/Sum18' */
    192.0,                             /* '<S192>/Sum13' */
    236.0,                             /* '<S192>/Sum14' */
    284.0,                             /* '<S192>/Sum17' */
    136.0,                             /* '<S192>/Sum7' */
    92.0,                              /* '<S192>/Sum5' */
    44.0,                              /* '<S192>/Sum1' */
    240.0,                             /* '<S192>/Sum15' */
    48.0,                              /* '<S192>/Sum2' */
    40.0,                              /* '<S192>/Sum4' */
    188.0,                             /* '<S192>/Sum12' */
    232.0,                             /* '<S192>/Sum11' */
    280.0,                             /* '<S192>/Sum16' */
    88.0,                              /* '<S192>/Sum3' */
    132.0,                             /* '<S192>/Sum6' */
    1.0,                               /* '<S906>/Gain' */
    1.0,                               /* '<S906>/Gain1' */
    1.0,                               /* '<S906>/Gain2' */
    1.0,                               /* '<S906>/Gain3' */
    1.0,                               /* '<S906>/Gain4' */
    1.0,                               /* '<S906>/Gain5' */
    1.0,                               /* '<S906>/Gain6' */
    1.0,                               /* '<S906>/Gain7' */
    1.0,                               /* '<S905>/Gain' */
    1.0,                               /* '<S905>/Gain1' */
    1.0,                               /* '<S905>/Gain2' */
    1.0,                               /* '<S905>/Gain3' */
    1.0,                               /* '<S905>/Gain4' */
    1.0,                               /* '<S905>/Gain5' */
    1.0,                               /* '<S905>/Gain6' */
    1.0,                               /* '<S905>/Gain7' */
    1.0,                               /* '<S904>/Gain' */
    1.0,                               /* '<S904>/Gain1' */
    1.0,                               /* '<S904>/Gain2' */
    1.0,                               /* '<S904>/Gain3' */
    1.0,                               /* '<S904>/Gain4' */
    1.0,                               /* '<S904>/Gain5' */
    1.0,                               /* '<S904>/Gain6' */
    1.0,                               /* '<S904>/Gain7' */
    16.0,                              /* '<S884>/Power1' */
    0.0625,                            /* '<S884>/Power' */
    16.0,                              /* '<S885>/Power1' */
    0.0625,                            /* '<S885>/Power' */
    16.0,                              /* '<S886>/Power1' */
    0.0625,                            /* '<S886>/Power' */
    16.0,                              /* '<S887>/Power1' */
    0.0625,                            /* '<S887>/Power' */
    16.0,                              /* '<S864>/Power1' */
    0.0625,                            /* '<S864>/Power' */
    16.0,                              /* '<S865>/Power1' */
    0.0625,                            /* '<S865>/Power' */
    16.0,                              /* '<S866>/Power1' */
    0.0625,                            /* '<S866>/Power' */
    16.0,                              /* '<S867>/Power1' */
    0.0625,                            /* '<S867>/Power' */
    64.0,                              /* '<S818>/Power1' */
    0.015625,                          /* '<S818>/Power' */
    64.0,                              /* '<S817>/Power1' */
    0.015625,                          /* '<S817>/Power' */
    8.0,                               /* '<S819>/Power1' */
    0.125,                             /* '<S819>/Power' */
    16.0,                              /* '<S766>/Power1' */
    0.0625,                            /* '<S766>/Power' */
    16.0,                              /* '<S767>/Power1' */
    0.0625,                            /* '<S767>/Power' */
    16.0,                              /* '<S768>/Power1' */
    0.0625,                            /* '<S768>/Power' */
    16.0,                              /* '<S769>/Power1' */
    0.0625,                            /* '<S769>/Power' */
    0.05,                              /* '<S764>/Gain' */
    0.015625,                          /* '<S588>/Power' */
    64.0,                              /* '<S588>/Power1' */
    0.125,                             /* '<S589>/Power' */
    8.0,                               /* '<S589>/Power1' */
    0.015625,                          /* '<S590>/Power' */
    64.0,                              /* '<S590>/Power1' */
    0.0625,                            /* '<S528>/Power' */
    16.0,                              /* '<S528>/Power1' */
    0.0625,                            /* '<S529>/Power' */
    16.0,                              /* '<S529>/Power1' */
    0.0625,                            /* '<S530>/Power' */
    16.0,                              /* '<S530>/Power1' */
    0.0625,                            /* '<S531>/Power' */
    16.0,                              /* '<S531>/Power1' */
    200.0,                             /* '<S191>/Sum14' */
    204.0,                             /* '<S191>/Sum15' */
    212.0,                             /* '<S191>/Sum17' */
    208.0,                             /* '<S191>/Sum16' */
    44.0,                              /* '<S191>/Sum1' */
    48.0,                              /* '<S191>/Sum2' */
    52.0,                              /* '<S191>/Sum3' */
    100.0,                             /* '<S191>/Sum7' */
    96.0,                              /* '<S191>/Sum6' */
    148.0,                             /* '<S191>/Sum10' */
    144.0,                             /* '<S191>/Sum9' */
    196.0,                             /* '<S191>/Sum11' */
    192.0,                             /* '<S191>/Sum13' */
    40.0,                              /* '<S191>/Sum4' */
    188.0,                             /* '<S191>/Sum12' */
    92.0,                              /* '<S191>/Sum5' */
    140.0,                             /* '<S191>/Sum8' */
    16.0,                              /* '<S146>/Power1' */
    0.0625,                            /* '<S146>/Power' */
    16.0,                              /* '<S147>/Power1' */
    0.0625,                            /* '<S147>/Power' */
    8.0,                               /* '<S148>/Power1' */
    0.125,                             /* '<S148>/Power' */
    64.0,                              /* '<S149>/Power1' */
    0.015625,                          /* '<S149>/Power' */
    64.0,                              /* '<S150>/Power1' */
    0.015625,                          /* '<S150>/Power' */
    1.0,                               /* '<S118>/Add1' */
    0U,                                /* '<S143>/Cast' */
    0U,                                /* '<S1251>/Cast' */
    0U,                                /* '<S1251>/Cast1' */
    0U,                                /* '<S1251>/Cast2' */
    0U,                                /* '<S1252>/Cast' */
    0U,                                /* '<S1252>/Cast1' */
    0U,                                /* '<S1252>/Cast2' */
    0U,                                /* '<S1253>/Cast' */
    0U,                                /* '<S1253>/Cast1' */
    0U,                                /* '<S1253>/Cast2' */
    0U,                                /* '<S1254>/Cast' */
    0U,                                /* '<S1254>/Cast1' */
    0U,                                /* '<S1254>/Cast2' */
    0U,                                /* '<S1098>/Cast6' */
    0U,                                /* '<S558>/Cast' */
    0U,                                /* '<S558>/Cast1' */
    0U,                                /* '<S558>/Cast2' */
    0U,                                /* '<S559>/Cast' */
    0U,                                /* '<S559>/Cast1' */
    0U,                                /* '<S559>/Cast2' */
    0U,                                /* '<S560>/Cast' */
    0U,                                /* '<S560>/Cast1' */
    0U,                                /* '<S560>/Cast2' */
    0U,                                /* '<S561>/Cast' */
    0U,                                /* '<S561>/Cast1' */
    0U,                                /* '<S561>/Cast2' */
    0U,                                /* '<S305>/Cast6' */
    0U,                                /* '<S143>/Cast1' */
    0U,                                /* '<S118>/Cast' */
    0,                                 /* '<S1098>/Cast' */
    1,                                 /* '<S1098>/NOT' */
    0,                                 /* '<S306>/Cast' */
    0,                                 /* '<S305>/Cast' */
    1,                                 /* '<S305>/NOT' */

    /* Start of '<S1137>/COMM Task - Sync bc 1' */
    {
      /* Start of '<S194>/Transmission subtasks' */
      {
        -4.0,                          /* '<S1311>/Gain' */
        0.0625,                        /* '<S1311>/Power' */
        16.0,                          /* '<S1311>/Power1' */
        -3.0,                          /* '<S1312>/Gain' */
        0.125,                         /* '<S1312>/Power' */
        8.0,                           /* '<S1312>/Power1' */
        -6.0,                          /* '<S1313>/Gain' */
        0.015625,                      /* '<S1313>/Power' */
        64.0,                          /* '<S1313>/Power1' */
        -6.0,                          /* '<S1314>/Gain' */
        0.015625,                      /* '<S1314>/Power' */
        64.0,                          /* '<S1314>/Power1' */
        -4.0,                          /* '<S1315>/Gain' */
        0.0625,                        /* '<S1315>/Power' */
        16.0,                          /* '<S1315>/Power1' */
        1U,                            /* '<S1305>/Cast8' */
        1U                             /* '<S1299>/Cast' */
      }
      ,

      /* End of '<S194>/Transmission subtasks' */

      /* Start of '<S194>/Reception substasks' */
      {
        1U,                            /* '<S1295>/Cast13' */
        1U,                            /* '<S1295>/Cast3' */
        0U,                            /* '<S1295>/Cast15' */
        0U,                            /* '<S1295>/Cast6' */
        0,                             /* '<S1295>/Cast14' */
        0                              /* '<S1295>/Cast5' */
      }
      /* End of '<S194>/Reception substasks' */
    }
    ,

    /* End of '<S1137>/COMM Task - Sync bc 1' */

    /* Start of '<S1264>/Check msg transmission CAN2' */
    {
      22U                              /* '<S1275>/Cast8' */
    }
    ,

    /* End of '<S1264>/Check msg transmission CAN2' */

    /* Start of '<S1264>/Check msg transmission CAN1' */
    {
      22U                              /* '<S1269>/Cast' */
    }
    ,

    /* End of '<S1264>/Check msg transmission CAN1' */

    /* Start of '<S1226>/Reception substasks' */
    {
      22U,                             /* '<S1265>/Cast13' */
      22U,                             /* '<S1265>/Cast3' */
      0U,                              /* '<S1265>/Cast15' */
      0U,                              /* '<S1265>/Cast6' */
      0,                               /* '<S1265>/Cast14' */
      0                                /* '<S1265>/Cast5' */
    }
    ,

    /* End of '<S1226>/Reception substasks' */

    /* Start of '<S1234>/Check msg transmission CAN2' */
    {
      25U                              /* '<S1245>/Cast8' */
    }
    ,

    /* End of '<S1234>/Check msg transmission CAN2' */

    /* Start of '<S1234>/Check msg transmission CAN1' */
    {
      25U                              /* '<S1239>/Cast' */
    }
    ,

    /* End of '<S1234>/Check msg transmission CAN1' */

    /* Start of '<S1225>/Reception substasks' */
    {
      25U,                             /* '<S1235>/Cast13' */
      25U,                             /* '<S1235>/Cast3' */
      0U,                              /* '<S1235>/Cast15' */
      0U,                              /* '<S1235>/Cast6' */
      0,                               /* '<S1235>/Cast14' */
      0                                /* '<S1235>/Cast5' */
    }
    ,

    /* End of '<S1225>/Reception substasks' */

    /* Start of '<S1139>/RESET Board - Return to initialization' */
    {
      0U,                              /* '<S1180>/Cast6' */
      0,                               /* '<S1180>/Cast' */
      1                                /* '<S1180>/NOT' */
    }
    ,

    /* End of '<S1139>/RESET Board - Return to initialization' */

    /* Start of '<S1136>/COMM Task - Sync bc 0' */
    {
      /* Start of '<S194>/Transmission subtasks' */
      {
        -4.0,                          /* '<S1164>/Gain' */
        0.0625,                        /* '<S1164>/Power' */
        16.0,                          /* '<S1164>/Power1' */
        -3.0,                          /* '<S1165>/Gain' */
        0.125,                         /* '<S1165>/Power' */
        8.0,                           /* '<S1165>/Power1' */
        -6.0,                          /* '<S1166>/Gain' */
        0.015625,                      /* '<S1166>/Power' */
        64.0,                          /* '<S1166>/Power1' */
        -6.0,                          /* '<S1167>/Gain' */
        0.015625,                      /* '<S1167>/Power' */
        64.0,                          /* '<S1167>/Power1' */
        -4.0,                          /* '<S1168>/Gain' */
        0.0625,                        /* '<S1168>/Power' */
        16.0,                          /* '<S1168>/Power1' */
        1U,                            /* '<S1158>/Cast8' */
        1U                             /* '<S1152>/Cast' */
      }
      ,

      /* End of '<S194>/Transmission subtasks' */

      /* Start of '<S194>/Reception substasks' */
      {
        1U,                            /* '<S1148>/Cast13' */
        1U,                            /* '<S1148>/Cast3' */
        0U,                            /* '<S1148>/Cast15' */
        0U,                            /* '<S1148>/Cast6' */
        0,                             /* '<S1148>/Cast14' */
        0                              /* '<S1148>/Cast5' */
      }
      /* End of '<S194>/Reception substasks' */
    }
    ,

    /* End of '<S1136>/COMM Task - Sync bc 0' */

    /* Start of '<S954>/COMM Task - Sync bc 1' */
    {
      /* Start of '<S194>/Transmission subtasks' */
      {
        -4.0,                          /* '<S1082>/Gain' */
        0.0625,                        /* '<S1082>/Power' */
        16.0,                          /* '<S1082>/Power1' */
        -3.0,                          /* '<S1083>/Gain' */
        0.125,                         /* '<S1083>/Power' */
        8.0,                           /* '<S1083>/Power1' */
        -6.0,                          /* '<S1084>/Gain' */
        0.015625,                      /* '<S1084>/Power' */
        64.0,                          /* '<S1084>/Power1' */
        -6.0,                          /* '<S1085>/Gain' */
        0.015625,                      /* '<S1085>/Power' */
        64.0,                          /* '<S1085>/Power1' */
        -4.0,                          /* '<S1086>/Gain' */
        0.0625,                        /* '<S1086>/Power' */
        16.0,                          /* '<S1086>/Power1' */
        1U,                            /* '<S1076>/Cast8' */
        1U                             /* '<S1070>/Cast' */
      }
      ,

      /* End of '<S194>/Transmission subtasks' */

      /* Start of '<S194>/Reception substasks' */
      {
        1U,                            /* '<S1066>/Cast13' */
        1U,                            /* '<S1066>/Cast3' */
        0U,                            /* '<S1066>/Cast15' */
        0U,                            /* '<S1066>/Cast6' */
        0,                             /* '<S1066>/Cast14' */
        0                              /* '<S1066>/Cast5' */
      }
      /* End of '<S194>/Reception substasks' */
    }
    ,

    /* End of '<S954>/COMM Task - Sync bc 1' */

    /* Start of '<S1038>/Check msg transmission CAN2' */
    {
      21U                              /* '<S1049>/Cast8' */
    }
    ,

    /* End of '<S1038>/Check msg transmission CAN2' */

    /* Start of '<S1038>/Check msg transmission CAN1' */
    {
      21U                              /* '<S1043>/Cast' */
    }
    ,

    /* End of '<S1038>/Check msg transmission CAN1' */

    /* Start of '<S1030>/Reception substasks' */
    {
      21U,                             /* '<S1039>/Cast13' */
      21U,                             /* '<S1039>/Cast3' */
      0U,                              /* '<S1039>/Cast15' */
      0U,                              /* '<S1039>/Cast6' */
      0,                               /* '<S1039>/Cast14' */
      0                                /* '<S1039>/Cast5' */
    }
    ,

    /* End of '<S1030>/Reception substasks' */

    /* Start of '<S957>/RESET Board - Return to initialization' */
    {
      0U,                              /* '<S995>/Cast6' */
      0,                               /* '<S995>/Cast' */
      1                                /* '<S995>/NOT' */
    }
    ,

    /* End of '<S957>/RESET Board - Return to initialization' */

    /* Start of '<S953>/COMM Task - Sync bc 0' */
    {
      /* Start of '<S194>/Transmission subtasks' */
      {
        -4.0,                          /* '<S979>/Gain' */
        0.0625,                        /* '<S979>/Power' */
        16.0,                          /* '<S979>/Power1' */
        -3.0,                          /* '<S980>/Gain' */
        0.125,                         /* '<S980>/Power' */
        8.0,                           /* '<S980>/Power1' */
        -6.0,                          /* '<S981>/Gain' */
        0.015625,                      /* '<S981>/Power' */
        64.0,                          /* '<S981>/Power1' */
        -6.0,                          /* '<S982>/Gain' */
        0.015625,                      /* '<S982>/Power' */
        64.0,                          /* '<S982>/Power1' */
        -4.0,                          /* '<S983>/Gain' */
        0.0625,                        /* '<S983>/Power' */
        16.0,                          /* '<S983>/Power1' */
        1U,                            /* '<S973>/Cast8' */
        1U                             /* '<S967>/Cast' */
      }
      ,

      /* End of '<S194>/Transmission subtasks' */

      /* Start of '<S194>/Reception substasks' */
      {
        1U,                            /* '<S963>/Cast13' */
        1U,                            /* '<S963>/Cast3' */
        0U,                            /* '<S963>/Cast15' */
        0U,                            /* '<S963>/Cast6' */
        0,                             /* '<S963>/Cast14' */
        0                              /* '<S963>/Cast5' */
      }
      /* End of '<S194>/Reception substasks' */
    }
    ,

    /* End of '<S953>/COMM Task - Sync bc 0' */

    /* Start of '<S435>/Transmission subtasks1' */
    {
      -4.0,                            /* '<S615>/Gain' */
      0.0625,                          /* '<S615>/Power' */
      16.0,                            /* '<S615>/Power1' */
      -3.0,                            /* '<S616>/Gain' */
      0.125,                           /* '<S616>/Power' */
      8.0,                             /* '<S616>/Power1' */
      -6.0,                            /* '<S617>/Gain' */
      0.015625,                        /* '<S617>/Power' */
      64.0,                            /* '<S617>/Power1' */
      -6.0,                            /* '<S618>/Gain' */
      0.015625,                        /* '<S618>/Power' */
      64.0,                            /* '<S618>/Power1' */
      -4.0,                            /* '<S619>/Gain' */
      0.0625,                          /* '<S619>/Power' */
      16.0,                            /* '<S619>/Power1' */
      1U,                              /* '<S609>/Cast8' */
      1U                               /* '<S603>/Cast' */
    }
    ,

    /* End of '<S435>/Transmission subtasks1' */

    /* Start of '<S435>/Reception substasks' */
    {
      1U,                              /* '<S599>/Cast13' */
      1U,                              /* '<S599>/Cast3' */
      0U,                              /* '<S599>/Cast15' */
      0U,                              /* '<S599>/Cast6' */
      0,                               /* '<S599>/Cast14' */
      0                                /* '<S599>/Cast5' */
    }
    ,

    /* End of '<S435>/Reception substasks' */

    /* Start of '<S571>/Check msg transmission CAN2' */
    {
      21U                              /* '<S582>/Cast8' */
    }
    ,

    /* End of '<S571>/Check msg transmission CAN2' */

    /* Start of '<S571>/Check msg transmission CAN1' */
    {
      21U                              /* '<S576>/Cast' */
    }
    ,

    /* End of '<S571>/Check msg transmission CAN1' */

    /* Start of '<S434>/Reception substasks' */
    {
      21U,                             /* '<S572>/Cast13' */
      21U,                             /* '<S572>/Cast3' */
      0U,                              /* '<S572>/Cast15' */
      0U,                              /* '<S572>/Cast6' */
      0,                               /* '<S572>/Cast14' */
      0                                /* '<S572>/Cast5' */
    }
    ,

    /* End of '<S434>/Reception substasks' */

    /* Start of '<S541>/Check msg transmission CAN2' */
    {
      22U                              /* '<S552>/Cast8' */
    }
    ,

    /* End of '<S541>/Check msg transmission CAN2' */

    /* Start of '<S541>/Check msg transmission CAN1' */
    {
      22U                              /* '<S546>/Cast' */
    }
    ,

    /* End of '<S541>/Check msg transmission CAN1' */

    /* Start of '<S433>/Reception substasks' */
    {
      22U,                             /* '<S542>/Cast13' */
      22U,                             /* '<S542>/Cast3' */
      0U,                              /* '<S542>/Cast15' */
      0U,                              /* '<S542>/Cast6' */
      0,                               /* '<S542>/Cast14' */
      0                                /* '<S542>/Cast5' */
    }
    ,

    /* End of '<S433>/Reception substasks' */

    /* Start of '<S511>/Check msg transmission CAN2' */
    {
      25U                              /* '<S522>/Cast8' */
    }
    ,

    /* End of '<S511>/Check msg transmission CAN2' */

    /* Start of '<S511>/Check msg transmission CAN1' */
    {
      25U                              /* '<S516>/Cast' */
    }
    ,

    /* End of '<S511>/Check msg transmission CAN1' */

    /* Start of '<S432>/Reception substasks' */
    {
      25U,                             /* '<S512>/Cast13' */
      25U,                             /* '<S512>/Cast3' */
      0U,                              /* '<S512>/Cast15' */
      0U,                              /* '<S512>/Cast6' */
      0,                               /* '<S512>/Cast14' */
      0                                /* '<S512>/Cast5' */
    }
    ,

    /* End of '<S432>/Reception substasks' */

    /* Start of '<S431>/Transmission subtasks' */
    {
      -4.0,                            /* '<S498>/Gain' */
      0.0625,                          /* '<S498>/Power' */
      16.0,                            /* '<S498>/Power1' */
      -4.0,                            /* '<S499>/Gain' */
      0.0625,                          /* '<S499>/Power' */
      16.0,                            /* '<S499>/Power1' */
      -4.0,                            /* '<S500>/Gain' */
      0.0625,                          /* '<S500>/Power' */
      16.0,                            /* '<S500>/Power1' */
      -4.0,                            /* '<S501>/Gain' */
      0.0625,                          /* '<S501>/Power' */
      16.0,                            /* '<S501>/Power1' */

      /* Start of '<S450>/Check msg transmission CAN2' */
      {
        24U                            /* '<S492>/Cast8' */
      }
      ,

      /* End of '<S450>/Check msg transmission CAN2' */

      /* Start of '<S450>/Check msg transmission CAN1' */
      {
        24U                            /* '<S486>/Cast' */
      }
      /* End of '<S450>/Check msg transmission CAN1' */
    }
    ,

    /* End of '<S431>/Transmission subtasks' */

    /* Start of '<S431>/Reception substasks' */
    {
      24U,                             /* '<S482>/Cast13' */
      24U,                             /* '<S482>/Cast3' */
      0U,                              /* '<S482>/Cast15' */
      0U,                              /* '<S482>/Cast6' */
      0,                               /* '<S482>/Cast14' */
      0                                /* '<S482>/Cast5' */
    }
    ,

    /* End of '<S431>/Reception substasks' */

    /* Start of '<S430>/Transmission subtasks1' */
    {
      -4.0,                            /* '<S467>/Gain' */
      0.0625,                          /* '<S467>/Power' */
      16.0,                            /* '<S467>/Power1' */
      -4.0,                            /* '<S468>/Gain' */
      0.0625,                          /* '<S468>/Power' */
      16.0,                            /* '<S468>/Power1' */
      -4.0,                            /* '<S469>/Gain' */
      0.0625,                          /* '<S469>/Power' */
      16.0,                            /* '<S469>/Power1' */
      -4.0,                            /* '<S470>/Gain' */
      0.0625,                          /* '<S470>/Power' */
      16.0,                            /* '<S470>/Power1' */

      /* Start of '<S450>/Check msg transmission CAN2' */
      {
        23U                            /* '<S461>/Cast8' */
      }
      ,

      /* End of '<S450>/Check msg transmission CAN2' */

      /* Start of '<S450>/Check msg transmission CAN1' */
      {
        23U                            /* '<S455>/Cast' */
      }
      /* End of '<S450>/Check msg transmission CAN1' */
    }
    ,

    /* End of '<S430>/Transmission subtasks1' */

    /* Start of '<S430>/Reception substasks' */
    {
      23U,                             /* '<S451>/Cast13' */
      23U,                             /* '<S451>/Cast3' */
      0U,                              /* '<S451>/Cast15' */
      0U,                              /* '<S451>/Cast6' */
      0,                               /* '<S451>/Cast14' */
      0                                /* '<S451>/Cast5' */
    }
    ,

    /* End of '<S430>/Reception substasks' */

    /* Start of '<S197>/Transmission subtasks' */
    {
      13U,                             /* '<S292>/Cast8' */
      13U                              /* '<S286>/Cast' */
    }
    ,

    /* End of '<S197>/Transmission subtasks' */

    /* Start of '<S197>/Reception substasks' */
    {
      13U,                             /* '<S282>/Cast13' */
      13U,                             /* '<S282>/Cast3' */
      0U,                              /* '<S282>/Cast15' */
      0U,                              /* '<S282>/Cast6' */
      0,                               /* '<S282>/Cast14' */
      0                                /* '<S282>/Cast5' */
    }
    ,

    /* End of '<S197>/Reception substasks' */

    /* Start of '<S196>/Transmission subtasks' */
    {
      12U,                             /* '<S274>/Cast8' */
      12U                              /* '<S268>/Cast' */
    }
    ,

    /* End of '<S196>/Transmission subtasks' */

    /* Start of '<S196>/Reception substasks' */
    {
      12U,                             /* '<S264>/Cast13' */
      12U,                             /* '<S264>/Cast3' */
      0U,                              /* '<S264>/Cast15' */
      0U,                              /* '<S264>/Cast6' */
      0,                               /* '<S264>/Cast14' */
      0                                /* '<S264>/Cast5' */
    }
    ,

    /* End of '<S196>/Reception substasks' */

    /* Start of '<S195>/Transmission subtasks' */
    {
      11U,                             /* '<S256>/Cast8' */
      11U                              /* '<S250>/Cast' */
    }
    ,

    /* End of '<S195>/Transmission subtasks' */

    /* Start of '<S195>/Reception substasks' */
    {
      11U,                             /* '<S246>/Cast13' */
      11U,                             /* '<S246>/Cast3' */
      0U,                              /* '<S246>/Cast15' */
      0U,                              /* '<S246>/Cast6' */
      0,                               /* '<S246>/Cast14' */
      0                                /* '<S246>/Cast5' */
    }
    ,

    /* End of '<S195>/Reception substasks' */

    /* Start of '<S191>/COMM Task - Sync bc 0' */
    {
      /* Start of '<S194>/Transmission subtasks' */
      {
        -4.0,                          /* '<S229>/Gain' */
        0.0625,                        /* '<S229>/Power' */
        16.0,                          /* '<S229>/Power1' */
        -3.0,                          /* '<S230>/Gain' */
        0.125,                         /* '<S230>/Power' */
        8.0,                           /* '<S230>/Power1' */
        -6.0,                          /* '<S231>/Gain' */
        0.015625,                      /* '<S231>/Power' */
        64.0,                          /* '<S231>/Power1' */
        -6.0,                          /* '<S232>/Gain' */
        0.015625,                      /* '<S232>/Power' */
        64.0,                          /* '<S232>/Power1' */
        -4.0,                          /* '<S233>/Gain' */
        0.0625,                        /* '<S233>/Power' */
        16.0,                          /* '<S233>/Power1' */
        1U,                            /* '<S223>/Cast8' */
        1U                             /* '<S217>/Cast' */
      }
      ,

      /* End of '<S194>/Transmission subtasks' */

      /* Start of '<S194>/Reception substasks' */
      {
        1U,                            /* '<S213>/Cast13' */
        1U,                            /* '<S213>/Cast3' */
        0U,                            /* '<S213>/Cast15' */
        0U,                            /* '<S213>/Cast6' */
        0,                             /* '<S213>/Cast14' */
        0                              /* '<S213>/Cast5' */
      }
      /* End of '<S194>/Reception substasks' */
    }
    /* End of '<S191>/COMM Task - Sync bc 0' */
  }
  /* End of '<S10>/TTA System' */
};

/* Constant parameters (default storage) */
const ConstParam rtConstP = {
  /* Expression: TM_Data_bc0
   * Referenced by: '<S130>/Constant'
   */
  { 0.0, 40.0, 44.0, 46.0, 48.0, 50.0, 52.0, 92.0, 96.0, 100.0, 140.0, 142.0,
    144.0, 148.0, 188.0, 192.0, 196.0, 200.0, 204.0, 208.0 },

  /* Expression: TM_Data_bc1
   * Referenced by: '<S130>/Constant4'
   */
  { 0.0, 40.0, 44.0, 46.0, 48.0, 88.0, 90.0, 92.0, 132.0, 134.0, 136.0, 140.0,
    144.0, 148.0, 188.0, 192.0, 232.0, 236.0, 237.0, 239.0, 240.0, 280.0, 282.0,
    284.0, 286.0 },

  /* Expression: TM_Type_bc0
   * Referenced by: '<S130>/Constant1'
   */
  { 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 0.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0 },

  /* Expression: TM_Type_bc1
   * Referenced by: '<S130>/Constant5'
   */
  { 0.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 1.0,
    0.0, 1.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0 },

  /* Computed Parameter: Logic_table
   * Referenced by: '<S23>/Logic'
   */
  { 0, 0, 1, 1, 1, 0, 1, 0, 1, 1, 0, 0, 0, 1, 0, 1 }
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
