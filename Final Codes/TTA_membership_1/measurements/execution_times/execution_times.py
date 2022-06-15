########## Functions definition #############
#####
# >> edge_detected()
# Detect if there is rising or falling edge
# return bool
def edge_detected(value_1, value_2):
    if (value_1 and not value_2) or (not value_1 and value_2):
        edge = True
    else:
        edge = False
    # <end if edge>
    return edge
#####

#####
# >> filter_signal()
# Noise bands found: 42ns, 83ns, 333ns, 458ns, 500ns, 625ns
# Filter periods of 42ns (characteristic period of noise in our signals)
# if finds a period value under 50ns, it removes the last edge detected
# return filtered_signal (list with both, time and signal)
def filter_signal(time, signal):
    threshold   = 2e-6
    time_filt   = time.copy()
    signal_filt = signal.copy()
    time_period = [0]
    i = 0    
    while (i < len(signal_filt)-1):
        if edge_detected(signal_filt[i], signal_filt[i+1]):
            edge_period = time_filt[i] - time_period[-1]
            # Filter signal if under 50ns
            if edge_period < threshold:
                signal_filt.pop(i)
                signal_filt.pop(i-1)
                time_filt.pop(i)
                time_filt.pop(i-1)
                i -= 1
            else:
                time_period.append(time_filt[i])
            # <end threshold if>
        # <end edge if>
        i += 1
    # <end while>
    return [time_filt, signal_filt]
#####

########## Start of main program ############

## 1 ## READ DATA AND GENERATE DICTIONARY OF VALUES
## Open file.
file = open('MEX_14Jan22_2.csv','r')

### Declare dictionary for all the data
keys = ['time',
        'b1_init',
        'b1_end',
        'b2_init',
        'b2_end',
        'b3_init',
        'b3_end']

data = {}
for k in keys:
    data[k] = []

### Read file data line by line.
num         = ''
key_count   = 0
line_count  = 0
for line in file:
    if line_count > 0:
        for c in line:
            if c != ',' and c != '\n':
                num += c
            else:
                data[keys[key_count]].append(float(num))
                num = ''
                if c == ',':
                    key_count += 1
                else:
                    key_count = 0
                # <end ',' or '\n' if>
            # <end not ',' if>
        # <end c for>
    # <end line_count if>
    line_count += 1
# <end line for>

### Divide data into channels
'''
Each timestamp we have corresponds to a change of value in
one of the channels. It is important to divide the time
slots of each channel to get appropiate information of
the edges.
'''
time_keys    = ['b1_init_t',
                'b1_end_t',
                'b2_init_t',
                'b2_end_t',
                'b3_init_t',
                'b3_end_t']
data_channels = {}
time_channels = {}
for k in time_keys:
    data_channels[k] = []
    time_channels[k] = []

for i in range(len(data['time'])-1):
    if edge_detected(data['b1_init'][i], data['b1_init'][i+1]):
        data_channels['b1_init_t'].append(data['b1_init'][i+1])
        time_channels['b1_init_t'].append(data['time'][i+1])
        
    if edge_detected(data['b1_end'][i], data['b1_end'][i+1]):
        data_channels['b1_end_t'].append(data['b1_end'][i+1])
        time_channels['b1_end_t'].append(data['time'][i+1])
        
    if edge_detected(data['b2_init'][i], data['b2_init'][i+1]):
        data_channels['b2_init_t'].append(data['b2_init'][i+1])
        time_channels['b2_init_t'].append(data['time'][i+1])
        
    if edge_detected(data['b2_end'][i], data['b2_end'][i+1]):
        data_channels['b2_end_t'].append(data['b2_end'][i+1])
        time_channels['b2_end_t'].append(data['time'][i+1])
        
    if edge_detected(data['b3_init'][i], data['b3_init'][i+1]):
        data_channels['b3_init_t'].append(data['b3_init'][i+1])
        time_channels['b3_init_t'].append(data['time'][i+1])
        
    if edge_detected(data['b3_end'][i], data['b3_end'][i+1]):
        data_channels['b3_end_t'].append(data['b3_end'][i+1])
        time_channels['b3_end_t'].append(data['time'][i+1])
# <end loop_data for>

