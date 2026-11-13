/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: 65EDEB4E2ED26384C743B6D9D1E04FEB6003851BABF50272E311470D1AABFBE4
 * Entry: 0x00162c60, Ghidra index: 4655, label: FUN_00162c60
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Captured inputs and guest data accesses. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_record_moves.h"

uint32_t FUN_00162c60(uint32_t guest_eax, uint32_t guest_edx, bool guest_df)
{
    if (guest_edx == guest_eax)
        return guest_eax;

    const uint32_t bytes = bf_guest_read_u32(guest_edx + 0x104u) << 2;
    const uint32_t output_count = bf_guest_read_u32(guest_eax + 0x104u);
    bf_guest_copy_rep_dwords_and_bytes(guest_edx + 4u, guest_eax + output_count * 4u + 4u,
                                       bytes, guest_df);

    const uint32_t input_count = bf_guest_read_u32(guest_edx + 0x104u);
    const uint32_t count_after_copy = bf_guest_read_u32(guest_eax + 0x104u);
    const uint32_t first_mask = bf_guest_read_u32(guest_eax + 0x10cu);
    bf_guest_write_u32(guest_eax + 0x104u, count_after_copy + input_count);
    const uint32_t input_first = bf_guest_read_u32(guest_edx + 0x10cu);
    const uint32_t second_mask = bf_guest_read_u32(guest_eax + 0x110u);
    bf_guest_write_u32(guest_eax + 0x10cu, first_mask | input_first);
    const uint32_t input_second = bf_guest_read_u32(guest_edx + 0x110u);
    bf_guest_write_u32(guest_eax + 0x110u, second_mask | input_second);
    return guest_eax;
}
