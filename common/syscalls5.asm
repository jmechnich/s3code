        macro APICall
        public _\1
        _\1:
        moveq #\2,d0
        trap #\3
        endm
        
        APICall g_rect,$0,5
        APICall g_drawtext,$1,5
        APICall API_2_5,$2,5
        APICall g_wherex,$3,5
        APICall g_wherey,$4,5
        APICall API_5_5,$5,5
        APICall g_crson,$6,5
        APICall g_crsoff,$7,5
        APICall API_8_5,$8,5
        APICall g_gotoxy,$9,5
        APICall g_setclip,$a,5
        APICall API_B_5,$b,5
        APICall API_C_5,$c,5
        APICall API_D_5,$d,5
        APICall restore_lcd,$e,5
        APICall API_F_5,$f,5
        APICall API_10_5,$10,5
        APICall API_11_5,$11,5
        APICall API_12_5,$12,5
        APICall API_13_5,$13,5
        APICall API_14_5,$14,5
        APICall g_charhei,$15,5
        APICall g_strlen,$16,5
        APICall g_setfont,$17,5
        APICall g_getfont,$18,5
        APICall API_19_5,$19,5
        APICall API_1A_5,$1a,5
        APICall API_1B_5,$1b,5
        APICall g_cwrite,$1c,5
        APICall g_recfill,$1d,5
        APICall API_1E_5,$1e,5
        APICall API_1F_5,$1f,5
        APICall API_20_5,$20,5
