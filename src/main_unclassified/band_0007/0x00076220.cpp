/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: 69B61E71E640A6C103DFB88A01CAE6DD138C7F5AC58269FA857E5FEEF783C91B
 * Entry: 0x00076220, Ghidra index: 1366, label: FUN_00076220
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Captured inputs, guest data accesses, and EAX. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_advance.h"

uint32_t FUN_00076220(uint32_t guest_edx)
{
    return bf_guest_advance_cursor(guest_edx, 0x19u);
}
