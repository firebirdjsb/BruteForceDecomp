/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 318B9ECE8CB4BCD81C47083BE6FD27ADFEF770BCD92310D88B1815D1535BBD41
 * Entry: 0x00313bd6, Ghidra index: 12037, label: CDirectSound_SetDistanceFactor
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032f7dc;
extern uint32_t PTR_LAB_00040000_1_0032f7e8;
undefined4 DSOUND__CDirectSound_SetDistanceFactor(int param_1,undefined4 param_2,byte param_3)

{
  byte *pbVar1;
  char cVar2;
  undefined4 uVar3;
  
  cVar2 = DirectSoundEnterCriticalSection();
  if (DAT_0032f7dc == 0) {
    *(undefined4 *)(*(int *)(param_1 + 8) + 0x68) = param_2;
    pbVar1 = (byte *)(*(int *)(param_1 + 8) + 0xa4);
    *pbVar1 = *pbVar1 | 0xe0;
    if ((param_3 & 1) == 0) {
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
