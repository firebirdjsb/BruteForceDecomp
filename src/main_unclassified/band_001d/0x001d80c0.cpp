/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: D534555DF68FF0CA29D38FDD36F2B9FCCA2195589374DDBFE013A494E182DB52
 * Entry: 0x001d80c0, Ghidra index: 6418, label: FUN_001d80c0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Captured inputs, guest data accesses, and EAX. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_record_model.h"

uint32_t FUN_001d80c0(uint32_t output_slot, uint32_t first, uint32_t last, uint32_t destination_end)
{
    // Copy the observed fields in order. Unwritten padding retains its bytes.
    while (last != first) {
        last -= 28u;
        destination_end -= 28u;
        bf_guest_write_u32(destination_end, bf_guest_read_u32(last));
        bf_guest_write_u32(destination_end + 0x4u, bf_guest_read_u32(last + 0x4u));
        bf_guest_write_u8(destination_end + 0x8u, bf_guest_read_u8(last + 0x8u));
        bf_guest_write_u32(destination_end + 0x9u, bf_guest_read_u32(last + 0x9u));
        bf_guest_write_u8(destination_end + 0xdu, bf_guest_read_u8(last + 0xdu));
        bf_guest_write_u32(destination_end + 0x10u, bf_guest_read_u32(last + 0x10u));
        bf_guest_write_u32(destination_end + 0x14u, bf_guest_read_u32(last + 0x14u));
        bf_guest_write_u32(destination_end + 0x18u, bf_guest_read_u32(last + 0x18u));
    }
    bf_guest_write_u32(output_slot, destination_end);
    return output_slot;
}
