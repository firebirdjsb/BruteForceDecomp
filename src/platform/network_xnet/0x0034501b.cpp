/* Brute Force original Xbox - conditional guest tail transfer.
 * Input x86 body SHA-256: 20B7FBFA565798CE28A714B2DEAF12A046669FDCB6E806598B8A5FFB2D8E79D4
 * Entry: 0x0034501b, Ghidra index: 12771, label: FUN_0034501b
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_xbe_guest32_xnet_conditional_tail.h"

void FUN_0034501b(bf_xnet_conditional_tail_state& guest)
{
    guest.ecx = bf_guest_read_u32(0x0040f5b4u);
    bf_xnet_conditional_tail(guest, 0x0034501bu, 6u, 0x0034b20eu, 12u);
}
