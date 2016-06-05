        macro APICall
        public _\1
        _\1:
        moveq #\2,d0
        trap #\3
        endm
        
        APICall status,$0,1
        APICall read,$0,1
        APICall write,$0,1
        APICall reads,$0,1
        APICall writes,$0,1
