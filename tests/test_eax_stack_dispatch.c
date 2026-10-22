/* Host mock of externally linked callee. NOT a game test. */
#include "bf_eax_stack_dispatch.h"
#include <assert.h>
#include <stdio.h>
static unsigned calls;
static uint32_t captured;
static BF_CounterState_563B0 *last;
void BF_X86_EAX_STACKCALL FUN_000384a0(
    BF_CounterState_563B0 *ctx,const uint32_t *arg)
{
    calls++;
    last=ctx;
    captured=*arg;
}
int main(void)
{
    BF_CounterState_563B0 s={{0},2,7,3,3};
    FUN_000563b0(&s,UINT32_C(0xabcdefff));
    assert(s.rolling_index_at_0c==0&&s.remaining_at_10==2);
    assert(calls==1&&last==&s&&captured==UINT32_C(0xabcdefff));
    s.rolling_index_at_0c=4;s.remaining_at_10=1;s.threshold_at_14=1;
    FUN_000563b0(&s,0);
    assert(s.remaining_at_10==0&&s.rolling_index_at_0c==0);
    s.remaining_at_10=0;s.rolling_index_at_0c=3;
    FUN_000563b0(&s,UINT32_C(0x23));
    assert(s.rolling_index_at_0c==3&&calls==3&&captured==UINT32_C(0x23));
    puts("EAX register + one stack word, mocked forwarding: PASS");
    return 0;
}
