/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: 48D4646BE42F8552EA81F895F035A0030355D9AACE79B4F659457E573A2BDB21
 * Entry: 0x0001d510, Ghidra index: 132, label: FUN_0001d510
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * This models captured inputs and guest data accesses. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_copy_back.h"

uint32_t FUN_0001d510(uint32_t guest_eax, uint32_t first, uint32_t last,
                      uint32_t destination_end, bool guest_df)
{
    // EAX is the output-slot address. REP MOVSD moves 16 DWORDs per record.
    return bf_guest_copy_back_dwords(guest_eax, first, last, destination_end, 16u, guest_df);
}
