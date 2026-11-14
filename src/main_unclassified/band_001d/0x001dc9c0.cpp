/* Brute Force original Xbox - guest forward-copy caller.
 * Input x86 body SHA-256: 0A305F0B97D8ED384375EA5B5EA158398F346C1BCBC7EFFC8FB9DE5EB93498EA
 * Entry: 0x001dc9c0, Ghidra index: 6568, label: FUN_001dc9c0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Requires data disjoint from the private stack frames and argument slots.
 * Captures data and EAX. Other registers, EFLAGS and faults are outside this model.
 */
#include "bf_xbe_guest32_record_model.h"

uint32_t FUN_001d7730(uint32_t destination, uint32_t first, uint32_t last);

uint32_t FUN_001dc9c0(uint32_t destination, uint32_t first, uint32_t last)
{
    // Retail puts destination in EAX, and first and last in the two used
    // stack argument slots. ADD ESP,16 and RET preserve the callee EAX.
    return FUN_001d7730(destination, first, last);
}
