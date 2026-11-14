/* Brute Force original Xbox - guest forward-copy caller.
 * Input x86 body SHA-256: B55C136C3534CD2D2AC07A69446A90EFBECC12C06AD00ED790603430FAB8E6E4
 * Entry: 0x001dc820, Ghidra index: 6557, label: FUN_001dc820
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Requires data disjoint from the private stack frames and argument slots.
 * Captures data and EAX. Other registers, EFLAGS and faults are outside this model.
 */
#include "bf_xbe_guest32_record_model.h"

uint32_t FUN_001e0760(uint32_t destination, uint32_t first, uint32_t last);

uint32_t FUN_001dc820(uint32_t destination, uint32_t first, uint32_t last)
{
    // Retail puts destination in EAX, and first and last in the two used
    // stack argument slots. ADD ESP,16 and RET preserve the callee EAX.
    return FUN_001e0760(destination, first, last);
}
