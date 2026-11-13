/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: 3544A46F2795D9A712FC86486E1392C01E7C0C1BF94D7BEE9E0F1E45A9C0B7BC
 * Entry: 0x002f466f, Ghidra index: 10857, label: FUN_002f466f
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Captured inputs and guest data accesses. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_record_moves.h"

uint32_t FUN_002f466f(uint32_t source, uint32_t destination, bool guest_df)
{
    constexpr uint32_t offsets[] = {0x38u, 8u, 0x0cu, 0x10u, 0x14u,
                                    0x18u, 0x1cu, 0x2cu, 0x28u};
    for (uint32_t i = 0; i < 9u; ++i)
        bf_guest_write_u32(destination + i * 4u, bf_guest_read_u32(source + offsets[i]));

    const uint32_t bytes = bf_guest_read_u32(source + 0x3cu);
    bf_guest_copy_rep_dwords_and_bytes(source + 0x40u, destination + 0x2cu, bytes, guest_df);
    // The copy may overwrite the size field. The final two ANDs each read
    // and clear one byte, and EAX retains the reloaded size.
    const uint32_t size_after_copy = bf_guest_read_u32(source + 0x3cu);
    const uint32_t terminator = destination + 0x2cu + size_after_copy;
    (void)bf_guest_read_u8(terminator);
    bf_guest_write_u8(terminator, 0u);
    (void)bf_guest_read_u8(destination + 0x130u);
    bf_guest_write_u8(destination + 0x130u, 0u);
    return size_after_copy;
}
