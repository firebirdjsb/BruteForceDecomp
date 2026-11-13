/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: 4A4EF63D855C60207E02E7E634F14F6148D87A8D33C8C3C1840F0DC2486C4751
 * Entry: 0x001d0300, Ghidra index: 6165, label: FUN_001d0300
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Captured inputs, guest data accesses, and EAX. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_record_model.h"

uint32_t FUN_001d0300(uint32_t source, uint32_t first, uint32_t last)
{
    // Copy the observed fields in order. Unwritten padding retains its bytes.
    if (first == last)
        return last;
    while (first != last) {
        bf_guest_write_u32(first, bf_guest_read_u32(source));
        bf_guest_write_u32(first + 0x4u, bf_guest_read_u32(source + 0x4u));
        bf_guest_write_u8(first + 0x8u, bf_guest_read_u8(source + 0x8u));
        bf_guest_write_u32(first + 0x9u, bf_guest_read_u32(source + 0x9u));
        bf_guest_write_u8(first + 0xdu, bf_guest_read_u8(source + 0xdu));
        bf_guest_write_u32(first + 0x10u, bf_guest_read_u32(source + 0x10u));
        bf_guest_write_u32(first + 0x14u, bf_guest_read_u32(source + 0x14u));
        bf_guest_write_u32(first + 0x18u, bf_guest_read_u32(source + 0x18u));
        first += 28u;
    }
    return last + 9u;
}
