/* Brute Force original Xbox - ordered guest forward copy.
 * Input x86 body SHA-256: 36375A2F330EA89F40C2AD122119DD45BF04C1386CA62A2BA6E8864884D2B6D7
 * Entry: 0x0024c6e0, Ghidra index: 8291, label: FUN_0024c6e0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Requires data disjoint from the private stack frames and argument slots.
 * Captures data and EAX. Other registers, EFLAGS and faults are outside this model.
 */
#include "bf_xbe_guest32_record_moves.h"

uint32_t FUN_0024c6e0(uint32_t destination, uint32_t first, uint32_t last)
{
    return bf_guest_copy_records_forward_eax(destination, first, last, 12u);
}