# Filter signals:
for i in time_keys:
    time_channels[i], data_channels[i] = filter_signal(time_channels[i], data_channels[i])

## 2 ## CALCULATE EXECUTION TIMES
### Each execution time is the difference between init and end of each board
b1_execution_time = []
if len(time_channels['b1_init_t']) > len(time_channels['b1_end_t']):
    length1 = len(time_channels['b1_end_t'])
else:
    length1 = len(time_channels['b1_init_t'])
                 
for i in range(length1-1):
    b1_execution_time.append(time_channels['b1_end_t'][i] -
                             time_channels['b1_init_t'][i])

b2_execution_time = []
if len(time_channels['b2_init_t']) > len(time_channels['b2_end_t']):
    length2 = len(time_channels['b2_end_t'])
else:
    length2 = len(time_channels['b2_init_t'])
                 
for i in range(length2-1):
    b2_execution_time.append(time_channels['b2_end_t'][i] -
                                 time_channels['b2_init_t'][i])

b3_execution_time = []
if len(time_channels['b3_init_t']) > len(time_channels['b3_end_t']):
    length3 = len(time_channels['b3_end_t'])
else:
    length3 = len(time_channels['b3_init_t'])
                  
for i in range(length3-1):
    b3_execution_time.append(time_channels['b3_end_t'][i] -
                             time_channels['b3_init_t'][i])
    

## 3 ## DIVIDE EXECUTION TIMES INTO THE DIFFERENT COMPUTATIONAL TASKS
### TM Information (copied from matlab)
import numpy
# COMMunication Model
COMM_Period = 40;

# Matrix Cycle
basic_cycle_start = 0;
COMM_duration = COMM_Period;
COMP_duration = 4;
# bc 0
# Sync message
TM_COMM_Sync0       = basic_cycle_start;                # COMM Sync0
TM_Check_Sync0      = TM_COMM_Sync0  + COMM_duration;	# COMP LocalTime update 
TM_Update_LT0       = TM_Check_Sync0 + COMP_duration;   # COMP Check Message
# Vote decision
TM_Vote_Dec         = TM_Update_LT0  + COMP_duration;	# COMP Generate vote
# Vote 1
TM_COMM_Vote1       = TM_Vote_Dec    + COMP_duration;   # COMM Vote 1
TM_Check_Vote1      = TM_COMM_Vote1  + COMM_duration;	# COMP Check Message
TM_Count_Vote1      = TM_Check_Vote1 + COMP_duration;	# COMP Count vote
# Vote 2
TM_COMM_Vote2       = TM_Count_Vote1 + COMP_duration;   # COMM Vote 2
TM_Check_Vote2      = TM_COMM_Vote2  + COMM_duration;	# COMP Check Message
TM_Count_Vote2      = TM_Check_Vote2 + COMP_duration;	# COMP Count vote
# Vote 3
TM_COMM_Vote3       = TM_Count_Vote2 + COMP_duration;   # COMM Vote 3
TM_Check_Vote3      = TM_COMM_Vote3  + COMM_duration;	# COMP Check Message
TM_Count_Vote3      = TM_Check_Vote3 + COMP_duration;	# COMP Count vote
# Postelection
TM_Check_TOuts      = TM_Count_Vote3 + COMP_duration;	# COMP Timeouts check
TM_New_Master       = TM_Check_TOuts + COMP_duration;	# COMP MasterID Decision
TM_Reset_Var        = TM_New_Master  + COMP_duration;	# COMP Reset Variables
TM_Reset_Board      = TM_Reset_Var   + COMP_duration;	# COMP Reset Board

