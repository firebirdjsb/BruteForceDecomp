/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: 8641B9A9F5329FD48D897B0227234BD830D381DC270C065AF9CC7734434E5FE7
 * Entry: 0x001d8b50, Ghidra index: 6440, label: FUN_001d8b50
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Captured inputs, guest data accesses, and EAX. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_record_model.h"

uint32_t FUN_001d8b50(uint32_t output_slot, uint32_t first, uint32_t last, uint32_t destination_end)
{
    // Copy the observed fields in order. Unwritten padding retains its bytes.
    while (last != first) {
        last -= 60u;
        destination_end -= 60u;
        bf_guest_write_u32(destination_end, bf_guest_read_u32(last));
        bf_guest_write_u32(destination_end + 0x4u, bf_guest_read_u32(last + 0x4u));
        bf_guest_write_u32(destination_end + 0x8u, bf_guest_read_u32(last + 0x8u));
        bf_guest_write_u8(destination_end + 0xcu, bf_guest_read_u8(last + 0xcu));
        bf_guest_write_u8(destination_end + 0xdu, bf_guest_read_u8(last + 0xdu));
        bf_guest_write_u32(destination_end + 0x10u, bf_guest_read_u32(last + 0x10u));
        bf_guest_write_u32(destination_end + 0x14u, bf_guest_read_u32(last + 0x14u));
        bf_guest_write_u32(destination_end + 0x18u, bf_guest_read_u32(last + 0x18u));
        bf_guest_write_u32(destination_end + 0x1cu, bf_guest_read_u32(last + 0x1cu));
        bf_guest_write_u32(destination_end + 0x20u, bf_guest_read_u32(last + 0x20u));
        bf_guest_write_u32(destination_end + 0x24u, bf_guest_read_u32(last + 0x24u));
        bf_guest_write_u32(destination_end + 0x28u, bf_guest_read_u32(last + 0x28u));
        bf_guest_write_u32(destination_end + 0x2cu, bf_guest_read_u32(last + 0x2cu));
        bf_guest_write_u32(destination_end + 0x30u, bf_guest_read_u32(last + 0x30u));
        bf_guest_write_u32(destination_end + 0x34u, bf_guest_read_u32(last + 0x34u));
        bf_guest_write_u8(destination_end + 0x38u, bf_guest_read_u8(last + 0x38u));
    }
    bf_guest_write_u32(output_slot, destination_end);
    return output_slot;
}
