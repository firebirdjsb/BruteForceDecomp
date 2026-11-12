/* Brute Force original Xbox - direct guest jump.
 * Input x86 body SHA-256: 6AFBBCA40C10FF8DAF80CD885DB2F7C950AE1C8A1B29CA097BE8549D25D0497F
 * Entry: 0x00313a25, Ghidra index: 12031, label: IDirectSoundStream_SetMode
 * STATUS: X86_OPERANDS_OBSERVED, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include <stdint.h>

void DSOUND__IDirectSoundStream_SetMode(uint32_t &guest_eip)
{
    guest_eip = 0x003136e4u; // Original JMP; no guest return address is pushed.
}
