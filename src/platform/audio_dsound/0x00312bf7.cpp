/* Brute Force original Xbox - direct guest jump instruction model.
 * Input x86 body SHA-256: 296A7E82A80D46DD8869A8CFEFF94BFF6BCBBD4E1D6BA5A7A8D4B03F26DF0FC8
 * Entry: 0x00312bf7, Ghidra index: 11973, label: IDirectSoundStream_SetEG
 * STATUS: GUEST32_DIRECT_JUMP_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 * Models only the observed E9 tail jump; it does not execute the target body.
 */
#include <stdint.h>

void DSOUND__IDirectSoundStream_SetEG(uint32_t& guest_eip)
{
    guest_eip = 0x00312908u;  // E9 rel32 destination; no guest return address is pushed.
}
