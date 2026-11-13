/* Brute Force original Xbox - framed guest tail transfer.
 * Input x86 body SHA-256: 46A574BB0263BB3D8083E0928E8C8D4E0237BF243C38EA93AA1F59546B30C488
 * Entry: 0x00330036, Ghidra index: 12353, label: XOnlineLogon
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_xbe_guest32_framed_tail.h"

void XONLINES__XOnlineLogon(bf_guest32_framed_tail_state& guest)
{
    bf_guest32_framed_tail(guest, 0x00330036u, 0x0040f5a4u, 0x0033488du);
}
