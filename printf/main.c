#include <defs.h>
#include <syscalls.h>
#include "printf.h"

void key_empty()
{}

ulong main(uchar code, void* escb_ptr) {
  char buffer[128];
  sprintf(buffer,"4|sprintf|code arg is %d|||||close",code);
  req_usrmsg(buffer,(void*)key_empty);
  return 0;
}
