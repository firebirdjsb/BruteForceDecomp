/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DDAA83D8DE11E35C4BAB8179A2AD09F6721A0C85FB54F56BA6592112E9A1551A
 * Entry: 0x00044030, Ghidra index: 529, label: FUN_00044030
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003ffd80;
void FUN_00044030(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  bool bVar7;
  undefined1 local_8 [4];
  int local_4;
  
  bVar7 = false;
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 8);
  puVar2 = *(undefined4 **)(iVar1 + 0x8c);
  puVar4 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)*puVar2;
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x8c);
  for (; puVar4 != puVar2; puVar4 = (undefined4 *)*puVar4) {
    iVar1 = puVar4[3];
    if (*(int *)(param_1 + 8) == 0) {
      puVar5 = (undefined1 *)(param_1 + 0xc);
    }
    else {
      bVar7 = true;
      local_4 = 0;
      puVar5 = local_8;
    }
    iVar6 = *(int *)(puVar5 + 4);
    if ((bVar7) && (bVar7 = false, local_4 != 0)) {
      FUN_0008f6e0();
    }
    iVar3 = *(int *)(iVar1 + 0x1c0);
    iVar6 = (**(code **)(*(int *)(iVar6 + 0x1b4) + 0x9c))();
    if (((iVar6 == -1) || (iVar3 == -1)) || ((&DAT_003ffd80)[iVar6 * 10 + iVar3] == '\0')) {
      iVar6 = FUN_000388b0(*(undefined4 *)(param_1 + 0x358));
      if (iVar6 != 0) {
        iVar6 = FUN_000388b0(*(undefined4 *)(param_1 + 0x358));
        if (iVar6 != 0) {
          FUN_0003eee0();
        }
        FUN_0003d8e0(iVar1);
      }
    }
    else {
      FUN_000435f0(param_1,iVar1);
    }
  }
  return;
}
