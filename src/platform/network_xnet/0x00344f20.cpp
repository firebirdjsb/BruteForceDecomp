/* Brute Force original Xbox - conditional guest tail transfer.
 * Input x86 body SHA-256: 471343F0D2B90ECEF33D1F51ED4D3F5DAC825D62DC57415F303D8C34B645A1AB
 * Entry: 0x00344f20, Ghidra index: 12755, label: FUN_00344f20
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_xbe_guest32_xnet_conditional_tail.h"

void FUN_00344f20(bf_xnet_conditional_tail_state& guest)
{
    bf_xnet_conditional_tail(guest, 0x00344f20u, 0u, 0x00347b5cu, 8u);
}
