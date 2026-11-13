/* Brute Force original Xbox - backward DWORD copy with a guest stack frame.
 * Input x86 body SHA-256: 7C9FE9337E3CA9D2F5A9F5D3823DFD888D6BA233DD5E89A61402869AD2FBD3A3
 * Entry: 0x00053ca0, Ghidra index: 777, label: FUN_00053ca0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_xbe_guest32_stack_copy.h"

void FUN_00053ca0(bf_guest32_stack_copy_state& guest)
{
    bf_guest32_stack_copy(guest, 0x00053ca0u, 12u, 4u,
                          {0x24u, 0x1cu, 0x3cu, 0x41u});
}
