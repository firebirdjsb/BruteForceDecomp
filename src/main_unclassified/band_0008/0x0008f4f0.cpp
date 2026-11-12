/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: D60379A2BF92432B36C19F56D03F61173F4B651BE47B0EE921A13129B7F72CF2
 * Entry: 0x0008f4f0, Ghidra index: 1749, label: FUN_0008f4f0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * This models captured inputs and guest data accesses. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_copy_back.h"

uint32_t FUN_0008f4f0(uint32_t guest_eax, uint32_t first, uint32_t last,
                      uint32_t destination_end, bool guest_df)
{
    // EAX is the output-slot address. REP MOVSD moves 10 DWORDs per record.
    return bf_guest_copy_back_dwords(guest_eax, first, last, destination_end, 10u, guest_df);
}
