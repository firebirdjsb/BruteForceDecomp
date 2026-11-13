/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: 3423952AB13E09C0827075FD44667D2EA8D46848FAC5D7CD30D3BAEC69357501
 * Entry: 0x001d76b0, Ghidra index: 6400, label: FUN_001d76b0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Captured inputs, guest data accesses, and EAX. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_record_model.h"

uint16_t bf_guest_read_u16(uint32_t guest_va);
void bf_guest_write_u16(uint32_t guest_va, uint16_t value);

uint32_t FUN_001d76b0(uint32_t output_slot, uint32_t first, uint32_t last, uint32_t destination_end)
{
    // Copy the observed fields in order. Unwritten padding retains its bytes.
    while (last != first) {
        last -= 24u;
        destination_end -= 24u;
        bf_guest_write_u32(destination_end, bf_guest_read_u32(last));
        bf_guest_write_u16(destination_end + 0x4u, bf_guest_read_u16(last + 0x4u));
        bf_guest_write_u8(destination_end + 0x6u, bf_guest_read_u8(last + 0x6u));
        bf_guest_write_u32(destination_end + 0x8u, bf_guest_read_u32(last + 0x8u));
        bf_guest_write_u32(destination_end + 0xcu, bf_guest_read_u32(last + 0xcu));
        bf_guest_write_u32(destination_end + 0x10u, bf_guest_read_u32(last + 0x10u));
        bf_guest_write_u32(destination_end + 0x14u, bf_guest_read_u32(last + 0x14u));
    }
    bf_guest_write_u32(output_slot, destination_end);
    return output_slot;
}
