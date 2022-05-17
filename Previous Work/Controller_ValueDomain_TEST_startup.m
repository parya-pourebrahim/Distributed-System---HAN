% Controller_ValueDomain_TEST
% software time simulation of the TTA_Controller. We can check the value
% domain of the controller, without caring about messages over CAN.

%% Time Marks
COMM_duration = 40;
COMP_duration = 4;
init = COMM_duration + 2*COMP_duration;
% input message from Input Generator
TM_Set_Values = init;
% input message from Vehicle Emulator
TM_Sensor_Values = TM_Set_Values + COMM_duration + COMP_duration;
% computations to calculate controller values
TM_Steer = TM_Sensor_Values + COMM_duration + COMP_duration;
TM_Torque = TM_Steer + COMP_duration;
TM_Velocity = TM_Torque + COMP_duration;
% output message to vehicle emulator
TM_Output_Emulator = TM_Velocity + 2*COMM_duration + 4*COMP_duration;
% calculations in vehicle emulator
TM_Sensor_process = TM_Output_Emulator + COMM_duration;

% total duration
basic_cycle_duration = 500; %TM_Sensor_process + 2*COMP_duration;

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
torque_f_k_p.Value = 0; 
torque_f_k_i = Simulink.Parameter; % Define as parameter
torque_f_k_i.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
torque_f_k_i.Value = 0; 
torque_f_k_d = Simulink.Parameter; % Define as parameter
torque_f_k_d.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
torque_f_k_d.Value = 0;
torque_a_k_p = Simulink.Parameter; % Define as parameter
torque_a_k_p.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
torque_a_k_p.Value = 0; 
torque_a_k_i = Simulink.Parameter; % Define as parameter
torque_a_k_i.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
torque_a_k_i.Value = 0; 
torque_a_k_d = Simulink.Parameter; % Define as parameter
torque_a_k_d.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
torque_a_k_d.Value = 0;
% Speed
speed_k_p = Simulink.Parameter; % Define as parameter
speed_k_p.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
speed_k_p.Value = 0; 
speed_k_i = Simulink.Parameter; % Define as parameter
speed_k_i.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
speed_k_i.Value = 0;
speed_k_d = Simulink.Parameter; % Define as parameter
speed_k_d.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
speed_k_d.Value = 0; 
