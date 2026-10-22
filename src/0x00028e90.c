/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BD0D556762E7C840289976FC3EB866DC58A997E1EE32C9470153B409E8BE16E2
 * Entry: 0x00028e90, Ghidra index: 278, label: FUN_00028e90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t switchD_000290c0_caseD_1[];
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_00028e90(undefined4 param_1)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *in_ECX;
  int unaff_EBX;
  float *pfVar7;
  int *piVar8;
  float10 fVar9;
  float10 fVar10;
  undefined1 auVar11 [16];
  int *piVar12;
  undefined4 uVar13;
  int *piStack_b8;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  int *local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float local_84;
  int iStack_80;
  int iStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  piVar2 = (int *)FUN_000120f0();
  if (in_ECX[0xfb] == 0) {
    FUN_00055a60(in_ECX + 0xf7);
  }
  local_84 = (float)(in_ECX[0xfa] + in_ECX[0xfb]);
  uVar3 = (int)local_84 - 1;
  if ((uint)in_ECX[0xf9] <= uVar3) {
    uVar3 = uVar3 - in_ECX[0xf9];
  }
  piVar8 = *(int **)(*(int *)(in_ECX[0xf8] + uVar3 * 4) + 0x58);
  if (((piVar8 == (int *)0x0) || ((*(byte *)(piVar8 + 0x1c) & 1) != 0)) ||
     (local_98 = piVar8, local_84 = (float)FUN_000388b0(in_ECX[0xc6]), local_84 == 0.0)) {
    return 0;
  }
  in_ECX[0x22d] = (int)((float)in_ECX[0x22d] - (float)in_ECX[0x100]);
  iVar4 = (**(code **)(*piVar8 + 0x40))();
  pfVar7 = (float *)(iVar4 + 0x24);
  iVar5 = (**(code **)(*piVar2 + 0x40))();
  fStack_88 = *(float *)(iVar4 + 0x2c) - *(float *)(iVar5 + 0x2c);
  fStack_8c = *(float *)(iVar4 + 0x28) - *(float *)(iVar5 + 0x28);
  fStack_90 = *pfVar7 - *(float *)(iVar5 + 0x24);
  fStack_94 = SQRT(fStack_8c * fStack_8c + fStack_88 * fStack_88 + fStack_90 * fStack_90);
  auVar11 = rcpss(ZEXT416((uint)fStack_94),ZEXT416((uint)fStack_94));
  fStack_a8 = auVar11._0_4_;
  fStack_b0 = fStack_a8 * fStack_90;
  fStack_ac = fStack_a8 * fStack_8c;
  fStack_a8 = fStack_a8 * fStack_88;
  piVar2 = piVar2 + 0x6d;
  fStack_6c = fStack_b0;
  fStack_68 = fStack_ac;
  fStack_64 = fStack_a8;
  fVar9 = (float10)(**(code **)(*piVar2 + 0xcc))();
  if (fVar9 < (float10)fStack_94) {
    piVar12 = in_ECX + 0x23c;
    if (((in_ECX[0x23d] == 0) || ((in_ECX[0x23e] - in_ECX[0x23d]) / 0x18 == 0)) &&
       (*(int *)(piVar8[3] + 4) == 3)) {
      uVar13 = 1;
      uVar6 = FUN_0011dfa0(piVar12,1);
      cVar1 = FUN_00041660(uVar6,piVar12,uVar13);
      piVar8 = local_98;
      if (cVar1 != '\0') {
        FUN_00025730(in_ECX + 0x23c,1,1);
        in_ECX[0x22c] = 0;
        piVar8 = local_98;
      }
    }
  }
  local_98 = (int *)0x3;
  switch(in_ECX[0x22c]) {
  case 0:
    local_98 = (int *)0x4;
    iVar5 = FUN_0017c5a0();
    if (iVar5 == 0) {
      in_ECX[0x22c] = 4;
      goto switchD_000290c0_caseD_1;
    }
    cVar1 = FUN_00026d80(in_ECX + -0x10,in_ECX + 0x23c,in_ECX + 0x10e,0,0x3fc00000);
    iStack_7c = in_ECX[0x110];
    iStack_80 = in_ECX[0x10f];
    local_84 = (float)in_ECX[0x10e];
    FUN_000255d0(param_1,0);
    fVar9 = (float10)(**(code **)(*piVar2 + 0xcc))();
    fVar10 = (float10)(**(code **)(*piVar2 + 0xd0))();
    fVar9 = (fVar10 + (float10)(float)(fVar9 * (float10)3.0)) * (float10)0.25;
    fStack_64 = -fStack_a8;
    fStack_68 = -fStack_ac;
    fStack_6c = -fStack_b0;
    fStack_70 = (float)fVar9;
    fStack_78 = fStack_70 * fStack_6c;
    fStack_74 = fStack_70 * fStack_68;
    fStack_70 = fStack_70 * fStack_64;
    fStack_9c = fStack_70 + *(float *)(iVar4 + 0x2c);
    fStack_a0 = fStack_74 + *(float *)(iVar4 + 0x28);
    in_ECX[0x5d] = (int)(fStack_78 + *pfVar7);
    in_ECX[0x5e] = (int)fStack_a0;
    in_ECX[0x5f] = (int)fStack_9c;
    if ((cVar1 != '\0') && ((float)fVar9 <= fStack_94)) goto switchD_000290c0_caseD_1;
    fVar9 = (float10)FUN_00023900(0x3f800000,0x3fc00000);
    in_ECX[0x22d] = (int)(float)fVar9;
    in_ECX[0x22c] = 2;
    break;
  default:
    goto switchD_000290c0_caseD_1;
  case 2:
    iVar5 = FUN_000337f0(in_ECX + -0x10,&fStack_b0,0x3f7ae148);
    if (iVar5 != 0) {
      iVar4 = FUN_00024540(in_ECX + -0x10,0x70,0,0,0,0x40400000,0);
      if (iVar4 == 1) {
        iVar4 = FUN_00055aa0();
        *(uint *)(iVar4 + 0x88) = *(uint *)(iVar4 + 0x88) | 2;
      }
      goto switchD_000290c0_caseD_1;
    }
    uVar3 = *(uint *)((int)local_84 + 0x80);
    FUN_00024f80(in_ECX + -0x10,piVar8,0x41c80000,0);
    if (((float)in_ECX[0x22d] < 0.0 == ((float)in_ECX[0x22d] == 0.0)) && ((uVar3 >> 3 & 1) != 0))
    goto switchD_000290c0_caseD_1;
    fVar9 = (float10)(**(code **)(*piVar2 + 0xd4))();
    fStack_4c = -fStack_a8;
    fStack_50 = -fStack_ac;
    fStack_54 = -fStack_b0;
    fStack_70 = (float)(fVar9 * (float10)0.8);
    fStack_78 = fStack_70 * fStack_54;
    fStack_74 = fStack_70 * fStack_50;
    fStack_70 = fStack_70 * fStack_4c;
    fStack_9c = fStack_70 + *(float *)(iVar4 + 0x2c);
    fStack_a0 = fStack_74 + *(float *)(iVar4 + 0x28);
    in_ECX[0x5d] = (int)(fStack_78 + *pfVar7);
    in_ECX[0x5e] = (int)fStack_a0;
    in_ECX[0x5f] = (int)fStack_9c;
    local_84 = fStack_a0;
    if ((float)(fVar9 * (float10)0.8) <= fStack_94) {
      in_ECX[0x22c] = 4;
      goto switchD_000290c0_caseD_1;
    }
    in_ECX[0x22c] = 3;
    break;
  case 3:
    local_98 = (int *)0x3;
    iVar4 = FUN_0017c5a0();
    if (iVar4 == 0) {
      fStack_9c = -fStack_a8;
      fStack_a0 = -fStack_ac;
      fStack_a4 = -fStack_b0;
      FUN_0011dfa0(&fStack_a4,0x3f19999a,0x41100000,in_ECX + 0x23c,0);
      cVar1 = FUN_0004bbd0();
      if (cVar1 == '\0') {
        FUN_0011dfa0(&fStack_b0,0x3f19999a,0x41400000,in_ECX + 0x23c,0);
        cVar1 = FUN_0004bbd0();
        if (cVar1 == '\0') {
          in_ECX[0x22c] = 4;
          goto switchD_000290c0_caseD_1;
        }
      }
      in_ECX[0xe1] = in_ECX[0xe1] | 0x4000;
      FUN_00025730(in_ECX + 0x23c,1,1);
    }
    else {
      cVar1 = FUN_00026d80(in_ECX + -0x10,in_ECX + 0x23c,in_ECX + 0x10e,0,0x3fc00000);
      fStack_a0 = (float)in_ECX[0x10f];
      fStack_a4 = (float)in_ECX[0x10e];
      fStack_9c = (float)in_ECX[0x110];
      if (cVar1 == '\0') {
        fVar9 = (float10)FUN_00023900(0x3f800000,0x3fc00000);
        in_ECX[0x22d] = (int)(float)fVar9;
        in_ECX[0x22c] = 2;
      }
      else {
        FUN_00012560();
        cVar1 = FUN_00058bc0();
        FUN_00012540();
        if (cVar1 != '\0') {
          local_98 = (int *)0x3;
        }
      }
      FUN_000255d0(param_1,0);
    }
    goto switchD_000290c0_caseD_1;
  case 4:
    iVar5 = FUN_0017c5a0();
    if (iVar5 == 0) {
      iVar5 = (**(code **)(*in_ECX + 0x2d8))();
      if (iVar5 == 0) {
        *(undefined4 *)(unaff_EBX + 0x8b0) = 3;
      }
    }
    else {
      iVar5 = (**(code **)(*in_ECX + 0x2e0))(param_1);
      if (iVar5 == 2) {
        fVar9 = (float10)FUN_00023900(0x3f800000,0x3fc00000);
        *(float *)(unaff_EBX + 0x8b4) = (float)fVar9;
        *(undefined4 *)(unaff_EBX + 0x8b0) = 2;
      }
    }
    fVar9 = (float10)(**(code **)(*piStack_b8 + 0xd4))();
    fStack_58 = -fStack_a8;
    fStack_5c = -fStack_ac;
    fStack_60 = -fStack_b0;
    fStack_70 = (float)(fVar9 * (float10)0.4);
    fStack_78 = fStack_70 * fStack_60;
    fStack_74 = fStack_70 * fStack_5c;
    fStack_70 = fStack_70 * fStack_58;
    fStack_9c = fStack_70 + *(float *)(iVar4 + 0x2c);
    fStack_a0 = fStack_74 + *(float *)(iVar4 + 0x28);
    in_ECX[0x5d] = (int)(fStack_78 + *pfVar7);
    in_ECX[0x5e] = (int)fStack_a0;
    in_ECX[0x5f] = (int)fStack_9c;
    if ((float)(fVar9 * (float10)0.4) <= fStack_94) goto switchD_000290c0_caseD_1;
    in_ECX[0x22c] = 3;
    FUN_0004e8f0();
  }
  in_ECX[0x5f] = 0;
  in_ECX[0x5e] = 0;
  in_ECX[0x5d] = 0;
switchD_000290c0_caseD_1:
  FUN_0004d970(in_ECX + -0x10,param_1,local_98,1,1);
  return 1;
}
