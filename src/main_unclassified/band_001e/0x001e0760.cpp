/* Brute Force original Xbox - ordered guest forward copy.
 * Input x86 body SHA-256: F46413B5A58A46374035B6DB35606689FB5D1F74B37E16C6999C54F6069B9375
 * Entry: 0x001e0760, Ghidra index: 6708, label: FUN_001e0760
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Requires data disjoint from the private stack frames and argument slots.
 * Captures data and EAX. Other registers, EFLAGS and faults are outside this model.
 */
#include "bf_xbe_guest32_record_moves.h"

uint32_t FUN_001e0760(uint32_t destination, uint32_t first, uint32_t last)
{
    // Copy the observed fields in order, preserving the padding bytes.
    while (first != last) {
        bf_guest_write_u32(destination, bf_guest_read_u32(first));
        bf_guest_write_u8(destination + 4u, bf_guest_read_u8(first + 4u));
        bf_guest_write_u32(destination + 8u, bf_guest_read_u32(first + 8u));
        bf_guest_write_u32(destination + 12u, bf_guest_read_u32(first + 12u));
        first += 16u;
        destination += 16u;
    }
    return destination;
}
