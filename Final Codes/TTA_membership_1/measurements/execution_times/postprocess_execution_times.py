def write_data(name, data):
    file = open(name, 'w')
    for i in data:
        file.write(str(i)+'\n')
    file.close()

def open_data(name):
    file = open(name, 'r')
    data = [float(line.strip()) for line in file]
    file.close()
    return data
    
def postprocess():
    import matplotlib.pyplot as plt

    labels = ['controller_1',\
              'controller_2',\
              'controller_3',\
              'input_generator',\
              'vehicle_emulator']
    key_names = ['data_board1.txt',\
                 'data_board2.txt',\
                 'data_board3.txt',\
                 'data_board4.txt',\
                 'data_board5.txt']    
    data_boards = {k:open_data(k) for k in key_names}
    x_axis = {k:[i for i in range(len(data_boards[k]))] for k in key_names}

    for i in range(len(key_names)):
        plt.plot(x_axis[key_names[i]],\
                 data_boards[key_names[i]],\
                 label=labels[i])
    
    plt.xlabel('ticks')
    plt.ylabel('execution time / s')
    plt.title('Execution times')
    plt.legend(loc='lower right')
    plt.show()
