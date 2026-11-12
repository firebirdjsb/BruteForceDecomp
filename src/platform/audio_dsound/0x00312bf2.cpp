/* Brute Force original Xbox - direct guest jump.
 * Input x86 body SHA-256: FAC99F18E6801C750C6DD00A7ED2B7198DF934CEF079D88A302C5EA6E3759FD9
 * Entry: 0x00312bf2, Ghidra index: 11972, label: IDirectSoundStream_SetPitch
 * STATUS: X86_OPERANDS_OBSERVED, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include <stdint.h>

void DSOUND__IDirectSoundStream_SetPitch(uint32_t &guest_eip)
{
    guest_eip = 0x00312864u; // Original JMP; no guest return address is pushed.
}
