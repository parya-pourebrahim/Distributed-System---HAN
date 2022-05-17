% This m-file will be run automatically when starting model 'HANcoder_E407'
% The name of the m-file must consist of the model name with the addition:
% '_startup'!
% This m-file will be run when loading the model because it is added to the
% model callbacks: see File->Model Properties->Model Properties->Callbacks

% In this m-file the signals and parameters for HANtune can be defined. As
% an example the signal LedValue and parameter HANtuneOverride are already
% defined.
% You can add your own signals and parameters to this m-file below

%% Measurements
LA_Task_Act = 1; % Change digital output to see task activation [A0]
LA_COMM_Err = 1; % Toggle DO when a COMM error happened in a bc [A1]
LA_MEX_Flag = 1; % Measure Execution Time for comp task [A2 init, A3 end]
LA_Clock_Gr = 1; % Clock activation for granularity measurement [A4]
LA_COMM_dly = 1; % Toggle DO for COMM delay measurement [CAN1:Tx D13,Rx D12, CAN2:Tx D9,Rx D8]
LA_E_Desync = 1; % Toggle DO right before resync at LT_Update [D10]

%% Constants
hardware_granularity = 1000000; % 1 MHz (1 tick/microsecond) <not operational - its selected in HANCoder>
frequency_IRQ = 100; % IRQ every 100 ticks of hardware clock -> local clock: 10 kHz
LED_ticks_toggle = 10000; % 10000 local ticks to toggle LED (toggles every 1 second with local tick ON)

% Roles
Free_Role = 0;
Master_Role = 1;
Slave_Role = 2;
% Boards
Controller1_Board = 1;
Controller2_Board = 2;
Controller3_Board = 3;
Input_Gen_Board   = 4;
Vehicle_Em_Board  = 5;

% COMMunication Model
COMM_Period = 40;
% COMM_PHASE
% CAN1
% init
COMM_Phase_init1 = Simulink.Parameter; % Define as parameter
COMM_Phase_init1.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
COMM_Phase_init1.Value = 0;
% phase
COMM_Phase1 = Simulink.Parameter; % Define as parameter
COMM_Phase1.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
COMM_Phase1.Value = 10;
% CAN2
% init
COMM_Phase_init2 = Simulink.Parameter; % Define as parameter
COMM_Phase_init2.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
COMM_Phase_init2.Value = 5;
% phase
COMM_Phase2 = Simulink.Parameter; % Define as parameter
COMM_Phase2.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
COMM_Phase2.Value = 10;

% max number of messages
Tx_bit_number = 3; % This is hardcoded in the Tx buffer update of the COMM tasks
max_num_msgs_CAN1 = 2^Tx_bit_number-1;
max_num_msgs_CAN2 = max_num_msgs_CAN1;

% Basic Cycle: Time Master Election
DEBUG_wait = 20000; % insert this in a TM to make the system wait there for DEBUG
basic_cycle_start = 0;
COMM_duration = COMM_Period;
COMP_duration = 4;

% Message IDentification numbers
Sync_ID = 1;
Vote1_ID = 11;
Vote2_ID = 12;
Vote3_ID = 13;
SetValues_ID = 21;
SensorValues_ID = 22;
OutControl1_ID = 23;
OutControl2_ID = 24;
OutEmulator_ID = 25;

% Communication delay: time from message sent until message received
comm_delay_measured1 = 0.0003; % [1Mb/s -> 0.3 ms]
comm_delay_measured2 = 0.0003; % [250kb/s -> 0.7 ms]
comm_delay_estimation1 = ...
    round(comm_delay_measured1*hardware_granularity/frequency_IRQ); % comm_delay in ticks 
comm_delay_estimation2 = ...
    round(comm_delay_measured2*hardware_granularity/frequency_IRQ); 

% Maximum desync: maximum allowed ticks to be corrected by Desync (Update
% LT) during a basic cycle
max_desync = 15;
min_desync = (-1)*max_desync;


