        macro APICall
        public _\1
        _\1:
        moveq #\2,d0
        trap #\3
        endm
        

        APICall API_0_0,0,0
        APICall API_1_0,1,0
        APICall API_2_0,2,0
        APICall API_3_0,3,0
        APICall API_5_0,5,0
        APICall API_6_0,6,0
        APICall API_7_0,7,0
        APICall API_8_0,8,0
        APICall newmem,9,0
        APICall freemem,$a,0
        APICall API_B_0,$b,0
        APICall API_C_0,$c,0
        APICall API_D_0,$d,0
        APICall API_E_0,$e,0
        APICall API_F_0,$f,0
        APICall reboot,$10,0
        APICall req_usrmsg,$14,0
        APICall API_15_0,$15,0
        APICall API_16_0,$16,0
        APICall mt_leven,$18,0
        APICall mt_levdis,$19,0

        public _returnzero
_returnzero:
        moveq #0,d0
        rts
        
        APICall m_status,0,1
        APICall API_1_1,1,1
        APICall API_2_1,2,1
        APICall API_3_1,3,1
        APICall API_4_1,4,1
        
        APICall free_keybuff,0,2
        APICall API_1_2,1,2
        APICall API_2_2,2,2
        APICall API_3_2,3,2
        APICall API_4_2,4,2
        APICall API_5_2,5,2
        APICall API_6_2,6,2
        APICall API_7_2,7,2

        APICall API_0_3,0,3
        APICall API_1_3,1,3
        APICall API_2_3,2,3
        APICall API_3_3,3,3
        APICall API_4_3,4,3
        APICall API_5_3,5,3
        APICall API_6_3,6,3
        APICall API_7_3,7,3
        APICall API_8_3,8,3
        APICall API_9_3,9,3
        APICall API_A_3,$a,3
        APICall API_B_3,$b,3
        APICall API_C_3,$c,3
