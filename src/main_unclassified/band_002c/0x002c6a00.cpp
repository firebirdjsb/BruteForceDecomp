/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C5D7599A5AAA83494F048E960F7A7267550ABDDC91FB71B060D8C93EB1F19215
 * Entry: 0x002c6a00, Ghidra index: 10086, label: FUN_002c6a00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c6a00(int *param_1,undefined4 *param_2,float *param_3,int param_4)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  double dVar5;
  uint uVar6;
  float10 fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_44;
  int local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  undefined8 local_20;
  undefined4 local_18;
  float local_14;
  float local_10;
  float local_c;
  undefined4 local_8;
  
  iVar2 = *(int *)(*param_1 + 0xc);
  local_34 = *(int *)(iVar2 + 0x108);
  uStack_30 = *(undefined4 *)(iVar2 + 0x10c);
  dVar5 = *(double *)(iVar2 + 0x108);
  *(int *)(iVar2 + 0x108) = local_34;
  *(int *)(iVar2 + 0x120) = *(int *)(iVar2 + 0x120) + 1;
  *(undefined4 *)(iVar2 + 0x10c) = uStack_30;
  fVar7 = (float10)dVar5 - (float10)*(double *)(*param_1 + 0x70);
  local_44 = (float)fVar7;
  if (fVar7 < (float10)*(float *)(iVar2 + 0xb4)) {
    local_44 = *(float *)(iVar2 + 0xb4);
    fVar9 = *(float *)(iVar2 + 0xb8);
  }
  else {
    fVar9 = 1.0 / local_44;
  }
  *(float *)(*param_1 + 0x78) = fVar9;
  iVar3 = *param_1;
  *(int *)(iVar3 + 0x70) = local_34;
  *(undefined4 *)(iVar3 + 0x74) = uStack_30;
  iVar3 = *param_1;
  *(undefined4 *)(iVar3 + 0xec) = *param_2;
  *(undefined4 *)(iVar3 + 0xf0) = param_2[1];
  *(undefined4 *)(iVar3 + 0xf4) = param_2[2];
  *(undefined4 *)(iVar3 + 0xf8) = param_2[3];
  iVar3 = *param_1;
  local_8 = *(undefined4 *)(iVar3 + 0xe8);
  local_14 = -*(float *)(iVar3 + 0xdc);
  local_10 = -*(float *)(iVar3 + 0xe0);
  local_c = -*(float *)(iVar3 + 0xe4);
  FUN_002b3d00();
  iVar3 = *param_1;
  *(undefined4 *)(iVar3 + 0xdc) = *param_2;
  *(undefined4 *)(iVar3 + 0xe0) = param_2[1];
  *(undefined4 *)(iVar3 + 0xe4) = param_2[2];
  *(undefined4 *)(iVar3 + 0xe8) = param_2[3];
  iVar3 = *param_1;
  *(undefined4 *)(iVar3 + 0x70) = *(undefined4 *)(iVar2 + 0x118);
  *(undefined4 *)(iVar3 + 0x74) = *(undefined4 *)(iVar2 + 0x11c);
  local_18 = 0;
  uVar1 = *(undefined8 *)(*param_1 + 0xc0);
  local_24 = *param_3 - *(float *)(*param_1 + 0xbc);
  fVar9 = (float)*(undefined8 *)(param_3 + 1) - (float)uVar1;
  fVar10 = (float)((ulonglong)*(undefined8 *)(param_3 + 1) >> 0x20) -
           (float)((ulonglong)uVar1 >> 0x20);
  local_20 = CONCAT44(fVar10,fVar9);
  fVar8 = SQRT(fVar9 * fVar9 + fVar10 * fVar10 + local_24 * local_24);
  iVar2 = *param_1;
  fVar9 = param_3[2];
  fVar10 = *param_3;
  *(float *)(iVar2 + 0xc0) = param_3[1];
  *(float *)(iVar2 + 0xbc) = fVar10;
  *(float *)(iVar2 + 0xc4) = fVar9;
  iVar2 = *param_1;
  *(undefined4 *)(iVar2 + 0xd4) = 0;
  *(undefined4 *)(iVar2 + 0xd0) = 0;
  *(undefined4 *)(iVar2 + 0xcc) = 0;
  iVar2 = *param_1;
  *(undefined4 *)(iVar2 + 0xb4) = 0;
  *(undefined4 *)(iVar2 + 0xb0) = 0;
  *(undefined4 *)(iVar2 + 0xac) = 0;
  iVar2 = *param_1;
  fVar9 = param_3[1];
  fVar10 = param_3[2];
  *(float *)(iVar2 + 300) = *param_3;
  *(float *)(iVar2 + 0x130) = fVar9;
  *(float *)(iVar2 + 0x134) = fVar10;
  FUN_002b4100();
  if (param_4 == 0) {
    *(undefined4 *)(*param_1 + 0x150) = 0;
    local_28 = 0;
    local_2c = 0;
    uStack_30 = 0;
    local_34 = 0;
  }
  else {
    *(float *)(*param_1 + 0x150) = fVar8 * *(float *)(*param_1 + 0x78);
  }
  FUN_002c68a0(param_1,&local_34);
  iVar2 = *param_1;
  fVar9 = *(float *)(iVar2 + 0x158);
  fVar10 = *(float *)(iVar2 + 8);
  uVar6 = (uint)*(ushort *)(iVar2 + 0x52);
  while (uVar6 = uVar6 - 1, -1 < (int)uVar6) {
    iVar2 = *(int *)(*(int *)(*param_1 + 0x54) + uVar6 * 4);
    fVar4 = fVar9 * fVar10 * local_44 + fVar8 + *(float *)(iVar2 + 0x58);
    *(undefined4 *)(iVar2 + 0x48) = 0;
    *(undefined4 *)(iVar2 + 0x4c) = 0;
    *(float *)(iVar2 + 0x58) = fVar4;
    *(float *)(iVar2 + 0x50) = fVar4;
    *(float *)(iVar2 + 0x54) = fVar8 + *(float *)(iVar2 + 0x54);
    if ('\a' < *(char *)(iVar2 + 0x70)) {
      if (*(int *)(iVar2 + 0x3c) != 0) {
        *(undefined4 *)(*(int *)(iVar2 + 0x3c) + 0x68) = 0;
        *(undefined4 *)(iVar2 + 0x3c) = 0;
      }
      iVar3 = *(int *)(iVar2 + 0x1c);
      while (iVar3 != 0) {
        iVar3 = *(int *)(iVar3 + 8);
        FUN_002c0fc0();
      }
      FUN_002b3220(iVar2);
    }
    if (param_4 == 0) {
      FUN_002bfdd0(iVar2);
    }
    FUN_002b7490();
    if ((double)*(int *)(iVar2 + 0x5c) < *(double *)(iVar2 + 0x40)) {
      FUN_002c26e0();
      local_34 = (int)(*(double *)(iVar2 + 0x40) + 10.0);
      *(int *)(iVar2 + 0x5c) = local_34;
    }
  }
  *(undefined4 *)(*param_1 + 0x150) = 0;
  *(undefined4 *)(*param_1 + 0x154) = 0;
  *(undefined4 *)(*param_1 + 0x158) = 0;
  return;
}
