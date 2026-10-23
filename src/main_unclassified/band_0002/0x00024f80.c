/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 24CAE7D9BD4B090739CFF8650C12B7BB5AA02D900C9A5338B5CD98D1ED97EB15
 * Entry: 0x00024f80, Ghidra index: 257, label: FUN_00024f80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 FUN_00024f80(int *param_1,int *param_2,float param_3)

{
  float fVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float10 fVar7;
  undefined4 uVar8;
  char cStack_41;
  int *piStack_40;
  float fStack_3c;
  float fStack_38;
  int *piStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  int iStack_8;
  int iStack_4;
  
  if (param_2 == (int *)0x0) {
    param_1[0xee] = 1;
    return 0;
  }
  piStack_34 = (int *)(**(code **)(*param_1 + 0x24))();
  piStack_40 = (int *)FUN_000120f0();
  piVar3 = (int *)FUN_000120f0();
  iVar4 = (**(code **)(*param_2 + 0x40))();
  pfVar6 = (float *)(iVar4 + 0x24);
  iVar5 = (**(code **)(*piVar3 + 0x40))();
  fStack_3c = *(float *)(iVar4 + 0x2c) - *(float *)(iVar5 + 0x2c);
  fStack_38 = *(float *)(iVar4 + 0x28) - *(float *)(iVar5 + 0x28);
  fStack_24 = *pfVar6 - *(float *)(iVar5 + 0x24);
  if (((*(byte *)(param_1 + 0x2a) & 1) != 0) && (param_1[0x28] != 0)) {
    *(byte *)(param_1 + 0x2a) = *(byte *)(param_1 + 0x2a) & 0xfe;
  }
  fStack_20 = fStack_38;
  fStack_1c = fStack_3c;
  fStack_38 = (float)FUN_000388b0(param_1[0xd6]);
  piVar3 = piStack_40;
  if (fStack_38 == 0.0) {
    param_1[0xee] = 2;
    return 0;
  }
  if (piStack_40 == (int *)0x0) {
    return 0;
  }
  iVar5 = FUN_000388b0(param_1[0xd6]);
  cVar2 = (**(code **)(*(int *)piVar3[0x169] + 0x108))();
  if (cVar2 != '\0') {
    param_1[0xee] = 0;
    return 0;
  }
  FUN_00123ea0();
  if ((*(uint *)(iVar5 + 0x80) >> 4 & 1) == 0) {
    param_1[0xee] = 4;
    return 0;
  }
  if ((*(byte *)(param_1 + 0x119) & 1) == 0) {
    FUN_00055aa0();
    cVar2 = FUN_00022e20();
    if (cVar2 == '\0') {
      cVar2 = FUN_0004dc10(param_1,pfVar6,param_3 + 10.0);
      if ((cVar2 != '\0') && ((*(uint *)(iVar5 + 0x80) >> 4 & 1) != 0)) {
        FUN_0004dd70();
      }
      param_1[0xee] = 5;
      return 0;
    }
  }
  FUN_00024950(&cStack_41);
  if (cStack_41 == '\0') {
    piStack_40[0x1f7] = 0;
    cVar2 = FUN_0004dc10(param_1,pfVar6,param_3 + 10.0);
    if (cVar2 != '\0') {
      FUN_0004dd70();
    }
    param_1[0xee] = 6;
    return 0;
  }
  iVar5 = FUN_0014d2e0();
  piVar3 = piStack_34;
  if (iVar5 == 0) {
    param_1[0xee] = 7;
    return 0;
  }
  if (((*(uint *)((int)fStack_38 + 0x80) >> 5 & 1) == 0) ||
     ((*(uint *)((int)fStack_38 + 0x80) >> 3 & 1) == 0)) {
    param_1[0xee] = 9;
    return 0;
  }
  iVar5 = (**(code **)(*piStack_34 + 8))();
  if ((*(uint *)(iVar5 + 0x18) & 0x100) == 0) {
    iVar5 = FUN_0014d330();
  }
  else {
    iVar5 = FUN_0014d2e0();
  }
  if (iVar5 == 0) {
    return 0;
  }
  if (((param_1[0xf1] & 0x100U) == 0) && (*(float *)(*(int *)(iVar5 + 0x228) + 0x14c) != 0.0)) {
    *(undefined4 *)(iVar5 + 0x1f8) = *(undefined4 *)(*(int *)(iVar5 + 0x228) + 0xe4);
  }
  fVar1 = 0.01;
  if ((param_1[0xf1] & 0x200U) == 0) {
    fVar1 = *(float *)(*(int *)(iVar5 + 0x228) + 0x24) * 1.5;
  }
  fStack_3c = (float)iVar5;
  if (fStack_24 * fStack_24 + fStack_20 * fStack_20 + fStack_1c * fStack_1c <= fVar1 * fVar1) {
    param_1[0xee] = 10;
LAB_000252c7:
    param_3 = (float)((uint)param_3 & 0xffffff00);
  }
  else {
    cVar2 = FUN_0004dc10(param_1,pfVar6,param_3);
    if (cVar2 == '\0') {
      param_1[0xee] = 0xb;
      goto LAB_000252c7;
    }
    param_3 = (float)CONCAT31(param_3._1_3_,1);
  }
  cVar2 = (**(code **)(*(int *)piStack_40[0x169] + 0x114))();
  if ((cVar2 != '\0') && (*(int *)(iVar5 + 0x1f8) == 0)) {
    iVar5 = FUN_00055aa0();
    *(uint *)(iVar5 + 0x88) = *(uint *)(iVar5 + 0x88) & 0xfff1ffff;
    iVar5 = FUN_00024540(param_1,0x7f,1,0,0,0x3fa66666,0);
    if (iVar5 == 1) {
      iVar4 = FUN_00055aa0();
      *(uint *)(iVar4 + 0x88) = *(uint *)(iVar4 + 0x88) | 2;
      return 0;
    }
  }
  if (param_3._0_1_ == '\0') {
    return 0;
  }
  param_1[0x1e1] = 0;
  iVar5 = (**(code **)(*piVar3 + 8))();
  if ((*(uint *)(iVar5 + 0x18) & 0x100) != 0) {
    iStack_4 = *(undefined4 *)(iVar4 + 0x2c);
    param_3 = *(float *)(iVar4 + 0x28);
    fStack_c = *pfVar6;
    iStack_8 = (int)param_3;
    FUN_0022dc60();
    fStack_28 = *(float *)(iVar4 + 0x2c);
    param_3 = *(float *)(iVar4 + 0x28);
    fStack_30 = *pfVar6;
    fStack_2c = param_3;
    if (*(int *)(param_2[3] + 4) == 3) {
      FUN_00024c00(param_1,&fStack_18,&fStack_24);
    }
    else {
      cVar2 = FUN_00022bc0(&param_3);
      if (cVar2 == '\0') {
        fStack_28 = *(float *)(iVar4 + 0x2c);
        param_3 = *(float *)(iVar4 + 0x28);
        fStack_30 = *pfVar6;
        fStack_2c = param_3;
      }
      fStack_10 = 0.0;
      fStack_14 = 0.0;
      fStack_18 = 0.0;
    }
    fStack_30 = fStack_30 + fStack_18;
    fStack_2c = fStack_2c + fStack_14;
    fStack_28 = fStack_28 + fStack_10;
    FUN_0022dc60();
    param_1[0xee] = 0;
    param_1[0xf1] = param_1[0xf1] | 0x8000;
    FUN_0004dfb0(0);
    fVar7 = (float10)FUN_00012520();
    if ((float10)0.0 < fVar7) {
      FUN_000124f0(0x41200000);
    }
    if ((param_1[0xf1] & 0x100U) == 0) {
      return 1;
    }
    FUN_00045530();
    return 1;
  }
  FUN_0005b3c0(param_1 + 0x26,&param_3);
  iVar4 = (**(code **)(*piVar3 + 8))();
  if (*(int *)(iVar4 + 0x60) == 0x15) {
    iVar4 = (**(code **)(*piVar3 + 8))();
    if (*(int *)(iVar4 + 100) == 0x15) goto LAB_0002556c;
    iVar4 = *piStack_40;
    iVar5 = (**(code **)(*piVar3 + 8))(1);
    uVar8 = *(undefined4 *)(iVar5 + 100);
  }
  else {
    iVar4 = *piStack_40;
    iVar5 = (**(code **)(*piVar3 + 8))(0);
    uVar8 = *(undefined4 *)(iVar5 + 0x60);
  }
  (**(code **)(iVar4 + 0x15c))(uVar8);
LAB_0002556c:
  if (param_3._0_1_ != '\0') {
    FUN_0022dc60();
    param_1[0x202] = (int)fStack_c;
    param_1[0x203] = iStack_8;
    param_1[0x204] = iStack_4;
  }
  return 1;
}
