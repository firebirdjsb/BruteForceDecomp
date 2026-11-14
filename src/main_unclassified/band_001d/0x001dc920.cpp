/* Brute Force original Xbox - guest forward-copy caller.
 * Input x86 body SHA-256: B2048D3BF421DD1703DAF6CF809008B9EA45D7F445C47580320C0B2B2C4140A2
 * Entry: 0x001dc920, Ghidra index: 6564, label: FUN_001dc920
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Requires data disjoint from the private stack frames and argument slots.
 * Captures data and EAX. Other registers, EFLAGS and faults are outside this model.
 */
#include "bf_xbe_guest32_record_model.h"

uint32_t FUN_001e07e0(uint32_t destination, uint32_t first, uint32_t last);

uint32_t FUN_001dc920(uint32_t destination, uint32_t first, uint32_t last)
{
    // Retail puts destination in EAX, and first and last in the two used
    // stack argument slots. ADD ESP,16 and RET preserve the callee EAX.
    return FUN_001e07e0(destination, first, last);
}
