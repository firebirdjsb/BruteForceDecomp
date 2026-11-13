/* Brute Force original Xbox - conditional guest tail transfer.
 * Input x86 body SHA-256: D1A223DD39A6684C6E9D8B5FF87D2F87645EE4C026AC850635012179CD5119BE
 * Entry: 0x00344fa6, Ghidra index: 12762, label: FUN_00344fa6
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_xbe_guest32_xnet_conditional_tail.h"

void FUN_00344fa6(bf_xnet_conditional_tail_state& guest)
{
    bf_xnet_conditional_tail(guest, 0x00344fa6u, 0u, 0x0034f472u, 4u);
}
