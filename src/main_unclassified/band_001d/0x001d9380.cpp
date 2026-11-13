/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: 3D5754ED8A0C5BA53C1DA6BD6F1DFD27FDD2E151E1061D100AE1A1411B89DBCF
 * Entry: 0x001d9380, Ghidra index: 6462, label: FUN_001d9380
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Captured inputs, guest data accesses, and EAX. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_record_model.h"

uint32_t FUN_001d9380(uint32_t output_slot, uint32_t first, uint32_t last, uint32_t destination_end)
{
    // Copy the observed fields in order. Unwritten padding retains its bytes.
    while (last != first) {
        last -= 28u;
        destination_end -= 28u;
        bf_guest_write_u8(destination_end, bf_guest_read_u8(last));
        bf_guest_write_u8(destination_end + 0x1u, bf_guest_read_u8(last + 0x1u));
        bf_guest_write_u8(destination_end + 0x2u, bf_guest_read_u8(last + 0x2u));
        bf_guest_write_u32(destination_end + 0x4u, bf_guest_read_u32(last + 0x4u));
        bf_guest_write_u32(destination_end + 0x8u, bf_guest_read_u32(last + 0x8u));
        bf_guest_write_u32(destination_end + 0xcu, bf_guest_read_u32(last + 0xcu));
        bf_guest_write_u32(destination_end + 0x10u, bf_guest_read_u32(last + 0x10u));
        bf_guest_write_u32(destination_end + 0x14u, bf_guest_read_u32(last + 0x14u));
        bf_guest_write_u32(destination_end + 0x18u, bf_guest_read_u32(last + 0x18u));
    }
    bf_guest_write_u32(output_slot, destination_end);
    return output_slot;
}
