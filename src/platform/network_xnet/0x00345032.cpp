/* Brute Force original Xbox - conditional guest tail transfer.
 * Input x86 body SHA-256: 3A5FA9F0D318C01A07A2B66176E83B40A0F493A451A6BFA6BB152780E76576ED
 * Entry: 0x00345032, Ghidra index: 12772, label: FUN_00345032
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_xbe_guest32_xnet_conditional_tail.h"

void FUN_00345032(bf_xnet_conditional_tail_state& guest)
{
    guest.ecx = bf_guest_read_u32(0x0040f5b4u);
    bf_xnet_conditional_tail(guest, 0x00345032u, 6u, 0x0034e109u, 12u);
}
