/* Brute Force original Xbox - ordered guest forward copy.
 * Input x86 body SHA-256: 8ABD734FE093C8B6E9F616366AF827B0A60D324F0C8EC0CCC330C1173276F239
 * Entry: 0x001e07e0, Ghidra index: 6710, label: FUN_001e07e0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Requires data disjoint from the private stack frames and argument slots.
 * Captures data and EAX. Other registers, EFLAGS and faults are outside this model.
 */
#include "bf_xbe_guest32_record_moves.h"

uint32_t FUN_001e07e0(uint32_t destination, uint32_t first, uint32_t last)
{
    // Copy the observed fields in order, preserving the padding bytes.
    while (first != last) {
        bf_guest_write_u32(destination, bf_guest_read_u32(first));
        bf_guest_write_u32(destination + 4u, bf_guest_read_u32(first + 4u));
        bf_guest_write_u8(destination + 8u, bf_guest_read_u8(first + 8u));
        bf_guest_write_u8(destination + 9u, bf_guest_read_u8(first + 9u));
        first += 12u;
        destination += 12u;
    }
    return destination;
}
