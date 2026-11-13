/* Brute Force original Xbox - guest32 memory and tail transfer.
 * Input x86 body SHA-256: D1ACEB619F9F84AA73B34ECA391EDA877CD41C7886080E181670726953EE3B4E
 * Entry: 0x00162f70, Ghidra index: 4663, label: FUN_00162f70
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_xbe_guest32_tail_writes.h"

void FUN_00162f70(bf_guest32_tail_write_state& guest)
{
    bf_guest32_adjust_tail(guest, 0x00162f70u, 0x00156c50u,
                           0x39a8e0u, 0x39adecu, 0x39a8c0u,
                           0x39a8b8u, 0x39a8acu, 0x170u);
}
