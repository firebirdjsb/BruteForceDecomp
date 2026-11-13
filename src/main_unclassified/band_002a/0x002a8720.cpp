/* Brute Force original Xbox - guest32 memory and tail transfer.
 * Input x86 body SHA-256: 99D655E9D209D46B4DB06B762A080CDC1B1BD9A95AE6B9D954A61B043B053872
 * Entry: 0x002a8720, Ghidra index: 9619, label: FUN_002a8720
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_xbe_guest32_tail_writes.h"

void FUN_002a8720(bf_guest32_tail_write_state& guest)
{
    bf_guest32_advance_tail(guest, guest.edx, 0x002a8720u, 0x002a6ec0u);
}
