	ORG	$1dfff6

filemagic:
	dc.w	$101                	; $0  (01 01)
	dc.w	$10b                	; $2  (01 0b)
	dc.w	$201                	; $4  (02 01)

base_address:
	dc.l	$1e0000             	; $6  (00 1e 00 00)

start_address:
	dc.l	$1e00cc             	; $a  (00 1e 00 cc)

table_address:
	dc.l	$1e010a             	; $e  (00 1e 01 0a)

API_0_0:
	moveq	#0,d0               	; $12  (70 00)
	trap	#$0                 	; $14  (4e 40)
	moveq	#1,d0               	; $16  (70 01)

API_1_0:
	trap	#$0                 	; $18  (4e 40)

API_2_0:
	moveq	#2,d0               	; $1a  (70 02)
	trap	#$0                 	; $1c  (4e 40)

API_3_0:
	moveq	#3,d0               	; $1e  (70 03)
	trap	#$0                 	; $20  (4e 40)

API_5_0:
	moveq	#5,d0               	; $22  (70 05)
	trap	#$0                 	; $24  (4e 40)

API_6_0:
	moveq	#6,d0               	; $26  (70 06)
	trap	#$0                 	; $28  (4e 40)

API_7_0:
	moveq	#7,d0               	; $2a  (70 07)
	trap	#$0                 	; $2c  (4e 40)

API_8_0:
	moveq	#8,d0               	; $2e  (70 08)
	trap	#$0                 	; $30  (4e 40)

newmem:
	moveq	#9,d0               	; $32  (70 09)
	trap	#$0                 	; $34  (4e 40)

freemem:
	moveq	#10,d0              	; $36  (70 0a)
	trap	#$0                 	; $38  (4e 40)

API_B_0:
	moveq	#11,d0              	; $3a  (70 0b)
	trap	#$0                 	; $3c  (4e 40)

API_C_0:
	moveq	#12,d0              	; $3e  (70 0c)
	trap	#$0                 	; $40  (4e 40)

API_D_0:
	moveq	#13,d0              	; $42  (70 0d)
	trap	#$0                 	; $44  (4e 40)

API_E_0:
	moveq	#14,d0              	; $46  (70 0e)
	trap	#$0                 	; $48  (4e 40)

API_F_0:
	moveq	#15,d0              	; $4a  (70 0f)
	trap	#$0                 	; $4c  (4e 40)

reboot:
	moveq	#16,d0              	; $4e  (70 10)
	trap	#$0                 	; $50  (4e 40)

req_usrmsg:
	moveq	#20,d0              	; $52  (70 14)
	trap	#$0                 	; $54  (4e 40)

API_15_0:
	moveq	#21,d0              	; $56  (70 15)
	trap	#$0                 	; $58  (4e 40)

API_16_0:
	moveq	#22,d0              	; $5a  (70 16)
	trap	#$0                 	; $5c  (4e 40)

mt_leven:
	moveq	#24,d0              	; $5e  (70 18)
	trap	#$0                 	; $60  (4e 40)

mt_levdis:
	moveq	#25,d0              	; $62  (70 19)
	trap	#$0                 	; $64  (4e 40)

returnzero:
	moveq	#0,d0               	; $66  (70 00)
	rts	                    	; $68  (4e 75)

m_status:
	moveq	#0,d0               	; $6a  (70 00)
	trap	#$1                 	; $6c  (4e 41)

API_1_1:
	moveq	#1,d0               	; $6e  (70 01)
	trap	#$1                 	; $70  (4e 41)

API_2_1:
	moveq	#2,d0               	; $72  (70 02)
	trap	#$1                 	; $74  (4e 41)

API_3_1:
	moveq	#3,d0               	; $76  (70 03)
	trap	#$1                 	; $78  (4e 41)

API_4_1:
	moveq	#4,d0               	; $7a  (70 04)
	trap	#$1                 	; $7c  (4e 41)

free_keybuff:
	moveq	#0,d0               	; $7e  (70 00)
	trap	#$2                 	; $80  (4e 42)

API_1_2:
	moveq	#1,d0               	; $82  (70 01)
	trap	#$2                 	; $84  (4e 42)

API_2_2:
	moveq	#2,d0               	; $86  (70 02)
	trap	#$2                 	; $88  (4e 42)

API_3_2:
	moveq	#3,d0               	; $8a  (70 03)
	trap	#$2                 	; $8c  (4e 42)

API_4_2:
	moveq	#4,d0               	; $8e  (70 04)
	trap	#$2                 	; $90  (4e 42)

API_5_2:
	moveq	#5,d0               	; $92  (70 05)
	trap	#$2                 	; $94  (4e 42)

API_6_2:
	moveq	#6,d0               	; $96  (70 06)
	trap	#$2                 	; $98  (4e 42)

API_7_2:
	moveq	#7,d0               	; $9a  (70 07)
	trap	#$2                 	; $9c  (4e 42)

API_0_3:
	moveq	#0,d0               	; $9e  (70 00)
	trap	#$3                 	; $a0  (4e 43)

API_1_3:
	moveq	#1,d0               	; $a2  (70 01)
	trap	#$3                 	; $a4  (4e 43)

API_2_3:
	moveq	#2,d0               	; $a6  (70 02)
	trap	#$3                 	; $a8  (4e 43)

API_3_3:
	moveq	#3,d0               	; $aa  (70 03)
	trap	#$3                 	; $ac  (4e 43)

API_4_3:
	moveq	#4,d0               	; $ae  (70 04)
	trap	#$3                 	; $b0  (4e 43)

API_5_3:
	moveq	#5,d0               	; $b2  (70 05)
	trap	#$3                 	; $b4  (4e 43)

API_6_3:
	moveq	#6,d0               	; $b6  (70 06)
	trap	#$3                 	; $b8  (4e 43)

API_7_3:
	moveq	#7,d0               	; $ba  (70 07)
	trap	#$3                 	; $bc  (4e 43)

API_8_3:
	moveq	#8,d0               	; $be  (70 08)
	trap	#$3                 	; $c0  (4e 43)

API_9_3:
	moveq	#9,d0               	; $c2  (70 09)
	trap	#$3                 	; $c4  (4e 43)

API_A_3:
	moveq	#10,d0              	; $c6  (70 0a)
	trap	#$3                 	; $c8  (4e 43)

API_B_3:
	moveq	#11,d0              	; $ca  (70 0b)
	trap	#$3                 	; $cc  (4e 43)

API_C_3:
	moveq	#12,d0              	; $ce  (70 0c)
	trap	#$3                 	; $d0  (4e 43)

lab_d2:
	rts	                    	; $d2  (4e 75)
	nop	                    	; $d4  (4e 71)

start:
	pea.l	-6(pc)              	; $d6  (48 7a ff fa), @lab_d2
	pea.l	str_ee              	; $da  (48 79 00 1e 00 e4)
	jsr	req_usrmsg          	; $e0  (4e b9 00 1e 00 48)
	moveq	#0,d0               	; $e6  (70 00)
	addq.w	#$8,a7              	; $e8  (50 4f)
	rts	                    	; $ea  (4e 75)

pad_ec:
	dc.w	$0                  	; $ec  (00 00)

str_ee:
	dc.b	'4|HELLO WORLD|Hello, world!|||||close',0	; $ee  ()

table:
	dcb.l	100,$0              	; $114  (00 00 00 00)
