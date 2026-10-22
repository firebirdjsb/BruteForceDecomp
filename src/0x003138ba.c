/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6A2347E88FB053860AA6227AA5F53F23CCD739774CCFD33891B40FCEC4A48EEA
 * Entry: 0x003138ba, Ghidra index: 12020, label: IDirectSoundBuffer_SetAllParameters
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void DSOUND__IDirectSoundBuffer_SetAllParameters(int param_1,undefined4 param_2,undefined4 param_3)

{
  CDirectSoundBuffer_SetAllParameters(-(uint)(param_1 != 0) & param_1 - 0x1cU,param_2,param_3);
  return;
}
