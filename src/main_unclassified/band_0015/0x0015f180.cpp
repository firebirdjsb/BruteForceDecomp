/* Brute Force original Xbox - guest32 memory and tail transfer.
 * Input x86 body SHA-256: EF7D357A255BC511D387000D056FEA14F4D7498234D951806CDA005373164E6E
 * Entry: 0x0015f180, Ghidra index: 4571, label: FUN_0015f180
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_xbe_guest32_tail_writes.h"

void FUN_0015f180(bf_guest32_tail_write_state& guest)
{
    bf_guest32_adjust_tail(guest, 0x0015f180u, 0x00156c50u,
                           0x39aab0u, 0x39adecu, 0x39a8c0u,
                           0x39aaa8u, 0x39aa9cu, 0x180u);
}
