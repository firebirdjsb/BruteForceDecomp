/* Brute Force original Xbox - direct guest jump instruction model.
 * Input x86 body SHA-256: 2B9A1FD85988CD4C16E0F56AD9F526252D842AA33483819BE563B852B810C560
 * Entry: 0x002fe985, Ghidra index: 11038, label: thunk_FUN_002fe95d
 * STATUS: GUEST32_DIRECT_JUMP_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 * Models only the observed E9 tail jump; it does not execute the target body.
 */
#include <stdint.h>

void thunk_FUN_002fe95d(uint32_t& guest_eip)
{
    guest_eip = 0x002fe95du;  // E9 rel32 destination; no guest return address is pushed.
}
