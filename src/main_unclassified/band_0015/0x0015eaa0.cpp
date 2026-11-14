/* Brute Force original Xbox - ordered guest forward copy.
 * Input x86 body SHA-256: EE7CB81A3E39BED424053B91E70D066BB61ECEB722C943241F2672DC65BC4464
 * Entry: 0x0015eaa0, Ghidra index: 4558, label: FUN_0015eaa0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Requires data disjoint from the private stack frames and argument slots.
 * Captures data and EAX. Other registers, EFLAGS and faults are outside this model.
 */
#include "bf_xbe_guest32_record_moves.h"

uint32_t FUN_0015eaa0(uint32_t destination, uint32_t first, uint32_t last)
{
    // Copy the observed fields in order, preserving the padding bytes.
    while (first != last) {
        bf_guest_write_u8(destination, bf_guest_read_u8(first));
        bf_guest_write_u8(destination + 1u, bf_guest_read_u8(first + 1u));
        bf_guest_write_u8(destination + 2u, bf_guest_read_u8(first + 2u));
        bf_guest_write_u32(destination + 4u, bf_guest_read_u32(first + 4u));
        bf_guest_write_u32(destination + 8u, bf_guest_read_u32(first + 8u));
        bf_guest_write_u32(destination + 12u, bf_guest_read_u32(first + 12u));
        bf_guest_write_u32(destination + 16u, bf_guest_read_u32(first + 16u));
        bf_guest_write_u32(destination + 20u, bf_guest_read_u32(first + 20u));
        bf_guest_write_u32(destination + 24u, bf_guest_read_u32(first + 24u));
        first += 28u;
        destination += 28u;
    }
    return destination;
}
