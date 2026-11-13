/* Brute Force original Xbox - guest32 memory and tail transfer.
 * Input x86 body SHA-256: F00FDFE8A337EACD478CE0175B4221931A3E3CB488E22582E1D415C8CCAD954D
 * Entry: 0x002a8690, Ghidra index: 9616, label: FUN_002a8690
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_xbe_guest32_tail_writes.h"

void FUN_002a8690(bf_guest32_tail_write_state& guest)
{
    bf_guest32_advance_tail(guest, guest.edx, 0x002a8690u, 0x002a62a0u);
}
