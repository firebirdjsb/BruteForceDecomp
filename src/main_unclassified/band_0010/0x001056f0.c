/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 380C38D11F8C4B2BAA864EE4A333E2F55BB735434783704643A884E62C6D790A
 * Entry: 0x001056f0, Ghidra index: 3343, label: FUN_001056f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0038dc80;
extern uint32_t DAT_0040cd20;
extern uint32_t DAT_004699fc;
void FUN_001056f0(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 auStack_1c [4];
  undefined4 uStack_18;
  undefined4 uStack_8;
  uint uStack_4;
  
  if ((param_1 != (int *)0x0) && (iVar2 = (**(code **)(*param_1 + 4))(), iVar2 == 1)) {
    bVar1 = *(byte *)(param_1 + 10);
    if (DAT_004699fc == '\0') {
      if ((bVar1 & 4) != 0) {
        *(byte *)(param_1 + 10) = bVar1 & 0xfb;
        (**(code **)(*param_1 + 0x28))();
      }
    }
    else {
      if ((bVar1 & 4) == 0) {
        *(byte *)(param_1 + 10) = bVar1 | 4;
        (**(code **)(*param_1 + 0x28))();
      }
      uStack_4 = 7;
      uStack_8 = 0;
      /* 0x00105749 MOV WORD PTR [ESP+0x14],0: clear only the low 16 bits.\n       * Guest stack high 16 bits remain unknown (ABI_UNVERIFIED). */\n      uStack_18 &= UINT32_C(0xffff0000);
      uVar3 = FUN_002eaa70(&DAT_0040cd20);
      FUN_000876a0(auStack_1c,uVar3);
      puVar4 = &DAT_0038dc80;
      do {
        uVar3 = FUN_0008e230();
        FUN_002eaa70(uVar3);
        FUN_0008ed00();
        FUN_000fb6e0(1,10);
        puVar4 = puVar4 + 1;
      } while ((int)puVar4 < 0x38dc94);
      FUN_0010a7d0();
      if (7 < uStack_4) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(uStack_18);
      }
    }
  }
  return;
}
