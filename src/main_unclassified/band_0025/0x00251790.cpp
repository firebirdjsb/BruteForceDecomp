/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: 6DDC202022C8594B9E6813487A19175C086735E7E9E3D9175B77FA0A58161B6A
 * Entry: 0x00251790, Ghidra index: 8369, label: FUN_00251790
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Captured inputs and guest data accesses. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_record_moves.h"

uint32_t FUN_00251790(uint32_t guest_eax, bool guest_df)
{
    const uint32_t requested = bf_guest_read_u32(guest_eax + 0x10u);
    const uint32_t input = bf_guest_read_u32(guest_eax + 0x1cu);
    const uint32_t available = bf_guest_read_u32(input + 0x14u);
    const uint32_t bytes = available <= requested ? available : requested;
    if (bytes == 0u)
        return guest_eax;

    const uint32_t source = bf_guest_read_u32(input + 0x10u);
    const uint32_t destination = bf_guest_read_u32(guest_eax + 0x0cu);
    bf_guest_copy_rep_dwords_and_bytes(source, destination, bytes, guest_df);

    const uint32_t output_cursor = bf_guest_read_u32(guest_eax + 0x0cu);
    const uint32_t input_after_copy = bf_guest_read_u32(guest_eax + 0x1cu);
    bf_guest_write_u32(guest_eax + 0x0cu, output_cursor + bytes);
    const uint32_t input_cursor = bf_guest_read_u32(input_after_copy + 0x10u);
    bf_guest_write_u32(input_after_copy + 0x10u, input_cursor + bytes);

    const uint32_t written = bf_guest_read_u32(guest_eax + 0x14u);
    const uint32_t remaining = bf_guest_read_u32(guest_eax + 0x10u);
    const uint32_t input_before_subtract = bf_guest_read_u32(guest_eax + 0x1cu);
    bf_guest_write_u32(guest_eax + 0x14u, written + bytes);
    bf_guest_write_u32(guest_eax + 0x10u, remaining - bytes);
    const uint32_t input_remaining = bf_guest_read_u32(input_before_subtract + 0x14u);
    bf_guest_write_u32(input_before_subtract + 0x14u, input_remaining - bytes);

    const uint32_t result = bf_guest_read_u32(guest_eax + 0x1cu);
    if (bf_guest_read_u32(result + 0x14u) == 0u) {
        const uint32_t initial = bf_guest_read_u32(result + 8u);
        bf_guest_write_u32(result + 0x10u, initial);
    }
    return result;
}
