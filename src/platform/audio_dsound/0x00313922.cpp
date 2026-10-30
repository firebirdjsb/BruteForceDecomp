/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9AD188EA4562636572FE96F2A20A32C90F5C64D8DE05316468281989954117F9
 * Entry: 0x00313922, Ghidra index: 12023, label: IDirectSoundBuffer_SetMode
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void DSOUND__IDirectSoundBuffer_SetMode(int param_1,undefined4 param_2,undefined4 param_3)

{
  CDirectSoundBuffer_SetMode(-(uint)(param_1 != 0) & param_1 - 0x1cU,param_2,param_3);
  return;
}
