/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: 1C1624A5E0760A9B6CBB2CB6CBC6A92B74BD4AF9EEF835BFD6E5A60BBE559F17
 * Entry: 0x00139260, Ghidra index: 3940, label: FUN_00139260
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Captured inputs, guest data accesses, and EAX. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_advance.h"

uint32_t FUN_00139260(uint32_t guest_edx)
{
    return bf_guest_advance_cursor(guest_edx, 0x21u);
}
