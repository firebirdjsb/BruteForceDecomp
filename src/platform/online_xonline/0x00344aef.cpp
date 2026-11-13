/* Brute Force original Xbox - direct guest jump instruction model.
 * Input x86 body SHA-256: 0EC6F108B77B10F6E92B1AEAE44CD159BFB3E91CA591869549C2521664A1E7B9
 * Entry: 0x00344aef, Ghidra index: 12747, label: thunk_FUN_00343e85
 * STATUS: GUEST32_DIRECT_JUMP_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 * Models only the observed E9 tail jump; it does not execute the target body.
 */
#include <stdint.h>

void thunk_FUN_00343e85(uint32_t& guest_eip)
{
    guest_eip = 0x00343e85u;  // E9 rel32 destination; no guest return address is pushed.
}
