#include "bf_xnet_record_x86.h"
#include <assert.h>
#include <string.h>
#include <stdio.h>
int main(void) {
 uint8_t context[0x8b4]={0};
 uint8_t bytes[24];
 memset(bytes,0xee,sizeof bytes);
 uint8_t *record=bytes;
 context[0x16]=0xab;context[0x17]=0xcd;
 uint32_t count=0x1234;memcpy(context+0x8b0,&count,4);
 FUN_00347fe3(context,(uintptr_t)&record,UINT32_C(0xdeadbeef),0x17);
 assert(bytes[0]==0x45&&bytes[1]==0xab&&bytes[2]==0&&bytes[3]==0);
 assert(bytes[4]==0x12&&bytes[5]==0x35&&bytes[6]==0&&bytes[7]==0);
 assert(bytes[8]==0xcd&&bytes[9]==0x17&&bytes[10]==0xee&&bytes[11]==0xee);
 assert(bytes[12]==0&&bytes[13]==0&&bytes[14]==0&&bytes[15]==0);
 assert(bytes[16]==0xef&&bytes[17]==0xbe&&bytes[18]==0xad&&bytes[19]==0xde);
 memcpy(&count,context+0x8b0,4);assert(count==0x1235);
 puts("observed XNET 20-byte header fields: PASS (mock record)");
 return 0;
}
