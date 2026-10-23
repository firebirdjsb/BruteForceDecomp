/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EAD75257974E303859A984EFD67CAA44268D35CDA34563553B02E64C346740CB
 * Entry: 0x00313191, Ghidra index: 11995, label: CDirectSoundVoice_SetRolloffCurve
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
DSOUND__CDirectSoundVoice_SetRolloffCurve
          (int param_1,undefined4 param_2,undefined4 param_3,byte param_4)

{
  uint *puVar1;
  
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xb4) + 0x70) = param_2;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xb4) + 0x74) = param_3;
  puVar1 = (uint *)(*(int *)(*(int *)(param_1 + 0x10) + 0xb4) + 0x78);
  *puVar1 = *puVar1 | 4;
  if ((param_4 & 1) == 0) {
    CDirectSoundVoice_CommitDeferredSettings(param_1);
  }
  return 0;
}
