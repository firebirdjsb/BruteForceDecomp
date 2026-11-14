/* Brute Force original Xbox - ordered guest forward copy.
 * Input x86 body SHA-256: 41D0E733FCE9D887EB4726C79EBB7EC94A0B8D2FE0978057C364985550F34C76
 * Entry: 0x001d6800, Ghidra index: 6365, label: FUN_001d6800
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Requires data disjoint from the private stack frames and argument slots.
 * Captures data and EAX. Other registers, EFLAGS and faults are outside this model.
 */
#include "bf_xbe_guest32_record_moves.h"

uint32_t FUN_001d6800(uint32_t destination, uint32_t first, uint32_t last)
{
    return bf_guest_copy_records_forward_eax(destination, first, last, 3u);
}
