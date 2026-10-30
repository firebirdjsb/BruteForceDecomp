/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 54D1F4A52895DE03E4AFA1C821A0DC7B4C59D5FCDBF8DA2D0499212A8414255C
 * Entry: 0x00312a41, Ghidra index: 11957, label: IDirectSoundBuffer_SetVolume
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void DSOUND__IDirectSoundBuffer_SetVolume(int param_1,undefined4 param_2)

{
  CDirectSoundBuffer_SetVolume(-(uint)(param_1 != 0) & param_1 - 0x1cU,param_2);
  return;
}
