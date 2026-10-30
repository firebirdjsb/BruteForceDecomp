/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 02D1E00823A1DD33FBB88A903365228CB27E2DE43EE934AB65BA39DF19AA0413
 * Entry: 0x00020b10, Ghidra index: 182, label: FUN_00020b10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint32_t FUN_000120f0(int32_t in_EAX);
extern undefined4 FUN_0005e540(undefined4 param_1,int param_2);
extern int FUN_0005bca0(void);
extern undefined4 FUN_00020ad0(void);
extern float10 FUN_001faba0(int param_1);
extern void FUN_000124f0(float param_1, int32_t in_ECX);
extern undefined4 FUN_00022130(int param_1,undefined4 param_2,undefined1 *param_3);
extern undefined4 FUN_00021fa0(undefined4 param_1,undefined1 *param_2);
extern undefined4 FUN_000223c0(undefined1 *param_1);
extern int FUN_00022520(void);
extern undefined4 FUN_000225d0(undefined1 *param_1);
extern undefined4 FUN_00022790(undefined4 param_1,undefined1 *param_2);
extern undefined4 FUN_000210c0(undefined4 param_1,undefined1 *param_2);
extern undefined4 FUN_000212d0(void);
extern undefined4 FUN_000213e0(int param_1,undefined4 *param_2,undefined1 *param_3);
extern undefined4 FUN_00021b70(undefined1 *param_1);
extern int FUN_00021d10(undefined4 param_1,undefined1 *param_2);
extern undefined4 FUN_00021840(int param_1,undefined1 *param_2);
extern void FUN_00021b20(void);
extern undefined4 FUN_000216b0(undefined1 *param_1);
extern int FUN_000216f0(undefined4 *param_1);
extern undefined4 FUN_000212b0(void);
extern undefined4 FUN_00022420(int param_1,undefined4 param_2,float param_3);

