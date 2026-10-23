/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D7B519944A7BD950C30816798C2B86423C632A0CE58810CF9D98BA295A6D34B0
 * Entry: 0x003130eb, Ghidra index: 11993, label: CDirectSoundVoice_SetPosition
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
DSOUND__CDirectSoundVoice_SetPosition
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,byte param_5)

{
  ushort *puVar1;
  
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xb4) + 4) = param_2;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xb4) + 8) = param_3;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xb4) + 0xc) = param_4;
  puVar1 = (ushort *)(*(int *)(*(int *)(param_1 + 0x10) + 0xb4) + 0x78);
  *puVar1 = *puVar1 | 0x1ff;
  if ((param_5 & 1) == 0) {
    CDirectSoundVoice_CommitDeferredSettings(param_1);
  }
  return 0;
}
