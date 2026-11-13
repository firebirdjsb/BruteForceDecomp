/* Brute Force original Xbox - conditional guest tail transfer.
 * Input x86 body SHA-256: 2571B5753CA16F0E395A99AFDFF1B39E5619DACF520B3055BCB79E2282E47027
 * Entry: 0x0034517e, Ghidra index: 12797, label: FUN_0034517e
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_xbe_guest32_xnet_conditional_tail.h"

void FUN_0034517e(bf_xnet_conditional_tail_state& guest)
{
    guest.ecx = bf_guest_read_u32(0x0040f5b4u);
    bf_xnet_conditional_tail(guest, 0x0034517eu, 6u, 0x0034b32fu, 12u);
}
