/* Brute Force original Xbox - conditional guest tail transfer.
 * Input x86 body SHA-256: 65A2EAD7DFA6D3EE1C0DC437BA4CB39A80DC923D4F177AC79CC62CC004F9C917
 * Entry: 0x00344fb7, Ghidra index: 12763, label: FUN_00344fb7
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_xbe_guest32_xnet_conditional_tail.h"

void FUN_00344fb7(bf_xnet_conditional_tail_state& guest)
{
    bf_xnet_conditional_tail(guest, 0x00344fb7u, 0u, 0x003512aau, 8u);
}
