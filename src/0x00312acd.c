/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BBBC20C8D7A5F56E9A70974435E13C5BBC8870E4D88DD2B2A0C2D8A64F08559D
 * Entry: 0x00312acd, Ghidra index: 11962, label: IDirectSoundBuffer_SetMixBinVolumes_8
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void DSOUND__IDirectSoundBuffer_SetMixBinVolumes_8(int param_1,undefined4 param_2)

{
  CDirectSoundBuffer_SetMixBinVolumes(-(uint)(param_1 != 0) & param_1 - 0x1cU,param_2);
  return;
}
