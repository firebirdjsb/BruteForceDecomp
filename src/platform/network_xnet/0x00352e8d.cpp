/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: 09411413E80D644C16233BF8C4A10B9AAD36FE404964627AC0FB9C4797EBBD14
 * Entry: 0x00352e8d, Ghidra index: 13072, label: FUN_00352e8d
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * This models captured inputs and guest data accesses. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_record_moves.h"

uint32_t FUN_00352e8d(uint32_t guest_ecx, uint32_t source,
                      uint32_t bytes, bool guest_df)
{
    if (bf_guest_read_u32(guest_ecx + 4u) >= bytes) {
        const uint32_t destination = bf_guest_read_u32(guest_ecx);
        bf_guest_copy_rep_dwords_and_bytes(source, destination, bytes, guest_df);
        // The original ADD and SUB reload memory after the copy, which can
        // alias either field. Its cursor adjustment is +bytes even with DF set.
        const uint32_t cursor = bf_guest_read_u32(guest_ecx);
        bf_guest_write_u32(guest_ecx, cursor + bytes);
        const uint32_t remaining = bf_guest_read_u32(guest_ecx + 4u);
        bf_guest_write_u32(guest_ecx + 4u, remaining - bytes);
    }
    return guest_ecx;  // EAX retains the input ECX on both paths to RET 8.
}
