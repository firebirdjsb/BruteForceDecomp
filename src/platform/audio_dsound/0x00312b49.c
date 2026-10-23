/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1825940332B80308D3E06667049D88A4665D45E38890A2D44189E2FC99497523
 * Entry: 0x00312b49, Ghidra index: 11966, label: IDirectSoundBuffer_Pause
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void DSOUND__IDirectSoundBuffer_Pause(int param_1,undefined4 param_2)

{
  CDirectSoundBuffer_Pause(-(uint)(param_1 != 0) & param_1 - 0x1cU,param_2);
  return;
}
