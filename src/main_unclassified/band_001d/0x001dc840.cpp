/* Brute Force original Xbox - guest forward-copy caller.
 * Input x86 body SHA-256: 5C73D8C1C66F32A97F40C25B2E843E46BE3BAF2ED33C0FDA164A34DD6A2763CF
 * Entry: 0x001dc840, Ghidra index: 6558, label: FUN_001dc840
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Requires data disjoint from the private stack frames and argument slots.
 * Captures data and EAX. Other registers, EFLAGS and faults are outside this model.
 */
#include "bf_xbe_guest32_record_model.h"

uint32_t FUN_001e07a0(uint32_t destination, uint32_t first, uint32_t last);

uint32_t FUN_001dc840(uint32_t destination, uint32_t first, uint32_t last)
{
    // Retail puts destination in EAX, and first and last in the two used
    // stack argument slots. ADD ESP,16 and RET preserve the callee EAX.
    return FUN_001e07a0(destination, first, last);
}
