/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_TTA_Controller_v4_5_data.c
 *
 * Code generated for Simulink model 'HANcoder_E407_TTA_Controller_v4_5'.
 *
 * Model version                  : 1.175
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Jun  8 13:53:55 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "HANcoder_E407_TTA_Controller_v4_5.h"
#include "HANcoder_E407_TTA_Controller_v4_5_private.h"

/* Invariant block signals (default storage) */
const ConstBlockIO rtConstB = {
  /* Start of '<S10>/TTA System' */
  {
    332.0,                             /* '<S1523>/Sum18' */
    324.0,                             /* '<S1523>/Sum17' */
    136.0,                             /* '<S1523>/Sum7' */
    44.0,                              /* '<S1523>/Sum1' */
    48.0,                              /* '<S1523>/Sum2' */
    40.0,                              /* '<S1523>/Sum4' */
    320.0,                             /* '<S1523>/Sum16' */
    132.0,                             /* '<S1523>/Sum6' */
    0.054400000000000004,              /* '<S1743>/Multiply' */
    16.0,                              /* '<S1745>/Power1' */
    0.0625,                            /* '<S1745>/Power' */
    16.0,                              /* '<S1746>/Power1' */
    0.0625,                            /* '<S1746>/Power' */
    16.0,                              /* '<S1747>/Power1' */
    0.0625,                            /* '<S1747>/Power' */
    16.0,                              /* '<S1748>/Power1' */
    0.0625,                            /* '<S1748>/Power' */
    0.0625,                            /* '<S1667>/Power' */
    16.0,                              /* '<S1667>/Power1' */
    0.0625,                            /* '<S1668>/Power' */
    16.0,                              /* '<S1668>/Power1' */
    0.0625,                            /* '<S1669>/Power' */
    16.0,                              /* '<S1669>/Power1' */
    0.0625,                            /* '<S1670>/Power' */
    16.0,                              /* '<S1670>/Power1' */
    144.0,                             /* '<S1522>/Sum17' */
    208.0,                             /* '<S1522>/Sum16' */
    44.0,                              /* '<S1522>/Sum1' */
    48.0,                              /* '<S1522>/Sum2' */
    100.0,                             /* '<S1522>/Sum7' */
    52.0,                              /* '<S1522>/Sum3' */
    96.0,                              /* '<S1522>/Sum6' */
    40.0,                              /* '<S1522>/Sum4' */
    136.0,                             /* '<S1340>/Sum5' */
    332.0,                             /* '<S1340>/Sum18' */
    92.0,                              /* '<S1340>/Sum6' */
    44.0,                              /* '<S1340>/Sum1' */
    48.0,                              /* '<S1340>/Sum2' */
    40.0,                              /* '<S1340>/Sum4' */
    88.0,                              /* '<S1340>/Sum3' */
    0.015625,                          /* '<S1441>/Power' */
    64.0,                              /* '<S1441>/Power1' */
    0.125,                             /* '<S1442>/Power' */
    8.0,                               /* '<S1442>/Power1' */
    0.015625,                          /* '<S1443>/Power' */
    64.0,                              /* '<S1443>/Power1' */
    52.0,                              /* '<S1339>/Sum17' */
    208.0,                             /* '<S1339>/Sum16' */
    44.0,                              /* '<S1339>/Sum1' */
    48.0,                              /* '<S1339>/Sum2' */
    40.0,                              /* '<S1339>/Sum4' */
    148.0,                             /* '<S546>/Sum10' */
    140.0,                             /* '<S546>/Sum8' */
    144.0,                             /* '<S546>/Sum9' */
    332.0,                             /* '<S546>/Sum18' */
    192.0,                             /* '<S546>/Sum13' */
    236.0,                             /* '<S546>/Sum14' */
    324.0,                             /* '<S546>/Sum17' */
    136.0,                             /* '<S546>/Sum7' */
    92.0,                              /* '<S546>/Sum5' */
    44.0,                              /* '<S546>/Sum1' */
    280.0,                             /* '<S546>/Sum15' */
    48.0,                              /* '<S546>/Sum2' */
    40.0,                              /* '<S546>/Sum4' */
    188.0,                             /* '<S546>/Sum12' */
    232.0,                             /* '<S546>/Sum11' */
    320.0,                             /* '<S546>/Sum16' */
    312.0,                             /* '<S546>/Sum19' */
    88.0,                              /* '<S546>/Sum3' */
    132.0,                             /* '<S546>/Sum6' */
    1.0,                               /* '<S1292>/Gain' */
    1.0,                               /* '<S1292>/Gain1' */
    1.0,                               /* '<S1292>/Gain2' */
    1.0,                               /* '<S1292>/Gain3' */
    1.0,                               /* '<S1292>/Gain4' */
    1.0,                               /* '<S1292>/Gain5' */
    1.0,                               /* '<S1292>/Gain6' */
    1.0,                               /* '<S1292>/Gain7' */
    1.0,                               /* '<S1291>/Gain' */
    1.0,                               /* '<S1291>/Gain1' */
    1.0,                               /* '<S1291>/Gain2' */
    1.0,                               /* '<S1291>/Gain3' */
    1.0,                               /* '<S1291>/Gain4' */
    1.0,                               /* '<S1291>/Gain5' */
    1.0,                               /* '<S1291>/Gain6' */
    1.0,                               /* '<S1291>/Gain7' */
    1.0,                               /* '<S1290>/Gain' */
    1.0,                               /* '<S1290>/Gain1' */
    1.0,                               /* '<S1290>/Gain2' */
    1.0,                               /* '<S1290>/Gain3' */
    1.0,                               /* '<S1290>/Gain4' */
    1.0,                               /* '<S1290>/Gain5' */
    1.0,                               /* '<S1290>/Gain6' */
    1.0,                               /* '<S1290>/Gain7' */
    16.0,                              /* '<S1270>/Power1' */
    0.0625,                            /* '<S1270>/Power' */
    16.0,                              /* '<S1271>/Power1' */
    0.0625,                            /* '<S1271>/Power' */
    16.0,                              /* '<S1272>/Power1' */
    0.0625,                            /* '<S1272>/Power' */
    16.0,                              /* '<S1273>/Power1' */
    0.0625,                            /* '<S1273>/Power' */
    16.0,                              /* '<S1250>/Power1' */
    0.0625,                            /* '<S1250>/Power' */
    16.0,                              /* '<S1251>/Power1' */
    0.0625,                            /* '<S1251>/Power' */
    16.0,                              /* '<S1252>/Power1' */
    0.0625,                            /* '<S1252>/Power' */
    16.0,                              /* '<S1253>/Power1' */
    0.0625,                            /* '<S1253>/Power' */
    64.0,                              /* '<S1204>/Power1' */
    0.015625,                          /* '<S1204>/Power' */
    64.0,                              /* '<S1203>/Power1' */
    0.015625,                          /* '<S1203>/Power' */
    8.0,                               /* '<S1205>/Power1' */
    0.125,                             /* '<S1205>/Power' */
    16.0,                              /* '<S1152>/Power1' */
    0.0625,                            /* '<S1152>/Power' */
    16.0,                              /* '<S1153>/Power1' */
    0.0625,                            /* '<S1153>/Power' */
    16.0,                              /* '<S1154>/Power1' */
    0.0625,                            /* '<S1154>/Power' */
    16.0,                              /* '<S1155>/Power1' */
    0.0625,                            /* '<S1155>/Power' */
    0.054400000000000004,              /* '<S1150>/Gain' */
    0.015625,                          /* '<S974>/Power' */
    64.0,                              /* '<S974>/Power1' */
    0.125,                             /* '<S975>/Power' */
    8.0,                               /* '<S975>/Power1' */
    0.015625,                          /* '<S976>/Power' */
    64.0,                              /* '<S976>/Power1' */
    0.0625,                            /* '<S914>/Power' */
    16.0,                              /* '<S914>/Power1' */
    0.0625,                            /* '<S915>/Power' */
    16.0,                              /* '<S915>/Power1' */
    0.0625,                            /* '<S916>/Power' */
    16.0,                              /* '<S916>/Power1' */
    0.0625,                            /* '<S917>/Power' */
    16.0,                              /* '<S917>/Power1' */
    200.0,                             /* '<S545>/Sum14' */
    204.0,                             /* '<S545>/Sum15' */
    212.0,                             /* '<S545>/Sum17' */
    208.0,                             /* '<S545>/Sum16' */
    44.0,                              /* '<S545>/Sum1' */
    48.0,                              /* '<S545>/Sum2' */
    52.0,                              /* '<S545>/Sum3' */
    100.0,                             /* '<S545>/Sum7' */
    96.0,                              /* '<S545>/Sum6' */
    148.0,                             /* '<S545>/Sum10' */
    144.0,                             /* '<S545>/Sum9' */
    196.0,                             /* '<S545>/Sum11' */
    192.0,                             /* '<S545>/Sum13' */
    40.0,                              /* '<S545>/Sum4' */
    188.0,                             /* '<S545>/Sum12' */
    92.0,                              /* '<S545>/Sum5' */
    140.0,                             /* '<S545>/Sum8' */
    284.0,                             /* '<S192>/Sum15' */
    332.0,                             /* '<S192>/Sum18' */
    192.0,                             /* '<S192>/Sum13' */
    236.0,                             /* '<S192>/Sum14' */
    280.0,                             /* '<S192>/Sum3' */
    44.0,                              /* '<S192>/Sum1' */
    48.0,                              /* '<S192>/Sum2' */
    40.0,                              /* '<S192>/Sum4' */
    188.0,                             /* '<S192>/Sum12' */
    232.0,                             /* '<S192>/Sum11' */
    312.0,                             /* '<S192>/Sum19' */
    1.0,                               /* '<S385>/Gain' */
    1.0,                               /* '<S385>/Gain1' */
    1.0,                               /* '<S385>/Gain2' */
    1.0,                               /* '<S385>/Gain3' */
    1.0,                               /* '<S385>/Gain4' */
    1.0,                               /* '<S385>/Gain5' */
    1.0,                               /* '<S385>/Gain6' */
    1.0,                               /* '<S385>/Gain7' */
    1.0,                               /* '<S384>/Gain' */
    1.0,                               /* '<S384>/Gain1' */
    1.0,                               /* '<S384>/Gain4' */
    1.0,                               /* '<S384>/Gain5' */
    1.0,                               /* '<S384>/Gain6' */
    1.0,                               /* '<S384>/Gain7' */
    1.0,                               /* '<S383>/Gain' */
    1.0,                               /* '<S383>/Gain1' */
    1.0,                               /* '<S383>/Gain2' */
    1.0,                               /* '<S383>/Gain3' */
    1.0,                               /* '<S383>/Gain4' */
    1.0,                               /* '<S383>/Gain5' */
    1.0,                               /* '<S383>/Gain6' */
    1.0,                               /* '<S383>/Gain7' */
    16.0,                              /* '<S363>/Power1' */
    0.0625,                            /* '<S363>/Power' */
    16.0,                              /* '<S364>/Power1' */
    0.0625,                            /* '<S364>/Power' */
    16.0,                              /* '<S365>/Power1' */
    0.0625,                            /* '<S365>/Power' */
    16.0,                              /* '<S366>/Power1' */
    0.0625,                            /* '<S366>/Power' */
    16.0,                              /* '<S343>/Power1' */
    0.0625,                            /* '<S343>/Power' */
    16.0,                              /* '<S344>/Power1' */
    0.0625,                            /* '<S344>/Power' */
    16.0,                              /* '<S345>/Power1' */
    0.0625,                            /* '<S345>/Power' */
    16.0,                              /* '<S346>/Power1' */
    0.0625,                            /* '<S346>/Power' */
    16.0,                              /* '<S323>/Power1' */
    0.0625,                            /* '<S323>/Power' */
    16.0,                              /* '<S324>/Power1' */
    0.0625,                            /* '<S324>/Power' */
    16.0,                              /* '<S325>/Power1' */
    0.0625,                            /* '<S325>/Power' */
    16.0,                              /* '<S326>/Power1' */
    0.0625,                            /* '<S326>/Power' */
    212.0,                             /* '<S191>/Sum17' */
    208.0,                             /* '<S191>/Sum16' */
    44.0,                              /* '<S191>/Sum1' */
    48.0,                              /* '<S191>/Sum2' */
    40.0,                              /* '<S191>/Sum4' */
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
    0U,                                /* '<S1637>/Cast' */
    0U,                                /* '<S1637>/Cast1' */
    0U,                                /* '<S1637>/Cast2' */
    0U,                                /* '<S1638>/Cast' */
    0U,                                /* '<S1638>/Cast1' */
    0U,                                /* '<S1638>/Cast2' */
    0U,                                /* '<S1639>/Cast' */
    0U,                                /* '<S1639>/Cast1' */
    0U,                                /* '<S1639>/Cast2' */
    0U,                                /* '<S1640>/Cast' */
    0U,                                /* '<S1640>/Cast1' */
    0U,                                /* '<S1640>/Cast2' */
    0U,                                /* '<S1484>/Cast6' */
    0U,                                /* '<S944>/Cast' */
    0U,                                /* '<S944>/Cast1' */
    0U,                                /* '<S944>/Cast2' */
    0U,                                /* '<S945>/Cast' */
    0U,                                /* '<S945>/Cast1' */
    0U,                                /* '<S945>/Cast2' */
    0U,                                /* '<S946>/Cast' */
    0U,                                /* '<S946>/Cast1' */
    0U,                                /* '<S946>/Cast2' */
    0U,                                /* '<S947>/Cast' */
    0U,                                /* '<S947>/Cast1' */
    0U,                                /* '<S947>/Cast2' */
    0U,                                /* '<S143>/Cast1' */
    0U,                                /* '<S118>/Cast' */
    0,                                 /* '<S1484>/Cast' */
    1,                                 /* '<S1484>/NOT' */
    0,                                 /* '<S660>/Cast' */
    0,                                 /* '<S234>/Cast' */

    /* Start of '<S1523>/COMM Task - Sync bc 1' */
    {
      /* Start of '<S195>/Transmission subtasks' */
      {
        -4.0,                          /* '<S1697>/Gain' */
        0.0625,                        /* '<S1697>/Power' */
        16.0,                          /* '<S1697>/Power1' */
        -3.0,                          /* '<S1698>/Gain' */
        0.125,                         /* '<S1698>/Power' */
        8.0,                           /* '<S1698>/Power1' */
        -6.0,                          /* '<S1699>/Gain' */
        0.015625,                      /* '<S1699>/Power' */
        64.0,                          /* '<S1699>/Power1' */
        -6.0,                          /* '<S1700>/Gain' */
        0.015625,                      /* '<S1700>/Power' */
        64.0,                          /* '<S1700>/Power1' */
        -4.0,                          /* '<S1701>/Gain' */
        0.0625,                        /* '<S1701>/Power' */
        16.0,                          /* '<S1701>/Power1' */
        1U,                            /* '<S1691>/Cast8' */
        1U                             /* '<S1685>/Cast' */
      }
      ,

      /* End of '<S195>/Transmission subtasks' */

      /* Start of '<S195>/Reception substasks' */
      {
        /* Start of '<S200>/RX buffers update' */
        {
          1U,                          /* '<S1681>/Cast13' */
          1U,                          /* '<S1681>/Cast3' */
          0U,                          /* '<S1681>/Cast15' */
          0U,                          /* '<S1681>/Cast6' */
          0,                           /* '<S1681>/Cast14' */
          0                            /* '<S1681>/Cast5' */
        }
        /* End of '<S200>/RX buffers update' */
      }
      /* End of '<S195>/Reception substasks' */
    }
    ,

    /* End of '<S1523>/COMM Task - Sync bc 1' */

    /* Start of '<S1650>/Check msg transmission CAN2' */
    {
      22U                              /* '<S1661>/Cast8' */
    }
    ,

    /* End of '<S1650>/Check msg transmission CAN2' */

    /* Start of '<S1650>/Check msg transmission CAN1' */
    {
      22U                              /* '<S1655>/Cast' */
    }
    ,

    /* End of '<S1650>/Check msg transmission CAN1' */

    /* Start of '<S1612>/Reception substasks' */
    {
      /* Start of '<S200>/RX buffers update' */
      {
        22U,                           /* '<S1651>/Cast13' */
        22U,                           /* '<S1651>/Cast3' */
        0U,                            /* '<S1651>/Cast15' */
        0U,                            /* '<S1651>/Cast6' */
        0,                             /* '<S1651>/Cast14' */
        0                              /* '<S1651>/Cast5' */
      }
      /* End of '<S200>/RX buffers update' */
    }
    ,

    /* End of '<S1612>/Reception substasks' */

    /* Start of '<S1620>/Check msg transmission CAN2' */
    {
      25U                              /* '<S1631>/Cast8' */
    }
    ,

    /* End of '<S1620>/Check msg transmission CAN2' */

    /* Start of '<S1620>/Check msg transmission CAN1' */
    {
      25U                              /* '<S1625>/Cast' */
    }
    ,

    /* End of '<S1620>/Check msg transmission CAN1' */

    /* Start of '<S1611>/Reception substasks' */
    {
      /* Start of '<S200>/RX buffers update' */
      {
        25U,                           /* '<S1621>/Cast13' */
        25U,                           /* '<S1621>/Cast3' */
        0U,                            /* '<S1621>/Cast15' */
        0U,                            /* '<S1621>/Cast6' */
        0,                             /* '<S1621>/Cast14' */
        0                              /* '<S1621>/Cast5' */
      }
      /* End of '<S200>/RX buffers update' */
    }
    ,

    /* End of '<S1611>/Reception substasks' */

    /* Start of '<S1525>/RESET Board - Return to initialization' */
    {
      0U,                              /* '<S1566>/Cast6' */
      0,                               /* '<S1566>/Cast' */
      1                                /* '<S1566>/NOT' */
    }
    ,

    /* End of '<S1525>/RESET Board - Return to initialization' */

    /* Start of '<S1522>/COMM Task - Sync bc 0' */
    {
      /* Start of '<S195>/Transmission subtasks' */
      {
        -4.0,                          /* '<S1550>/Gain' */
        0.0625,                        /* '<S1550>/Power' */
        16.0,                          /* '<S1550>/Power1' */
        -3.0,                          /* '<S1551>/Gain' */
        0.125,                         /* '<S1551>/Power' */
        8.0,                           /* '<S1551>/Power1' */
        -6.0,                          /* '<S1552>/Gain' */
        0.015625,                      /* '<S1552>/Power' */
        64.0,                          /* '<S1552>/Power1' */
        -6.0,                          /* '<S1553>/Gain' */
        0.015625,                      /* '<S1553>/Power' */
        64.0,                          /* '<S1553>/Power1' */
        -4.0,                          /* '<S1554>/Gain' */
        0.0625,                        /* '<S1554>/Power' */
        16.0,                          /* '<S1554>/Power1' */
        1U,                            /* '<S1544>/Cast8' */
        1U                             /* '<S1538>/Cast' */
      }
      ,

      /* End of '<S195>/Transmission subtasks' */

      /* Start of '<S195>/Reception substasks' */
      {
        /* Start of '<S200>/RX buffers update' */
        {
          1U,                          /* '<S1534>/Cast13' */
          1U,                          /* '<S1534>/Cast3' */
          0U,                          /* '<S1534>/Cast15' */
          0U,                          /* '<S1534>/Cast6' */
          0,                           /* '<S1534>/Cast14' */
          0                            /* '<S1534>/Cast5' */
        }
        /* End of '<S200>/RX buffers update' */
      }
      /* End of '<S195>/Reception substasks' */
    }
    ,

    /* End of '<S1522>/COMM Task - Sync bc 0' */

    /* Start of '<S1340>/COMM Task - Sync bc 1' */
    {
      /* Start of '<S195>/Transmission subtasks' */
      {
        -4.0,                          /* '<S1468>/Gain' */
        0.0625,                        /* '<S1468>/Power' */
        16.0,                          /* '<S1468>/Power1' */
        -3.0,                          /* '<S1469>/Gain' */
        0.125,                         /* '<S1469>/Power' */
        8.0,                           /* '<S1469>/Power1' */
        -6.0,                          /* '<S1470>/Gain' */
        0.015625,                      /* '<S1470>/Power' */
        64.0,                          /* '<S1470>/Power1' */
        -6.0,                          /* '<S1471>/Gain' */
        0.015625,                      /* '<S1471>/Power' */
        64.0,                          /* '<S1471>/Power1' */
        -4.0,                          /* '<S1472>/Gain' */
        0.0625,                        /* '<S1472>/Power' */
        16.0,                          /* '<S1472>/Power1' */
        1U,                            /* '<S1462>/Cast8' */
        1U                             /* '<S1456>/Cast' */
      }
      ,

      /* End of '<S195>/Transmission subtasks' */

      /* Start of '<S195>/Reception substasks' */
      {
        /* Start of '<S200>/RX buffers update' */
        {
          1U,                          /* '<S1452>/Cast13' */
          1U,                          /* '<S1452>/Cast3' */
          0U,                          /* '<S1452>/Cast15' */
          0U,                          /* '<S1452>/Cast6' */
          0,                           /* '<S1452>/Cast14' */
          0                            /* '<S1452>/Cast5' */
        }
        /* End of '<S200>/RX buffers update' */
      }
      /* End of '<S195>/Reception substasks' */
    }
    ,

    /* End of '<S1340>/COMM Task - Sync bc 1' */

    /* Start of '<S1424>/Check msg transmission CAN2' */
    {
      21U                              /* '<S1435>/Cast8' */
    }
    ,

    /* End of '<S1424>/Check msg transmission CAN2' */

    /* Start of '<S1424>/Check msg transmission CAN1' */
    {
      21U                              /* '<S1429>/Cast' */
    }
    ,

    /* End of '<S1424>/Check msg transmission CAN1' */

    /* Start of '<S1416>/Reception substasks' */
    {
      /* Start of '<S200>/RX buffers update' */
      {
        21U,                           /* '<S1425>/Cast13' */
        21U,                           /* '<S1425>/Cast3' */
        0U,                            /* '<S1425>/Cast15' */
        0U,                            /* '<S1425>/Cast6' */
        0,                             /* '<S1425>/Cast14' */
        0                              /* '<S1425>/Cast5' */
      }
      /* End of '<S200>/RX buffers update' */
    }
    ,

    /* End of '<S1416>/Reception substasks' */

    /* Start of '<S1343>/RESET Board - Return to initialization' */
    {
      0U,                              /* '<S1381>/Cast6' */
      0,                               /* '<S1381>/Cast' */
      1                                /* '<S1381>/NOT' */
    }
    ,

    /* End of '<S1343>/RESET Board - Return to initialization' */

    /* Start of '<S1339>/COMM Task - Sync bc 0' */
    {
      /* Start of '<S195>/Transmission subtasks' */
      {
        -4.0,                          /* '<S1365>/Gain' */
        0.0625,                        /* '<S1365>/Power' */
        16.0,                          /* '<S1365>/Power1' */
        -3.0,                          /* '<S1366>/Gain' */
        0.125,                         /* '<S1366>/Power' */
        8.0,                           /* '<S1366>/Power1' */
        -6.0,                          /* '<S1367>/Gain' */
        0.015625,                      /* '<S1367>/Power' */
        64.0,                          /* '<S1367>/Power1' */
        -6.0,                          /* '<S1368>/Gain' */
        0.015625,                      /* '<S1368>/Power' */
        64.0,                          /* '<S1368>/Power1' */
        -4.0,                          /* '<S1369>/Gain' */
        0.0625,                        /* '<S1369>/Power' */
        16.0,                          /* '<S1369>/Power1' */
        1U,                            /* '<S1359>/Cast8' */
        1U                             /* '<S1353>/Cast' */
      }
      ,

      /* End of '<S195>/Transmission subtasks' */

      /* Start of '<S195>/Reception substasks' */
      {
        /* Start of '<S200>/RX buffers update' */
        {
          1U,                          /* '<S1349>/Cast13' */
          1U,                          /* '<S1349>/Cast3' */
          0U,                          /* '<S1349>/Cast15' */
          0U,                          /* '<S1349>/Cast6' */
          0,                           /* '<S1349>/Cast14' */
          0                            /* '<S1349>/Cast5' */
        }
        /* End of '<S200>/RX buffers update' */
      }
      /* End of '<S195>/Reception substasks' */
    }
    ,

    /* End of '<S1339>/COMM Task - Sync bc 0' */

    /* Start of '<S546>/COMM Task - Sync bc 1' */
    {
      /* Start of '<S271>/Transmission subtasks1' */
      {
        -4.0,                          /* '<S1001>/Gain' */
        0.0625,                        /* '<S1001>/Power' */
        16.0,                          /* '<S1001>/Power1' */
        -3.0,                          /* '<S1002>/Gain' */
        0.125,                         /* '<S1002>/Power' */
        8.0,                           /* '<S1002>/Power1' */
        -6.0,                          /* '<S1003>/Gain' */
        0.015625,                      /* '<S1003>/Power' */
        64.0,                          /* '<S1003>/Power1' */
        -6.0,                          /* '<S1004>/Gain' */
        0.015625,                      /* '<S1004>/Power' */
        64.0,                          /* '<S1004>/Power1' */
        -4.0,                          /* '<S1005>/Gain' */
        0.0625,                        /* '<S1005>/Power' */
        16.0,                          /* '<S1005>/Power1' */
        1U,                            /* '<S995>/Cast8' */
        1U                             /* '<S989>/Cast' */
      }
      ,

      /* End of '<S271>/Transmission subtasks1' */

      /* Start of '<S271>/Reception substasks' */
      {
        /* Start of '<S200>/RX buffers update' */
        {
          1U,                          /* '<S985>/Cast13' */
          1U,                          /* '<S985>/Cast3' */
          0U,                          /* '<S985>/Cast15' */
          0U,                          /* '<S985>/Cast6' */
          0,                           /* '<S985>/Cast14' */
          0                            /* '<S985>/Cast5' */
        }
        /* End of '<S200>/RX buffers update' */
      }
      /* End of '<S271>/Reception substasks' */
    }
    ,

    /* End of '<S546>/COMM Task - Sync bc 1' */

    /* Start of '<S957>/Check msg transmission CAN2' */
    {
      21U                              /* '<S968>/Cast8' */
    }
    ,

    /* End of '<S957>/Check msg transmission CAN2' */

    /* Start of '<S957>/Check msg transmission CAN1' */
    {
      21U                              /* '<S962>/Cast' */
    }
    ,

    /* End of '<S957>/Check msg transmission CAN1' */

    /* Start of '<S789>/Reception substasks' */
    {
      /* Start of '<S200>/RX buffers update' */
      {
        21U,                           /* '<S958>/Cast13' */
        21U,                           /* '<S958>/Cast3' */
        0U,                            /* '<S958>/Cast15' */
        0U,                            /* '<S958>/Cast6' */
        0,                             /* '<S958>/Cast14' */
        0                              /* '<S958>/Cast5' */
      }
      /* End of '<S200>/RX buffers update' */
    }
    ,

    /* End of '<S789>/Reception substasks' */

    /* Start of '<S927>/Check msg transmission CAN2' */
    {
      22U                              /* '<S938>/Cast8' */
    }
    ,

    /* End of '<S927>/Check msg transmission CAN2' */

    /* Start of '<S927>/Check msg transmission CAN1' */
    {
      22U                              /* '<S932>/Cast' */
    }
    ,

    /* End of '<S927>/Check msg transmission CAN1' */

    /* Start of '<S788>/Reception substasks' */
    {
      /* Start of '<S200>/RX buffers update' */
      {
        22U,                           /* '<S928>/Cast13' */
        22U,                           /* '<S928>/Cast3' */
        0U,                            /* '<S928>/Cast15' */
        0U,                            /* '<S928>/Cast6' */
        0,                             /* '<S928>/Cast14' */
        0                              /* '<S928>/Cast5' */
      }
      /* End of '<S200>/RX buffers update' */
    }
    ,

    /* End of '<S788>/Reception substasks' */

    /* Start of '<S897>/Check msg transmission CAN2' */
    {
      25U                              /* '<S908>/Cast8' */
    }
    ,

    /* End of '<S897>/Check msg transmission CAN2' */

    /* Start of '<S897>/Check msg transmission CAN1' */
    {
      25U                              /* '<S902>/Cast' */
    }
    ,

    /* End of '<S897>/Check msg transmission CAN1' */

    /* Start of '<S787>/Reception substasks' */
    {
      /* Start of '<S200>/RX buffers update' */
      {
        25U,                           /* '<S898>/Cast13' */
        25U,                           /* '<S898>/Cast3' */
        0U,                            /* '<S898>/Cast15' */
        0U,                            /* '<S898>/Cast6' */
        0,                             /* '<S898>/Cast14' */
        0                              /* '<S898>/Cast5' */
      }
      /* End of '<S200>/RX buffers update' */
    }
    ,

    /* End of '<S787>/Reception substasks' */

    /* Start of '<S786>/Transmission subtasks' */
    {
      -4.0,                            /* '<S884>/Gain' */
      0.0625,                          /* '<S884>/Power' */
      16.0,                            /* '<S884>/Power1' */
      -4.0,                            /* '<S885>/Gain' */
      0.0625,                          /* '<S885>/Power' */
      16.0,                            /* '<S885>/Power1' */
      -4.0,                            /* '<S886>/Gain' */
      0.0625,                          /* '<S886>/Power' */
      16.0,                            /* '<S886>/Power1' */
      -4.0,                            /* '<S887>/Gain' */
      0.0625,                          /* '<S887>/Power' */
      16.0,                            /* '<S887>/Power1' */

      /* Start of '<S805>/Check msg transmission CAN2' */
      {
        26U                            /* '<S878>/Cast8' */
      }
      ,

      /* End of '<S805>/Check msg transmission CAN2' */

      /* Start of '<S805>/Check msg transmission CAN1' */
      {
        26U                            /* '<S872>/Cast' */
      }
      /* End of '<S805>/Check msg transmission CAN1' */
    }
    ,

    /* End of '<S786>/Transmission subtasks' */

    /* Start of '<S786>/Reception substasks' */
    {
      /* Start of '<S200>/RX buffers update' */
      {
        26U,                           /* '<S868>/Cast13' */
        26U,                           /* '<S868>/Cast3' */
        0U,                            /* '<S868>/Cast15' */
        0U,                            /* '<S868>/Cast6' */
        0,                             /* '<S868>/Cast14' */
        0                              /* '<S868>/Cast5' */
      }
      /* End of '<S200>/RX buffers update' */
    }
    ,

    /* End of '<S786>/Reception substasks' */

    /* Start of '<S785>/Transmission subtasks' */
    {
      -4.0,                            /* '<S853>/Gain' */
      0.0625,                          /* '<S853>/Power' */
      16.0,                            /* '<S853>/Power1' */
      -4.0,                            /* '<S854>/Gain' */
      0.0625,                          /* '<S854>/Power' */
      16.0,                            /* '<S854>/Power1' */
      -4.0,                            /* '<S855>/Gain' */
      0.0625,                          /* '<S855>/Power' */
      16.0,                            /* '<S855>/Power1' */
      -4.0,                            /* '<S856>/Gain' */
      0.0625,                          /* '<S856>/Power' */
      16.0,                            /* '<S856>/Power1' */

      /* Start of '<S805>/Check msg transmission CAN2' */
      {
        24U                            /* '<S847>/Cast8' */
      }
      ,

      /* End of '<S805>/Check msg transmission CAN2' */

      /* Start of '<S805>/Check msg transmission CAN1' */
      {
        24U                            /* '<S841>/Cast' */
      }
      /* End of '<S805>/Check msg transmission CAN1' */
    }
    ,

    /* End of '<S785>/Transmission subtasks' */

    /* Start of '<S785>/Reception substasks' */
    {
      /* Start of '<S200>/RX buffers update' */
      {
        24U,                           /* '<S837>/Cast13' */
        24U,                           /* '<S837>/Cast3' */
        0U,                            /* '<S837>/Cast15' */
        0U,                            /* '<S837>/Cast6' */
        0,                             /* '<S837>/Cast14' */
        0                              /* '<S837>/Cast5' */
      }
      /* End of '<S200>/RX buffers update' */
    }
    ,

    /* End of '<S785>/Reception substasks' */

    /* Start of '<S784>/Transmission subtasks1' */
    {
      -4.0,                            /* '<S822>/Gain' */
      0.0625,                          /* '<S822>/Power' */
      16.0,                            /* '<S822>/Power1' */
      -4.0,                            /* '<S823>/Gain' */
      0.0625,                          /* '<S823>/Power' */
      16.0,                            /* '<S823>/Power1' */
      -4.0,                            /* '<S824>/Gain' */
      0.0625,                          /* '<S824>/Power' */
      16.0,                            /* '<S824>/Power1' */
      -4.0,                            /* '<S825>/Gain' */
      0.0625,                          /* '<S825>/Power' */
      16.0,                            /* '<S825>/Power1' */

      /* Start of '<S805>/Check msg transmission CAN2' */
      {
        23U                            /* '<S816>/Cast8' */
      }
      ,

      /* End of '<S805>/Check msg transmission CAN2' */

      /* Start of '<S805>/Check msg transmission CAN1' */
      {
        23U                            /* '<S810>/Cast' */
      }
      /* End of '<S805>/Check msg transmission CAN1' */
    }
    ,

    /* End of '<S784>/Transmission subtasks1' */

    /* Start of '<S784>/Reception substasks' */
    {
      /* Start of '<S200>/RX buffers update' */
      {
        23U,                           /* '<S806>/Cast13' */
        23U,                           /* '<S806>/Cast3' */
        0U,                            /* '<S806>/Cast15' */
        0U,                            /* '<S806>/Cast6' */
        0,                             /* '<S806>/Cast14' */
        0                              /* '<S806>/Cast5' */
      }
      /* End of '<S200>/RX buffers update' */
    }
    ,

    /* End of '<S784>/Reception substasks' */

    /* Start of '<S554>/RESET Board - Return to initialization' */
    {
      0U,                              /* '<S659>/Cast6' */
      0,                               /* '<S659>/Cast' */
      1                                /* '<S659>/NOT' */
    }
    ,

    /* End of '<S554>/RESET Board - Return to initialization' */

    /* Start of '<S551>/Transmission subtasks' */
    {
      13U,                             /* '<S646>/Cast8' */
      13U                              /* '<S640>/Cast' */
    }
    ,

    /* End of '<S551>/Transmission subtasks' */

    /* Start of '<S551>/Reception substasks' */
    {
      /* Start of '<S200>/RX buffers update' */
      {
        13U,                           /* '<S636>/Cast13' */
        13U,                           /* '<S636>/Cast3' */
        0U,                            /* '<S636>/Cast15' */
        0U,                            /* '<S636>/Cast6' */
        0,                             /* '<S636>/Cast14' */
        0                              /* '<S636>/Cast5' */
      }
      /* End of '<S200>/RX buffers update' */
    }
    ,

    /* End of '<S551>/Reception substasks' */

    /* Start of '<S550>/Transmission subtasks' */
    {
      12U,                             /* '<S628>/Cast8' */
      12U                              /* '<S622>/Cast' */
    }
    ,

    /* End of '<S550>/Transmission subtasks' */

    /* Start of '<S550>/Reception substasks' */
    {
      /* Start of '<S200>/RX buffers update' */
      {
        12U,                           /* '<S618>/Cast13' */
        12U,                           /* '<S618>/Cast3' */
        0U,                            /* '<S618>/Cast15' */
        0U,                            /* '<S618>/Cast6' */
        0,                             /* '<S618>/Cast14' */
        0                              /* '<S618>/Cast5' */
      }
      /* End of '<S200>/RX buffers update' */
    }
    ,

    /* End of '<S550>/Reception substasks' */

    /* Start of '<S549>/Transmission subtasks' */
    {
      11U,                             /* '<S610>/Cast8' */
      11U                              /* '<S604>/Cast' */
    }
    ,

    /* End of '<S549>/Transmission subtasks' */

    /* Start of '<S549>/Reception substasks' */
    {
      /* Start of '<S200>/RX buffers update' */
      {
        11U,                           /* '<S600>/Cast13' */
        11U,                           /* '<S600>/Cast3' */
        0U,                            /* '<S600>/Cast15' */
        0U,                            /* '<S600>/Cast6' */
        0,                             /* '<S600>/Cast14' */
        0                              /* '<S600>/Cast5' */
      }
      /* End of '<S200>/RX buffers update' */
    }
    ,

    /* End of '<S549>/Reception substasks' */

    /* Start of '<S545>/COMM Task - Sync bc 0' */
    {
      /* Start of '<S195>/Transmission subtasks' */
      {
        -4.0,                          /* '<S583>/Gain' */
        0.0625,                        /* '<S583>/Power' */
        16.0,                          /* '<S583>/Power1' */
        -3.0,                          /* '<S584>/Gain' */
        0.125,                         /* '<S584>/Power' */
        8.0,                           /* '<S584>/Power1' */
        -6.0,                          /* '<S585>/Gain' */
        0.015625,                      /* '<S585>/Power' */
        64.0,                          /* '<S585>/Power1' */
        -6.0,                          /* '<S586>/Gain' */
        0.015625,                      /* '<S586>/Power' */
        64.0,                          /* '<S586>/Power1' */
        -4.0,                          /* '<S587>/Gain' */
        0.0625,                        /* '<S587>/Power' */
        16.0,                          /* '<S587>/Power1' */
        1U,                            /* '<S577>/Cast8' */
        1U                             /* '<S571>/Cast' */
      }
      ,

      /* End of '<S195>/Transmission subtasks' */

      /* Start of '<S195>/Reception substasks' */
      {
        /* Start of '<S200>/RX buffers update' */
        {
          1U,                          /* '<S567>/Cast13' */
          1U,                          /* '<S567>/Cast3' */
          0U,                          /* '<S567>/Cast15' */
          0U,                          /* '<S567>/Cast6' */
          0,                           /* '<S567>/Cast14' */
          0                            /* '<S567>/Cast5' */
        }
        /* End of '<S200>/RX buffers update' */
      }
      /* End of '<S195>/Reception substasks' */
    }
    ,

    /* End of '<S545>/COMM Task - Sync bc 0' */

    /* Start of '<S192>/COMM Task - Sync bc 1' */
    {
      /* Start of '<S271>/Transmission subtasks1' */
      {
        -4.0,                          /* '<S304>/Gain' */
        0.0625,                        /* '<S304>/Power' */
        16.0,                          /* '<S304>/Power1' */
        -3.0,                          /* '<S305>/Gain' */
        0.125,                         /* '<S305>/Power' */
        8.0,                           /* '<S305>/Power1' */
        -6.0,                          /* '<S306>/Gain' */
        0.015625,                      /* '<S306>/Power' */
        64.0,                          /* '<S306>/Power1' */
        -6.0,                          /* '<S307>/Gain' */
        0.015625,                      /* '<S307>/Power' */
        64.0,                          /* '<S307>/Power1' */
        -4.0,                          /* '<S308>/Gain' */
        0.0625,                        /* '<S308>/Power' */
        16.0,                          /* '<S308>/Power1' */
        1U,                            /* '<S298>/Cast8' */
        1U                             /* '<S292>/Cast' */
      }
      ,

      /* End of '<S271>/Transmission subtasks1' */

      /* Start of '<S271>/Reception substasks' */
      {
        /* Start of '<S200>/RX buffers update' */
        {
          1U,                          /* '<S288>/Cast13' */
          1U,                          /* '<S288>/Cast3' */
          0U,                          /* '<S288>/Cast15' */
          0U,                          /* '<S288>/Cast6' */
          0,                           /* '<S288>/Cast14' */
          0                            /* '<S288>/Cast5' */
        }
        /* End of '<S200>/RX buffers update' */
      }
      /* End of '<S271>/Reception substasks' */
    }
    ,

    /* End of '<S192>/COMM Task - Sync bc 1' */

    /* Start of '<S270>/Reception substasks' */
    {
      /* Start of '<S282>/RX buffers update' */
      {
        24U,                           /* '<S285>/Cast13' */
        24U,                           /* '<S285>/Cast3' */
        0U,                            /* '<S285>/Cast15' */
        0U,                            /* '<S285>/Cast6' */
        0,                             /* '<S285>/Cast14' */
        0                              /* '<S285>/Cast5' */
      }
      /* End of '<S282>/RX buffers update' */
    }
    ,

    /* End of '<S270>/Reception substasks' */

    /* Start of '<S269>/Reception substasks' */
    {
      /* Start of '<S282>/RX buffers update' */
      {
        23U,                           /* '<S283>/Cast13' */
        23U,                           /* '<S283>/Cast3' */
        0U,                            /* '<S283>/Cast15' */
        0U,                            /* '<S283>/Cast6' */
        0,                             /* '<S283>/Cast14' */
        0                              /* '<S283>/Cast5' */
      }
      /* End of '<S282>/RX buffers update' */
    }
    ,

    /* End of '<S269>/Reception substasks' */

    /* Start of '<S268>/Reception substasks' */
    {
      /* Start of '<S200>/RX buffers update' */
      {
        26U,                           /* '<S281>/Cast13' */
        26U,                           /* '<S281>/Cast3' */
        0U,                            /* '<S281>/Cast15' */
        0U,                            /* '<S281>/Cast6' */
        0,                             /* '<S281>/Cast14' */
        0                              /* '<S281>/Cast5' */
      }
      /* End of '<S200>/RX buffers update' */
    }
    ,

    /* End of '<S268>/Reception substasks' */

    /* Start of '<S196>/RESET Board - Return to initialization' */
    {
      0U,                              /* '<S233>/Cast6' */
      0,                               /* '<S233>/Cast' */
      1                                /* '<S233>/NOT' */
    }
    ,

    /* End of '<S196>/RESET Board - Return to initialization' */

    /* Start of '<S191>/COMM Task - Sync bc 0' */
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
        /* Start of '<S200>/RX buffers update' */
        {
          1U,                          /* '<S202>/Cast13' */
          1U,                          /* '<S202>/Cast3' */
          0U,                          /* '<S202>/Cast15' */
          0U,                          /* '<S202>/Cast6' */
          0,                           /* '<S202>/Cast14' */
          0                            /* '<S202>/Cast5' */
        }
        /* End of '<S200>/RX buffers update' */
      }
      /* End of '<S195>/Reception substasks' */
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
    144.0, 148.0, 188.0, 192.0, 232.0, 272.0, 276.0, 277.0, 279.0, 280.0, 320.0,
    322.0, 324.0, 328.0, 330.0 },

  /* Expression: TM_Type_bc0
   * Referenced by: '<S130>/Constant1'
   */
  { 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 0.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0 },

  /* Expression: TM_Type_bc1
   * Referenced by: '<S130>/Constant5'
   */
  { 0.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 1.0,
    0.0, 1.0, 0.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0 },

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
