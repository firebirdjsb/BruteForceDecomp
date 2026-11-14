/* Brute Force original Xbox - guest forward-copy caller.
 * Input x86 body SHA-256: 6E4C595091652C1A11ECE8B5E69F8D866B565716A8D7A682A746E329E037198B
 * Entry: 0x001dcb00, Ghidra index: 6577, label: FUN_001dcb00
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Requires data disjoint from the private stack frames and argument slots.
 * Captures data and EAX. Other registers, EFLAGS and faults are outside this model.
 */
#include "bf_xbe_guest32_record_model.h"

uint32_t FUN_001e0aa0(uint32_t destination, uint32_t first, uint32_t last);

uint32_t FUN_001dcb00(uint32_t destination, uint32_t first, uint32_t last)
{
    // Retail puts destination in EAX, and first and last in the two used
    // stack argument slots. ADD ESP,16 and RET preserve the callee EAX.
    return FUN_001e0aa0(destination, first, last);
}
