/* Brute Force original Xbox - conditional guest tail transfer.
 * Input x86 body SHA-256: 0B2ADC436345BEFAD341D5DA55B85DE40EE5A38A01B8AF2AFBED3951C76A7D39
 * Entry: 0x00344fc8, Ghidra index: 12764, label: FUN_00344fc8
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_xbe_guest32_xnet_conditional_tail.h"

void FUN_00344fc8(bf_xnet_conditional_tail_state& guest)
{
    bf_xnet_conditional_tail(guest, 0x00344fc8u, 0u, 0x0034ff75u, 4u);
}
