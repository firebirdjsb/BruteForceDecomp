/* Brute Force original Xbox - direct guest jump.
 * Input x86 body SHA-256: 3C295A6735660FA07245D8375A355BD0286DE399D464E3638623C39501DE71D0
 * Entry: 0x00312bed, Ghidra index: 11971, label: IDirectSoundStream_SetVolume
 * STATUS: X86_OPERANDS_OBSERVED, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include <stdint.h>

void DSOUND__IDirectSoundStream_SetVolume(uint32_t &guest_eip)
{
    guest_eip = 0x003128b6u; // Original JMP; no guest return address is pushed.
}
