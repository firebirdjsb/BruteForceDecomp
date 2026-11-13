/* Brute Force original Xbox - conditional guest tail transfer.
 * Input x86 body SHA-256: B678A6FDD070E6CC36AF25A18832C30954C55FF925BA3F0B3F8C6A1496B7C56D
 * Entry: 0x00345195, Ghidra index: 12798, label: FUN_00345195
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_xbe_guest32_xnet_conditional_tail.h"

void FUN_00345195(bf_xnet_conditional_tail_state& guest)
{
    guest.ecx = bf_guest_read_u32(0x0040f5b4u);
    bf_xnet_conditional_tail(guest, 0x00345195u, 6u, 0x00348df2u, 12u);
}