# bc 1
# Sync message
TM_COMM_Sync1            = TM_Reset_Board + COMP_duration;               # COMM Sync1
TM_Check_Sync1           = TM_COMM_Sync1  + COMM_duration;	         # COMP LocalTime update 
TM_Update_LT1            = TM_Check_Sync1 + COMP_duration;               # COMP Check Message
# Set Values
TM_COMM_Set_Values       = TM_Update_LT1 + COMP_duration;                # COMM Set values
TM_Check_Set_Values      = TM_COMM_Set_Values + COMM_duration;           # COMP Check Set values
# Sensor Values
TM_COMM_Sensor_Values    = TM_Check_Set_Values + COMP_duration;          # COMM Sensor values
TM_Check_Sensor_Values   = TM_COMM_Sensor_Values + COMM_duration;        # COMP Check Sensor values
# Steer
TM_Steer                 = TM_Check_Sensor_Values + COMP_duration;       # COMP Steer
# Torque
TM_Torque                = TM_Steer + COMP_duration;                     # COMP Torque
# Velocity
TM_Velocity              = TM_Torque + COMP_duration;                    # COMP Velocity
# Output Controller 1
TM_COMM_Output_Control1  = TM_Velocity + COMP_duration;                  # COMM Output Controller 1
TM_Check_Output_Control1 = TM_COMM_Output_Control1 + COMM_duration;      # COMP Check Output Controller 1
# Output Controller 2
TM_COMM_Output_Control2  = TM_Check_Output_Control1 + COMP_duration;     # COMM Output Controller 2
TM_Check_Output_Control2 = TM_COMM_Output_Control2 + COMM_duration;      # COMP Check Output Controller 2
# TMR
TM_TMR                   = TM_Check_Output_Control2 + COMP_duration;     # COMP TMR
# Output Emulator
TM_COMM_Output_Emulator  = TM_TMR + COMP_duration;                       # COMM Output Controller 2
TM_Check_Output_Emulator = TM_COMM_Output_Emulator + COMM_duration;      # COMP Check Output Controller 2
# Reset variables
TM_Reset_Var_bc1         = TM_Check_Output_Emulator + COMP_duration;     # COMP Reset Variables


# matrix scheduling constants
basic_cycle_duration_bc0 = TM_Reset_Board   + COMP_duration; # cycle duration in NTU
basic_cycle_duration_bc1 = TM_Reset_Var_bc1 + COMP_duration; # cycle duration in NTU
matrix_cycle_duration = basic_cycle_duration_bc0 + basic_cycle_duration_bc1; # cycle duration in NTU
matrix_rows = 2;

### Declare and fill dictionaries with lists (one per board)
#   for different time mark execution times
Board_keys  = ['b1', 'b2', 'b3']
TM_keys     = [ 'general',
                # bc0
                # Sync
                'TM_COMM_Sync0',
                'TM_Check_Sync0',
                'TM_Update_LT0',
                # Vote decision
                'TM_Vote_Dec',
                # Vote 1
                'TM_COMM_Vote1',
                'TM_Check_Vote1',
                'TM_Count_Vote1',
                # Vote 2
                'TM_COMM_Vote2',
                'TM_Check_Vote2',
                'TM_Count_Vote2',
                # Vote 3
                'TM_COMM_Vote3',
                'TM_Check_Vote3',
                'TM_Count_Vote3',
                # Postelection
                'TM_Check_TOuts',
                'TM_New_Master',
                'TM_Reset_Var',
                'TM_Reset_Board',
                # bc1
                # Sync
                'TM_COMM_Sync1',
                'TM_Check_Sync1',
                'TM_Update_LT1',
                # Set Values
                'TM_COMM_Set_Values',
                'TM_Check_Set_Values',
                # Sensor Values
                'TM_COMM_Sensor_Values',
                'TM_Check_Sensor_Values',
                # Steer
                'TM_Steer',
                # Torque
                'TM_Torque',
                # Velocity
                'TM_Velocity',
                # Output Controller 1
                'TM_COMM_Output_Control1',
                'TM_Check_Output_Control1',
                # Output Controller 2
                'TM_COMM_Output_Control2',
                'TM_Check_Output_Control2',
                # TMR
                'TM_TMR',
                # Output Emulator
                'TM_COMM_Output_Emulator',
                'TM_Check_Output_Emulator',
                # Reset variables
                'TM_Reset_Var_bc1']
OP_keys = ['ET', 'avg', 'min', 'max']

execution_times = {}
for k in Board_keys:
    execution_times[k] = {}
    for i in TM_keys:
        execution_times[k][i] = {}        
        for j in OP_keys:
            execution_times[k][i][j] = []

## General execution times are already processed
execution_times['b1']['general']['ET'] = b1_execution_time
execution_times['b2']['general']['ET'] = b2_execution_time
execution_times['b3']['general']['ET'] = b3_execution_time

