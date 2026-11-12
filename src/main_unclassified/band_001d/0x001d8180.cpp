/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: 1C0508D54747BF49638090DA4BA33BB41F687B991F113F7EE6DD286B3154AB4E
 * Entry: 0x001d8180, Ghidra index: 6420, label: FUN_001d8180
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * This models captured inputs and guest data accesses. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_copy_back.h"

uint32_t FUN_001d8180(uint32_t guest_eax, uint32_t first, uint32_t last,
                      uint32_t destination_end)
{
    // Explicit MOV instructions copy 5 ascending DWORD offsets per record.
    return bf_guest_copy_back_dwords(guest_eax, first, last, destination_end, 5u, false);
}