%% Definition of Time marks
% Time mark types
COMM = 0;
COMP = 1;
% Time marks
% bc 0
% Sync message
TM_COMM_Sync        = basic_cycle_start;                % COMM Sync
TM_Data_bc0         = TM_COMM_Sync;
TM_Type_bc0         = COMM;
TM_Check_Sync       = TM_COMM_Sync   + COMM_duration;	% COMP Check Message
TM_Data_bc0(end+1)  = TM_Check_Sync;
TM_Type_bc0(end+1)  = COMP;
TM_Update_LT        = TM_Check_Sync  + COMP_duration;   % COMP LocalTime update (LA - Desync)
TM_Data_bc0(end+1)  = TM_Update_LT;
TM_Type_bc0(end+1)  = COMP;
TM_Update_LT_2      = TM_Update_LT   + 2;               % COMP LocalTime update (LT Update)
TM_Data_bc0(end+1)  = TM_Update_LT_2;
TM_Type_bc0(end+1)  = COMP;
TM_Vote_Dec         = TM_Update_LT   + COMP_duration;	% COMP Generate vote <Input gen.: Check TO>
TM_Data_bc0(end+1)  = TM_Vote_Dec;
TM_Type_bc0(end+1)  = COMP;
TM_Vote_Dec_2       = TM_Vote_Dec    + 2;               % <Input gen.: Reset Board>
TM_Data_bc0(end+1)  = TM_Vote_Dec_2;
TM_Type_bc0(end+1)  = COMP;
% Vote 1
TM_COMM_Vote1       = TM_Vote_Dec    + COMP_duration;   % COMM Vote 1
TM_Data_bc0(end+1)  = TM_COMM_Vote1;
TM_Type_bc0(end+1)  = COMM;
TM_Check_Vote1      = TM_COMM_Vote1  + COMM_duration;	% COMP Check Message
TM_Data_bc0(end+1)  = TM_Check_Vote1;
TM_Type_bc0(end+1)  = COMP;
TM_Count_Vote1      = TM_Check_Vote1 + COMP_duration;	% COMP Count vote
TM_Data_bc0(end+1)  = TM_Count_Vote1;
TM_Type_bc0(end+1)  = COMP;
% Vote 2
TM_COMM_Vote2       = TM_Count_Vote1 + COMP_duration;   % COMM Vote 2
TM_Data_bc0(end+1)  = TM_COMM_Vote2;
TM_Type_bc0(end+1)  = COMM;
TM_Check_Vote2      = TM_COMM_Vote2  + COMM_duration;	% COMP Check Message <Vehicle Em.: Check Time Outs>
TM_Data_bc0(end+1)  = TM_Check_Vote2;
TM_Type_bc0(end+1)  = COMP;
TM_Check_Vote2_2    = TM_Check_Vote2 + 2;               % <Vehicle Em.: Reset Board> 
TM_Data_bc0(end+1)  = TM_Check_Vote2_2;
TM_Type_bc0(end+1)  = COMP;
TM_Count_Vote2      = TM_Check_Vote2 + COMP_duration;	% COMP Count vote
TM_Data_bc0(end+1)  = TM_Count_Vote2;
TM_Type_bc0(end+1)  = COMP;
% Vote 3
TM_COMM_Vote3       = TM_Count_Vote2 + COMP_duration;   % COMM Vote 3
TM_Data_bc0(end+1)  = TM_COMM_Vote3;
TM_Type_bc0(end+1)  = COMM;
TM_Check_Vote3      = TM_COMM_Vote3  + COMM_duration;	% COMP Check Message
TM_Data_bc0(end+1)  = TM_Check_Vote3;
TM_Type_bc0(end+1)  = COMP;
TM_Count_Vote3      = TM_Check_Vote3 + COMP_duration;	% COMP Count vote
TM_Data_bc0(end+1)  = TM_Count_Vote3;
TM_Type_bc0(end+1)  = COMP;
% Postelection
TM_Check_TOuts      = TM_Count_Vote3 + COMP_duration;	% COMP Timeouts check
TM_Data_bc0(end+1)  = TM_Check_TOuts;
TM_Type_bc0(end+1)  = COMP;
TM_New_Master       = TM_Check_TOuts + COMP_duration;	% COMP MasterID Decision
TM_Data_bc0(end+1)  = TM_New_Master;
TM_Type_bc0(end+1)  = COMP;
TM_Reset_Var        = TM_New_Master  + COMP_duration;	% COMP Reset Variables
TM_Data_bc0(end+1)  = TM_Reset_Var;
TM_Type_bc0(end+1)  = COMP;
TM_Reset_Board      = TM_Reset_Var   + COMP_duration;	% COMP Reset Board
TM_Data_bc0(end+1)  = TM_Reset_Board;
TM_Type_bc0(end+1)  = COMP;

