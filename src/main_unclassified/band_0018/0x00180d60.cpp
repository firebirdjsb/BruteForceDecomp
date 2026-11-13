/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: 6FBEC35E770D84B856A1EE1271F7669F5E648D9500460D94073F599EAF0CEBE9
 * Entry: 0x00180d60, Ghidra index: 5140, label: FUN_00180d60
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Captured inputs, guest data accesses, and EAX. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_advance.h"

uint32_t FUN_00180d60(uint32_t guest_edx)
{
    return bf_guest_advance_cursor(guest_edx, 0x41u);
}
