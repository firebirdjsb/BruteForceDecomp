/* Brute Force original Xbox - guest32 memory and tail transfer.
 * Input x86 body SHA-256: 2A84417DDD1E7D2E7982747EA32F8724C25FAED0D3D8520633DD2DBC2D8AA838
 * Entry: 0x001dd0f0, Ghidra index: 6612, label: FUN_001dd0f0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_xbe_guest32_tail_writes.h"

void FUN_001dd0f0(bf_guest32_tail_write_state& guest)
{
    bf_guest32_copy_tail(guest, 0x001dd0f0u, 0x001cbc10u);
}
