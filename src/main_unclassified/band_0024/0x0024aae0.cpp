/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: 1C41D7FBBAC11776EE41826DB252BB866B09FC997FB685F1C8829804798C824B
 * Entry: 0x0024aae0, Ghidra index: 8226, label: FUN_0024aae0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Captured inputs, guest data accesses, and EAX. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_copy_back.h"

uint32_t FUN_0024aae0(uint32_t guest_eax, uint32_t first, uint32_t last, uint32_t destination_end)
{
    return bf_guest_copy_back_dwords(guest_eax, first, last, destination_end, 12u, false);
}
