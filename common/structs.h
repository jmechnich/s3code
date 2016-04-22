#ifndef STRUCTS_H
#define STRUCTS_H

struct ECSB
{
  /* 0x00 */
  ulong unknown_00;
  /* 0x04: 'real' entry point */
  ulong (*e_entry)();
  /* 0x08-0x09: unknown */
  ushort unknown_08;
  /* 0x10: program counter ? */
  ulong _PC;
  /* 0x14: zero-terminated array of key identifiers */
  ushort* key_ent;
  /* 0x18: zero-terminated array of key identifiers */
  ushort* key_run;
  /* 0x1c:  also used as char (0x1d)  */
  ushort KEY;
  /* 0x1e: */
  ushort flags;
  /* 0x20: */
  ulong (*e_open)();
  /* 0x24-0x65: unknown */
  ushort unknown_24[33];
  /* 0x66: */
  ulong (**fu_table)();
  /* 0x6a-0x6d: unknown */
  ulong unknown_6a;
  /* 0x6e: */
  ushort family;
  /* 0x6f: */
  uchar user_nr;
  /* 0x70-0x7a: unknown */
  ushort unknown_70;
  /* 0x72-0x73: */
  char work_groups[2];
  /* 0x74-0x7a: unknown */
  char unknown_71[7];
  /* 0x7b-0x81: might be larger */
  char name[7];
  /* 0x82 */
  ushort unknown_82;
};
/* size: 0x84 */

struct F_HEAD {
  /* 0x0: */
  char name[8];
  /* 0x8 */
  char ext[3];
};

#endif
