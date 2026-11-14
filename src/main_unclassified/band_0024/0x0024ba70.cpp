/* Brute Force original Xbox - guest forward-copy caller.
 * Input x86 body SHA-256: 9D301099EC2446E3FA81E80B35D5EFC25EEC546FD56453F30B45AE7CDE50DEDE
 * Entry: 0x0024ba70, Ghidra index: 8262, label: FUN_0024ba70
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Requires data disjoint from the private stack frames and argument slots.
 * Captures data and EAX. Other registers, EFLAGS and faults are outside this model.
 */
#include "bf_xbe_guest32_record_model.h"

uint32_t FUN_0024c6e0(uint32_t destination, uint32_t first, uint32_t last);

uint32_t FUN_0024ba70(uint32_t destination, uint32_t first, uint32_t last)
{
    // Retail puts destination in EAX, and first and last in the two used
    // stack argument slots. ADD ESP,16 and RET preserve the callee EAX.
    return FUN_0024c6e0(destination, first, last);
}
