/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D64A04CE8A202C48BCA103DC5869EB9BC041C021B8A871B8611B3251966E0CED
 * Entry: 0x00054950, Ghidra index: 798, label: FUN_00054950
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00054950(float param_1,undefined4 param_2,uint param_3,uint param_4,byte param_5)

{
  float fVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint in_EAX;
  uint uVar6;
  undefined2 uVar9;
  int iVar7;
  undefined4 *puVar8;
  int unaff_ESI;
  
  piVar2 = *(int **)(unaff_ESI + 4);
  if (piVar2 == (int *)0x0) {
LAB_00054ba6:
    return in_EAX & 0xffffff00;
  }
  *(float *)(unaff_ESI + 8) = param_1 + *(float *)(unaff_ESI + 8);
  *(uint *)(unaff_ESI + 0x80) =
       ((param_3 & 1) << 2 | param_4 & 1) << 3 | *(uint *)(unaff_ESI + 0x80) & 0xffffffd7;
  if ((char)param_3 == '\0') {
    *(undefined4 *)(unaff_ESI + 0xc) = 0;
    *(undefined4 *)(unaff_ESI + 0x14) = 0;
    *(float *)(unaff_ESI + 0x10) = param_1 + *(float *)(unaff_ESI + 0x10);
    *(float *)(unaff_ESI + 0x18) = param_1 + *(float *)(unaff_ESI + 0x18);
  }
  else {
    *(undefined4 *)(unaff_ESI + 0x10) = 0;
    *(undefined4 *)(unaff_ESI + 0x18) = 0;
    *(float *)(unaff_ESI + 0xc) = param_1 + *(float *)(unaff_ESI + 0xc);
    *(float *)(unaff_ESI + 0x14) = param_1 + *(float *)(unaff_ESI + 0x14);
  }
  if ((char)param_4 == '\0') {
    *(undefined4 *)(unaff_ESI + 0x1c) = 0;
    *(undefined4 *)(unaff_ESI + 0x24) = 0;
    *(float *)(unaff_ESI + 0x20) = param_1 + *(float *)(unaff_ESI + 0x20);
    *(float *)(unaff_ESI + 0x28) = param_1 + *(float *)(unaff_ESI + 0x28);
  }
  else {
    *(undefined4 *)(unaff_ESI + 0x20) = 0;
    *(undefined4 *)(unaff_ESI + 0x28) = 0;
    *(float *)(unaff_ESI + 0x1c) = param_1 + *(float *)(unaff_ESI + 0x1c);
    *(float *)(unaff_ESI + 0x24) = param_1 + *(float *)(unaff_ESI + 0x24);
  }
  FUN_0003da40(param_1);
  if (param_5 == 0) {
    *(undefined4 *)(unaff_ESI + 0x2c) = 0;
    *(undefined4 *)(unaff_ESI + 0x34) = 0;
    *(float *)(unaff_ESI + 0x30) = param_1 + *(float *)(unaff_ESI + 0x30);
    *(float *)(unaff_ESI + 0x38) = param_1 + *(float *)(unaff_ESI + 0x38);
  }
  else {
    *(undefined4 *)(unaff_ESI + 0x30) = 0;
    *(undefined4 *)(unaff_ESI + 0x38) = 0;
    *(float *)(unaff_ESI + 0x2c) = param_1 + *(float *)(unaff_ESI + 0x2c);
    *(float *)(unaff_ESI + 0x34) = param_1 + *(float *)(unaff_ESI + 0x34);
  }
  fVar1 = *(float *)(unaff_ESI + 0x84);
  uVar3 = *(uint *)(unaff_ESI + 0x80);
  uVar6 = uVar3 ^ ((uint)param_5 << 4 ^ uVar3) & 0x10;
  *(uint *)(unaff_ESI + 0x80) = uVar6;
  uVar9 = (undefined2)(uVar3 >> 0x10);
  in_EAX = CONCAT22(uVar9,(ushort)(fVar1 < 0.0) << 8 | (ushort)isnan(fVar1) << 10 |
                          (ushort)(fVar1 == 0.0) << 0xe);
  if (fVar1 < 0.0 == 0 && (fVar1 == 0.0) == 0) {
    param_1 = *(float *)(unaff_ESI + 0x84) - param_1;
    *(float *)(unaff_ESI + 0x84) = param_1;
    in_EAX = CONCAT22(uVar9,(ushort)(param_1 < 0.0) << 8 | (ushort)isnan(param_1) << 10 |
                            (ushort)(param_1 == 0.0) << 0xe);
    if (param_1 < 0.0 != (param_1 == 0.0)) {
      *(uint *)(unaff_ESI + 0x80) = uVar6 & 0xffffffbf;
    }
  }
  if ((char)param_3 == '\0') {
    *(undefined4 *)(unaff_ESI + 0x58) = 0;
  }
  else {
    iVar7 = (**(code **)(*piVar2 + 0x40))();
    uVar4 = *(undefined4 *)(iVar7 + 0x2c);
    uVar5 = *(undefined4 *)(iVar7 + 0x28);
    *(undefined4 *)(unaff_ESI + 0x3c) = *(undefined4 *)(iVar7 + 0x24);
    *(undefined4 *)(unaff_ESI + 0x40) = uVar5;
    *(undefined4 *)(unaff_ESI + 0x44) = uVar4;
    if (*(int *)(piVar2[3] + 4) == 3) {
      piVar2[0x94] = piVar2[0x94] | 1;
      *(int *)(unaff_ESI + 0x48) = piVar2[0x93];
    }
    puVar8 = (undefined4 *)(**(code **)(*piVar2 + 0x54))();
    uVar4 = puVar8[2];
    uVar5 = puVar8[1];
    *(undefined4 *)(unaff_ESI + 0x4c) = *puVar8;
    *(undefined4 *)(unaff_ESI + 0x50) = uVar5;
    *(undefined4 *)(unaff_ESI + 0x54) = uVar4;
    *(undefined4 *)(unaff_ESI + 0x58) = param_2;
    FUN_0003d0e0();
    if (*(int *)(unaff_ESI + 0x98) == 0x1f) {
      FUN_0003c500();
    }
    in_EAX = *(uint *)(unaff_ESI + 0x80);
    if ((in_EAX >> 5 & 1) != 0) {
      in_EAX = in_EAX | 1;
      *(uint *)(unaff_ESI + 0x80) = in_EAX;
    }
  }
  if ((*(byte *)(piVar2 + 0x1c) & 1) == 0) {
    fVar1 = *(float *)(unaff_ESI + 0x18);
    in_EAX = CONCAT22((short)(in_EAX >> 0x10),
                      (ushort)(fVar1 < 15.0) << 8 | (ushort)isnan(fVar1) << 10 |
                      (ushort)(fVar1 == 15.0) << 0xe);
    if (fVar1 >= 15.0 && (fVar1 == 15.0) == 0) goto LAB_00054ba6;
  }
  return CONCAT31((int3)(in_EAX >> 8),1);
}
