/* Brute Force original Xbox - guest32 memory and tail transfer.
 * Input x86 body SHA-256: 6DA913F43A5C73F5AA2D4C39CB21855F8F1D7292B4F330B8864126BBF114713C
 * Entry: 0x001dceb0, Ghidra index: 6601, label: FUN_001dceb0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_xbe_guest32_tail_writes.h"

void FUN_001dceb0(bf_guest32_tail_write_state& guest)
{
    bf_guest32_copy_tail(guest, 0x001dceb0u, 0x001bddb0u);
}
