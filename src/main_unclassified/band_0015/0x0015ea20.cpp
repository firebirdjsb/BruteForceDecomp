/* Brute Force original Xbox - guest forward-copy caller.
 * Input x86 body SHA-256: 50E9663659B6CBBC8F6B30FA8E301448814F527515179292D165DB2ABC45C749
 * Entry: 0x0015ea20, Ghidra index: 4554, label: FUN_0015ea20
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Requires data disjoint from the private stack frames and argument slots.
 * Captures data and EAX. Other registers, EFLAGS and faults are outside this model.
 */
#include "bf_xbe_guest32_record_model.h"

uint32_t FUN_0015eaa0(uint32_t destination, uint32_t first, uint32_t last);

uint32_t FUN_0015ea20(uint32_t destination, uint32_t first, uint32_t last)
{
    // Retail puts destination in EAX, and first and last in the two used
    // stack argument slots. ADD ESP,16 and RET preserve the callee EAX.
    return FUN_0015eaa0(destination, first, last);
}
