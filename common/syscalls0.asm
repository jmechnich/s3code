        macro APICall
        public _\1
        _\1:
        moveq #\2,d0
        trap #\3
        endm
        
        APICall SYSCALL0_00,0,0
        APICall SYSCALL0_01,1,0
        APICall SYSCALL0_02,2,0
        APICall SYSCALL0_03,3,0
        APICall SYSCALL0_04,4,0
        APICall SYSCALL0_05,5,0
        APICall SYSCALL0_06,6,0
        APICall delay,7,0
        APICall memfree,8,0
        APICall newmem,9,0
        APICall freemem,$a,0
        APICall SYSCALL0_0B,$b,0
        APICall SYSCALL0_0C,$c,0
        APICall copy_dwords,$d,0
        APICall get_module_list,$e,0
        APICall get_other,$f,0
        APICall reboot,$10,0
        APICall req_usrmsg,$14,0
        APICall SYSCALL0_15,$15,0
        APICall SYSCALL0_16,$16,0
        APICall mt_leven,$18,0
        APICall mt_levdis,$19,0
