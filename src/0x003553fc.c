/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CB4D49B6526776E5252EEA960E0EE2A398758E42CFAAF4375494DFC1956FE093
 * Entry: 0x003553fc, Ghidra index: 13119, label: FUN_003553fc
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_003553fc(int param_1,int param_2)

{
  undefined2 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  iVar5 = param_2;
  KeRaiseIrqlToDpcLevel();
  piVar2 = *(int **)(param_1 + 0x24);
  if (piVar2 == (int *)(param_1 + 0x24)) {
    param_2 = FUN_00345b2e(param_1,param_2);
    KfLowerIrql();
  }
  else {
    iVar3 = *piVar2;
    piVar4 = (int *)piVar2[1];
    *piVar4 = iVar3;
    *(int **)(iVar3 + 4) = piVar4;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) - piVar2[2];
    KfLowerIrql();
    uVar1 = *(undefined2 *)(piVar2 + 4);
    if (*(int *)(param_2 + 0x18) != 0) {
      *(int *)(*(int *)(param_2 + 0x18) + 4) = piVar2[3];
      *(undefined2 *)(*(int *)(param_2 + 0x18) + 2) = uVar1;
    }
    uVar6 = piVar2[2];
    uVar7 = *(uint *)(param_2 + 0x14);
    if (uVar7 < uVar6) {
      *(undefined4 *)(param_2 + 8) = 0x8000;
      param_2 = 0x80072738;
    }
    else {
      *(undefined4 *)(param_2 + 8) = 0;
      param_2 = 0;
      uVar7 = uVar6;
    }
    **(uint **)(iVar5 + 0xc) = uVar7;
    puVar8 = piVar2 + 5;
    puVar9 = *(undefined4 **)(iVar5 + 0x10);
    for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    FUN_0034c6bc(piVar2);
  }
  return param_2;
}
