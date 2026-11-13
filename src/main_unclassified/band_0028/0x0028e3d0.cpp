/* Brute Force original Xbox - backward DWORD copy with a guest stack frame.
 * Input x86 body SHA-256: 1D3AD800DC1C24713B9552A408D0534621FF800CC43554997D59D54E863A2763
 * Entry: 0x0028e3d0, Ghidra index: 9209, label: FUN_0028e3d0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_xbe_guest32_stack_copy.h"

void FUN_0028e3d0(bf_guest32_stack_copy_state& guest)
{
    bf_guest32_stack_copy(guest, 0x0028e3d0u, 16u, 4u,
                          {0x2bu, 0x23u, 0x4au, 0x4fu});
}
