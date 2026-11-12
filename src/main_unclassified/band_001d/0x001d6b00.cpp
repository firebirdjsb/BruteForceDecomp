/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: 470AB02DA6796D38B8C1A4CEA2D280C1149908B0E12C4FBD3AE2E8BB0B8E453A
 * Entry: 0x001d6b00, Ghidra index: 6372, label: FUN_001d6b00
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * This models captured inputs and guest data accesses. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_record_model.h"

uint32_t FUN_001d6b00(uint32_t guest_edi, uint32_t first, uint32_t last,
                      uint32_t destination_end)
{
    // Only the retail field offsets are written. Padding remains untouched.
    while (last != first) {
        last -= 24u;
        destination_end -= 24u;
        bf_guest_write_u32(destination_end, bf_guest_read_u32(last));
        bf_guest_write_u32(destination_end + 0x04u, bf_guest_read_u32(last + 0x04u));
        bf_guest_write_u32(destination_end + 0x08u, bf_guest_read_u32(last + 0x08u));
        bf_guest_write_u8(destination_end + 0x0cu, bf_guest_read_u8(last + 0x0cu));
        bf_guest_write_u8(destination_end + 0x0du, bf_guest_read_u8(last + 0x0du));
        bf_guest_write_u32(destination_end + 0x10u, bf_guest_read_u32(last + 0x10u));
        bf_guest_write_u32(destination_end + 0x14u, bf_guest_read_u32(last + 0x14u));
    }
    bf_guest_write_u32(guest_edi, destination_end);
    return guest_edi;
}
