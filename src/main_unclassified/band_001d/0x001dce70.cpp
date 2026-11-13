/* Brute Force original Xbox - guest32 memory and tail transfer.
 * Input x86 body SHA-256: CFFC76EA16D640B59C26BC6FA671677A45B46C990C38C2D2DDB364F036094C24
 * Entry: 0x001dce70, Ghidra index: 6599, label: FUN_001dce70
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_xbe_guest32_tail_writes.h"

void FUN_001dce70(bf_guest32_tail_write_state& guest)
{
    bf_guest32_copy_tail(guest, 0x001dce70u, 0x001cb6b0u);
}
