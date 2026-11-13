/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: 5F1DCAF61E3A6D2C109C432C29640A587E76AB8D0C379B83EE98E4C610979750
 * Entry: 0x00075720, Ghidra index: 1353, label: FUN_00075720
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Captured inputs, guest data accesses, and EAX. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_advance.h"

uint32_t FUN_00075720(uint32_t guest_edx)
{
    return bf_guest_advance_cursor(guest_edx, 0x29u);
}
