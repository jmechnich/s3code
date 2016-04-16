#ifndef DEFS_H
#define DEFS_H

typedef unsigned char  uchar;
typedef unsigned long  ulong;
typedef unsigned short ushort;

/* CONSTANTS */

/* m_status arg1 */
#define MON_2 0x6ee
#define SYSX  0xea2
#define GENMA 0xee6
/* #define GENMA (0x880) maybe different in user program ? */

/* m_status arg2 (+offset) */
#define S_VAL 0x0
#define S_PSD 0x100
#define S_PRC 0x200

#define MMA_DISABLE 0x0
#define MMA_ENABLE  0x1

/* font size */
#define SYMBOL  0x0
#define SMALL   0x1
#define TINY_7  0x2
/*#define BOLD_14 0x3 ? */

#define ST_EXIT 0x1fb

/* clr_field args */
#define CU 0x1
/* #define RU ?
 * #define RD ?
 */
#define CD 0x4

/* get_disk args */
/* group */
#define Group_data 0x0

/* action */
#define G_clear_media 0x2
#define G_open_disk   0x20
#define G_root        0x30
#define G_file_number 0x31
#define G_file_dir    0x32

/* family */
#define F_disk 0xa


/* keys 0xaabb, aa - group, bb - key */
#define msk(key)   (0x1f1f & (key))
#define grou(key) ((0x1f00 & (key)) >> 8)

#define alpha      0x00ff

#define KEY_SNDS   0x0203

#define KEY_DISP_A 0x0501
#define KEY_DISP_B 0x0502
#define KEY_DISP_C 0x0503
#define KEY_DISP_D 0x0504
#define KEY_DISP_E 0x0505
#define KEY_DISP_F 0x0506
#define KEY_DISP_G 0x0507

#define NORMAL     0x0602

#define MINUS      0x0701
#define PLUS       0x0702
#define ENTER      0x0703
#define EXIT       0x0706
#define UNDO       0x0708

#define KEY_2      0x0732

#define number     0x0aff

#define UPD_KEY    0x1b01

#endif
