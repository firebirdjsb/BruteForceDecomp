/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A6EFCCF30A85E517322D4488238B6C1C60B899A411CBA38D0400B4F834E874CC
 * Entry: 0x002c06b0, Ghidra index: 10011, label: FUN_002c06b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c06b0(int param_1,float param_2)

{
  double *pdVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  int iVar17;
  float local_28 [3];
  undefined4 local_1c;
  float local_18 [3];
  undefined4 local_c;
  
  uVar3 = *(uint *)(param_1 + 0x14);
  if ((uVar3 & 0x3c0000) == 0x100000) {
    FUN_002d63f0(param_1);
    return;
  }
  iVar17 = (uVar3 >> 8 & 3) * 0x1c;
  iVar4 = *(int *)(iVar17 + 0x28 + param_1);
  iVar5 = *(int *)(iVar4 + 0x90);
  iVar17 = iVar17 + 0x18 + param_1;
  iVar2 = ((uVar3 ^ 0x100) >> 8 & 3) * 0x1c + 0x18 + param_1;
  iVar6 = *(int *)(iVar2 + 0x10);
  iVar7 = *(int *)(iVar6 + 0x90);
  pdVar1 = (double *)(*(int *)(iVar4 + 0x14) + 0x108);
  uVar8 = *(undefined4 *)pdVar1;
  uVar9 = *(undefined4 *)(*(int *)(iVar4 + 0x14) + 0x10c);
  dVar16 = *pdVar1;
  local_c = 0;
  FUN_002b2b10(iVar5,local_18,uVar8,uVar9);
  local_1c = 0;
  FUN_002b2b10(iVar7,local_28,uVar8,uVar9);
  fVar10 = *(float *)(iVar5 + 0x158) + *(float *)(iVar5 + 0x150) + 1e-10;
  fVar11 = *(float *)(iVar7 + 0x158) + *(float *)(iVar7 + 0x150) + 1e-10;
  fVar12 = fVar11 + fVar10;
  if ((*(uint *)(param_1 + 0x14) & 0x30000) == 0) {
    fVar13 = (local_18[0] - local_28[0]) * *(float *)(param_1 + 0x60) +
             (SUB84(local_18._4_8_,4) - SUB84(local_28._4_8_,4)) * *(float *)(param_1 + 0x68) +
             ((float)local_18._4_8_ - (float)local_28._4_8_) * *(float *)(param_1 + 100);
    fVar14 = (float)dVar16;
    fVar15 = (*(float *)(iVar6 + 0x50) - *(float *)(iVar6 + 0x54)) +
             (fVar14 - (float)*(double *)(iVar6 + 0x40)) *
             (*(float *)(iVar6 + 0x48) - *(float *)(iVar6 + 0x4c)) +
             (*(float *)(iVar4 + 0x50) - *(float *)(iVar4 + 0x54)) +
             (fVar14 - (float)*(double *)(iVar4 + 0x40)) *
             (*(float *)(iVar4 + 0x48) - *(float *)(iVar4 + 0x4c));
    fVar14 = ((*(float *)(param_1 + 0x54) - (fVar15 - *(float *)(param_1 + 0x5c))) -
             (*(float *)(param_1 + 0x58) - fVar13)) + param_2;
    if (*(float *)(*(int *)(iVar4 + 0x14) + 0xb4) * fVar12 * 6.0 < fVar14) {
      *(float *)(param_1 + 0x5c) = fVar15;
      *(float *)(param_1 + 0x58) = fVar13;
      *(float *)(param_1 + 0x54) = fVar14 - param_2;
      fVar14 = fVar14 / fVar12;
      FUN_002befc0(*(int *)(iVar17 + 0x10) + 0x40,iVar17,fVar14 * fVar10,uVar8,uVar9);
      FUN_002befc0(*(int *)(iVar2 + 0x10) + 0x40,iVar2,fVar14 * fVar11,uVar8,uVar9);
      return;
    }
  }
  uVar8 = *(undefined4 *)(*(int *)(iVar4 + 0x14) + 0x10);
  FUN_002d5de0();
  FUN_002d5de0();
  if ((*(uint *)(param_1 + 0x14) & 0x3000) == 0x1000) {
    FUN_002bfd20();
    return;
  }
  FUN_002bfc20(uVar8);
  return;
}
