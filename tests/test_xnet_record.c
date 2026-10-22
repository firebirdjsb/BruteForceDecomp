/* Strict host mock linkage test only; NOT Xbox runtime equivalence. */
#include "bf_xnet_record_x86.h"
#include <assert.h>
#include <string.h>
#include <stdio.h>
extern void BF_X86_CONTEXTCALL FUN_00349413(void*,const void*,uint32_t);
static uint8_t record[256];
static int allocations, starts, finishes, buffer_calls;
static uint32_t expected_field,allocated_length;
static const void *expected_ctx,*expected_argument;
uintptr_t BF_X86_STACKCALL FUN_0034cb5a(
 uint32_t a,uint32_t b,uint32_t c,uint32_t d,uint32_t e,uint32_t f)
{
    assert(a==UINT32_C(0x7654454e)&&b==UINT32_C(0x40004));
    assert(c<=sizeof record&&d==0&&e==0&&f==0);
    allocated_length=c;allocations++;return 1;
}
void BF_X86_CONTEXTCALL FUN_00347fe3(void *ctx,uintptr_t h,uint32_t value,uint32_t zero)
{
    assert(ctx==expected_ctx&&h==1&&zero==0&&value==expected_field);
    starts++;
}
void *BF_X86_CONTEXTCALL FUN_0034c932(uintptr_t h)
{
    assert(h==1);buffer_calls++;return record;
}
void BF_X86_CONTEXTCALL FUN_00348e95(void *ctx,uintptr_t h,const void *arg,uint32_t zero)
{
    assert(ctx==expected_ctx&&h==1&&arg==expected_argument&&zero==0);
    finishes++;
}
int main(void)
{
    uint32_t arg[2]={UINT32_C(0x11223344),UINT32_C(0x78563412)};
    const char first[]="ABCDE",second[]="xyz";
    expected_ctx=(void *)(uintptr_t)0x1234;
    expected_argument=arg;expected_field=arg[1];
    FUN_00349366((void *)expected_ctx,expected_argument,
                 UINT16_C(0x3344),first,5,second,3);
    assert(allocations==1&&starts==1&&finishes==1&&buffer_calls==1);
    assert(allocated_length==12&&record[0]==0x44&&record[1]==0x33);
    assert(record[2]==12&&record[3]==0);
    assert(memcmp(record+4,"ABCDExyz",8)==0);
    FUN_00349413((void *)expected_ctx,expected_argument,UINT32_C(0xABCDEF01));
    assert(allocations==2&&starts==2&&finishes==2&&buffer_calls==2);
    assert(allocated_length==8&&record[0]==0&&record[1]==0x53&&record[2]==8);
    uint32_t value;
    memcpy(&value,record+4,4);
    assert(value==UINT32_C(0xABCDEF01));
    puts("Two XNET wrappers / four mocked dependencies: PASS");
    return 0;
}
