/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: 37A34296E0673DEDEBC10F7700E98F817ADE802A122CD1FA66CCDAA2610CF887
 * Entry: 0x00142510, Ghidra index: 4122, label: FUN_00142510
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Captured inputs, guest data accesses, and EAX. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_advance.h"

uint32_t FUN_00142510(uint32_t guest_edx)
{
    return bf_guest_advance_cursor(guest_edx, 0x1du);
}
