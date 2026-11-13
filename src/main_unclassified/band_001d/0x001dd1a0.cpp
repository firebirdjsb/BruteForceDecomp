/* Brute Force original Xbox - guest32 memory and tail transfer.
 * Input x86 body SHA-256: 8210CB8F690C06B9E3D6F87E3957FFC61F249842707D2A19CDEE259D086C6F26
 * Entry: 0x001dd1a0, Ghidra index: 6616, label: FUN_001dd1a0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_xbe_guest32_tail_writes.h"

void FUN_001dd1a0(bf_guest32_tail_write_state& guest)
{
    bf_guest32_copy_tail(guest, 0x001dd1a0u, 0x001cca00u);
}