% bc 1
TM_Data_bc1 = TM_Data_bc0(1:4);
TM_Type_bc1 = TM_Type_bc0(1:4);
% Set Values
TM_COMM_Set_Values       = TM_Update_LT + COMP_duration;                 % COMM Set values
TM_Data_bc1(end+1)       = TM_COMM_Set_Values;
TM_Type_bc1(end+1)       = COMM;
TM_Check_Set_Values      = TM_COMM_Set_Values + COMM_duration;           % COMP Check Set values 
TM_Data_bc1(end+1)       = TM_Check_Set_Values;
TM_Type_bc1(end+1)       = COMP;
TM_Check_Set_Values_2    = TM_Check_Set_Values + 2;                      % <Controller: Update msg> 
TM_Data_bc1(end+1)       = TM_Check_Set_Values_2;                        
TM_Type_bc1(end+1)       = COMP;
% Sensor Values
TM_COMM_Sensor_Values    = TM_Check_Set_Values + COMP_duration;          % COMM Sensor values
TM_Data_bc1(end+1)       = TM_COMM_Sensor_Values;
TM_Type_bc1(end+1)       = COMM;
TM_Check_Sensor_Values   = TM_COMM_Sensor_Values + COMM_duration;        % COMP Check Sensor values <Input gen.: Time Outs>
TM_Data_bc1(end+1)       = TM_Check_Sensor_Values;
TM_Type_bc1(end+1)       = COMP;
TM_Check_Sensor_Values_2 = TM_Check_Sensor_Values + 2;                   % <Controller: Update msg>
TM_Data_bc1(end+1)       = TM_Check_Sensor_Values_2;                     % <Input gen.: Reset Board>
TM_Type_bc1(end+1)       = COMP;
% Steer
TM_Steer                 = TM_Check_Sensor_Values + COMP_duration;       % COMP Steer
TM_Data_bc1(end+1)       = TM_Steer;
TM_Type_bc1(end+1)       = COMP;
% Torque
TM_Torque                = TM_Steer + COMP_duration;                     % COMP Torque
TM_Data_bc1(end+1)       = TM_Torque;
TM_Type_bc1(end+1)       = COMP;
% Velocity
TM_Velocity              = TM_Torque + COMP_duration;                    % COMP Velocity
TM_Data_bc1(end+1)       = TM_Velocity;
TM_Type_bc1(end+1)       = COMP;
% Output Controller 1
TM_COMM_Output_Control1  = TM_Velocity + COMP_duration;                  % COMM Output Controller 1
TM_Data_bc1(end+1)       = TM_COMM_Output_Control1;
TM_Type_bc1(end+1)       = COMM;
TM_Check_Output_Control1 = TM_COMM_Output_Control1 + COMM_duration;      % COMP Check Output Controller 1
TM_Data_bc1(end+1)       = TM_Check_Output_Control1;
TM_Type_bc1(end+1)       = COMP;
% Output Controller 2
TM_COMM_Output_Control2  = TM_Check_Output_Control1 + COMP_duration;     % COMM Output Controller 2
TM_Data_bc1(end+1)       = TM_COMM_Output_Control2;
TM_Type_bc1(end+1)       = COMM;
TM_Check_Output_Control2 = TM_COMM_Output_Control2 + COMM_duration;      % COMP Check Output Controller 2
TM_Data_bc1(end+1)       = TM_Check_Output_Control2;
TM_Type_bc1(end+1)       = COMP;
% TMR
TM_TMR                   = TM_Check_Output_Control2 + COMP_duration;     % COMP TMR <update msg Out1>
TM_Data_bc1(end+1)       = TM_TMR;
TM_Type_bc1(end+1)       = COMP;
TM_TMR_2                 = TM_TMR + 1;                                   % <update msg Out2>
TM_Data_bc1(end+1)       = TM_TMR_2;
TM_Type_bc1(end+1)       = COMP;
TM_TMR_3                 = TM_TMR + 3;                                   % <TMR>
TM_Data_bc1(end+1)       = TM_TMR_3;
TM_Type_bc1(end+1)       = COMP;
% Output Emulator
TM_COMM_Output_Emulator  = TM_TMR + COMP_duration;                       % COMM Output Controller 2
TM_Data_bc1(end+1)       = TM_COMM_Output_Emulator;
TM_Type_bc1(end+1)       = COMM;
TM_Check_Output_Emulator = TM_COMM_Output_Emulator + COMM_duration;      % COMP Check Output Controller 2
TM_Data_bc1(end+1)       = TM_Check_Output_Emulator;
TM_Type_bc1(end+1)       = COMP;
TM_Check_Output_Emulator_2 = TM_Check_Output_Emulator + 2;               % <Vehicle Em.: Update msg>
TM_Data_bc1(end+1)       = TM_Check_Output_Emulator_2;
TM_Type_bc1(end+1)       = COMP;
% Reset variables
TM_Reset_Var_bc1         = TM_Check_Output_Emulator + COMP_duration;     % COMP Check TimeOuts
TM_Data_bc1(end+1)       = TM_Reset_Var_bc1;
TM_Type_bc1(end+1)       = COMP;
TM_Reset_Var_bc1_2       = TM_Reset_Var_bc1 + 2;                         % COMP Reset Variables
TM_Data_bc1(end+1)       = TM_Reset_Var_bc1_2;
TM_Type_bc1(end+1)       = COMP;


