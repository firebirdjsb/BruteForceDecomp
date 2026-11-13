/* Brute Force original Xbox - conditional guest tail transfer.
 * Input x86 body SHA-256: 0622DF567B8F0D113B9E89BC17BBB47F3C8531D631972DEE5A12BBBDD0B4350E
 * Entry: 0x00344f7f, Ghidra index: 12760, label: FUN_00344f7f
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_xbe_guest32_xnet_conditional_tail.h"

void FUN_00344f7f(bf_xnet_conditional_tail_state& guest)
{
    bf_xnet_conditional_tail(guest, 0x00344f7fu, 0u, 0x0034dd88u, 4u);
}
