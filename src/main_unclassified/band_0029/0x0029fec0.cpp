/* Brute Force original Xbox - guest32 memory and tail transfer.
 * Input x86 body SHA-256: 4D7D9BFFF80A87E7E250007326C726B300FBA029235F2EAEE9822C164B00EC62
 * Entry: 0x0029fec0, Ghidra index: 9500, label: FUN_0029fec0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_xbe_guest32_tail_writes.h"

void FUN_0029fec0(bf_guest32_tail_write_state& guest)
{
    bf_guest32_advance_tail(guest, guest.ecx, 0x0029fec0u, 0x002a75d0u);
}