% matrix scheduling constants
basic_cycle_duration_bc0 = TM_Reset_Board   + COMP_duration; % cycle duration in NTU
basic_cycle_duration_bc1 = TM_Reset_Var_bc1 + COMP_duration; % cycle duration in NTU
matrix_cycle_duration = basic_cycle_duration_bc0 + basic_cycle_duration_bc1; % cycle duration in NTU
matrix_rows = 2;

% Initialization
idle_time_init = basic_cycle_duration_bc0 + basic_cycle_duration_bc1; % time waiting by Board 1 before becoming Master

%% Value domain constants
%   Name            Definition          U       Range       Value   Prec
% track_l_f     Track width front axle	m       0.5..1.0	0,60	0,001
% track_l_a     Track width aft axle	m       0.5..1.0	0,60	0,001
% wheelbase_l	Wheel base distance     m       0.9..1.5	1,00	0,001
%               front to aft
% mass_v        Effective vehicle mass	kg      90..200   100,00    1
% mass_f        Effective front axle    kg      20..30     25,00    0,1
%               mass
% mass_a        Effective aft axle mass	kg      20..30     25,00	0,1
% inertia_f     Effective moment of   Nm^2/rad	1..3        2,25	0,001
%               inertia front axle	
% inertia_a     Effective moment of   Nm^2/rad	1..3        2,25	0,001
%               inertia aft axle
% radius_w_fr	Wheel radius front      m       0.09..0.11	0,10	0,001
%               right
% radius_w_fl	Wheel radius front left	m       0.09..0.11	0,10	0,001
% radius_w_ar	Wheel radius aft right	m       0.09..0.11	0,10	0,001
% radius_w_ar	Wheel radius aft left	m       0.09..0.11	0,10	0,001

Tl_f = 0.6; % m [0.5-1.0], 0.001
Tl_a = 0.6; % m [0.5-1.0], 0.001
W_b  = 1.0; % m [0.9-1.5], 0.001
m_v  = 100.0; % kg [90.0 - 200.0], 1.0
m_f  = 25.0;  % kg [20.0 - 30.0], 0.1
m_a  = 25.0;  % kg [20.0 - 30.0], 0.1
I_f  = 2.25; % Nm^2/rad	[1.0 - 3.0], 0.001
I_a  = 2.25; % Nm^2/rad	[1.0 - 3.0], 0.001
R_fr = 0.10; % m [0.09 - 0.11], 0.001
R_fl = 0.10; % m [0.09 - 0.11], 0.001
R_ar = 0.10; % m [0.09 - 0.11], 0.001
R_al = 0.10; % m [0.09 - 0.11], 0.001

% Signal bounds
speed_max =  10;
speed_min = -10;
delta_max =   1;
delta_min =  -1;
theta_max = (speed_max/R_fr)*matrix_cycle_duration*frequency_IRQ/hardware_granularity;
theta_min = (-1)*theta_max;
tau_max   =   5;
tau_min   =  -5;
tau_range = abs(tau_max) + abs(tau_min);
e_width   = 0.1; % 10\%

