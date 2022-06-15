def desync_avg_max_min_init():
    # bc0
    createSignal('desync0_avg')
    createSignal('desync0_max')
    createSignal('desync0_min')
    # bc1
    createSignal('desync1_avg')
    createSignal('desync1_max')
    createSignal('desync1_min')
    # bc0_ing
    createSignal('desync0_avg_ing')
    createSignal('desync0_max_ing')
    createSignal('desync0_min_ing')
    # bc1_ing
    createSignal('desync1_avg_ing')
    createSignal('desync1_max_ing')
    createSignal('desync1_min_ing')
    # bc0_vem
    createSignal('desync0_avg_vem')
    createSignal('desync0_max_vem')
    createSignal('desync0_min_vem')
    # bc1_vem
    createSignal('desync1_avg_vem')
    createSignal('desync1_max_vem')
    createSignal('desync1_min_vem')

desync_avg_max_min_init()
