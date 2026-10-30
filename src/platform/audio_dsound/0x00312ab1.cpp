/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B1BD49E9A753685175CD370257273DFFADEFBE8E7F38B55945A06297FF3EB447
 * Entry: 0x00312ab1, Ghidra index: 11961, label: IDirectSoundBuffer_SetMixBins
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void DSOUND__IDirectSoundBuffer_SetMixBins(int param_1,undefined4 param_2)

{
  CDirectSoundBuffer_SetMixBins(-(uint)(param_1 != 0) & param_1 - 0x1cU,param_2);
  return;
}