% Signal precision <bits reserved for this value>
torque_precision = 4; % bits
delta_precision  = 6; % bits
theta_precision  = 7-(fix(log2(theta_max))+1); % bits
speed_precision  = 3; % bits

%% Parameters
% Defining a parameter for editing in HANtune
% Input generator
v_set = Simulink.Parameter; % Define as parameter
v_set.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
v_set.Value = 0;
delta_f_set = Simulink.Parameter; % Define as parameter
delta_f_set.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
delta_f_set.Value = 0;
delta_a_set = Simulink.Parameter; % Define as parameter
delta_a_set.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
delta_a_set.Value = 0;

% PID gains
% Torque
torque_f_k_p = Simulink.Parameter; % Define as parameter
torque_f_k_p.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
torque_f_k_p.Value = 1; 
torque_f_k_i = Simulink.Parameter; % Define as parameter
torque_f_k_i.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
torque_f_k_i.Value = 1; 
torque_f_k_d = Simulink.Parameter; % Define as parameter
torque_f_k_d.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
torque_f_k_d.Value = 0;
torque_a_k_p = Simulink.Parameter; % Define as parameter
torque_a_k_p.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
torque_a_k_p.Value = 1; 
torque_a_k_i = Simulink.Parameter; % Define as parameter
torque_a_k_i.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
torque_a_k_i.Value = 1; 
torque_a_k_d = Simulink.Parameter; % Define as parameter
torque_a_k_d.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
torque_a_k_d.Value = 0;
% Speed
speed_k_p = Simulink.Parameter; % Define as parameter
speed_k_p.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
speed_k_p.Value = 20; 
speed_k_i = Simulink.Parameter; % Define as parameter
speed_k_i.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
speed_k_i.Value = 0.001;
speed_k_d = Simulink.Parameter; % Define as parameter
speed_k_d.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
speed_k_d.Value = 0; 

% HANTune scripts ON/OFF control
script_run = Simulink.Parameter; % Define as parameter
script_run.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
script_run.DataType = 'double';
script_run.Value = 0;

% Defining a parameter for editing in HANtune
HANtuneOverride = Simulink.Parameter; % Define as parameter
HANtuneOverride.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
HANtuneOverride.Value = 0; % Initial value is set to zero, no override

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


%% Bus type definitions
% Votes_count variable: data storage with the votes received for the Role poll
bussignal(1) = Simulink.BusElement;
bussignal(1).Name = 'First_Board';
bussignal(2) = Simulink.BusElement;
bussignal(2).Name = 'Second_Board';
bussignal(3) = Simulink.BusElement;
bussignal(3).Name = 'Third_Board';
vote_array = Simulink.Bus;
vote_array.Elements = bussignal;

% Message buffer type for Msg_Rx_CAN for CAN1 and CAN2
% The content of the messages received are stored with this type
Msg_Buffer(1) = Simulink.BusElement;
Msg_Buffer(1).Name = 'Buffer_1';
Msg_Buffer(1).DataType = 'uint8';
Msg_Buffer(2) = Simulink.BusElement;
Msg_Buffer(2).Name = 'Buffer_2';
Msg_Buffer(2).DataType = 'uint8';
Msg_Buffer(3) = Simulink.BusElement;
Msg_Buffer(3).Name = 'Buffer_3';
Msg_Buffer(3).DataType = 'uint8';
Msg_Buffer(4) = Simulink.BusElement;
Msg_Buffer(4).Name = 'Buffer_4';
Msg_Buffer(4).DataType = 'uint8';
Msg_Buffer(5) = Simulink.BusElement;
Msg_Buffer(5).Name = 'Buffer_5';
Msg_Buffer(5).DataType = 'uint8';
Msg_Buffer(6) = Simulink.BusElement;
Msg_Buffer(6).Name = 'Buffer_6';
Msg_Buffer(6).DataType = 'uint8';
Msg_Buffer(7) = Simulink.BusElement;
Msg_Buffer(7).Name = 'Buffer_7';
Msg_Buffer(7).DataType = 'uint8';
Msg_Buffer(8) = Simulink.BusElement;
Msg_Buffer(8).Name = 'Buffer_8';
Msg_Buffer(8).DataType = 'uint8';
msg_buffer_type = Simulink.Bus;
msg_buffer_type.Elements = Msg_Buffer;
