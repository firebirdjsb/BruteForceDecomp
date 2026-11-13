/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: CA3F5377911F05068DE6ACCC34880EA24F9965C0513ECABA5099FDC4C82720EA
 * Entry: 0x001d8050, Ghidra index: 6417, label: FUN_001d8050
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Captured inputs, guest data accesses, and EAX. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_record_model.h"

uint32_t FUN_001d8050(uint32_t destination, uint32_t first, uint32_t last)
{
    // Copy the observed fields in order. Unwritten padding retains its bytes.
    while (first != last) {
        bf_guest_write_u32(destination, bf_guest_read_u32(first));
        bf_guest_write_u32(destination + 0x4u, bf_guest_read_u32(first + 0x4u));
        bf_guest_write_u8(destination + 0x8u, bf_guest_read_u8(first + 0x8u));
        bf_guest_write_u32(destination + 0x9u, bf_guest_read_u32(first + 0x9u));
        bf_guest_write_u8(destination + 0xdu, bf_guest_read_u8(first + 0xdu));
        bf_guest_write_u32(destination + 0x10u, bf_guest_read_u32(first + 0x10u));
        bf_guest_write_u32(destination + 0x14u, bf_guest_read_u32(first + 0x14u));
        bf_guest_write_u32(destination + 0x18u, bf_guest_read_u32(first + 0x18u));
        first += 28u;
        destination += 28u;
    }
    return destination;
}
