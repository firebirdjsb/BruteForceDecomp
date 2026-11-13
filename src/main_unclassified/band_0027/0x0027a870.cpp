/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: EDFD67C7526707A17748505A6D3BBDBD9E17835E3F255B92CA9A3BF191CF4770
 * Entry: 0x0027a870, Ghidra index: 8955, label: FUN_0027a870
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Captured inputs, guest data accesses, and EAX. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_copy_back.h"

uint32_t FUN_0027a870(uint32_t guest_eax, uint32_t first, uint32_t last, uint32_t destination_end)
{
    return bf_guest_copy_back_dwords(guest_eax, first, last, destination_end, 4u, false);
}
