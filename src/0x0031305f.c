/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5DE78A1478403B9E90DB538A8F377C3515DC3181F2D0C9E23FC7F70ADCE85909
 * Entry: 0x0031305f, Ghidra index: 11990, label: CDirectSoundVoice_SetMaxDistance
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 DSOUND__CDirectSoundVoice_SetMaxDistance(int param_1,undefined4 param_2,byte param_3)

{
  uint *puVar1;
  
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xb4) + 0x38) = param_2;
  puVar1 = (uint *)(*(int *)(*(int *)(param_1 + 0x10) + 0xb4) + 0x78);
  *puVar1 = *puVar1 | 4;
  if ((param_3 & 1) == 0) {
    CDirectSoundVoice_CommitDeferredSettings(param_1);
  }
  return 0;
}
