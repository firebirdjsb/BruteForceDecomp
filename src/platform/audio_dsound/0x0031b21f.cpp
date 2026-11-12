/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: 92AC600166D5F80B5867992AC1BF3C9E4D6B442A19FFE829759240DE8FA9034A
 * Entry: 0x0031b21f, Ghidra index: 12292, label: FUN_0031b21f
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * This models captured inputs and guest data accesses. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_record_moves.h"

uint32_t FUN_0031b21f(uint32_t guest_ecx, uint32_t offset,
                      uint32_t source, uint32_t bytes, bool guest_df)
{
    const uint32_t slot = bf_guest_read_u32(guest_ecx + 0x10u);
    const uint32_t base = bf_guest_read_u32(slot);
    bf_guest_copy_rep_dwords_and_bytes(source, base + offset, bytes, guest_df);
    return bytes;  // The original saves the full byte count in EAX.
}
