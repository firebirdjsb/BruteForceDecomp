/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: 88A35E6C1D6698CFA71C30E3DD9B6CEEF531A073B7F69E081F7732F4EDDE3AB0
 * Entry: 0x0024aa10, Ghidra index: 8223, label: FUN_0024aa10
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * This models captured inputs and guest data accesses. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_copy_back.h"

uint32_t FUN_0024aa10(uint32_t guest_eax, uint32_t first, uint32_t last,
                      uint32_t destination_end)
{
    // Explicit MOV instructions visit 4 ascending DWORD offsets in each record.
    return bf_guest_copy_back_dwords(guest_eax, first, last, destination_end, 4u, false);
}
