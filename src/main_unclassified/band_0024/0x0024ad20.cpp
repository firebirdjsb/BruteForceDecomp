/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: 0564EAEC10A5CA7C22D1298217845234AFF889AD6902640559E5A299369BBB37
 * Entry: 0x0024ad20, Ghidra index: 8233, label: FUN_0024ad20
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * This models captured inputs and guest data accesses. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_copy_back.h"

uint32_t FUN_0024ad20(uint32_t guest_eax, uint32_t first, uint32_t last,
                      uint32_t destination_end)
{
    // Explicit MOV instructions visit 3 ascending DWORD offsets in each record.
    return bf_guest_copy_back_dwords(guest_eax, first, last, destination_end, 3u, false);
}
