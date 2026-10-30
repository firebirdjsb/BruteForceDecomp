/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 433D7C983F9B8252AFD81138D72B2507043D2788DA14E6648C16ED5A34293CB0
 * Entry: 0x00312a95, Ghidra index: 11960, label: IDirectSoundBuffer_SetHeadroom
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void DSOUND__IDirectSoundBuffer_SetHeadroom(int param_1,undefined4 param_2)

{
  CDirectSoundBuffer_SetHeadroom(-(uint)(param_1 != 0) & param_1 - 0x1cU,param_2);
  return;
}
