def show_signal(signal_name):
    signal = getSignal(signal_name)
    while True:
        print(signal.value)

show_signal('simulation_time')
