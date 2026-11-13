/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: 7F3C3A04F9280E823D28848291F7BFB08E727F450881B9D3B033B0FB5846F1C3
 * Entry: 0x001d8d60, Ghidra index: 6446, label: FUN_001d8d60
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Captured inputs, guest data accesses, and EAX. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_copy_back.h"

uint32_t FUN_001d8d60(uint32_t guest_eax, uint32_t first, uint32_t last, uint32_t destination_end)
{
    return bf_guest_copy_back_dwords(guest_eax, first, last, destination_end, 9u, false);
}
