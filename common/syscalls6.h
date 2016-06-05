#ifndef SYSCALLS6_H
#define SYSCALLS6_H

/* trap #6 */
/* handles key inputs */
#if defined(__GNUC__)
#define GET() asm("movem.l %d0-%a6,-(%sp)\n\t" \
                  "trap #6\n\t" \
                  "movem.l (%sp)+,%d0-%a6\n")
#elif defined(__VBCC__)
void GET()="\tmovem.l d0-a6,-(sp)\n\ttrap #6\n\tmovem.l (sp)+,d0-a6\n";
#else
#error "Compiler not supported."
#endif

#endif
