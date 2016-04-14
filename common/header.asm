        dc.l _main
        dc.l _table

        * create function table at end of PRG
        section	"BSS",bss
        public _table
_table: dcb.l   100,0
