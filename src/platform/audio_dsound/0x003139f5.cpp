/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 299EADA7513AE83A132113C787C1F15344DC33C4AA654074059238F8F27AB44D
 * Entry: 0x003139f5, Ghidra index: 12029, label: IDirectSoundStream_SetMaxDistance
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void DSOUND__IDirectSoundStream_SetMaxDistance
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  CDirectSoundStream_SetMaxDistance(param_1,param_2,param_3);
  return;
}
