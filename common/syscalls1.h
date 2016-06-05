#ifndef SYSCALLS1_H
#define SYSCALLS1_H

/* 0x0 */
int status(void* module,ushort opcode,int operand);
/* calls module->status_mod(opcode, operand) */

/* 0x1 */
int read(void* module);
/* calls module->read_mod() */

/* 0x2 */
int write(void* module,int buf);
/* calls module->write_mod(buf) */

/* 0x3 */
int reads(void* module,char* buf);
/* calls module->read_mod() repeatedly until buf[i] is 0 */

/* 0x4 */
int writes(void* module,char* buf);
/* calls module->write repeatedly until buf[i] is 0 */

#endif
