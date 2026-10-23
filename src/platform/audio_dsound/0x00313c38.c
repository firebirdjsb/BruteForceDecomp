/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C744748856677A5D34362D0A0CC580C45C236E3CDF401D8348DF44F0DE5AF6AF
 * Entry: 0x00313c38, Ghidra index: 12038, label: CDirectSound_SetOrientation
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032f7dc;
extern uint32_t PTR_LAB_00040000_1_0032f7e8;
undefined4
DSOUND__CDirectSound_SetOrientation
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7,byte param_8)

{
  ushort *puVar1;
  char cVar2;
  undefined4 uVar3;
  
  cVar2 = DirectSoundEnterCriticalSection();
  if (DAT_0032f7dc == 0) {
    *(undefined4 *)(*(int *)(param_1 + 8) + 0x50) = param_2;
    *(undefined4 *)(*(int *)(param_1 + 8) + 0x54) = param_3;
    *(undefined4 *)(*(int *)(param_1 + 8) + 0x58) = param_4;
    *(undefined4 *)(*(int *)(param_1 + 8) + 0x5c) = param_5;
    *(undefined4 *)(*(int *)(param_1 + 8) + 0x60) = param_6;
    *(undefined4 *)(*(int *)(param_1 + 8) + 100) = param_7;
    puVar1 = (ushort *)(*(int *)(param_1 + 8) + 0xa4);
    *puVar1 = *puVar1 | 0x466;
    if ((param_8 & 1) == 0) {
      CDirectSound_CommitDeferredSettings(param_1);
    }
    if (cVar2 != '\0') {
      RtlLeaveCriticalSection(&PTR_LAB_00040000_1_0032f7e8);
    }
    uVar3 = 0;
  }
  else {
    if (cVar2 != '\0') {
      RtlLeaveCriticalSection(&PTR_LAB_00040000_1_0032f7e8);
    }
    uVar3 = 0x80004005;
  }
  return uVar3;
}
