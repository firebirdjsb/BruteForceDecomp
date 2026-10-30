/* Brute Force original Xbox register/stack model.
 * Entry: 0x000563b0
 * Input x86 body SHA-256: 2B41EC3E748E911C3564529F86F1C082B674F5D19B6F0BC15D9F4AD7CF1FE8C1
 * Source of field writes: original x86 0x000563B0..0x000563ED.
 * Input EAX context + one stack word, ret 4.
 * Callee FUN_000384a0 is not yet ABI-consistent as reconstructed C.
 */
#include "bf_eax_stack_dispatch.h"
#include "bf_recovered_function_names.h"
void BF_X86_EAX_STACKCALL bf_advance_counter_then_forward_word(
    BF_CounterState_563B0 *context, uint32_t stack_word)
{
    uint32_t remaining=context->remaining_at_10;
    if (remaining>=context->threshold_at_14 && remaining!=0) {
        uint32_t next=context->rolling_index_at_0c+UINT32_C(1);
        context->rolling_index_at_0c=next;
        if ((context->capacity_word_at_08<<2)<=next)
            context->rolling_index_at_0c=0;
        remaining-=UINT32_C(1);
        context->remaining_at_10=remaining;
        if (remaining==0)
            context->rolling_index_at_0c=0;
    }
    /* The original uses EAX for context and pushes the caller's stack
     * word address. The x86 prototype below is an assembly-backed model. */
    FUN_000384a0(context,&stack_word);
}
