#ifndef SYSCALLS0_H
#define SYSCALLS0_H

/* 0x0 */
void  SYSCALL0_00(void* module,int,char);

/* 0x1  */
void  SYSCALL0_01(void* m1, short flag, void* m2);

/* 0x2  */
void  SYSCALL0_02(int arg);

/* 0x3  */
short SYSCALL0_03(void* mod);

/* 0x4  */
short SYSCALL0_04();
/* does nothing (returns 0) */

/* 0x5  */
void  SYSCALL0_05(short modidx);
/* set key module (~stdin?) */

/* 0x6  */
void  SYSCALL0_06(short modidx);
/* set mon module (~stdout?) */

/* 0x7  */
void  delay(short ms);
/* most likely milliseconds */

/* 0x8  */
int   memfree();
/* returns *0x43e-*0x442 */

/* 0x9  */
void* newmem(ulong count);
/* allocates a block of memory of size count and returns a pointer to it */

/* 0xa  */
void  freemem(void* ptr);
/* frees a block of memory at address ptr */

/* 0xb */
int   SYSCALL0_0B(int arg1, int arg2);

/* 0xc */
int   SYSCALL0_0C();

/* 0xd */
int   copy_dwords(int* dest,int* src,int n);

/* 0xe  */
void* get_module_list();
/* returns a pointer to the module list /*

/* 0xf  */
void* get_other();
/* returns a pointer to the global parameter table */

/* 0x10 */
void  reboot();
/* performs hard reset */

/* 0x11 */
/* int   SYSCALL0_11(); */
/* does nothing (returns 0) -> not implemented */

/* 0x12 */
/* int   SYSCALL0_12(); */
/* does nothing (returns 0) -> not implemented */

/* 0x13 */
/* int   SYSCALL0_13(); */
/* does nothing (returns 0) -> not implemented */

/* 0x14 */
void  req_usrmsg(char *msg,void *cb);
/* shows message box
   char *msg: message string of format
              "ICON_ID|HEADING|BODY|KEY1|KEY2|KEY3|KEY4|KEY5"
              ICON_ID is a number to choose the icon from
              1 (error)
              2 (warning)
              3 (question)
              4 (fatal)
              5 (information)
              6 (tool)
              HEADING and BODY set the text for the respective message areas
              KEY1-5 set the texts next to the keys right of the display
   void *cb:  callback function after key press
              has one argument, char key
              it contains the number of the pressed key (1-5)
*/

/* 0x15 */
int   SYSCALL0_15(int arg);
/* calls mod_mon->status_mod(0x20,arg) */

/* 0x16 */
int   SYSCALL0_16(int arg, char flag);
/* frequently used function, no clue what it does */

/* 0x17 */
/* int   SYSCALL0_17(); */
/* does nothing (returns 0) -> not implemented */

/* 0x18 */
char  mt_leven(char value);
/* enable multitasking level */

/* 0x19 */
char  mt_levdis(char value);
/* disable multitasking level */

#endif
