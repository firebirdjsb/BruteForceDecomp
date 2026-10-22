/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 244D20407E5FE10CCD4F1A3FA4FE31839ACCE06A449AA9A75ADACCD6925C02FF
 * Entry: 0x000f00a0, Ghidra index: 2996, label: FUN_000f00a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
undefined1 FUN_000f00a0(int param_1)

{
  int *piVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 unaff_EBP;
  int **ppiVar10;
  int *apiStack_14 [2];
  int *local_c;
  int iStack_8;
  int iStack_4;
  
  uVar2 = (undefined1)((uint)unaff_EBP >> 0x18);
  piVar5 = *(int **)(param_1 + 0x74);
  local_c = (int *)0x0;
  for (; (piVar1 = local_c, piVar5 != *(int **)(param_1 + 0x78) &&
         (piVar1 = (int *)*piVar5, ((int *)*piVar5)[9] != -0x754936b)); piVar5 = piVar5 + 1) {
  }
  local_c = piVar1;
  if ((local_c == (int *)0x0) || (iVar4 = (**(code **)(*local_c + 4))(), iVar4 != 7)) {
    return 0;
  }
  apiStack_14[0] = (int *)((uint)apiStack_14[0] & 0xffffff);
  piVar5 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
  iVar4 = *piVar5;
  iVar7 = **(int **)(DAT_00469b58 + 8);
  uVar6 = FUN_00102000();
  iVar7 = (**(code **)(iVar7 + 0x130))(uVar6);
  if (iVar4 == 0x17506391) {
    return 1;
  }
  apiStack_14[0] = (int *)0x0;
  local_c = (int *)0x17e9b6bd;
  iStack_8 = iVar7;
  piVar5 = (int *)FUN_00100f90();
  if ((piVar5 == (int *)0x0) || (iVar8 = (**(code **)(*piVar5 + 4))(), iVar8 != 3)) {
    if (iVar4 == 0x120785ef) {
      puVar9 = (undefined4 *)FUN_000efaf0();
      apiStack_14[0] = (int *)*puVar9;
      iVar4 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x100))(apiStack_14);
      goto LAB_000f018f;
    }
    local_c = *(int **)(iVar7 + 0x14);
    iVar7 = **(int **)(DAT_00469b58 + 8);
    ppiVar10 = &local_c;
  }
  else {
    puVar9 = (undefined4 *)FUN_0010c850();
    apiStack_14[0] = (int *)*puVar9;
    iVar7 = **(int **)(DAT_00469b58 + 8);
    ppiVar10 = apiStack_14;
    if (iVar4 == 0x120785ef) {
      iVar4 = (**(code **)(iVar7 + 0x100))();
LAB_000f018f:
      if (iVar4 == 0) {
        return uVar2;
      }
      uVar2 = FUN_001036d0();
      return uVar2;
    }
  }
  iVar7 = (**(code **)(iVar7 + 0x108))(ppiVar10);
  if (iVar7 == 0) {
    return uVar2;
  }
  cVar3 = FUN_001036d0();
  if (cVar3 == '\0') {
    return uVar2;
  }
  if (iVar4 == -0x104e72d8) {
    if (*(int *)(iStack_4 + 0x24) == -0x5d1cd49) {
      uVar6 = FUN_000efab0();
      cVar3 = FUN_000f2960(uVar6);
      if (cVar3 != '\0') goto LAB_000f0255;
    }
    FUN_000ef1b0();
  }
LAB_000f0255:
  FUN_000ef1b0();
  return 1;
}
