/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_TTA_Controller_v4_8_data.c
 *
 * Code generated for Simulink model 'HANcoder_E407_TTA_Controller_v4_8'.
 *
 * Model version                  : 1.197
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Thu Jun  9 10:43:27 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "HANcoder_E407_TTA_Controller_v4_8.h"
#include "HANcoder_E407_TTA_Controller_v4_8_private.h"

/* Invariant block signals (default storage) */
const ConstBlockIO rtConstB = {
  /* Start of '<S10>/TTA System' */
  {
    372.0,                             /* '<S1604>/Sum18' */
    364.0,                             /* '<S1604>/Sum17' */
    136.0,                             /* '<S1604>/Sum7' */
    44.0,                              /* '<S1604>/Sum1' */
    48.0,                              /* '<S1604>/Sum2' */
    40.0,                              /* '<S1604>/Sum4' */
    360.0,                             /* '<S1604>/Sum16' */
    132.0,                             /* '<S1604>/Sum6' */
    0.0584,                            /* '<S1824>/Multiply' */
    16.0,                              /* '<S1826>/Power1' */
    0.0625,                            /* '<S1826>/Power' */
    16.0,                              /* '<S1827>/Power1' */
    0.0625,                            /* '<S1827>/Power' */
    16.0,                              /* '<S1828>/Power1' */
    0.0625,                            /* '<S1828>/Power' */
    16.0,                              /* '<S1829>/Power1' */
    0.0625,                            /* '<S1829>/Power' */
    0.0625,                            /* '<S1748>/Power' */
    16.0,                              /* '<S1748>/Power1' */
    0.0625,                            /* '<S1749>/Power' */
    16.0,                              /* '<S1749>/Power1' */
    0.0625,                            /* '<S1750>/Power' */
    16.0,                              /* '<S1750>/Power1' */
    0.0625,                            /* '<S1751>/Power' */
    16.0,                              /* '<S1751>/Power1' */
    144.0,                             /* '<S1603>/Sum17' */
    208.0,                             /* '<S1603>/Sum16' */
    44.0,                              /* '<S1603>/Sum1' */
    48.0,                              /* '<S1603>/Sum2' */
    100.0,                             /* '<S1603>/Sum7' */
    52.0,                              /* '<S1603>/Sum3' */
    96.0,                              /* '<S1603>/Sum6' */
    40.0,                              /* '<S1603>/Sum4' */
    136.0,                             /* '<S1421>/Sum5' */
    372.0,                             /* '<S1421>/Sum18' */
    92.0,                              /* '<S1421>/Sum6' */
    44.0,                              /* '<S1421>/Sum1' */
    48.0,                              /* '<S1421>/Sum2' */
    40.0,                              /* '<S1421>/Sum4' */
    88.0,                              /* '<S1421>/Sum3' */
    0.015625,                          /* '<S1522>/Power' */
    64.0,                              /* '<S1522>/Power1' */
    0.125,                             /* '<S1523>/Power' */
    8.0,                               /* '<S1523>/Power1' */
    0.015625,                          /* '<S1524>/Power' */
    64.0,                              /* '<S1524>/Power1' */
    52.0,                              /* '<S1420>/Sum17' */
    208.0,                             /* '<S1420>/Sum16' */
    44.0,                              /* '<S1420>/Sum1' */
    48.0,                              /* '<S1420>/Sum2' */
    40.0,                              /* '<S1420>/Sum4' */
    148.0,                             /* '<S597>/Sum10' */
    140.0,                             /* '<S597>/Sum8' */
    144.0,                             /* '<S597>/Sum9' */
    372.0,                             /* '<S597>/Sum18' */
    192.0,                             /* '<S597>/Sum13' */
    236.0,                             /* '<S597>/Sum14' */
    316.0,                             /* '<S597>/Sum20' */
    364.0,                             /* '<S597>/Sum17' */
    136.0,                             /* '<S597>/Sum7' */
    92.0,                              /* '<S597>/Sum5' */
    44.0,                              /* '<S597>/Sum1' */
    320.0,                             /* '<S597>/Sum15' */
    48.0,                              /* '<S597>/Sum2' */
    40.0,                              /* '<S597>/Sum4' */
    188.0,                             /* '<S597>/Sum12' */
    232.0,                             /* '<S597>/Sum11' */
    360.0,                             /* '<S597>/Sum16' */
    312.0,                             /* '<S597>/Sum19' */
    88.0,                              /* '<S597>/Sum3' */
    132.0,                             /* '<S597>/Sum6' */
    1.0,                               /* '<S1373>/Gain' */
    1.0,                               /* '<S1373>/Gain1' */
    1.0,                               /* '<S1373>/Gain2' */
    1.0,                               /* '<S1373>/Gain3' */
    1.0,                               /* '<S1373>/Gain4' */
    1.0,                               /* '<S1373>/Gain5' */
    1.0,                               /* '<S1373>/Gain6' */
    1.0,                               /* '<S1373>/Gain7' */
    1.0,                               /* '<S1372>/Gain' */
    1.0,                               /* '<S1372>/Gain1' */
    1.0,                               /* '<S1372>/Gain2' */
    1.0,                               /* '<S1372>/Gain3' */
    1.0,                               /* '<S1372>/Gain4' */
    1.0,                               /* '<S1372>/Gain5' */
    1.0,                               /* '<S1372>/Gain6' */
    1.0,                               /* '<S1372>/Gain7' */
    1.0,                               /* '<S1371>/Gain' */
    1.0,                               /* '<S1371>/Gain1' */
    1.0,                               /* '<S1371>/Gain2' */
    1.0,                               /* '<S1371>/Gain3' */
    1.0,                               /* '<S1371>/Gain4' */
    1.0,                               /* '<S1371>/Gain5' */
    1.0,                               /* '<S1371>/Gain6' */
    1.0,                               /* '<S1371>/Gain7' */
    16.0,                              /* '<S1351>/Power1' */
    0.0625,                            /* '<S1351>/Power' */
    16.0,                              /* '<S1352>/Power1' */
    0.0625,                            /* '<S1352>/Power' */
    16.0,                              /* '<S1353>/Power1' */
    0.0625,                            /* '<S1353>/Power' */
    16.0,                              /* '<S1354>/Power1' */
    0.0625,                            /* '<S1354>/Power' */
    16.0,                              /* '<S1331>/Power1' */
    0.0625,                            /* '<S1331>/Power' */
    16.0,                              /* '<S1332>/Power1' */
    0.0625,                            /* '<S1332>/Power' */
    16.0,                              /* '<S1333>/Power1' */
    0.0625,                            /* '<S1333>/Power' */
    16.0,                              /* '<S1334>/Power1' */
    0.0625,                            /* '<S1334>/Power' */
    64.0,                              /* '<S1285>/Power1' */
    0.015625,                          /* '<S1285>/Power' */
    64.0,                              /* '<S1284>/Power1' */
    0.015625,                          /* '<S1284>/Power' */
    8.0,                               /* '<S1286>/Power1' */
    0.125,                             /* '<S1286>/Power' */
    16.0,                              /* '<S1233>/Power1' */
    0.0625,                            /* '<S1233>/Power' */
    16.0,                              /* '<S1234>/Power1' */
    0.0625,                            /* '<S1234>/Power' */
    16.0,                              /* '<S1235>/Power1' */
    0.0625,                            /* '<S1235>/Power' */
    16.0,                              /* '<S1236>/Power1' */
    0.0625,                            /* '<S1236>/Power' */
    0.0584,                            /* '<S1231>/Gain' */
    0.015625,                          /* '<S1026>/Power' */
    64.0,                              /* '<S1026>/Power1' */
    0.125,                             /* '<S1027>/Power' */
    8.0,                               /* '<S1027>/Power1' */
    0.015625,                          /* '<S1028>/Power' */
    64.0,                              /* '<S1028>/Power1' */
    0.0625,                            /* '<S966>/Power' */
    16.0,                              /* '<S966>/Power1' */
    0.0625,                            /* '<S967>/Power' */
    16.0,                              /* '<S967>/Power1' */
    0.0625,                            /* '<S968>/Power' */
    16.0,                              /* '<S968>/Power1' */
    0.0625,                            /* '<S969>/Power' */
    16.0,                              /* '<S969>/Power1' */
    200.0,                             /* '<S596>/Sum14' */
    204.0,                             /* '<S596>/Sum15' */
    212.0,                             /* '<S596>/Sum17' */
    208.0,                             /* '<S596>/Sum16' */
    44.0,                              /* '<S596>/Sum1' */
    48.0,                              /* '<S596>/Sum2' */
    52.0,                              /* '<S596>/Sum3' */
    100.0,                             /* '<S596>/Sum7' */
    96.0,                              /* '<S596>/Sum6' */
    148.0,                             /* '<S596>/Sum10' */
    144.0,                             /* '<S596>/Sum9' */
    196.0,                             /* '<S596>/Sum11' */
    192.0,                             /* '<S596>/Sum13' */
    40.0,                              /* '<S596>/Sum4' */
    188.0,                             /* '<S596>/Sum12' */
    92.0,                              /* '<S596>/Sum5' */
    140.0,                             /* '<S596>/Sum8' */
    320.0,                             /* '<S192>/Sum15' */
    372.0,                             /* '<S192>/Sum1' */
    192.0,                             /* '<S192>/Sum8' */
    236.0,                             /* '<S192>/Sum9' */
    316.0,                             /* '<S192>/Sum20' */
    44.0,                              /* '<S192>/Sum5' */
    48.0,                              /* '<S192>/Sum6' */
    232.0,                             /* '<S192>/Sum2' */
    312.0,                             /* '<S192>/Sum10' */
    188.0,                             /* '<S192>/Sum4' */
    40.0,                              /* '<S192>/Sum7' */
    1.0,                               /* '<S435>/Gain' */
    1.0,                               /* '<S435>/Gain1' */
    1.0,                               /* '<S435>/Gain2' */
    1.0,                               /* '<S435>/Gain3' */
    1.0,                               /* '<S435>/Gain4' */
    1.0,                               /* '<S435>/Gain5' */
    1.0,                               /* '<S435>/Gain6' */
    1.0,                               /* '<S435>/Gain7' */
    1.0,                               /* '<S434>/Gain' */
    1.0,                               /* '<S434>/Gain1' */
    1.0,                               /* '<S434>/Gain4' */
    1.0,                               /* '<S434>/Gain5' */
    1.0,                               /* '<S434>/Gain6' */
    1.0,                               /* '<S434>/Gain7' */
    1.0,                               /* '<S433>/Gain' */
    1.0,                               /* '<S433>/Gain1' */
    1.0,                               /* '<S433>/Gain2' */
    1.0,                               /* '<S433>/Gain3' */
    1.0,                               /* '<S433>/Gain4' */
    1.0,                               /* '<S433>/Gain5' */
    1.0,                               /* '<S433>/Gain6' */
    1.0,                               /* '<S433>/Gain7' */
    16.0,                              /* '<S413>/Power1' */
    0.0625,                            /* '<S413>/Power' */
    16.0,                              /* '<S414>/Power1' */
    0.0625,                            /* '<S414>/Power' */
    16.0,                              /* '<S415>/Power1' */
    0.0625,                            /* '<S415>/Power' */
    16.0,                              /* '<S416>/Power1' */
    0.0625,                            /* '<S416>/Power' */
    16.0,                              /* '<S393>/Power1' */
    0.0625,                            /* '<S393>/Power' */
    16.0,                              /* '<S394>/Power1' */
    0.0625,                            /* '<S394>/Power' */
    16.0,                              /* '<S395>/Power1' */
    0.0625,                            /* '<S395>/Power' */
    16.0,                              /* '<S396>/Power1' */
    0.0625,                            /* '<S396>/Power' */
    16.0,                              /* '<S373>/Power1' */
    0.0625,                            /* '<S373>/Power' */
    16.0,                              /* '<S374>/Power1' */
    0.0625,                            /* '<S374>/Power' */
    16.0,                              /* '<S375>/Power1' */
    0.0625,                            /* '<S375>/Power' */
    16.0,                              /* '<S376>/Power1' */
    0.0625,                            /* '<S376>/Power' */
    52.0,                              /* '<S191>/Sum6' */
    208.0,                             /* '<S191>/Sum5' */
    44.0,                              /* '<S191>/Sum3' */
    48.0,                              /* '<S191>/Sum7' */
    40.0,                              /* '<S191>/Sum8' */
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
    0U,                                /* '<S1718>/Cast' */
    0U,                                /* '<S1718>/Cast1' */
    0U,                                /* '<S1718>/Cast2' */
    0U,                                /* '<S1719>/Cast' */
    0U,                                /* '<S1719>/Cast1' */
    0U,                                /* '<S1719>/Cast2' */
    0U,                                /* '<S1720>/Cast' */
    0U,                                /* '<S1720>/Cast1' */
    0U,                                /* '<S1720>/Cast2' */
    0U,                                /* '<S1721>/Cast' */
    0U,                                /* '<S1721>/Cast1' */
    0U,                                /* '<S1721>/Cast2' */
    0U,                                /* '<S1565>/Cast6' */
    0U,                                /* '<S996>/Cast' */
    0U,                                /* '<S996>/Cast1' */
    0U,                                /* '<S996>/Cast2' */
    0U,                                /* '<S997>/Cast' */
    0U,                                /* '<S997>/Cast1' */
    0U,                                /* '<S997>/Cast2' */
    0U,                                /* '<S998>/Cast' */
    0U,                                /* '<S998>/Cast1' */
    0U,                                /* '<S998>/Cast2' */
    0U,                                /* '<S999>/Cast' */
    0U,                                /* '<S999>/Cast1' */
    0U,                                /* '<S999>/Cast2' */
    0U,                                /* '<S710>/Cast6' */
    0U,                                /* '<S143>/Cast1' */
    0U,                                /* '<S118>/Cast' */
    0,                                 /* '<S1565>/Cast' */
    1,                                 /* '<S1565>/NOT' */
    0,                                 /* '<S711>/Cast' */
    0,                                 /* '<S710>/Cast' */
    1,                                 /* '<S710>/NOT' */

    /* Start of '<S1604>/COMM Task - Sync bc 1' */
    {
      /* Start of '<S195>/Transmission subtasks' */
      {
        -4.0,                          /* '<S1778>/Gain' */
        0.0625,                        /* '<S1778>/Power' */
        16.0,                          /* '<S1778>/Power1' */
        -3.0,                          /* '<S1779>/Gain' */
        0.125,                         /* '<S1779>/Power' */
        8.0,                           /* '<S1779>/Power1' */
        -6.0,                          /* '<S1780>/Gain' */
        0.015625,                      /* '<S1780>/Power' */
        64.0,                          /* '<S1780>/Power1' */
        -6.0,                          /* '<S1781>/Gain' */
        0.015625,                      /* '<S1781>/Power' */
        64.0,                          /* '<S1781>/Power1' */
        -4.0,                          /* '<S1782>/Gain' */
        0.0625,                        /* '<S1782>/Power' */
        16.0,                          /* '<S1782>/Power1' */
        1U,                            /* '<S1772>/Cast8' */
        1U                             /* '<S1766>/Cast' */
      }
      ,

      /* End of '<S195>/Transmission subtasks' */

      /* Start of '<S195>/Reception substasks' */
      {
        1U,                            /* '<S1762>/Cast13' */
        1U,                            /* '<S1762>/Cast3' */
        0U,                            /* '<S1762>/Cast15' */
        0U,                            /* '<S1762>/Cast6' */
        0,                             /* '<S1762>/Cast14' */
        0                              /* '<S1762>/Cast5' */
      }
      /* End of '<S195>/Reception substasks' */
    }
    ,

    /* End of '<S1604>/COMM Task - Sync bc 1' */

    /* Start of '<S1731>/Check msg transmission CAN2' */
    {
      22U                              /* '<S1742>/Cast8' */
    }
    ,

    /* End of '<S1731>/Check msg transmission CAN2' */

    /* Start of '<S1731>/Check msg transmission CAN1' */
    {
      22U                              /* '<S1736>/Cast' */
    }
    ,

    /* End of '<S1731>/Check msg transmission CAN1' */

    /* Start of '<S1693>/Reception substasks' */
    {
      22U,                             /* '<S1732>/Cast13' */
      22U,                             /* '<S1732>/Cast3' */
      0U,                              /* '<S1732>/Cast15' */
      0U,                              /* '<S1732>/Cast6' */
      0,                               /* '<S1732>/Cast14' */
      0                                /* '<S1732>/Cast5' */
    }
    ,

    /* End of '<S1693>/Reception substasks' */

    /* Start of '<S1701>/Check msg transmission CAN2' */
    {
      26U                              /* '<S1712>/Cast8' */
    }
    ,

    /* End of '<S1701>/Check msg transmission CAN2' */

    /* Start of '<S1701>/Check msg transmission CAN1' */
    {
      26U                              /* '<S1706>/Cast' */
    }
    ,

    /* End of '<S1701>/Check msg transmission CAN1' */

    /* Start of '<S1692>/Reception substasks' */
    {
      26U,                             /* '<S1702>/Cast13' */
      26U,                             /* '<S1702>/Cast3' */
      0U,                              /* '<S1702>/Cast15' */
      0U,                              /* '<S1702>/Cast6' */
      0,                               /* '<S1702>/Cast14' */
      0                                /* '<S1702>/Cast5' */
    }
    ,

    /* End of '<S1692>/Reception substasks' */

    /* Start of '<S1606>/RESET Board - Return to initialization' */
    {
      0U,                              /* '<S1647>/Cast6' */
      0,                               /* '<S1647>/Cast' */
      1                                /* '<S1647>/NOT' */
    }
    ,

    /* End of '<S1606>/RESET Board - Return to initialization' */

    /* Start of '<S1603>/COMM Task - Sync bc 0' */
    {
      /* Start of '<S195>/Transmission subtasks' */
      {
        -4.0,                          /* '<S1631>/Gain' */
        0.0625,                        /* '<S1631>/Power' */
        16.0,                          /* '<S1631>/Power1' */
        -3.0,                          /* '<S1632>/Gain' */
        0.125,                         /* '<S1632>/Power' */
        8.0,                           /* '<S1632>/Power1' */
        -6.0,                          /* '<S1633>/Gain' */
        0.015625,                      /* '<S1633>/Power' */
        64.0,                          /* '<S1633>/Power1' */
        -6.0,                          /* '<S1634>/Gain' */
        0.015625,                      /* '<S1634>/Power' */
        64.0,                          /* '<S1634>/Power1' */
        -4.0,                          /* '<S1635>/Gain' */
        0.0625,                        /* '<S1635>/Power' */
        16.0,                          /* '<S1635>/Power1' */
        1U,                            /* '<S1625>/Cast8' */
        1U                             /* '<S1619>/Cast' */
      }
      ,

      /* End of '<S195>/Transmission subtasks' */

      /* Start of '<S195>/Reception substasks' */
      {
        1U,                            /* '<S1615>/Cast13' */
        1U,                            /* '<S1615>/Cast3' */
        0U,                            /* '<S1615>/Cast15' */
        0U,                            /* '<S1615>/Cast6' */
        0,                             /* '<S1615>/Cast14' */
        0                              /* '<S1615>/Cast5' */
      }
      /* End of '<S195>/Reception substasks' */
    }
    ,

    /* End of '<S1603>/COMM Task - Sync bc 0' */

    /* Start of '<S1421>/COMM Task - Sync bc 1' */
    {
      /* Start of '<S195>/Transmission subtasks' */
      {
        -4.0,                          /* '<S1549>/Gain' */
        0.0625,                        /* '<S1549>/Power' */
        16.0,                          /* '<S1549>/Power1' */
        -3.0,                          /* '<S1550>/Gain' */
        0.125,                         /* '<S1550>/Power' */
        8.0,                           /* '<S1550>/Power1' */
        -6.0,                          /* '<S1551>/Gain' */
        0.015625,                      /* '<S1551>/Power' */
        64.0,                          /* '<S1551>/Power1' */
        -6.0,                          /* '<S1552>/Gain' */
        0.015625,                      /* '<S1552>/Power' */
        64.0,                          /* '<S1552>/Power1' */
        -4.0,                          /* '<S1553>/Gain' */
        0.0625,                        /* '<S1553>/Power' */
        16.0,                          /* '<S1553>/Power1' */
        1U,                            /* '<S1543>/Cast8' */
        1U                             /* '<S1537>/Cast' */
      }
      ,

      /* End of '<S195>/Transmission subtasks' */

      /* Start of '<S195>/Reception substasks' */
      {
        1U,                            /* '<S1533>/Cast13' */
        1U,                            /* '<S1533>/Cast3' */
        0U,                            /* '<S1533>/Cast15' */
        0U,                            /* '<S1533>/Cast6' */
        0,                             /* '<S1533>/Cast14' */
        0                              /* '<S1533>/Cast5' */
      }
      /* End of '<S195>/Reception substasks' */
    }
    ,

    /* End of '<S1421>/COMM Task - Sync bc 1' */

    /* Start of '<S1505>/Check msg transmission CAN2' */
    {
      21U                              /* '<S1516>/Cast8' */
    }
    ,

    /* End of '<S1505>/Check msg transmission CAN2' */

    /* Start of '<S1505>/Check msg transmission CAN1' */
    {
      21U                              /* '<S1510>/Cast' */
    }
    ,

    /* End of '<S1505>/Check msg transmission CAN1' */

    /* Start of '<S1497>/Reception substasks' */
    {
      21U,                             /* '<S1506>/Cast13' */
      21U,                             /* '<S1506>/Cast3' */
      0U,                              /* '<S1506>/Cast15' */
      0U,                              /* '<S1506>/Cast6' */
      0,                               /* '<S1506>/Cast14' */
      0                                /* '<S1506>/Cast5' */
    }
    ,

    /* End of '<S1497>/Reception substasks' */

    /* Start of '<S1424>/RESET Board - Return to initialization' */
    {
      0U,                              /* '<S1462>/Cast6' */
      0,                               /* '<S1462>/Cast' */
      1                                /* '<S1462>/NOT' */
    }
    ,

    /* End of '<S1424>/RESET Board - Return to initialization' */

    /* Start of '<S1420>/COMM Task - Sync bc 0' */
    {
      /* Start of '<S195>/Transmission subtasks' */
      {
        -4.0,                          /* '<S1446>/Gain' */
        0.0625,                        /* '<S1446>/Power' */
        16.0,                          /* '<S1446>/Power1' */
        -3.0,                          /* '<S1447>/Gain' */
        0.125,                         /* '<S1447>/Power' */
        8.0,                           /* '<S1447>/Power1' */
        -6.0,                          /* '<S1448>/Gain' */
        0.015625,                      /* '<S1448>/Power' */
        64.0,                          /* '<S1448>/Power1' */
        -6.0,                          /* '<S1449>/Gain' */
        0.015625,                      /* '<S1449>/Power' */
        64.0,                          /* '<S1449>/Power1' */
        -4.0,                          /* '<S1450>/Gain' */
        0.0625,                        /* '<S1450>/Power' */
        16.0,                          /* '<S1450>/Power1' */
        1U,                            /* '<S1440>/Cast8' */
        1U                             /* '<S1434>/Cast' */
      }
      ,

      /* End of '<S195>/Transmission subtasks' */

      /* Start of '<S195>/Reception substasks' */
      {
        1U,                            /* '<S1430>/Cast13' */
        1U,                            /* '<S1430>/Cast3' */
        0U,                            /* '<S1430>/Cast15' */
        0U,                            /* '<S1430>/Cast6' */
        0,                             /* '<S1430>/Cast14' */
        0                              /* '<S1430>/Cast5' */
      }
      /* End of '<S195>/Reception substasks' */
    }
    ,

    /* End of '<S1420>/COMM Task - Sync bc 0' */

    /* Start of '<S841>/Transmission subtasks1' */
    {
      -4.0,                            /* '<S1053>/Gain' */
      0.0625,                          /* '<S1053>/Power' */
      16.0,                            /* '<S1053>/Power1' */
      -3.0,                            /* '<S1054>/Gain' */
      0.125,                           /* '<S1054>/Power' */
      8.0,                             /* '<S1054>/Power1' */
      -6.0,                            /* '<S1055>/Gain' */
      0.015625,                        /* '<S1055>/Power' */
      64.0,                            /* '<S1055>/Power1' */
      -6.0,                            /* '<S1056>/Gain' */
      0.015625,                        /* '<S1056>/Power' */
      64.0,                            /* '<S1056>/Power1' */
      -4.0,                            /* '<S1057>/Gain' */
      0.0625,                          /* '<S1057>/Power' */
      16.0,                            /* '<S1057>/Power1' */
      1U,                              /* '<S1047>/Cast8' */
      1U                               /* '<S1041>/Cast' */
    }
    ,

    /* End of '<S841>/Transmission subtasks1' */

    /* Start of '<S841>/Reception substasks' */
    {
      1U,                              /* '<S1037>/Cast13' */
      1U,                              /* '<S1037>/Cast3' */
      0U,                              /* '<S1037>/Cast15' */
      0U,                              /* '<S1037>/Cast6' */
      0,                               /* '<S1037>/Cast14' */
      0                                /* '<S1037>/Cast5' */
    }
    ,

    /* End of '<S841>/Reception substasks' */

    /* Start of '<S1009>/Check msg transmission CAN2' */
    {
      21U                              /* '<S1020>/Cast8' */
    }
    ,

    /* End of '<S1009>/Check msg transmission CAN2' */

    /* Start of '<S1009>/Check msg transmission CAN1' */
    {
      21U                              /* '<S1014>/Cast' */
    }
    ,

    /* End of '<S1009>/Check msg transmission CAN1' */

    /* Start of '<S840>/Reception substasks' */
    {
      21U,                             /* '<S1010>/Cast13' */
      21U,                             /* '<S1010>/Cast3' */
      0U,                              /* '<S1010>/Cast15' */
      0U,                              /* '<S1010>/Cast6' */
      0,                               /* '<S1010>/Cast14' */
      0                                /* '<S1010>/Cast5' */
    }
    ,

    /* End of '<S840>/Reception substasks' */

    /* Start of '<S979>/Check msg transmission CAN2' */
    {
      22U                              /* '<S990>/Cast8' */
    }
    ,

    /* End of '<S979>/Check msg transmission CAN2' */

    /* Start of '<S979>/Check msg transmission CAN1' */
    {
      22U                              /* '<S984>/Cast' */
    }
    ,

    /* End of '<S979>/Check msg transmission CAN1' */

    /* Start of '<S839>/Reception substasks' */
    {
      22U,                             /* '<S980>/Cast13' */
      22U,                             /* '<S980>/Cast3' */
      0U,                              /* '<S980>/Cast15' */
      0U,                              /* '<S980>/Cast6' */
      0,                               /* '<S980>/Cast14' */
      0                                /* '<S980>/Cast5' */
    }
    ,

    /* End of '<S839>/Reception substasks' */

    /* Start of '<S949>/Check msg transmission CAN2' */
    {
      26U                              /* '<S960>/Cast8' */
    }
    ,

    /* End of '<S949>/Check msg transmission CAN2' */

    /* Start of '<S949>/Check msg transmission CAN1' */
    {
      26U                              /* '<S954>/Cast' */
    }
    ,

    /* End of '<S949>/Check msg transmission CAN1' */

    /* Start of '<S838>/Reception substasks' */
    {
      26U,                             /* '<S950>/Cast13' */
      26U,                             /* '<S950>/Cast3' */
      0U,                              /* '<S950>/Cast15' */
      0U,                              /* '<S950>/Cast6' */
      0,                               /* '<S950>/Cast14' */
      0                                /* '<S950>/Cast5' */
    }
    ,

    /* End of '<S838>/Reception substasks' */

    /* Start of '<S837>/Transmission subtasks' */
    {
      -4.0,                            /* '<S936>/Gain' */
      0.0625,                          /* '<S936>/Power' */
      16.0,                            /* '<S936>/Power1' */
      -4.0,                            /* '<S937>/Gain' */
      0.0625,                          /* '<S937>/Power' */
      16.0,                            /* '<S937>/Power1' */
      -4.0,                            /* '<S938>/Gain' */
      0.0625,                          /* '<S938>/Power' */
      16.0,                            /* '<S938>/Power1' */
      -4.0,                            /* '<S939>/Gain' */
      0.0625,                          /* '<S939>/Power' */
      16.0,                            /* '<S939>/Power1' */

      /* Start of '<S857>/Check msg transmission CAN2' */
      {
        25U                            /* '<S930>/Cast8' */
      }
      ,

      /* End of '<S857>/Check msg transmission CAN2' */

      /* Start of '<S857>/Check msg transmission CAN1' */
      {
        25U                            /* '<S924>/Cast' */
      }
      /* End of '<S857>/Check msg transmission CAN1' */
    }
    ,

    /* End of '<S837>/Transmission subtasks' */

    /* Start of '<S837>/Reception substasks' */
    {
      25U,                             /* '<S920>/Cast13' */
      25U,                             /* '<S920>/Cast3' */
      0U,                              /* '<S920>/Cast15' */
      0U,                              /* '<S920>/Cast6' */
      0,                               /* '<S920>/Cast14' */
      0                                /* '<S920>/Cast5' */
    }
    ,

    /* End of '<S837>/Reception substasks' */

    /* Start of '<S836>/Transmission subtasks' */
    {
      -4.0,                            /* '<S905>/Gain' */
      0.0625,                          /* '<S905>/Power' */
      16.0,                            /* '<S905>/Power1' */
      -4.0,                            /* '<S906>/Gain' */
      0.0625,                          /* '<S906>/Power' */
      16.0,                            /* '<S906>/Power1' */
      -4.0,                            /* '<S907>/Gain' */
      0.0625,                          /* '<S907>/Power' */
      16.0,                            /* '<S907>/Power1' */
      -4.0,                            /* '<S908>/Gain' */
      0.0625,                          /* '<S908>/Power' */
      16.0,                            /* '<S908>/Power1' */

      /* Start of '<S857>/Check msg transmission CAN2' */
      {
        24U                            /* '<S899>/Cast8' */
      }
      ,

      /* End of '<S857>/Check msg transmission CAN2' */

      /* Start of '<S857>/Check msg transmission CAN1' */
      {
        24U                            /* '<S893>/Cast' */
      }
      /* End of '<S857>/Check msg transmission CAN1' */
    }
    ,

    /* End of '<S836>/Transmission subtasks' */

    /* Start of '<S836>/Reception substasks' */
    {
      24U,                             /* '<S889>/Cast13' */
      24U,                             /* '<S889>/Cast3' */
      0U,                              /* '<S889>/Cast15' */
      0U,                              /* '<S889>/Cast6' */
      0,                               /* '<S889>/Cast14' */
      0                                /* '<S889>/Cast5' */
    }
    ,

    /* End of '<S836>/Reception substasks' */

    /* Start of '<S835>/Transmission subtasks1' */
    {
      -4.0,                            /* '<S874>/Gain' */
      0.0625,                          /* '<S874>/Power' */
      16.0,                            /* '<S874>/Power1' */
      -4.0,                            /* '<S875>/Gain' */
      0.0625,                          /* '<S875>/Power' */
      16.0,                            /* '<S875>/Power1' */
      -4.0,                            /* '<S876>/Gain' */
      0.0625,                          /* '<S876>/Power' */
      16.0,                            /* '<S876>/Power1' */
      -4.0,                            /* '<S877>/Gain' */
      0.0625,                          /* '<S877>/Power' */
      16.0,                            /* '<S877>/Power1' */

      /* Start of '<S857>/Check msg transmission CAN2' */
      {
        23U                            /* '<S868>/Cast8' */
      }
      ,

      /* End of '<S857>/Check msg transmission CAN2' */

      /* Start of '<S857>/Check msg transmission CAN1' */
      {
        23U                            /* '<S862>/Cast' */
      }
      /* End of '<S857>/Check msg transmission CAN1' */
    }
    ,

    /* End of '<S835>/Transmission subtasks1' */

    /* Start of '<S835>/Reception substasks' */
    {
      23U,                             /* '<S858>/Cast13' */
      23U,                             /* '<S858>/Cast3' */
      0U,                              /* '<S858>/Cast15' */
      0U,                              /* '<S858>/Cast6' */
      0,                               /* '<S858>/Cast14' */
      0                                /* '<S858>/Cast5' */
    }
    ,

    /* End of '<S835>/Reception substasks' */

    /* Start of '<S602>/Transmission subtasks' */
    {
      13U,                             /* '<S697>/Cast8' */
      13U                              /* '<S691>/Cast' */
    }
    ,

    /* End of '<S602>/Transmission subtasks' */

    /* Start of '<S602>/Reception substasks' */
    {
      13U,                             /* '<S687>/Cast13' */
      13U,                             /* '<S687>/Cast3' */
      0U,                              /* '<S687>/Cast15' */
      0U,                              /* '<S687>/Cast6' */
      0,                               /* '<S687>/Cast14' */
      0                                /* '<S687>/Cast5' */
    }
    ,

    /* End of '<S602>/Reception substasks' */

    /* Start of '<S601>/Transmission subtasks' */
    {
      12U,                             /* '<S679>/Cast8' */
      12U                              /* '<S673>/Cast' */
    }
    ,

    /* End of '<S601>/Transmission subtasks' */

    /* Start of '<S601>/Reception substasks' */
    {
      12U,                             /* '<S669>/Cast13' */
      12U,                             /* '<S669>/Cast3' */
      0U,                              /* '<S669>/Cast15' */
      0U,                              /* '<S669>/Cast6' */
      0,                               /* '<S669>/Cast14' */
      0                                /* '<S669>/Cast5' */
    }
    ,

    /* End of '<S601>/Reception substasks' */

    /* Start of '<S600>/Transmission subtasks' */
    {
      11U,                             /* '<S661>/Cast8' */
      11U                              /* '<S655>/Cast' */
    }
    ,

    /* End of '<S600>/Transmission subtasks' */

    /* Start of '<S600>/Reception substasks' */
    {
      11U,                             /* '<S651>/Cast13' */
      11U,                             /* '<S651>/Cast3' */
      0U,                              /* '<S651>/Cast15' */
      0U,                              /* '<S651>/Cast6' */
      0,                               /* '<S651>/Cast14' */
      0                                /* '<S651>/Cast5' */
    }
    ,

    /* End of '<S600>/Reception substasks' */

    /* Start of '<S596>/COMM Task - Sync bc 0' */
    {
      /* Start of '<S195>/Transmission subtasks' */
      {
        -4.0,                          /* '<S634>/Gain' */
        0.0625,                        /* '<S634>/Power' */
        16.0,                          /* '<S634>/Power1' */
        -3.0,                          /* '<S635>/Gain' */
        0.125,                         /* '<S635>/Power' */
        8.0,                           /* '<S635>/Power1' */
        -6.0,                          /* '<S636>/Gain' */
        0.015625,                      /* '<S636>/Power' */
        64.0,                          /* '<S636>/Power1' */
        -6.0,                          /* '<S637>/Gain' */
        0.015625,                      /* '<S637>/Power' */
        64.0,                          /* '<S637>/Power1' */
        -4.0,                          /* '<S638>/Gain' */
        0.0625,                        /* '<S638>/Power' */
        16.0,                          /* '<S638>/Power1' */
        1U,                            /* '<S628>/Cast8' */
        1U                             /* '<S622>/Cast' */
      }
      ,

      /* End of '<S195>/Transmission subtasks' */

      /* Start of '<S195>/Reception substasks' */
      {
        1U,                            /* '<S618>/Cast13' */
        1U,                            /* '<S618>/Cast3' */
        0U,                            /* '<S618>/Cast15' */
        0U,                            /* '<S618>/Cast6' */
        0,                             /* '<S618>/Cast14' */
        0                              /* '<S618>/Cast5' */
      }
      /* End of '<S195>/Reception substasks' */
    }
    ,

    /* End of '<S596>/COMM Task - Sync bc 0' */

    /* Start of '<S192>/COMM Task - Sync bc 2' */
    {
      /* Start of '<S195>/Transmission subtasks' */
      {
        -4.0,                          /* '<S354>/Gain' */
        0.0625,                        /* '<S354>/Power' */
        16.0,                          /* '<S354>/Power1' */
        -3.0,                          /* '<S355>/Gain' */
        0.125,                         /* '<S355>/Power' */
        8.0,                           /* '<S355>/Power1' */
        -6.0,                          /* '<S356>/Gain' */
        0.015625,                      /* '<S356>/Power' */
        64.0,                          /* '<S356>/Power1' */
        -6.0,                          /* '<S357>/Gain' */
        0.015625,                      /* '<S357>/Power' */
        64.0,                          /* '<S357>/Power1' */
        -4.0,                          /* '<S358>/Gain' */
        0.0625,                        /* '<S358>/Power' */
        16.0,                          /* '<S358>/Power1' */
        1U,                            /* '<S348>/Cast8' */
        1U                             /* '<S342>/Cast' */
      }
      ,

      /* End of '<S195>/Transmission subtasks' */

      /* Start of '<S195>/Reception substasks' */
      {
        1U,                            /* '<S338>/Cast13' */
        1U,                            /* '<S338>/Cast3' */
        0U,                            /* '<S338>/Cast15' */
        0U,                            /* '<S338>/Cast6' */
        0,                             /* '<S338>/Cast14' */
        0                              /* '<S338>/Cast5' */
      }
      /* End of '<S195>/Reception substasks' */
    }
    ,

    /* End of '<S192>/COMM Task - Sync bc 2' */

    /* Start of '<S271>/Transmission subtasks' */
    {
      25U,                             /* '<S330>/Cast8' */
      25U                              /* '<S324>/Cast' */
    }
    ,

    /* End of '<S271>/Transmission subtasks' */

    /* Start of '<S271>/Reception substasks' */
    {
      25U,                             /* '<S320>/Cast13' */
      25U,                             /* '<S320>/Cast3' */
      0U,                              /* '<S320>/Cast15' */
      0U,                              /* '<S320>/Cast6' */
      0,                               /* '<S320>/Cast14' */
      0                                /* '<S320>/Cast5' */
    }
    ,

    /* End of '<S271>/Reception substasks' */

    /* Start of '<S270>/Transmission subtasks' */
    {
      24U,                             /* '<S312>/Cast8' */
      24U                              /* '<S306>/Cast' */
    }
    ,

    /* End of '<S270>/Transmission subtasks' */

    /* Start of '<S270>/Reception substasks' */
    {
      24U,                             /* '<S302>/Cast13' */
      24U,                             /* '<S302>/Cast3' */
      0U,                              /* '<S302>/Cast15' */
      0U,                              /* '<S302>/Cast6' */
      0,                               /* '<S302>/Cast14' */
      0                                /* '<S302>/Cast5' */
    }
    ,

    /* End of '<S270>/Reception substasks' */

    /* Start of '<S269>/Transmission subtasks1' */
    {
      23U,                             /* '<S293>/Cast8' */
      23U                              /* '<S287>/Cast' */
    }
    ,

    /* End of '<S269>/Transmission subtasks1' */

    /* Start of '<S269>/Reception substasks' */
    {
      23U,                             /* '<S283>/Cast13' */
      23U,                             /* '<S283>/Cast3' */
      0U,                              /* '<S283>/Cast15' */
      0U,                              /* '<S283>/Cast6' */
      0,                               /* '<S283>/Cast14' */
      0                                /* '<S283>/Cast5' */
    }
    ,

    /* End of '<S269>/Reception substasks' */

    /* Start of '<S196>/RESET Board - Return to initialization' */
    {
      0U,                              /* '<S234>/Cast6' */
      0,                               /* '<S234>/Cast' */
      1                                /* '<S234>/NOT' */
    }
    ,

    /* End of '<S196>/RESET Board - Return to initialization' */

    /* Start of '<S191>/COMM Task - Sync bc 1' */
    {
      /* Start of '<S195>/Transmission subtasks' */
      {
        -4.0,                          /* '<S218>/Gain' */
        0.0625,                        /* '<S218>/Power' */
        16.0,                          /* '<S218>/Power1' */
        -3.0,                          /* '<S219>/Gain' */
        0.125,                         /* '<S219>/Power' */
        8.0,                           /* '<S219>/Power1' */
        -6.0,                          /* '<S220>/Gain' */
        0.015625,                      /* '<S220>/Power' */
        64.0,                          /* '<S220>/Power1' */
        -6.0,                          /* '<S221>/Gain' */
        0.015625,                      /* '<S221>/Power' */
        64.0,                          /* '<S221>/Power1' */
        -4.0,                          /* '<S222>/Gain' */
        0.0625,                        /* '<S222>/Power' */
        16.0,                          /* '<S222>/Power1' */
        1U,                            /* '<S212>/Cast8' */
        1U                             /* '<S206>/Cast' */
      }
      ,

      /* End of '<S195>/Transmission subtasks' */

      /* Start of '<S195>/Reception substasks' */
      {
        1U,                            /* '<S202>/Cast13' */
        1U,                            /* '<S202>/Cast3' */
        0U,                            /* '<S202>/Cast15' */
        0U,                            /* '<S202>/Cast6' */
        0,                             /* '<S202>/Cast14' */
        0                              /* '<S202>/Cast5' */
      }
      /* End of '<S195>/Reception substasks' */
    }
    /* End of '<S191>/COMM Task - Sync bc 1' */
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
    144.0, 148.0, 188.0, 192.0, 232.0, 272.0, 312.0, 316.0, 317.0, 319.0, 320.0,
    360.0, 362.0, 364.0, 368.0, 370.0 },

  /* Expression: TM_Type_bc0
   * Referenced by: '<S130>/Constant1'
   */
  { 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 0.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0 },

  /* Expression: TM_Type_bc1
   * Referenced by: '<S130>/Constant5'
   */
  { 0.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 1.0,
    0.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0 },

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