undefined4 FUN_00020b10(undefined4 param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  int in_ECX;
  float *pfVar13;
  float10 fVar14;
  int iStack_50;
  char acStack_38 [4];
  float fStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  int *piStack_c;
  
  piVar7 = (int *)FUN_000120f0();
  uVar2 = *(undefined4 *)(piVar7[0x167] + 0x28);
  iVar8 = (**(code **)(*piVar7 + 0xf4))();
  if ((iVar8 == 0) ||
     (((*(int *)(iVar8 + 0x58) != 4 && (*(int *)(iVar8 + 0x58) != 1)) ||
      (piVar9 = (int *)FUN_0005e540(uVar2,piVar7), piVar9 == (int *)0x0)))) {
    iVar8 = FUN_000120f0();
    if ((iVar8 == 0) || (*(int *)(iVar8 + 0x59c) == 0)) {
      piVar9 = (int *)0x0;
    }
    else {
      piVar9 = (int *)FUN_0005bca0();
    }
  }
  iVar8 = (**(code **)(*piVar7 + 0xf4))();
  if (((iVar8 != 0) && (*(int *)(iVar8 + 0x58) == 4)) &&
     ((*(int *)(iVar8 + 0x6ac) == 0xc || (*(int *)(iVar8 + 0x6ac) == 0xe)))) {
    iVar8 = FUN_000120f0();
    if (iVar8 == 0) {
      return 1;
    }
    if (*(int *)(iVar8 + 0x59c) == 0) {
      return 1;
    }
    piVar9 = (int *)FUN_0005bca0();
  }
  if (((piVar9 != (int *)0x0) && (piVar9 != piVar7)) &&
     (iVar8 = (**(code **)(*piVar9 + 0xf4))(), iVar8 != 0)) {
    iVar8 = (**(code **)(*piVar9 + 0xf4))();
    iVar10 = (**(code **)(*piVar9 + 0xec))();
    if (iVar10 == 0) {
      return 0;
    }
    iVar10 = (**(code **)(*piVar9 + 0x40))();
    fVar3 = *(float *)(iVar10 + 0x2c);
    fVar4 = *(float *)(iVar10 + 0x28);
    fVar5 = *(float *)(iVar10 + 0x24);
    iVar11 = (**(code **)(*piVar7 + 0x40))();
    pfVar13 = (float *)(iVar11 + 0x24);
    iVar10 = (**(code **)(*piVar9 + 0x40))();
    fStack_10 = *(float *)(iVar10 + 0x2c) - *(float *)(iVar11 + 0x2c);
    fStack_14 = *(float *)(iVar10 + 0x28) - *(float *)(iVar11 + 0x28);
    fStack_18 = *(float *)(iVar10 + 0x24) - *pfVar13;
    fVar3 = fVar3 - *(float *)(iVar11 + 0x2c);
    fVar4 = fVar4 - *(float *)(iVar11 + 0x28);
    fVar5 = fVar5 - *pfVar13;
    fStack_34 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
    acStack_38[3] = 0;
    piStack_c = piVar9;
    iVar10 = (**(code **)(*piVar9 + 0xf4))();
    iVar10 = *(int *)(iVar10 + 0x3c8);
    if (iVar10 != 0) {
      pfVar12 = (float *)(**(code **)(*(int *)(iVar10 + 8) + 4))();
      fVar5 = *(float *)(iVar11 + 0x2c) - pfVar12[2];
      fVar6 = *(float *)(iVar11 + 0x28) - pfVar12[1];
      fVar3 = *pfVar13;
      fVar4 = *pfVar12;
      iVar11 = FUN_00020ad0();
      if (iVar11 < 2) {
        fVar14 = (float10)FUN_001faba0(iVar10);
      }
      else {
        fVar14 = (float10)FUN_001faba0(iVar10);
        fVar14 = fVar14 - (float10)0.7;
      }
      if (((float10)((fVar3 - fVar4) * (fVar3 - fVar4) + fVar6 * fVar6 + fVar5 * fVar5) <
           fVar14 * fVar14) && (acStack_38[3] = 1, *(int *)(in_ECX + 0x66c) != 3)) {
        *(undefined4 *)(in_ECX + 0x66c) = 2;
      }
    }
    acStack_38[1] = 0;
    acStack_38[2] = 0;
    uStack_30 = 0x41000000;
    uStack_2c = 0x41200000;
    uStack_28 = 0x40e00000;
    uStack_24 = 0x40e00000;
    uStack_20 = 0x40800000;
    if (*(int *)(in_ECX + 0x18) == 1) {
      *(undefined4 *)(in_ECX + 0x6b4) = 0;
      uStack_30 = 0x41333333;
      uStack_2c = 0x41600000;
      uStack_28 = 0x411ccccd;
      uStack_24 = 0x411ccccd;
      uStack_20 = 0x40b33333;
    }
    if (*(int *)(in_ECX + 0x6b4) != 0) {
      acStack_38[2] = fStack_34 < *(float *)(in_ECX + 0x6dc);
      if (*(float *)(in_ECX + 0x6d8) <= fStack_34) {
        acStack_38[1] = 0;
        FUN_000124f0(0x3e4ccccd);
      }
      else {
        acStack_38[1] = 1;
        (*(code *)**(undefined4 **)(in_ECX + 0x6c8))(*(undefined4 *)(in_ECX + 0x400));
      }
      if ((*(byte *)(*(int *)(iVar8 + 0x1ac) + 0x10) & 0x10) != 0) {
        *(undefined4 *)(in_ECX + 0x66c) = 6;
        pbVar1 = (byte *)(*(int *)(iVar8 + 0x1ac) + 0x10);
        *pbVar1 = *pbVar1 & 0xef;
      }
    }
    *(undefined4 *)(in_ECX + 0x860) = 0x3fa00000;
    *(undefined1 *)(in_ECX + 0x85d) = 1;
    iStack_50 = 0;
    do {
      acStack_38[0] = '\0';
      switch(*(undefined4 *)(in_ECX + 0x66c)) {
      case 0:
        FUN_00022130(in_ECX + -0x40,param_1,acStack_38);
        break;
      case 1:
        FUN_00021fa0(param_1,acStack_38);
        break;
      case 2:
        FUN_000223c0(acStack_38);
        break;
      case 3:
        FUN_00022520();
        break;
      case 4:
        FUN_000225d0(acStack_38);
        break;
      case 5:
        FUN_00022790(param_1,acStack_38);
        break;
      case 6:
        FUN_000210c0(param_1,acStack_38);
        break;
      case 7:
        FUN_000212d0();
        break;
      case 8:
        FUN_000213e0(in_ECX + -0x40,param_1,acStack_38);
        break;
      case 9:
        FUN_00021b70(acStack_38);
        break;
      case 10:
        FUN_00021d10(param_1,acStack_38);
        break;
      case 0xb:
        FUN_00021840(in_ECX + -0x40,acStack_38);
        break;
      case 0xc:
        FUN_00021b20();
        break;
      case 0xd:
        FUN_000216b0(acStack_38);
        break;
      case 0xe:
        FUN_000216f0(param_1);
        break;
      case 0xf:
        FUN_000212b0();
        break;
      case 0x10:
        FUN_00022420(in_ECX + -0x40,param_1,0x41700000);
      }
      iStack_50 = iStack_50 + 1;
    } while ((iStack_50 < 0xd) && (acStack_38[0] != '\0'));
  }
  return 1;
}
