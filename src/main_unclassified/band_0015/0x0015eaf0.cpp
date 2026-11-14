/* Brute Force original Xbox - ordered guest forward copy.
 * Input x86 body SHA-256: 809D9A163C184F2FB86F4C4B8DE416A1B06382CAA6DE701128C2E943119A0C32
 * Entry: 0x0015eaf0, Ghidra index: 4559, label: FUN_0015eaf0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Requires data disjoint from the private stack frames and argument slots.
 * Captures data and EAX. Other registers, EFLAGS and faults are outside this model.
 */
#include "bf_xbe_guest32_record_moves.h"

uint32_t FUN_0015eaf0(uint32_t destination, uint32_t first, uint32_t last)
{
    // Retail reloads last from its incoming stack slot on every iteration.
    // The disjoint stack contract keeps that slot stable.
    return bf_guest_copy_records_forward_eax(destination, first, last, 8u);
}
