/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: 834EF936185689AA207FDC7122FE7499E204DF4234D69B337DEA7432DFDFED91
 * Entry: 0x0017d4c0, Ghidra index: 5071, label: FUN_0017d4c0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Captured inputs, guest data accesses, and EAX. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_advance.h"

uint32_t FUN_0017d4c0(uint32_t guest_edx)
{
    return bf_guest_advance_cursor(guest_edx, 0x81u);
}
