/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: 8589B6726F12FFCC30E24BF9B703AD5B36F5FE958FB44B398BF3D87B915ACF02
 * Entry: 0x0025dde0, Ghidra index: 8581, label: FUN_0025dde0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Captured inputs, guest data accesses, and EAX. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_advance.h"

uint32_t FUN_0025dde0(uint32_t guest_edx)
{
    return bf_guest_advance_cursor(guest_edx, 0x25u);
}
