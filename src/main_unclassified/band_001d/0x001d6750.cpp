/* Brute Force original Xbox - ordered guest forward copy.
 * Input x86 body SHA-256: 8337BA3D9F46A8E277452266F4793F4AA4ABFB7DB91BA61D72490F220DB2EEA7
 * Entry: 0x001d6750, Ghidra index: 6363, label: FUN_001d6750
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Requires data disjoint from the private stack frames and argument slots.
 * Captures data and EAX. Other registers, EFLAGS and faults are outside this model.
 */
#include "bf_xbe_guest32_record_moves.h"

uint32_t FUN_001d6750(uint32_t destination, uint32_t first, uint32_t last)
{
    return bf_guest_copy_records_forward_eax(destination, first, last, 7u);
}
