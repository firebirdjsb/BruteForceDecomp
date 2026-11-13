/* Brute Force original Xbox - direct guest jump instruction model.
 * Input x86 body SHA-256: C332F5BA5546C7F7D578636DCEEC7E7BB741756211C35170F216A6D9976B6997
 * Entry: 0x0035bc40, Ghidra index: 13203, label: thunk_FUN_002f8e70
 * STATUS: GUEST32_DIRECT_JUMP_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 * Models only the observed E9 tail jump; it does not execute the target body.
 */
#include <stdint.h>

void thunk_FUN_002f8e70(uint32_t& guest_eip)
{
    guest_eip = 0x002f8e70u;  // E9 rel32 destination; no guest return address is pushed.
}
