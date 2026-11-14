/* Brute Force original Xbox - ordered guest forward copy.
 * Input x86 body SHA-256: 8EC112695614B727447A62D46A82A0D86D482D7724310DDCBA3BAD7461A2D767
 * Entry: 0x0024c6a0, Ghidra index: 8290, label: FUN_0024c6a0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Requires data disjoint from the private stack frames and argument slots.
 * Captures data and EAX. Other registers, EFLAGS and faults are outside this model.
 */
#include "bf_xbe_guest32_record_moves.h"

uint32_t FUN_0024c6a0(uint32_t destination, uint32_t first, uint32_t last)
{
    return bf_guest_copy_records_forward_eax(destination, first, last, 4u);
}
