/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F76F93510A37DC6FA1DAF3D605A1D79728FE9D0BAD7C2789154D51F07C383505
 * Entry: 0x00313cca, Ghidra index: 12039, label: CDirectSound_SetPosition
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
DSOUND__CDirectSound_SetPosition
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,byte param_5)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  
  cVar2 = DirectSoundEnterCriticalSection();
  if (DAT_0032f7dc == 0) {
    piVar1 = (int *)(param_1 + 8);
    *(undefined4 *)(*piVar1 + 0x38) = param_2;
    *(undefined4 *)(*piVar1 + 0x3c) = param_3;
    *(undefined4 *)(*piVar1 + 0x40) = param_4;
    *(ushort *)(*piVar1 + 0xa4) = *(ushort *)(*piVar1 + 0xa4) | 0x1ff;
    if ((param_5 & 1) == 0) {
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
