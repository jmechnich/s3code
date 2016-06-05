#ifndef SYSCALLS5_H
#define SYSCALLS5_H

#include "types.h"

/* 0x0 */
void
g_rect(GFRAME frame, char thickness[4], short flag);

/* 0x1 */
void
g_drawtext(short font, ushort x, short y, char* str, short flag);

/* 0x2 */
void
g_clear();

/* 0x3 */
short
g_wherex();

/* 0x4 */
short
g_wherey();

/* 0x5 */
void
g_setcrs(GRECT r);

/* 0x6 */
void
g_crson();

/* 0x7 */
void
g_crsoff();

/* 0x8 */
void
g_crshome();

/* 0x9 */
void
g_gotoxy(short x, short y);

/* 0xa */
void
g_setclip(GFRAME f);

/* 0xb */
GFRAME*
g_getclip();

/* 0xc */
void
g_textbox(short width, short flag);

/* 0xd */
void
save_lcd(IMG_status* img);

/* 0xe */
void
restore_lcd(IMG_status* img);

/* 0xf */
void
g_drawtext_symbol(char* s, short flag, int update_crs);

/*  0x10 */
void
g_drawtext_small(char* s, short flag, int update_crs);

/* 0x11 */
void
g_drawtext_tiny7(char* s, short flag, int update_crs);

/* 0x12 */
void
g_drawtext_tiny15(char* s, short flag, int update_crs);

/* 0x13 */
void
g_drawtext_bold14(char* s, short flag, int update_crs);

/* 0x14 */
short
g_charwid(short font, char c);

/* 0x15 */
short
g_charhei(short font, char c);

/* 0x16 */
short
g_strlen(char* s);

/* 0x17 */
void
g_setfont(short font);

/* 0x18 */
short
g_getfont();

/* 0x19 */
void
g_aligntext(char alignment, GRECT r, char* s, short flag);

/* 0x1a */
void
SYSCALL5_1A(GFRAME f, short flag);

/* 0x1b */
void
g_copybmp(char* dest, short dest_x, short dest_y, char* src,
          short x, short y, short w, short h, short flag);

/* 0x1c */
void
g_cwrite(short x, short y, int w, char* s, short font);

/* 0x1d */
void
g_recfill(GRECT r, short f);

/* 0x1e */
short
g_getfontwidth();

/* 0x1f */
void
g_copy_to(GRECT* r, char* buf);

/* 0x20 */
void
g_copy_from(GRECT* r, char* buf);

#endif
