/* Host-only original x86 operand word tests, not native networking. */
#include "bf_xbox_socket_abi_draft.h"
#include <stdio.h>
int main(void) {
  uint8_t bytes[8] = {0};
  const sockaddr *addr = (const sockaddr *)(const void *)bytes;
  for (uint32_t w=0; w<=0xffffu; ++w) {
    bytes[2]=(uint8_t)w; bytes[3]=(uint8_t)(w>>8);
    if (bf_xbox_sockaddr_word_at_2(addr)!=w) return 1;
  }
  const uint32_t samples[]={0,1,0x80000000u,0xffffffffu,
                            0x12345678u,0x01020304u,0xdeadbeefu,0x10000u};
  for (unsigned i=0; i<sizeof(samples)/sizeof(samples[0]); ++i) {
    uint32_t d=samples[i];
    bytes[4]=(uint8_t)d; bytes[5]=(uint8_t)(d>>8);
    bytes[6]=(uint8_t)(d>>16); bytes[7]=(uint8_t)(d>>24);
    if (bf_xbox_sockaddr_dword_at_4(addr)!=d) return 2;
  }
  puts("PASS: 65536 guest WORD patterns and eight DWORD patterns");
  return 0;
}
