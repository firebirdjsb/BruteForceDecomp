/* Brute Force original Xbox - ordered guest forward copy.
 * Input x86 body SHA-256: 61E565A7024782E0B9F8D23C5B86B30CAC4C343903311387BA9FBFC67385DFD8
 * Entry: 0x001d7730, Ghidra index: 6401, label: FUN_001d7730
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Requires data disjoint from the private stack frames and argument slots.
 * Captures data and EAX. Other registers, EFLAGS and faults are outside this model.
 */
#include "bf_xbe_guest32_record_moves.h"

uint32_t FUN_001d7730(uint32_t destination, uint32_t first, uint32_t last)
{
    // Copy the observed fields in order, preserving the padding bytes.
    while (first != last) {
        bf_guest_write_u32(destination, bf_guest_read_u32(first));
        bf_guest_write_u32(destination + 4u, bf_guest_read_u32(first + 4u));
        bf_guest_write_u32(destination + 8u, bf_guest_read_u32(first + 8u));
        bf_guest_write_u32(destination + 12u, bf_guest_read_u32(first + 12u));
        bf_guest_write_u32(destination + 16u, bf_guest_read_u32(first + 16u));
        bf_guest_write_u32(destination + 20u, bf_guest_read_u32(first + 20u));
        bf_guest_write_u32(destination + 24u, bf_guest_read_u32(first + 24u));
        bf_guest_write_u8(destination + 28u, bf_guest_read_u8(first + 28u));
        bf_guest_write_u8(destination + 29u, bf_guest_read_u8(first + 29u));
        bf_guest_write_u32(destination + 32u, bf_guest_read_u32(first + 32u));
        first += 36u;
        destination += 36u;
    }
    return destination;
}
