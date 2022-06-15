### process_COMM_delay ###
# 08 January 2022
# Diego Martin Lopez
# Reads .csv file from Saleae Logic software where one known channel is from the Master board (sends
# msgs) and the other channels are from other boards receiving msgs. Every timestamp read
# corresponds to a event in the recording (one of the signals toggled). Once the information is
# divided into different channels, the transmission channel is compared with every other channel.
# The number of transmissions is filtered so for every transmission is one only reception. The time
# expected from one reception to the next is known, so if we find a bigger elapsed time between two
# receptions, the program removes one transmission in between. At the end, the time from each
# transmission to reception is calculated substracting one to another. The mean, maximum and minimum
# values are also calculated for each channel.

# Imports:
import numpy

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

# >> open_file()
# Opens file from same folder as this file with file_name
# returns content in a list of lines, with each line being a list of elements
def open_file(file_name):
    fich = open(file_name, 'r')
    data = [line.split(',') for line in fich]
    data.pop(0) # remove header line
    fich.close()
    return data
#####

# >> channel_division()
# Receives data and divides it into different channels with just time
# information about when every message was received in each board
def channel_division(file_name):
    data = open_file(file_name)
    num_ch   = len(data[0])-1
    time     = [float(i[0]) for i in data]
    ch_info  = [i[1:] for i in data]
    channels = {str(i):[] for i in range(num_ch)}
    for i in range(len(time)-1):
        for j in range(num_ch):
            if edge_detected(int(ch_info[i][j]), int(ch_info[i+1][j])):
                channels[str(j)].append(time[i+1])
    return channels
#####

# >> filter_tx()
# Filters master_ch for each channel, no for each reception there's one
# transmission
def filter_tx(master_ch, reception_ch, cycle_time):
    master = master_ch.copy()
    COMM_th = 0.004 # comm period is 40 ticks (0.1 ms/tick)
    i = 0
    while i < len(reception_ch):
        tx_toggle_found = False
        j = i-1
        while not tx_toggle_found:
            j += 1
            if len(master) > j:
                if master[j]>reception_ch[i]:
                    j = j-1
                    tx_toggle_found = True
            else:
                tx_toggle_found = True
        
        # print('indexRx: ',i,' timeRx: ',reception_ch[i],' indexTx: ',j,' timeTx: ',master_ch[j],' tx_len: ',len(master_ch),' rx_len: ',len(reception_ch))#DEBUG
        # master changed case
        if len(master) > j:
            if master[j]>reception_ch[i] or reception_ch[i]-master[j]>COMM_th:
                #print('index:',i, 'rx_ch:',reception_ch[i])#DEBUG
                reception_ch.pop(i)
                #print('-1. rx_ch:',reception_ch[i-1],' tx_ch:',master_ch[i-1])#DEBUG
                #print(' 0. rx_ch:',reception_ch[i],' tx_ch:',master_ch[i])#DEBUG
                #print('+1. rx_ch:',reception_ch[i+1],' tx_ch:',master_ch[i+1])#DEBUG
                
                i -= 1
            else:
                for k in range(i,j):
                    master.pop(i)
        i += 1
    if len(master)>len(reception_ch):
        for i in range(len(master)-len(reception_ch)):
            master.pop()
    elif len(master)<len(reception_ch):
        for i in range(len(reception_ch)-len(master)):
            reception_ch.pop()
    return [master,reception_ch]

# >> COMM_delay()
# Gets time information about transmission and reception moments as input and
# calculates substraction between pairs of transmission and reception.
# Transmission channel is identified with the 'master' (str) input.
def COMM_delay(channels, master, cycle_time):
    master_ch = channels.pop(master)
    keys = channels.keys()
    comm_pairs = {i:filter_tx(master_ch.copy(),channels[i],cycle_time)\
                  for i in keys}

    # in case some toggles have been lost, we filter again here
    for k in keys:
        i = 0
        while i < min([len(comm_pairs[k][1]),len(comm_pairs[k][0])]):
            if comm_pairs[k][1][i] < comm_pairs[k][0][i]:
                comm_pairs[k][0].pop(i)
            else:
                i += 1
        comm_pairs[k][1] = comm_pairs[k][1][:len(comm_pairs[k][0])]
    
                
    comm_delay = {i:list(numpy.subtract(comm_pairs[i][1],comm_pairs[i][0]))\
                  for i in keys}
            
    return comm_delay

# >> MAIN
master = '0' # position of master channel in recording
cycle_time = 0.02881 # biggest basic cycle duration in seconds

# CAN1
comm_delay_CAN1 = COMM_delay(channel_division('CAN1_25Jan22.csv'),\
                             master,\
                             cycle_time)
print('CAN1')
for i in comm_delay_CAN1:
    print(f'{i}\t mean:{numpy.mean(comm_delay_CAN1[i]):.5f} std:{numpy.std(comm_delay_CAN1[i]):.5f}')
    print(f'\t max:{numpy.max(comm_delay_CAN1[i]):.5f} min:{numpy.min(comm_delay_CAN1[i]):.5f}')

# CAN2
comm_delay_CAN2 = COMM_delay(channel_division('CAN2_25Jan22.csv'),\
                             master,\
                             cycle_time)
print('CAN2')
for i in comm_delay_CAN2:
    print(f'{i}\t mean:{numpy.mean(comm_delay_CAN2[i]):.5f} std:{numpy.std(comm_delay_CAN2[i]):.5f}')
    print(f'\t max:{numpy.max(comm_delay_CAN2[i]):.5f} min:{numpy.min(comm_delay_CAN2[i]):.5f}') 

    
