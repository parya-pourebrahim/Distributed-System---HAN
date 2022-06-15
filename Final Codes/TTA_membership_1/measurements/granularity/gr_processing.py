def open_file(name):
    file = open(name, 'r')
    data = [(line.strip()).split(',') for line in file]
    data.pop(0) # remove header
    file.close()
    return data

def get_granularity(data):
    times = [float(i[0]) for i in data]
    gr = [times[i+1] - times[i] for i in range(len(times)-1)]
    return gr

def write_file(name, data):
    file = open(name, 'w')
    for i in data:
        file.write(str(i)+'\n')
    file.close()

def postprocess():
    filter_threshold = 1e-6
    plot_len = 10000
    
    data_id1 = open_file('gr_id1_0_1ms.txt')
    data_id1 = [float(i[0]) for i in data_id1[:plot_len]]
    
    i = 0
    while i < plot_len:
        if data_id1[i] < filter_threshold:
            data_id1.pop(i)
        else:
            if len(data_id1) > i+1:
                i += 1
            else:
                break
            
    data_id2 = open_file('gr_id2_0_1ms.txt')
    data_id2 = [float(i[0]) for i in data_id2[:plot_len]]
    i = 0
    while i < plot_len:
        if data_id2[i] < filter_threshold:
            data_id2.pop(i)
        else:
            if len(data_id2) > i+1:
                i += 1
            else:
                break
            
    data_id3 = open_file('gr_id3_0_1ms.txt')
    data_id3 = [float(i[0]) for i in data_id3[:plot_len]]
    i = 0
    while i < plot_len:
        if data_id3[i] < filter_threshold:
            data_id3.pop(i)
        else:
            if len(data_id3) > i+1:
                i += 1
            else:
                break
            
    data_id4 = open_file('gr_id4_0_1ms.txt')
    data_id4 = [float(i[0]) for i in data_id4[:plot_len]]
    i = 0
    while i < plot_len:
        if data_id4[i] < filter_threshold:
            data_id4.pop(i)
        else:
            if len(data_id4) > i+1:
                i += 1
            else:
                break
            
    data_id5 = open_file('gr_id5_0_1ms.txt')
    data_id5 = [float(i[0]) for i in data_id5[:plot_len]]
    i = 0
    while i < plot_len:
        if data_id5[i] < filter_threshold:
            data_id5.pop(i)
        else:
            if len(data_id5) > i+1:
                i += 1
            else:
                break

    import numpy as np
    keys = ['controller_1',
            'controller_2',
            'controller_3',
            'input_generator',
            'vehicle_emulator']
    data = {'controller_1': data_id1,
            'controller_2': data_id2,
            'controller_3': data_id3,
            'input_generator': data_id4,
            'vehicle_emulator': data_id5}
    for k in keys:
        print(k,
              ' mean = ', np.mean(data[k]),
              ' max = ', max(data[k]),
              ' min = ', min(data[k]))

    all_data = []
    for k in keys:
        for i in data[k]:
            all_data.append(i)
            
    print('whole set, '
          'mean = ', np.mean(all_data),
          ' max = ', max(all_data),
          ' min = ', min(all_data))

    import matplotlib.pyplot as plt

    x_axis = {k:[i for i in range(len(data[k]))] for k in keys}    
    for k in keys:
        plt.plot(x_axis[k], data[k], label = k)
        
    plt.legend(loc='lower right')
    plt.xlabel('ticks')
    plt.ylabel('granularity time/s')
    plt.title('Granularity measurement')
    plt.show()

# MAIN
def main():
    import numpy as np
    import matplotlib.pyplot as plt

    file_name = 'gr_id5_0_1ms.csv'

    file_data = open_file(file_name)
    gr_data = get_granularity(file_data)
    print(f'mean: {np.mean(gr_data):.8f},\
            max: {np.max(gr_data):.8f},\
            min: {np.min(gr_data):.8f}')

    x_axis = [i for i in range(len(gr_data))]
    plt.plot(x_axis, gr_data)
    plt.xlabel('Time/ticks')
    plt.ylabel('Logic level')
    plt.title('Granularity signal')
    plt.show()
