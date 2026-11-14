/* Brute Force original Xbox - ordered guest forward copy.
 * Input x86 body SHA-256: 809B9BA99362FDAC21B97D0048ECB83EF8015FFA95ACF44B1523E6AE8CBB5FFC
 * Entry: 0x00050a90, Ghidra index: 718, label: FUN_00050a90
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Requires data disjoint from the private stack frames and argument slots.
 * Captures data and EAX. Other registers, EFLAGS and faults are outside this model.
 */
#include "bf_xbe_guest32_record_moves.h"

uint32_t FUN_00050a90(uint32_t destination, uint32_t first, uint32_t last)
{
    return bf_guest_copy_records_forward_eax(destination, first, last, 3u);
}
