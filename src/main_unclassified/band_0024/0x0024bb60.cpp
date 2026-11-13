/* Brute Force original Xbox - guest32 memory and tail transfer.
 * Input x86 body SHA-256: 8706A4F80BD5ACB09DF5E6CA46D90749EB96DDF907E2C41CF3BFF8F8FB3BA148
 * Entry: 0x0024bb60, Ghidra index: 8268, label: FUN_0024bb60
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_xbe_guest32_tail_writes.h"

void FUN_0024bb60(bf_guest32_tail_write_state& guest)
{
    bf_guest32_copy_tail(guest, 0x0024bb60u, 0x001e0dd0u);
}
