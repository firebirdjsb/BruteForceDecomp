/* Brute Force original Xbox - direct guest jump.
 * Input x86 body SHA-256: E67FB6A884326DE86B3A27E7CB0B4963584485B4E033835E78D6079A1BA1C997
 * Entry: 0x00312c06, Ghidra index: 11976, label: IDirectSoundStream_Pause
 * STATUS: X86_OPERANDS_OBSERVED, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include <stdint.h>

void DSOUND__IDirectSoundStream_Pause(uint32_t &guest_eip)
{
    guest_eip = 0x003125adu; // Original JMP; no guest return address is pushed.
}
