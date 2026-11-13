/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: 46AC863735BA46002FBA160E0B92A7A1F10D7555010189E9099AD6404EBA07C9
 * Entry: 0x00270df0, Ghidra index: 8802, label: FUN_00270df0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Captured inputs, guest data accesses, and EAX. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_advance.h"

uint32_t FUN_00270df0(uint32_t guest_edx)
{
    return bf_guest_advance_cursor(guest_edx, 0x2du);
}
