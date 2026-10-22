/* Host mocks only: not Xbox CRT semantic equivalence. */
#include "bf_format_x86.h"
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
extern int32_t FUN_002eaa19(char *,int32_t,const char *,...);
extern void FUN_002eaefa(char *,const char *,...);
static int formatter,flushed,append_calls;
int32_t FUN_002edbde(void *opaque,const char *fmt,va_list args)
{
    BF_FormatSinkState *s=(BF_FormatSinkState *)opaque;
    char tmp[256];
    int n=vsnprintf(tmp,sizeof tmp,fmt,args);
    formatter++;
    assert(s->flags==UINT32_C(0x42));
    if (s->cursor!=NULL&&n>0) {
        uint32_t count=(uint32_t)n;
        if(count>s->remaining_bits)count=s->remaining_bits;
        memcpy(s->cursor,tmp,count);
        s->cursor+=count;
        s->remaining_bits-=count;
    }
    return n;
}
int32_t __flsbuf(int32_t value,BF_FormatSinkState *s)
{
    assert(value==0&&s->flags==UINT32_C(0x42));
    flushed++;
    return -1;
}
int32_t FUN_002ee515(void *opaque,const char *fmt,va_list args)
{
    BF_FormatSinkState *s=(BF_FormatSinkState *)opaque;
    assert(s->flags==UINT32_C(0x49)&&s->remaining_bits==4);
    assert(strcmp(s->initial_buffer,"seed")==0);
    assert(strcmp(fmt,"%d")==0&&va_arg(args,int)==34);
    append_calls++;
    return 2;
}
int main(void)
{
    char output[32]={0};
    assert(FUN_002eaa19(output,20,"hello %d",9)==7);
    assert(strcmp(output,"hello 9")==0&&formatter==1&&flushed==0);
    assert(FUN_002eaa19(output,5,"hello")==5);
    assert(formatter==2&&flushed==1);
    char seed[32]="seed";
    FUN_002eaefa(seed,"%d",34);
    assert(append_calls==1);
    puts("Two CRT variadic stack models: PASS (mock dependencies)");
    return 0;
}
