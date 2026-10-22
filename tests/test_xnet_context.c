/* Host-only mock of the x86 ECX-context forwarding shape, not an Xbox test. */
#include <stdint.h>
#include <stddef.h>
#include <assert.h>
#include <stdio.h>

#if defined(_MSC_VER) && defined(_M_IX86)
#define BF_X86_CONTEXTCALL __thiscall
#elif (defined(__GNUC__) || defined(__clang__)) && defined(__i386__)
#define BF_X86_CONTEXTCALL __attribute__((thiscall))
#else
#define BF_X86_CONTEXTCALL
#endif
extern void BF_X86_CONTEXTCALL FUN_00349413(void *,const void *,uint32_t);
static int calls;
void BF_X86_CONTEXTCALL FUN_00349366(
    void *ctx,const void *first,uint16_t tag,const void *data,
    uint32_t len,const void *second,uint32_t second_len)
{
    assert(ctx==(void *)(uintptr_t)0x1234);
    assert(first==(void *)(uintptr_t)0x5000);
    assert(tag==0x5300 && len==4 && second==NULL && second_len==0);
    assert(*(const uint32_t *)data==0xABCDEF01u);
    calls++;
}
int main(void) {
    FUN_00349413((void *)(uintptr_t)0x1234,(void *)(uintptr_t)0x5000,0xABCDEF01u);
    assert(calls==1);
    puts("tagged payload ABI mock forwarding: PASS (not Xbox runtime)");
    return 0;
}
