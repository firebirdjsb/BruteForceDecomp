/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 55F75BB6016D873A7022CF5A85498B0331092C97388B7186954474A188A9FD25
 * Entry: 0x00312a5d, Ghidra index: 11958, label: IDirectSoundBuffer_SetPitch
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void DSOUND__IDirectSoundBuffer_SetPitch(int param_1,undefined4 param_2)

{
  CDirectSoundBuffer_SetPitch(-(uint)(param_1 != 0) & param_1 - 0x1cU,param_2);
  return;
}
