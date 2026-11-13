/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: 1D49C32F591AE3EAD5734B8CA10CA633CC5436483EB2E4C62480A0F7C90B9230
 * Entry: 0x00235d10, Ghidra index: 7823, label: FUN_00235d10
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Captured inputs and guest data accesses. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_record_moves.h"

uint32_t FUN_00235d10(uint32_t guest_edx, uint32_t guest_edi)
{
    uint32_t cursor = bf_guest_read_u32(guest_edx + 0x4cu);
    if (cursor == 0u)
        return 0u;
    const uint32_t size_bits = bf_guest_read_u32(guest_edx + 0x50u) - cursor;
    // SAR by two produces zero only for DWORD values 0 through 3.
    if (size_bits < 4u)
        return 0u;
    if (guest_edi == 0u)
        return bf_guest_read_u32(cursor);

    const uint32_t end = bf_guest_read_u32(guest_edx + 0x50u);
    while (cursor != end) {
        const uint32_t word = bf_guest_read_u32(cursor);
        cursor += 4u;
        if (word == guest_edi)
            return cursor == end ? 0u : bf_guest_read_u32(cursor);
    }
    return 0u;
}
