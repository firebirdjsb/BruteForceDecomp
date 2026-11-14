/* Brute Force original Xbox - ordered guest forward copy.
 * Input x86 body SHA-256: 5AED71D0C938FA7A2E20105C2935A0977292A9D870A9741F0DC1D7AC9856FF0F
 * Entry: 0x001d7dd0, Ghidra index: 6411, label: FUN_001d7dd0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Requires data disjoint from the private stack frames and argument slots.
 * Captures data and EAX. Other registers, EFLAGS and faults are outside this model.
 */
#include "bf_xbe_guest32_record_moves.h"

uint32_t FUN_001d7dd0(uint32_t destination, uint32_t first, uint32_t last)
{
    return bf_guest_copy_records_forward_eax(destination, first, last, 4u);
}
