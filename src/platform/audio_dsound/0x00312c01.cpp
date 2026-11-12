/* Brute Force original Xbox - direct guest jump.
 * Input x86 body SHA-256: D2EBC250D596551312E959C229A777E0EB411B50D2A16DCE052A2E3AD395C151
 * Entry: 0x00312c01, Ghidra index: 11975, label: IDirectSoundStream_SetMixBinVolumes_8
 * STATUS: X86_OPERANDS_OBSERVED, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include <stdint.h>

void DSOUND__IDirectSoundStream_SetMixBinVolumes_8(uint32_t &guest_eip)
{
    guest_eip = 0x003129acu; // Original JMP; no guest return address is pushed.
}
