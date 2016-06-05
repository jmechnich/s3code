        macro APICall
        public _\1
        _\1:
        moveq #\2,d0
        trap #\3
        endm
        
        APICall SYSCALL3_00,0,3
        APICall SYSCALL3_01,1,3
        APICall SYSCALL3_02,2,3
        APICall SYSCALL3_03,3,3
        APICall SYSCALL3_04,4,3
        APICall SYSCALL3_05,5,3
        APICall SYSCALL3_06,6,3
        APICall SYSCALL3_07,7,3
        APICall SYSCALL3_08,8,3
        APICall SYSCALL3_09,9,3
        APICall SYSCALL3_0A,$a,3
        APICall SYSCALL3_0B,$b,3
        APICall SYSCALL3_0C,$c,3
        APICall SYSCALL3_0D,$d,3
