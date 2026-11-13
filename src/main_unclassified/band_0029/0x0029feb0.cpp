/* Brute Force original Xbox - guest32 memory and tail transfer.
 * Input x86 body SHA-256: 4373B32A81628BE559152A3B13E08400620782641BBEA189542B2BD44E61AF6F
 * Entry: 0x0029feb0, Ghidra index: 9499, label: FUN_0029feb0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_xbe_guest32_tail_writes.h"

void FUN_0029feb0(bf_guest32_tail_write_state& guest)
{
    bf_guest32_advance_tail(guest, guest.ecx, 0x0029feb0u, 0x002a6df0u);
}
