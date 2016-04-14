#include <defs.h>
#include <syscalls.h>

void key_empty() {}

ulong main(uchar code, void* escb_ptr) {
  req_usrmsg("4|HELLO WORLD|Hello, world!|||||close",(void*)&key_empty);
  return 0;
}