## Lets now separate the execution times of the boards into time marks
for k in Board_keys:
    i = 0
    for exec_t in execution_times[k]['general']['ET']:
        # Sync
        if i == TM_COMM_Sync0:
            execution_times[k]['TM_COMM_Sync0']['ET'].append(exec_t)        
        elif i == TM_Check_Sync0:
            execution_times[k]['TM_Check_Sync0']['ET'].append(exec_t)        
        elif i == TM_Update_LT0:
            execution_times[k]['TM_Update_LT0']['ET'].append(exec_t)        
        elif i == TM_Vote_Dec:
            execution_times[k]['TM_Vote_Dec']['ET'].append(exec_t)
        # Vote1
        elif i == TM_COMM_Vote1:
            execution_times[k]['TM_COMM_Vote1']['ET'].append(exec_t)        
        elif i == TM_Check_Vote1:
            execution_times[k]['TM_Check_Vote1']['ET'].append(exec_t)        
        elif i == TM_Count_Vote1:
            execution_times[k]['TM_Count_Vote1']['ET'].append(exec_t)
        # Vote2
        elif i == TM_COMM_Vote2:
            execution_times[k]['TM_COMM_Vote2']['ET'].append(exec_t)        
        elif i == TM_Check_Vote2:
            execution_times[k]['TM_Check_Vote2']['ET'].append(exec_t)        
        elif i == TM_Count_Vote2:
            execution_times[k]['TM_Count_Vote2']['ET'].append(exec_t)
        # Vote3   
        elif i == TM_COMM_Vote3:
            execution_times[k]['TM_COMM_Vote3']['ET'].append(exec_t)        
        elif i == TM_Check_Vote3:
            execution_times[k]['TM_Check_Vote3']['ET'].append(exec_t)        
        elif i == TM_Count_Vote3:
            execution_times[k]['TM_Count_Vote3']['ET'].append(exec_t)        
        # Postelection    
        elif i == TM_Check_TOuts:
            execution_times[k]['TM_Check_TOuts']['ET'].append(exec_t)        
        elif i == TM_New_Master:
            execution_times[k]['TM_New_Master']['ET'].append(exec_t)        
        elif i == TM_Reset_Var:
            execution_times[k]['TM_Reset_Var']['ET'].append(exec_t)
        elif i == TM_Reset_Board:
            execution_times[k]['TM_Reset_Board']['ET'].append(exec_t)
        # Sync
        elif i == TM_COMM_Sync1:
            execution_times[k]['TM_COMM_Sync1']['ET'].append(exec_t)        
        elif i == TM_Check_Sync1:
            execution_times[k]['TM_Check_Sync1']['ET'].append(exec_t)
        elif i == TM_Update_LT1:
            execution_times[k]['TM_Update_LT1']['ET'].append(exec_t)
        # Set Values
        elif i == TM_COMM_Set_Values:
            execution_times[k]['TM_COMM_Set_Values']['ET'].append(exec_t)
        elif i == TM_Check_Set_Values:
            execution_times[k]['TM_Check_Set_Values']['ET'].append(exec_t)
        # Sensor Values
        elif i == TM_COMM_Sensor_Values:
            execution_times[k]['TM_COMM_Sensor_Values']['ET'].append(exec_t)
        elif i == TM_Check_Sensor_Values:
            execution_times[k]['TM_Check_Sensor_Values']['ET'].append(exec_t)
        # Steer
        elif i == TM_Steer:
            execution_times[k]['TM_Steer']['ET'].append(exec_t)
        # Torque
        elif i == TM_Torque:
            execution_times[k]['TM_Torque']['ET'].append(exec_t)
        # Velocity
        elif i == TM_Velocity:
            execution_times[k]['TM_Velocity']['ET'].append(exec_t)
        # Output Controller 1
        elif i == TM_COMM_Output_Control1:
            execution_times[k]['TM_COMM_Output_Control1']['ET'].append(exec_t)
        elif i == TM_Check_Output_Control1:
            execution_times[k]['TM_Check_Output_Control1']['ET'].append(exec_t)
        # Output Controller 2
        elif i == TM_COMM_Output_Control2:
            execution_times[k]['TM_COMM_Output_Control2']['ET'].append(exec_t)
        elif i == TM_Check_Output_Control2:
            execution_times[k]['TM_Check_Output_Control2']['ET'].append(exec_t)
        # TMR
        elif i == TM_TMR:
            execution_times[k]['TM_TMR']['ET'].append(exec_t)
        # Output Emulator
        elif i == TM_COMM_Output_Emulator:
            execution_times[k]['TM_COMM_Output_Emulator']['ET'].append(exec_t)
        elif i == TM_Check_Output_Emulator:
            execution_times[k]['TM_Check_Output_Emulator']['ET'].append(exec_t)
        # Reset variables
        elif i == TM_Reset_Var_bc1:
            execution_times[k]['TM_Reset_Var_bc1']['ET'].append(exec_t)
        # end Time Marks if
        i += 1
        if i > matrix_cycle_duration:
            i = 0
    # end exect_t for
