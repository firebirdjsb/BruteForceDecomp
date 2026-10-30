/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9B9DFB2D6377CE52DDEA583CEA50ABCFEB7248E109C94268E7A9C6F25A4FDB43
 * Entry: 0x00312a79, Ghidra index: 11959, label: IDirectSoundBuffer_SetEG
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void DSOUND__IDirectSoundBuffer_SetEG(int param_1,undefined4 param_2)

{
  CDirectSoundBuffer_SetEG(-(uint)(param_1 != 0) & param_1 - 0x1cU,param_2);
  return;
}
