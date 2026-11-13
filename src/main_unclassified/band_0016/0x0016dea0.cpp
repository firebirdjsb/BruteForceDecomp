/* Brute Force original Xbox - backward DWORD copy with a guest stack frame.
 * Input x86 body SHA-256: 6E4B034EB91B937250B053A11FCE137C0E1D4CD0F14DA16448025927225F81B8
 * Entry: 0x0016dea0, Ghidra index: 4806, label: FUN_0016dea0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_xbe_guest32_stack_copy.h"

void FUN_0016dea0(bf_guest32_stack_copy_state& guest)
{
    bf_guest32_stack_copy(guest, 0x0016dea0u, 20u, 8u,
                          {0x2bu, 0x23u, 0x50u, 0x55u});
}
