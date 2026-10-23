/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 68EED2BA5B0F17494DA1BE855A0907E3576BF16366AE906A759BCEB570F08DF3
 * Entry: 0x00313a0d, Ghidra index: 12030, label: IDirectSoundStream_SetMinDistance
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void DSOUND__IDirectSoundStream_SetMinDistance
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  CDirectSoundStream_SetMinDistance(param_1,param_2,param_3);
  return;
}
