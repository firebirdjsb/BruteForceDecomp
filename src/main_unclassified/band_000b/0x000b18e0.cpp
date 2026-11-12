/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: 1908388B89FF520FDA19250E526B09BB0271B9F0DC5BB05E4BD5DEA43176BE31
 * Entry: 0x000b18e0, Ghidra index: 2123, label: FUN_000b18e0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * This models captured inputs and guest data accesses. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_copy_back.h"

uint32_t FUN_000b18e0(uint32_t guest_eax, uint32_t first, uint32_t last,
                      uint32_t destination_end, bool guest_df)
{
    // EAX is the output-slot address. REP MOVSD moves 11 DWORDs per record.
    return bf_guest_copy_back_dwords(guest_eax, first, last, destination_end, 11u, guest_df);
}
