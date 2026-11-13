/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: 7E27F8FA4C2B78CDA1BD44466F1C2243E1490A968AA8B9C1A14F8203A50FEFE9
 * Entry: 0x001d7650, Ghidra index: 6399, label: FUN_001d7650
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Captured inputs, guest data accesses, and EAX. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_record_model.h"

uint16_t bf_guest_read_u16(uint32_t guest_va);
void bf_guest_write_u16(uint32_t guest_va, uint16_t value);

uint32_t FUN_001d7650(uint32_t destination, uint32_t first, uint32_t last)
{
    // Copy the observed fields in order. Unwritten padding retains its bytes.
    while (first != last) {
        bf_guest_write_u32(destination, bf_guest_read_u32(first));
        bf_guest_write_u16(destination + 0x4u, bf_guest_read_u16(first + 0x4u));
        bf_guest_write_u8(destination + 0x6u, bf_guest_read_u8(first + 0x6u));
        bf_guest_write_u32(destination + 0x8u, bf_guest_read_u32(first + 0x8u));
        bf_guest_write_u32(destination + 0xcu, bf_guest_read_u32(first + 0xcu));
        bf_guest_write_u32(destination + 0x10u, bf_guest_read_u32(first + 0x10u));
        bf_guest_write_u32(destination + 0x14u, bf_guest_read_u32(first + 0x14u));
        first += 24u;
        destination += 24u;
    }
    return destination;
}