# end Board_keys for

    
## 4 ## CALCULATE MEANS, MAX AND MINS OF EXECUTION TIMES
for k in Board_keys:
    for i in TM_keys:
        for j in OP_keys:
            if j == 'avg':
                execution_times[k][i][j] = numpy.mean(execution_times[k][i]['ET'])
            elif j == 'min':
                execution_times[k][i][j] = min(execution_times[k][i]['ET'])
            elif j == 'max':
                execution_times[k][i][j] = max(execution_times[k][i]['ET'])

## 5 ## SHOW RESULTS
for k in Board_keys:
    print(f'\nBoard {k} results:')
    for i in TM_keys:
        print(f'\n{i}: ')
        for j in OP_keys:
            if j != 'ET':
                print(f'{j} = {execution_times[k][i][j]:.6f}   ')

## 6 ## PLOT EXECUTION TIME
import matplotlib.pyplot as plt
# Signals collected
plt.subplot(211)
plt.plot(time_channels['b1_init_t'][:20000], data_channels['b1_init_t'][:20000])
plt.plot(time_channels['b1_end_t'][:20000], data_channels['b1_end_t'][:20000])
plt.xlabel('Time/s')
plt.ylabel('Logic level')
plt.title('Logic Analyzer signals')
plt.subplot(212)
plt.plot(time_channels['b2_init_t'][:20000], data_channels['b2_init_t'][:20000])
plt.plot(time_channels['b2_end_t'][:20000], data_channels['b2_end_t'][:20000])
plt.xlabel('Time/s')
plt.ylabel('Logic level')
plt.subplot(313)
plt.plot(time_channels['b3_init_t'][:20000], data_channels['b3_init_t'][:20000])
plt.plot(time_channels['b3_end_t'][:20000], data_channels['b3_end_t'][:20000])
plt.xlabel('Time/s')
plt.ylabel('Logic level')
plt.show()

# Separate ET
# Create x axis
boards_x = {}
for i in Board_keys:
    boards_x[i] = []
    for j in range(len(execution_times[i]['general']['ET'])):
        boards_x[i].append(j)
# Board1
plt.subplot(211)
plt.plot(boards_x['b1'][:20000], execution_times['b1']['general']['ET'][:20000])
plt.xlabel('Ticks')
plt.ylabel('ET/s')
plt.title('Board 1')
# Board2
plt.subplot(212)
plt.plot(boards_x['b2'][:20000], execution_times['b2']['general']['ET'][:20000])
plt.xlabel('Ticks')
plt.ylabel('ET/s')
plt.title('Board 2')
# Board3
plt.subplot(313)
plt.plot(boards_x['b3'][:20000], execution_times['b3']['general']['ET'][:20000])
plt.xlabel('Ticks')
plt.ylabel('ET/s')
plt.title('Board 3')
plt.show()

# Same plot ET
for i in Board_keys:
    plt.plot(boards_x[i][:20000], execution_times[i]['general']['ET'][:20000], label=str(i))

plt.xlabel('Ticks')
plt.ylabel('ET/s')
plt.title('Execution Times')
plt.legend()
plt.show()


## Free the file
file.close()

def write_data(name, data):
    file = open(name, 'w')
    for i in data:
        file.write(str(i)+'\n')
    file.close()
