/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E3A1D24C0FA2E4E8941428EB01F095C3E963C737552A6E6F4F663D73FB09F050
 * Entry: 0x00313a2a, Ghidra index: 12032, label: IDirectSoundStream_SetPosition
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void DSOUND__IDirectSoundStream_SetPosition
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  CDirectSoundStream_SetPosition(param_1,param_2,param_3,param_4,param_5);
  return;
}
