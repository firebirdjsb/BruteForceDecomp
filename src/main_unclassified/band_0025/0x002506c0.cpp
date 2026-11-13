/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: 0BB2D8034CE7346B3D38A0D0CB5C608CEF597E2402C3CF15AB44CD6945B13FCA
 * Entry: 0x002506c0, Ghidra index: 8348, label: FUN_002506c0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Captured inputs, guest data accesses, and EAX. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_advance.h"

uint32_t FUN_002506c0(uint32_t guest_edx)
{
    return bf_guest_advance_cursor(guest_edx, 0x11u);
}
