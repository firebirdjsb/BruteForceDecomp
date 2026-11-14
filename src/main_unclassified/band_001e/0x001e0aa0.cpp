/* Brute Force original Xbox - ordered guest forward copy.
 * Input x86 body SHA-256: 7EEBD76FFC2D8414C930CB8CB5F16F42A9688ABD193E68ED15E678373D18B67E
 * Entry: 0x001e0aa0, Ghidra index: 6715, label: FUN_001e0aa0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Requires data disjoint from the private stack frames and argument slots.
 * Captures data and EAX. Other registers, EFLAGS and faults are outside this model.
 */
#include "bf_xbe_guest32_record_moves.h"

uint32_t FUN_001e0aa0(uint32_t destination, uint32_t first, uint32_t last)
{
    return bf_guest_copy_records_forward_eax(destination, first, last, 9u);
}
