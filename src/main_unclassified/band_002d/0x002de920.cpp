/* Brute Force original Xbox - guest32 register and memory model.
 * Input x86 body SHA-256: 72AA60D608E5D7D82F40811501448E7DDA62F4BBBF3DDC06E3CED60846A7798E
 * Entry: 0x002de920, Ghidra index: 10334, label: FUN_002de920
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_xbe_guest32_record_leaves.h"

void FUN_002de920(bf_guest32_constructor_state& guest)
{
    bf_guest32_leaf_clear(guest, 0x002de920u, 0x100u, 0x40u, 0x1e0u);
}
