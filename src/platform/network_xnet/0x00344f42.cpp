/* Brute Force original Xbox - conditional guest tail transfer.
 * Input x86 body SHA-256: 76AAD65C877516802FE88A26179856F0FC086740B44FA9C855BAF8A139DB5222
 * Entry: 0x00344f42, Ghidra index: 12757, label: FUN_00344f42
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_xbe_guest32_xnet_conditional_tail.h"

void FUN_00344f42(bf_xnet_conditional_tail_state& guest)
{
    bf_xnet_conditional_tail(guest, 0x00344f42u, 0u, 0x0034a037u, 4u);
}
