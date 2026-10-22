/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FF5F9BD693369A79C4163861957312FA87A9559CF49B510DF0414D05AE6A264B
 * Entry: 0x00178b70, Ghidra index: 4976, label: FUN_00178b70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469990;
extern uint32_t DAT_00469994;
void FUN_00178b70(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 local_4 [4];
  
  puVar1 = *(undefined4 **)(DAT_00469990 + 4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)*puVar1;
  }
  for (; puVar4 != puVar1; puVar4 = (undefined4 *)*puVar4) {
    iVar2 = puVar4[2];
    if (iVar2 != 0) {
      if (*(int *)(iVar2 + 0x10) != 0) {
        FUN_0008f6e0();
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(iVar2);
    }
  }
  if (DAT_00469990 == 0) {
    DAT_00469994 = 0;
    return;
  }
  puVar4 = *(undefined4 **)(DAT_00469990 + 4);
  puVar1 = (undefined4 *)(DAT_00469990 + 4);
  if (puVar4 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar4;
  }
  FUN_001298b0(local_4,uVar3,puVar4);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*puVar1);
}
