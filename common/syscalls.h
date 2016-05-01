#ifndef SYSCALLS_H
#define SYSCALLS_H

#include "defs.h"

/* MIOS syscalls, most documentation from
   https://groups.google.com/d/topic/gem-s-series/Ejq-GB1tNBY/discussion
*/

/* trap 0, d0 0x0-0x8 (purpose unknown) */

/* trap 0, d0 0x9  */
void  *newmem(ulong count);
/* allocates a block of memory of size count and returns a pointer to it */

/* trap 0, d0 0xa  */
void   freemem(void* ptr);
/* frees a block of memory at address ptr */

/* trap 0, d0 0xb-0xd (purpose unknown) */

/* trap 0, d0 0xe  */
char  *API_E_0();
/* returns a pointer in low RAM related to m_status' first parameter /*

/* trap 0, d0 0xf  */
char  *API_F_0();
/* returns a pointer in low RAM (purpose unknown) */

/* trap 0, d0 0x10 */
void   reboot();
/* calls a function that falls through to a place that's reached *very* early
   in boot
*/

/* trap 0, d0 0x11-0x13 (purpose unknown) */

/* trap 0, d0 0x14 */
void   req_usrmsg(char *msg,void *cb);
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

/* trap 0, d0 0x13-0x17 (purpose unknown) */

/* trap 0, d0 0x18 */
char   mt_leven(char value);
/* enable multitasking level */

/* trap 0, d0 0x19 */
char   mt_levdis(char value);
/* disable multitasking level */

short  returnzero();

/* trap 1, d0 0x0 */
long   m_status(void* base,ushort opcode,long operand);
/* calls the function pointed to by base+8, passing opcode and operand
   as parameters. If this function returns -1, do some other stuff too,
   not sure what. The operand is actually an optional parameter,
   sometimes it's a pointer, sometimes not.
*/

/* trap 1, d0 0x1 */
long   API_1_1(void* base);
/* same as m_status, base+0x10, no parameters */

/* trap 1, d0 0x2 */
long   API_2_1(void* base,long arg);
/* same as m_status, base+0x14, one parameter */

/* trap 1, d0 0x3 */
long   API_3_1(void* base,long arg1,long arg2);
/* same as m_status, base+0x10, arg1 passed in a0, arg2 passed in a3 */

/* trap 1, d0 0x4 */
long   API_4_1(void* base,char* arg);
/* same as m_status, base+0x14, arg passed as (long)(*arg++) */

/* trap 2, d0 0x0 */
char   free_keybuff();

/* trap 2, d0 0x1-0x7 (purpose unknown) */

/* trap 3, d0 0x0-0xc (purpose unknown) */

#endif
