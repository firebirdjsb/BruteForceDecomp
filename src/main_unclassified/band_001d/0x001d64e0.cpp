/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: 8A1CBB15B94D5C289E4BD68CB62F53D328349A684DA40041BC22E8A5782B197B
 * Entry: 0x001d64e0, Ghidra index: 6355, label: FUN_001d64e0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * This models captured inputs and guest data accesses. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_copy_back.h"

uint32_t FUN_001d64e0(uint32_t guest_eax, uint32_t first, uint32_t last,
                      uint32_t destination_end)
{
    // Explicit MOV instructions copy 6 ascending DWORD offsets per record.
    return bf_guest_copy_back_dwords(guest_eax, first, last, destination_end, 6u, false);
}
