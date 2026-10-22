/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7C4FC5317860BB7E2C4886B0DD90806AC3C658162065FC701225A3643C990FE9
 * Entry: 0x0023d660, Ghidra index: 7958, label: FUN_0023d660
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0023d660(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int *piVar12;
  
  piVar2 = *(int **)(param_1 + 0xc);
  for (piVar12 = *(int **)(param_1 + 8); piVar12 != piVar2; piVar12 = piVar12 + 1) {
    if ((*(int *)*piVar12 == 0) &&
       (piVar3 = *(int **)(((int *)*piVar12)[1] + 0x20), piVar3 != (int *)0x0)) {
      (**(code **)(*piVar3 + 0x18))(piVar3,param_2);
    }
  }
  iVar4 = *(int *)(param_1 + 0x20);
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  uVar1 = param_2[8];
  uVar8 = param_2[4];
  uVar9 = param_2[5];
  uVar10 = param_2[6];
  uVar11 = param_2[7];
  *(undefined4 *)(iVar4 + 0x14) = *param_2;
  *(undefined4 *)(iVar4 + 0x18) = uVar5;
  *(undefined4 *)(iVar4 + 0x1c) = uVar6;
  *(undefined4 *)(iVar4 + 0x20) = uVar7;
  *(undefined4 *)(iVar4 + 0x34) = uVar1;
  *(undefined4 *)(iVar4 + 0x24) = uVar8;
  *(undefined4 *)(iVar4 + 0x28) = uVar9;
  *(undefined4 *)(iVar4 + 0x2c) = uVar10;
  *(undefined4 *)(iVar4 + 0x30) = uVar11;
  return;
}
