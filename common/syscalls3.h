#ifndef SYSCALLS3_H
#define SYSCALLS3_H

/* user interrupt vectors */

/* 0x0 */
int SYSCALL3_00(short idx,unsigned int addr,short enable_interrupts);

/* 0x1 */
int SYSCALL3_01(short idx,unsigned int addr);

/* 0x2 */
int SYSCALL3_02(short idx,short enable);

/* 0x3 */
int SYSCALL3_03(short idx);

/* 0x4 */
int SYSCALL3_04(short idx);

/* 0x5 */
int SYSCALL3_05(short idx);

/* 0x6 */
int SYSCALL3_06(short);

/* 0x7 */
int SYSCALL3_07(char);

/* 0x8 */
int SYSCALL3_08(char);

/* 0x9 */
int SYSCALL3_09(char);

/* 0xa */
int SYSCALL3_0A(char);

/* 0xb */
int SYSCALL3_0B(char);

/* 0xc */
int SYSCALL3_0C(char);

/* 0xd */
int SYSCALL3_0D(char,short);

#endif
