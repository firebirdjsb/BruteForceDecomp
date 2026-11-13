/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: 01D08705B2D28916F79F98EC0F5FD2A650F6FDFE0CBF1F5D061188E27251965C
 * Entry: 0x00377f00, Ghidra index: 13464, label: FUN_00377f00
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Captured inputs and guest data accesses. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_record_moves.h"

uint32_t FUN_00377f00(uint32_t object, uint32_t record, uint32_t update, bool guest_df)
{
    uint32_t cursor = bf_guest_read_u32(record);
    const uint32_t base = bf_guest_read_u32(record + 4u);
    if (cursor != 0u) {
        uint32_t bytes = bf_guest_read_u32(cursor);
        while (bytes != 0xffffffffu) {
            const uint32_t offset = bf_guest_read_u32(cursor + 4u);
            cursor += 8u;
            bf_guest_copy_rep_dwords_and_bytes(cursor, base + offset, bytes, guest_df);
            cursor += bytes;
            bytes = bf_guest_read_u32(cursor);
        }
    }

    const uint32_t value = bf_guest_read_u32(record + 0x0cu) & 0x0fffffffu;
    const uint32_t offset = bf_guest_read_u32(record + 8u);
    bf_guest_write_u32(base + offset, value + 1u);
    if (update != 0u) {
        const uint32_t device = bf_guest_read_u32(object);
        bf_guest_write_u32(device + 0x324cu, value);
        const uint32_t prior = bf_guest_read_u32(object + 0x818u);
        bf_guest_write_u32(object + 0x818u, prior + offset);
    }
    return value;
}
