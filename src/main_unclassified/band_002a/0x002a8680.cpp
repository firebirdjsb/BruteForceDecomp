/* Brute Force original Xbox - guest32 memory and tail transfer.
 * Input x86 body SHA-256: EC80CAC862792BF5AD1630D3E68ECC0DE76A52B79681BFB0EC1BDBA7B6725F4C
 * Entry: 0x002a8680, Ghidra index: 9615, label: FUN_002a8680
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_xbe_guest32_tail_writes.h"

void FUN_002a8680(bf_guest32_tail_write_state& guest)
{
    bf_guest32_advance_tail(guest, guest.edx, 0x002a8680u, 0x002a6320u);
}
