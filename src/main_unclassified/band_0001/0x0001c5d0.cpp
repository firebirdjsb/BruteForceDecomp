/* Brute Force original Xbox - ordered guest memory model.
 * Input x86 body SHA-256: EDBDBD5B077DD1C16FEC4DB2454BE20E29274339119EA7C391DAB7DBC9420966
 * Entry: 0x0001c5d0, Ghidra index: 112, label: FUN_0001c5d0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Captured inputs, guest data accesses, and EAX. Native ABI_UNVERIFIED.
 */
#include "bf_xbe_guest32_advance.h"

uint32_t FUN_0001c5d0(uint32_t guest_edx)
{
    return bf_guest_advance_cursor(guest_edx, 0xa9u);
}
