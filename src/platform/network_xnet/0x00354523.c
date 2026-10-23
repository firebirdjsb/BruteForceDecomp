/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D4B9356C458212BDD029A856B7509956463021D1745508D7AF6F2A6EC5533981
 * Entry: 0x00354523, Ghidra index: 13111, label: FUN_00354523
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00354523(uint param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  uint *puVar15;
  int local_1c;
  uint *local_18;
  uint local_c;
  undefined4 *local_8;
  
  iVar5 = param_1;
  local_1c = 0;
  uVar3 = *(uint *)(param_1 + 0xbc);
  uVar6 = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x3c);
  puVar4 = *(uint **)(param_2 + 8);
  if (uVar6 <= uVar3) {
    uVar6 = uVar3;
  }
  uVar11 = *(uint *)(param_2 + 0x10);
  if (uVar6 < *(uint *)(param_2 + 0x10)) {
    *(uint *)(param_2 + 0x10) = uVar3;
    uVar11 = uVar3;
  }
  param_1 = *puVar4;
  puVar15 = puVar4;
  puVar12 = (undefined4 *)puVar4[1];
  do {
    if (uVar11 == 0) {
LAB_003546aa:
      FUN_00345541(0xffffffff,0x100);
      return local_1c;
    }
    local_c = uVar3;
    if (uVar11 <= uVar3) {
      local_c = uVar11;
    }
    iVar7 = FUN_0035359e(iVar5,*(undefined4 *)(iVar5 + 0x44),*(undefined2 *)(iVar5 + 0x4a),
                         *(undefined2 *)(iVar5 + 0x48),param_3,local_c,0x38,&LAB_0035360f);
    if (iVar7 == 0) {
      piVar1 = (int *)(param_2 + 0x10);
      *piVar1 = *piVar1 - uVar11;
      if (*piVar1 == 0) {
        local_1c = -0x7ff8d8b9;
      }
      goto LAB_003546aa;
    }
    uVar11 = uVar11 - local_c;
    puVar8 = (undefined4 *)FUN_0034c932();
    local_18 = puVar15;
    local_8 = puVar12;
    uVar6 = local_c;
    if (param_1 < local_c) {
      while (puVar15 = puVar4, uVar6 != 0) {
        while (param_1 == 0) {
          local_8 = (undefined4 *)puVar15[3];
          puVar15 = puVar15 + 2;
          local_18 = puVar15;
          param_1 = *puVar15;
        }
        uVar10 = param_1;
        if (uVar6 < param_1) {
          uVar10 = uVar6;
        }
        puVar12 = (undefined4 *)((int)puVar8 + uVar10);
        puVar2 = (undefined4 *)((int)local_8 + uVar10);
        param_1 = param_1 - uVar10;
        for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *puVar8 = *local_8;
          local_8 = local_8 + 1;
          puVar8 = puVar8 + 1;
        }
        uVar6 = uVar6 - uVar10;
        puVar13 = local_8;
        puVar14 = puVar8;
        for (uVar10 = uVar10 & 3; puVar8 = puVar12, puVar4 = local_18, local_8 = puVar2, uVar10 != 0
            ; uVar10 = uVar10 - 1) {
          *(undefined1 *)puVar14 = *(undefined1 *)puVar13;
          puVar13 = (undefined4 *)((int)puVar13 + 1);
          puVar14 = (undefined4 *)((int)puVar14 + 1);
        }
      }
    }
    else {
      local_8 = (undefined4 *)((int)puVar12 + local_c);
      for (uVar6 = local_c >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar8 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar8 = puVar8 + 1;
      }
      param_1 = param_1 - local_c;
      for (uVar6 = local_c & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar12;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
    }
    KeRaiseIrqlToDpcLevel();
    local_1c = *(int *)(iVar5 + 0x40);
    if (local_1c < 0) {
      FUN_0034c826(iVar7);
      KfLowerIrql();
      goto LAB_003546aa;
    }
    FUN_003540f2(iVar5,iVar7,CONCAT31((int3)((uint)local_1c >> 8),uVar11 == 0) * 8 + 0x10,local_c);
    KfLowerIrql();
    puVar4 = puVar15;
    puVar15 = local_18;
    puVar12 = local_8;
  } while( true );
}
