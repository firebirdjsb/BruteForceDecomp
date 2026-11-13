/* Brute Force original Xbox - direct guest jump instruction model.
 * Input x86 body SHA-256: B0400ADBFB73F8B43072493BD3F7BA646661794997FD32FCF7A5DF24CEB6EEB4
 * Entry: 0x00314c5b, Ghidra index: 12085, label: thunk_FUN_00314a29
 * STATUS: GUEST32_DIRECT_JUMP_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 * Models only the observed E9 tail jump; it does not execute the target body.
 */
#include <stdint.h>

void thunk_FUN_00314a29(uint32_t& guest_eip)
{
    guest_eip = 0x00314a29u;  // E9 rel32 destination; no guest return address is pushed.
}
