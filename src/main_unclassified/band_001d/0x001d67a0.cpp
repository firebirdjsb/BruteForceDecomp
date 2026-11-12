/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: CA18FC02DA3515BCE9306A872900636FD72911C96A9D89F278A8FE19EF86AA72
 * Entry: 0x001d67a0, Ghidra index: 6364, label: FUN_001d67a0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * This models captured inputs and guest data accesses. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_copy_back.h"

uint32_t FUN_001d67a0(uint32_t guest_eax, uint32_t first, uint32_t last,
                      uint32_t destination_end)
{
    // Explicit MOV instructions copy 7 ascending DWORD offsets per record.
    return bf_guest_copy_back_dwords(guest_eax, first, last, destination_end, 7u, false);
}
