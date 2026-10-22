/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8A155F84FD501EC83F2E039F56BD3FBA236CAFD7BC383F741B96D7F87FD991C6
 * Entry: 0x00169e20, Ghidra index: 4763, label: FUN_00169e20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00169e20(int param_1,float param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined4 *puVar14;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  float fStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_190;
  undefined4 *puStack_18c;
  undefined4 *puStack_188;
  undefined4 *puStack_184;
  undefined4 uStack_174;
  float fStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 auStack_124 [9];
  undefined4 auStack_100 [9];
  undefined4 auStack_dc [55];
  
  *(float *)(param_1 + 0x24) = param_2 + *(float *)(param_1 + 0x24);
  iVar3 = *(int *)(param_1 + 0xe0);
  *(undefined4 *)(iVar3 + 0x48) = 0;
  *(undefined4 *)(iVar3 + 0x4c) = 0;
  *(undefined4 *)(iVar3 + 0x50) = 0;
  *(undefined4 *)(iVar3 + 0x54) = 0;
  *(undefined4 *)(iVar3 + 0x58) = 0;
  *(undefined4 *)(iVar3 + 0x5c) = 0;
  *(undefined4 *)(iVar3 + 0x60) = 0;
  *(undefined4 *)(iVar3 + 100) = 0;
  *(undefined4 *)(iVar3 + 0x68) = 0;
  *(undefined4 *)(iVar3 + 0x7c) = 0;
  *(undefined4 *)(iVar3 + 0x78) = 0;
  *(undefined4 *)(iVar3 + 0x88) = 0;
  *(undefined4 *)(iVar3 + 0x80) = 0;
  *(undefined4 *)(iVar3 + 0x84) = 0;
  *(undefined4 *)(iVar3 + 0x6c) = 0;
  for (puVar14 = *(undefined4 **)(param_1 + 0x2c); puVar14 != *(undefined4 **)(param_1 + 0x30);
      puVar14 = puVar14 + 1) {
    (**(code **)(*(int *)*puVar14 + 4))();
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  FUN_002b5440((double)*(float *)(param_1 + 0x24));
  puVar14 = *(undefined4 **)(*(int *)(param_1 + 0xe8) + 0xe0);
  if (puVar14 == (undefined4 *)0x0) {
    piVar13 = (int *)0x0;
  }
  else {
    piVar13 = (int *)*puVar14;
  }
  if (piVar13 != *(int **)(*(int *)(param_1 + 0xe8) + 0xe0)) {
    do {
      piVar1 = piVar13 + 2;
      piVar13 = (int *)*piVar13;
      if ((int *)*piVar1 != (int *)0x0) {
        (**(code **)(*(int *)*piVar1 + 0xc0))();
      }
    } while (piVar13 != (int *)*(int *)(*(int *)(param_1 + 0xe8) + 0xe0));
  }
  piVar13 = *(int **)(param_1 + 0x3c);
  if (piVar13 != *(int **)(param_1 + 0x40)) {
    puStack_18c = auStack_100;
    puStack_184 = auStack_dc;
    puStack_188 = auStack_124;
    do {
      piVar1 = piVar13 + 1;
      iVar3 = *piVar13;
      iVar4 = piVar13[3];
      uStack_190 = 0;
      uStack_174 = 0;
      iVar5 = *(int *)(*piVar1 + 0x14);
      piVar13 = piVar13 + 4;
      FUN_002b3590(*piVar1,&uStack_1e0,*(undefined4 *)(iVar5 + 0x108),*(undefined4 *)(iVar5 + 0x10c)
                  );
      iVar5 = *(int *)(iVar4 + 0x14);
      FUN_002b3590(iVar4,&uStack_1f0,*(undefined4 *)(iVar5 + 0x108),*(undefined4 *)(iVar5 + 0x10c));
      uStack_204 = uStack_1e4;
      uStack_200 = uStack_1f0;
      uStack_1f8 = uStack_1e8;
      uStack_1fc = uStack_1ec;
      FUN_002333b0();
      uStack_200 = uStack_1e0;
      uStack_204 = uStack_1d4;
      uStack_1fc = uStack_1dc;
      uStack_1f8 = uStack_1d8;
      FUN_002333b0();
      uStack_16c = uStack_1c0;
      uStack_168 = uStack_1b4;
      uStack_164 = uStack_1a8;
      uStack_160 = uStack_1bc;
      uStack_15c = uStack_1b0;
      uStack_158 = uStack_1a4;
      uStack_154 = uStack_1b8;
      uStack_150 = uStack_1ac;
      uStack_14c = uStack_1a0;
      puVar14 = (undefined4 *)FUN_002334b0();
      uVar6 = puVar14[1];
      uVar7 = puVar14[2];
      uVar8 = puVar14[3];
      uVar2 = puVar14[8];
      uVar9 = puVar14[4];
      uVar10 = puVar14[5];
      uVar11 = puVar14[6];
      uVar12 = puVar14[7];
      *puStack_18c = *puVar14;
      puStack_18c[1] = uVar6;
      puStack_18c[2] = uVar7;
      puStack_18c[3] = uVar8;
      puStack_18c[8] = uVar2;
      puStack_18c[4] = uVar9;
      puStack_18c[5] = uVar10;
      puStack_18c[6] = uVar11;
      puStack_18c[7] = uVar12;
      iVar4 = *(int *)(iVar3 + 0x10);
      fStack_1c4 = -*(float *)(iVar4 + 0x28);
      uStack_1d0 = *(undefined4 *)(iVar4 + 0x1c);
      fStack_1c8 = -*(float *)(iVar4 + 0x24);
      fStack_1f4 = -*(float *)(iVar4 + 0x20);
      fStack_1cc = fStack_1f4;
      fStack_170 = fStack_1c8;
      FUN_002333b0();
      uStack_148 = uStack_1c0;
      uStack_144 = uStack_1b4;
      uStack_140 = uStack_1a8;
      uStack_13c = uStack_1bc;
      uStack_138 = uStack_1b0;
      uStack_134 = uStack_1a4;
      uStack_130 = uStack_1b8;
      uStack_12c = uStack_1ac;
      uStack_128 = uStack_1a0;
      puVar14 = (undefined4 *)FUN_002334b0();
      uVar6 = puVar14[1];
      uVar7 = puVar14[2];
      uVar8 = puVar14[3];
      uVar2 = puVar14[8];
      uVar9 = puVar14[4];
      uVar10 = puVar14[5];
      uVar11 = puVar14[6];
      uVar12 = puVar14[7];
      *puStack_184 = *puVar14;
      puStack_184[1] = uVar6;
      puStack_184[2] = uVar7;
      puStack_184[3] = uVar8;
      puStack_184[8] = uVar2;
      puStack_184[4] = uVar9;
      puStack_184[5] = uVar10;
      puStack_184[6] = uVar11;
      puStack_184[7] = uVar12;
      puVar14 = (undefined4 *)FUN_002334b0();
      uVar6 = puVar14[1];
      uVar7 = puVar14[2];
      uVar8 = puVar14[3];
      uVar2 = puVar14[8];
      uVar9 = puVar14[4];
      uVar10 = puVar14[5];
      uVar11 = puVar14[6];
      uVar12 = puVar14[7];
      *puStack_188 = *puVar14;
      puStack_188[1] = uVar6;
      puStack_188[2] = uVar7;
      puStack_188[3] = uVar8;
      puStack_188[8] = uVar2;
      puStack_188[4] = uVar9;
      puStack_188[5] = uVar10;
      puStack_188[6] = uVar11;
      puStack_188[7] = uVar12;
      FUN_00169d80();
      FUN_002339d0();
      FUN_00234dc0(*(undefined4 *)(iVar3 + 0x10),&uStack_204);
    } while (piVar13 != *(int **)(param_1 + 0x40));
  }
  return;
}
