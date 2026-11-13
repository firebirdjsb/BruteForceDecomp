/* Brute Force original Xbox - guest32 memory and tail transfer.
 * Input x86 body SHA-256: E865D9B893E6813E8AC96A6B77F4D2B91667A011FD638706D560D106072E0736
 * Entry: 0x001dce10, Ghidra index: 6596, label: FUN_001dce10
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_xbe_guest32_tail_writes.h"

void FUN_001dce10(bf_guest32_tail_write_state& guest)
{
    bf_guest32_copy_tail(guest, 0x001dce10u, 0x001cb420u);
}
