/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1C105828247222DE137242B65C20EADD35467183D3D6ACCA491C0404F4A42537
 * Entry: 0x00025730, Ghidra index: 259, label: FUN_00025730
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a4f68;
undefined4 FUN_00025730(int param_1,undefined4 param_2,int param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int in_EAX;
  int iVar5;
  undefined4 *puVar6;
  undefined **local_18 [5];
  int iStack_4;
  
  iVar4 = param_1;
  if ((*(int *)(param_1 + 4) == 0) ||
     (param_1 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18, param_1 == 0)) {
    iVar5 = -1;
  }
  else {
    iVar5 = 0;
  }
  if (*(int *)(iVar4 + 0x10) != iVar5) {
    *(int *)(iVar4 + 0x10) = iVar5;
    *(undefined4 *)(iVar4 + 0x18) = 0x7f7fffff;
    *(undefined4 *)(iVar4 + 0x24) = 0;
  }
  *(undefined1 *)(iVar4 + 0x20) = 0;
  puVar6 = (undefined4 *)FUN_000233d0();
  param_1 = puVar6[1];
  uVar2 = puVar6[2];
  *(undefined4 *)(in_EAX + 0x478) = *puVar6;
  *(int *)(in_EAX + 0x47c) = param_1;
  *(undefined4 *)(in_EAX + 0x480) = uVar2;
  if (param_3 == 0) {
    *(undefined4 *)(iVar4 + 0x14) = 0;
  }
  iVar5 = *(int *)(*(int *)(iVar4 + 8) + -4);
  if (iVar5 != 0) {
    puVar1 = (uint *)(iVar5 + 0x28);
    *puVar1 = *puVar1 | 2;
  }
  iVar5 = FUN_000120f0();
  *(uint *)(iVar5 + 0x250) = *(uint *)(iVar5 + 0x250) | 1;
  if (((*(int **)(iVar5 + 0x24c) != (int *)0x0) &&
      (iVar5 = (**(code **)(**(int **)(iVar5 + 0x24c) + 0x3c))(), iVar5 == 0x1a)) &&
     (piVar3 = *(int **)(*(int *)(iVar4 + 4) + 0x14), piVar3 != (int *)0x0)) {
    iVar5 = (**(code **)(*piVar3 + 0x3c))();
    if ((iVar5 != 0x1b) && (iVar5 = (**(code **)(*piVar3 + 0x3c))(), iVar5 != 0x1c)) {
      return 1;
    }
    iStack_4 = 0;
    local_18[0] = &PTR_FUN_003a4f68;
    FUN_00058b60();
    FUN_000383a0(&param_1,*(undefined4 *)(iVar4 + 4),local_18);
    local_18[0] = &PTR_FUN_003a4f68;
    if (iStack_4 != 0) {
      FUN_0008f6e0();
    }
  }
  return 1;
}
