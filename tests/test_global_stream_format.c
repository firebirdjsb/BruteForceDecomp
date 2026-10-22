/* Host-mocked function linkage: does NOT verify Xbox CRT behavior. */
#include "bf_format_x86.h"
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
unsigned char DAT_003b69a8;
extern int32_t FID_conflict__wprintf(const char *,...);
static unsigned before,formatted,after;
static char output[60];
uint32_t __stbuf(void *stream)
{
    assert(stream==&DAT_003b69a8);before++;
    return UINT32_C(0x12345678);
}
int32_t FUN_002edbde(void *stream,const char *fmt,va_list arguments)
{
    assert(stream==&DAT_003b69a8&&before==formatted+1);
    formatted++;return (int32_t)vsnprintf(output,sizeof output,fmt,arguments);
}
void __ftbuf(uint32_t previous,void *stream)
{
    assert(previous==UINT32_C(0x12345678)&&stream==&DAT_003b69a8);
    assert(before==after+1);after++;
}
int main(void)
{
    const int32_t n=FID_conflict__wprintf("hi %u %s",4U,"Xbox");
    assert(n==9&&strcmp(output,"hi 4 Xbox")==0);
    assert(before==1&&formatted==1&&after==1);
    puts("CRT stream vararg forwarding: PASS (mocked only)");
    return 0;
}
