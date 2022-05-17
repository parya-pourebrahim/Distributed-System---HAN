% This m-file will be run automatically when starting model 'HANcoder_E407'
% The name of the m-file must consist of the model name with the addition:
% '_startup'!
% This m-file will be run when loading the model because it is added to the
% model callbacks: see File->Model Properties->Model Properties->Callbacks

% In this m-file the signals and parameters for HANtune can be defined. As
% an example the signal LedValue and parameter HANtuneOverride are already
% defined.
% You can add your own signals and parameters to this m-file below

%% Constants
ID_CAN1_const = 24;
ID_CAN2_const = 24;

%% Signals
% Defining signals for viewing in HANtune
LedValue = Simulink.Signal; % Define as signal
LedValue.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune

% Defining System Information Signals
SI_FreeStack = Simulink.Signal;
SI_FreeStack.StorageClass = 'ExportedGlobal';
SI_CPUload = Simulink.Signal;
SI_CPUload.StorageClass = 'ExportedGlobal';
SI_FreeHeap = Simulink.Signal;
SI_FreeHeap.StorageClass = 'ExportedGlobal';

%% Parameters
% Defining a parameter for editing in HANtune
HANtuneOverride = Simulink.Parameter; % Define as parameter
HANtuneOverride.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
HANtuneOverride.Value = 0; % Initial value is set to zero, no override

%% GLOBAL parameters
precision_CAN1 = Simulink.Parameter;
precision_CAN1.StorageClass = 'ExportedGlobal';
precision_CAN1.Value = 0;
precision_CAN2 = Simulink.Parameter;
precision_CAN2.StorageClass = 'ExportedGlobal';
precision_CAN2.Value = 0;

%% TX parameters
% CAN1
Tx_ID_CAN1 = Simulink.Parameter;
Tx_ID_CAN1.StorageClass = 'ExportedGlobal';
Tx_ID_CAN1.Value = 0;

Tx_Buffer_1_CAN1 = Simulink.Parameter;
Tx_Buffer_1_CAN1.StorageClass = 'ExportedGlobal';
Tx_Buffer_1_CAN1.Value = 0;
Tx_Buffer_2_CAN1 = Simulink.Parameter;
Tx_Buffer_2_CAN1.StorageClass = 'ExportedGlobal';
Tx_Buffer_2_CAN1.Value = 0;
Tx_Buffer_3_CAN1 = Simulink.Parameter;
Tx_Buffer_3_CAN1.StorageClass = 'ExportedGlobal';
Tx_Buffer_3_CAN1.Value = 0;
Tx_Buffer_4_CAN1 = Simulink.Parameter;
Tx_Buffer_4_CAN1.StorageClass = 'ExportedGlobal';
Tx_Buffer_4_CAN1.Value = 0;
Tx_Buffer_5_CAN1 = Simulink.Parameter;
Tx_Buffer_5_CAN1.StorageClass = 'ExportedGlobal';
Tx_Buffer_5_CAN1.Value = 0;
Tx_Buffer_6_CAN1 = Simulink.Parameter;
Tx_Buffer_6_CAN1.StorageClass = 'ExportedGlobal';
Tx_Buffer_6_CAN1.Value = 0;
Tx_Buffer_7_CAN1 = Simulink.Parameter;
Tx_Buffer_7_CAN1.StorageClass = 'ExportedGlobal';
Tx_Buffer_7_CAN1.Value = 0;
Tx_Buffer_8_CAN1 = Simulink.Parameter;
Tx_Buffer_8_CAN1.StorageClass = 'ExportedGlobal';
Tx_Buffer_8_CAN1.Value = 0;

Tx_Max_CAN1 = Simulink.Parameter;
Tx_Max_CAN1.StorageClass = 'ExportedGlobal';
Tx_Max_CAN1.Value = 0;
Tx_Min_CAN1 = Simulink.Parameter;
Tx_Min_CAN1.StorageClass = 'ExportedGlobal';
Tx_Min_CAN1.Value = 0;

% CAN2
Tx_ID_CAN2 = Simulink.Parameter;
Tx_ID_CAN2.StorageClass = 'ExportedGlobal';
Tx_ID_CAN2.Value = 0;

Tx_Buffer_1_CAN2 = Simulink.Parameter;
Tx_Buffer_1_CAN2.StorageClass = 'ExportedGlobal';
Tx_Buffer_1_CAN2.Value = 0;
Tx_Buffer_2_CAN2 = Simulink.Parameter;
Tx_Buffer_2_CAN2.StorageClass = 'ExportedGlobal';
Tx_Buffer_2_CAN2.Value = 0;
Tx_Buffer_3_CAN2 = Simulink.Parameter;
Tx_Buffer_3_CAN2.StorageClass = 'ExportedGlobal';
Tx_Buffer_3_CAN2.Value = 0;
Tx_Buffer_4_CAN2 = Simulink.Parameter;
Tx_Buffer_4_CAN2.StorageClass = 'ExportedGlobal';
Tx_Buffer_4_CAN2.Value = 0;
Tx_Buffer_5_CAN2 = Simulink.Parameter;
Tx_Buffer_5_CAN2.StorageClass = 'ExportedGlobal';
Tx_Buffer_5_CAN2.Value = 0;
Tx_Buffer_6_CAN2 = Simulink.Parameter;
Tx_Buffer_6_CAN2.StorageClass = 'ExportedGlobal';
Tx_Buffer_6_CAN2.Value = 0;
Tx_Buffer_7_CAN2 = Simulink.Parameter;
Tx_Buffer_7_CAN2.StorageClass = 'ExportedGlobal';
Tx_Buffer_7_CAN2.Value = 0;
Tx_Buffer_8_CAN2 = Simulink.Parameter;
Tx_Buffer_8_CAN2.StorageClass = 'ExportedGlobal';
Tx_Buffer_8_CAN2.Value = 0;

Tx_Max_CAN2 = Simulink.Parameter;
Tx_Max_CAN2.StorageClass = 'ExportedGlobal';
Tx_Max_CAN2.Value = 0;
Tx_Min_CAN2 = Simulink.Parameter;
Tx_Min_CAN2.StorageClass = 'ExportedGlobal';
Tx_Min_CAN2.Value = 0;

%% RX parameters
Rx_ID_CAN1 = Simulink.Parameter;
Rx_ID_CAN1.StorageClass = 'ExportedGlobal';
Rx_ID_CAN1.Value = 0;

Rx_ID_CAN2 = Simulink.Parameter;
Rx_ID_CAN2.StorageClass = 'ExportedGlobal';
Rx_ID_CAN2.Value = 0;