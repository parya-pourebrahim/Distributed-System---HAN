def desync_avg_max_min():
    # Constants
    COMM_threshold = 40 # COMM task period: 40 ticks (4 ms)

    # HANTune parameter to enable the main loop
    scriptON = getSignal('script_run_s')
    
    # CONTROLLER
    # Connect to model signals
    desync0 = getSignal('Desync_Sync_bc0_s')
    desync1 = getSignal('Desync_Sync_bc1_s')
    # Signals sync at BC0
    d0_avg = getSignal('desync0_avg')
    d0_avg.value = desync0.value
    d0_max = getSignal('desync0_max')
    d0_max.value = desync0.value
    d0_min = getSignal('desync0_min')
    d0_min.value = desync0.value
    # Signals sync at BC1
    d1_avg = getSignal('desync1_avg')
    d1_avg.value = desync1.value
    d1_max = getSignal('desync1_max')
    d1_max.value = desync1.value
    d1_min = getSignal('desync1_min')
    d1_min.value = desync1.value

    # INPUT GENERATOR
    # Connect to model signals
    desync0_ing = getSignal('Desync_Sync_bc0_ing_s')
    desync1_ing = getSignal('Desync_Sync_bc1_ing_s')
    # Signals sync at BC0
    d0_avg_ing = getSignal('desync0_avg_ing')
    d0_avg_ing.value = desync0_ing.value
    d0_max_ing = getSignal('desync0_max_ing')
    d0_max_ing.value = desync0_ing.value
    d0_min_ing = getSignal('desync0_min_ing')
    d0_min_ing.value = desync0_ing.value
    # Signals sync at BC1
    d1_avg_ing = getSignal('desync1_avg_ing')
    d1_avg_ing.value = desync1_ing.value
    d1_max_ing = getSignal('desync1_max_ing')
    d1_max_ing.value = desync1_ing.value
    d1_min_ing = getSignal('desync1_min_ing')
    d1_min_ing.value = desync1_ing.value

    # VEHICLE EMULATOR
    # Connect to model signals
    desync0_vem = getSignal('Desync_Sync_bc0_vem_s')
    desync1_vem = getSignal('Desync_Sync_bc1_vem_s')
    # Signals sync at BC0
    d0_avg_vem = getSignal('desync0_avg_vem')
    d0_avg_vem.value = desync0_vem.value
    d0_max_vem = getSignal('desync0_max_vem')
    d0_max_vem.value = desync0_vem.value
    d0_min_vem = getSignal('desync0_min_vem')
    d0_min_vem.value = desync0_vem.value
    # Signals sync at BC1
    d1_avg_vem = getSignal('desync1_avg_vem')
    d1_avg_vem.value = desync1_vem.value
    d1_max_vem = getSignal('desync1_max_vem')
    d1_max_vem.value = desync1_vem.value
    d1_min_vem = getSignal('desync1_min_vem')
    d1_min_vem.value = desync1_vem.value
    
    # MAIN LOOP
    count0 = 0
    count1 = 0   
    count0_ing = 0
    count1_ing = 0
    count0_vem = 0
    count1_vem = 0 
    while scriptON.value: # script_run Parameter controlled from HANTune
        # sync0
        desync0_aux = desync0.value
        if (desync0_aux < COMM_threshold) and (desync0_aux > (-1)*COMM_threshold):
            count0 += 1
            d0_avg.value = (d0_avg.value*count0 + desync0_aux)/(count0 + 1)
            if desync0_aux > d0_max.value:
                d0_max.value = desync0_aux
            if desync0_aux < d0_min.value:
                d0_min.value = desync0_aux
        # sync1
        desync1_aux = desync1.value
        if (desync1_aux < COMM_threshold) and (desync1_aux > (-1)*COMM_threshold):
            count1 += 1
            d1_avg.value = (d1_avg.value*count1 + desync1_aux)/(count1 + 1)
            if desync1_aux > d1_max.value:
                d1_max.value = desync1_aux
            if desync1_aux < d1_min.value:
                d1_min.value = desync1_aux
        # sync0_ing
        desync0_ing_aux = desync0_ing.value
        if (desync0_ing_aux < COMM_threshold) and (desync0_ing_aux > (-1)*COMM_threshold):
            count0_ing += 1
            d0_avg_ing.value = (d0_avg_ing.value*count0_ing + desync0_ing_aux)\
                               /(count0_ing + 1)
            if desync0_ing_aux > d0_max_ing.value:
                d0_max_ing.value = desync0_ing_aux
            if desync0_ing_aux < d0_min_ing.value:
                d0_min_ing.value = desync0_ing_aux
        # sync1_ing
        desync1_ing_aux = desync1_ing.value
        if (desync1_ing_aux < COMM_threshold) and (desync1_ing_aux > (-1)*COMM_threshold):
            count1_ing += 1
            d1_avg_ing.value = (d1_avg_ing.value*count1_ing + desync1_ing_aux)\
                               /(count1_ing + 1)
            if desync1_ing_aux > d1_max_ing.value:
                d1_max_ing.value = desync1_ing_aux
            if desync1_ing_aux < d1_min_ing.value:
                d1_min_ing.value = desync1_ing_aux
        # sync0_vem
        desync0_vem_aux = desync0_vem.value
        if (desync0_vem_aux < COMM_threshold) and (desync0_vem_aux > (-1)*COMM_threshold):
            count0_vem += 1
            d0_avg_vem.value = (d0_avg_vem.value*count0_vem + desync0_vem_aux)\
                               /(count0_vem + 1)
            if desync0_vem_aux > d0_max_vem.value:
                d0_max_vem.value = desync0_vem_aux
            if desync0_vem_aux < d0_min_vem.value:
                d0_min_vem.value = desync0_vem_aux
        # sync1_vem
        desync1_vem_aux = desync1_vem.value
        if (desync1_vem_aux < COMM_threshold) and (desync1_vem_aux > (-1)*COMM_threshold):
            count1_vem += 1
            d1_avg_vem.value = (d1_avg_vem.value*count1_vem + desync1_vem_aux)\
                               /(count1_vem + 1)
            if desync1_vem_aux > d1_max_vem.value:
                d1_max_vem.value = desync1_vem_aux
            if desync1_vem_aux < d1_min_vem.value:
                d1_min_vem.value = desync1_vem_aux


desync_avg_max_min()
