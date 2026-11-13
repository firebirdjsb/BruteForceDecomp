/* Brute Force original Xbox - direct guest jump instruction model.
 * Input x86 body SHA-256: 2E5E3A9D033EC88CA6C2A0FC9D12EFC57D8597C9A0C3560A731F86594F436ADA
 * Entry: 0x0038237e, Ghidra index: 13592, label: thunk_FUN_00382218
 * STATUS: GUEST32_DIRECT_JUMP_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 * Models only the observed E9 tail jump; it does not execute the target body.
 */
#include <stdint.h>

void thunk_FUN_00382218(uint32_t& guest_eip)
{
    guest_eip = 0x00382218u;  // E9 rel32 destination; no guest return address is pushed.
}
