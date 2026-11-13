/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: EEE25DACC96DA8E40608C8078F6051C39AE4BB29D972A5C3BBBA3C13C2508348
 * Entry: 0x0024f7d0, Ghidra index: 8320, label: FUN_0024f7d0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Captured inputs, guest data accesses, and EAX. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_advance.h"

uint32_t FUN_0024f7d0(uint32_t guest_edx)
{
    return bf_guest_advance_cursor(guest_edx, 0x45u);
}
