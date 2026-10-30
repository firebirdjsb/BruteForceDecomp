/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5E2C2C3CC9E68D5077C769698AED27023CE346F1BC95ABEE04EDC49D43628DA1
 * Entry: 0x00312cc7, Ghidra index: 11981, label: CDirectSound_CommitDeferredSettings
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032f7dc;
extern uint32_t PTR_LAB_00040000_1_0032f7e8;
undefined4 DSOUND__CDirectSound_CommitDeferredSettings(int param_1)

{
  uint *puVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  cVar2 = DirectSoundEnterCriticalSection();
  if (DAT_0032f7dc == 0) {
    uVar4 = FUN_00315ec8();
    for (puVar5 = *(undefined4 **)(param_1 + 0x10); puVar5 != (undefined4 *)(param_1 + 0x10);
        puVar5 = (undefined4 *)*puVar5) {
      CDirectSoundVoice_CommitDeferredSettings(puVar5 + -5);
    }
    puVar1 = (uint *)(*(int *)(param_1 + 8) + 0xa4);
    *puVar1 = *puVar1 & ~uVar4;
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
