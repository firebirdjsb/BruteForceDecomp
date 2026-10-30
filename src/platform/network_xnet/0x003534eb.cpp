/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D2C190A801FE00618558F21F800D5794562EF4D32738C0834C6CB59FEAD547EA
 * Entry: 0x003534eb, Ghidra index: 13087, label: FUN_003534eb
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_003534eb(int param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int local_c;
  byte local_5;
  
  iVar4 = param_2;
  local_c = 0;
  local_5 = 0;
  do {
    puVar1 = *(uint **)(param_1 + 0x24U);
    piVar5 = (int *)(-(uint)(puVar1 != (uint *)(param_1 + 0x24U)) & (uint)puVar1);
    param_2 = piVar5[2];
    if (*(uint *)(iVar4 + 0x14) <= (uint)piVar5[2]) {
      param_2 = *(uint *)(iVar4 + 0x14);
    }
    puVar7 = (undefined4 *)((uint)*(ushort *)(piVar5 + 4) + (int)piVar5);
    puVar8 = *(undefined4 **)(iVar4 + 0x10);
    for (uVar6 = param_2 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar6 = param_2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) - param_2;
    *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + param_2;
    *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) - param_2;
    local_5 = local_5 | *(byte *)((int)piVar5 + 0x12);
    local_c = local_c + param_2;
    if (param_2 == piVar5[2]) {
      iVar2 = *piVar5;
      piVar3 = (int *)piVar5[1];
      *piVar3 = iVar2;
      *(int **)(iVar2 + 4) = piVar3;
      FUN_0034c6bc(piVar5);
    }
    else {
      *(short *)(piVar5 + 4) = (short)piVar5[4] + (short)param_2;
      piVar5[2] = piVar5[2] - param_2;
    }
  } while ((*(int *)(iVar4 + 0x14) != 0) && (*(int *)(param_1 + 0x2c) != 0));
  if ((local_5 & 0x28) != 0) {
    *(undefined4 *)(iVar4 + 0x14) = 0;
  }
  return local_c;
}
