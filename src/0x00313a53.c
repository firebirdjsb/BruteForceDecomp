/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A38B6C1979CD8DB5D1F4130514E688B3B3D5205B96F1C6537C378AC53A2CE84C
 * Entry: 0x00313a53, Ghidra index: 12033, label: IDirectSoundStream_SetVelocity
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void DSOUND__IDirectSoundStream_SetVelocity
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  CDirectSoundStream_SetVelocity(param_1,param_2,param_3,param_4,param_5);
  return;
}
