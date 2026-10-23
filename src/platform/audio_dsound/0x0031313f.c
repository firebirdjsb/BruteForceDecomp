/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 53C0514B6354C97C43C5C160EC4E132C4CA2D9B01FECA764947C5BAC0DDB6C60
 * Entry: 0x0031313f, Ghidra index: 11994, label: CDirectSoundVoice_SetVelocity
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
DSOUND__CDirectSoundVoice_SetVelocity
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,byte param_5)

{
  byte *pbVar1;
  
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xb4) + 0x10) = param_2;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xb4) + 0x14) = param_3;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xb4) + 0x18) = param_4;
  pbVar1 = (byte *)(*(int *)(*(int *)(param_1 + 0x10) + 0xb4) + 0x78);
  *pbVar1 = *pbVar1 | 0x80;
  if ((param_5 & 1) == 0) {
    CDirectSoundVoice_CommitDeferredSettings(param_1);
  }
  return 0;
}
