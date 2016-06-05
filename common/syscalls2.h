#ifndef SYSCALLS2_H
#define SYSCALLS2_H

/* system calls for console reading and writing */

/* 0x0 */
int  status_keys();

/* 0x1 */
void read_keys();

/* 0x2 */
void write_mon(char c);

/* 0x3 */
int  SYSCALL2_03(char*s,short,void* data);

/* 0x4 */
void writes_mon(char* s);

/* 0x5 */
int  write_mon_sprintf(char* s, void* arg);

/* 0x6 */
void writes_mon_dword(int* s);

/* 0x7 */
int  status_mon(short,short);

#endif
