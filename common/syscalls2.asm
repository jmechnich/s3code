        macro APICall
        public _\1
        _\1:
        moveq #\2,d0
        trap #\3
        endm
        
        APICall status_keys,0,2
        APICall read_keys,1,2
        APICall write_mon,2,2
        APICall SYSCALL2_03,3,2
        APICall writes_mon,4,2
        APICall write_mon_sprintf,5,2
        APICall writes_mon_dword,6,2
        APICall status_mon,7,2
