/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C7041B09F334E0C25D6CF53E497B14115D8F6255E26C8083494CA2F103AF8FE9
 * Entry: 0x00312b81, Ghidra index: 11968, label: IDirectSoundBuffer_GetCurrentPosition
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void DSOUND__IDirectSoundBuffer_GetCurrentPosition
               (int param_1,undefined4 param_2,undefined4 param_3)

{
  CDirectSoundBuffer_GetCurrentPosition(-(uint)(param_1 != 0) & param_1 - 0x1cU,param_2,param_3);
  return;
}
