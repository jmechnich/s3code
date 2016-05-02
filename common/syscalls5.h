#ifndef SYSCALLS5_H
#define SYSCALLS5_H

void
g_rect(GFRAME frame, char thickness[4], short flag);

void
g_drawtext(short font, ushort x, short y, char* str, short flag);

void
g_clear();

short
g_wherex();

short
g_wherey();

void
g_setcrs(GRECT r);

void
g_crson();

void
g_crsoff();

void
g_crshome();

void
g_gotoxy(short x, short y);

void
g_setclip(GFRAME f);

GFRAME*
g_getclip();

void
g_textbox(short width, short flag);

void
save_lcd(IMG_status* img);

void
restore_lcd(IMG_status* img);

void
g_drawtext_symbol(char* s, short flag, int update_crs);

void
g_drawtext_small(char* s, short flag, int update_crs);

void
g_drawtext_tiny7(char* s, short flag, int update_crs);

void
g_drawtext_tiny15(char* s, short flag, int update_crs);

void
g_drawtext_font4(char* s, short flag, int update_crs);

short
g_charwid(short font, char c);

short
g_charhei(short font, char c);

short
g_strlen(char* s);

void
g_setfont(short font);

short
g_getfont();

void
g_aligntext(char alignment, GRECT r, char* s, short flag);

void
API_1A_5(GFRAME f, short flag);

void
g_copybmp(char* dest, short dest_x, short dest_y, char* src, short x, short y, short w, short h, short flag);

void
g_cwrite(short x, short y, int w, char* s, short font);

void
g_recfill(GRECT r, short f);

short
g_getfontwidth();

void
g_copy_to(GRECT* r, char* buf);

void
g_copy_from(GRECT* r, char* buf);

#endif
