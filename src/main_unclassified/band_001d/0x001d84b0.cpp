/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: AAB538F79FCB34A15998EEED885DEA8E732B47DFF76C1E6FC91ACC2D011C2B83
 * Entry: 0x001d84b0, Ghidra index: 6425, label: FUN_001d84b0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * This models captured inputs and guest data accesses. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_record_model.h"

uint32_t FUN_001d84b0(uint32_t guest_edi, uint32_t first, uint32_t last,
                      uint32_t destination_end)
{
    // Only the retail field offsets are written. Padding remains untouched.
    while (last != first) {
        last -= 16u;
        destination_end -= 16u;
        bf_guest_write_u32(destination_end, bf_guest_read_u32(last));
        bf_guest_write_u32(destination_end + 0x04u, bf_guest_read_u32(last + 0x04u));
        bf_guest_write_u32(destination_end + 0x08u, bf_guest_read_u32(last + 0x08u));
        bf_guest_write_u8(destination_end + 0x0cu, bf_guest_read_u8(last + 0x0cu));
        bf_guest_write_u8(destination_end + 0x0du, bf_guest_read_u8(last + 0x0du));
    }
    bf_guest_write_u32(guest_edi, destination_end);
    return guest_edi;
}
