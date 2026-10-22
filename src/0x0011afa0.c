/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 903905D04CA2B5CAF2D3FAD9B4188098462C67BF6EEC966A62DABEB5D1654056
 * Entry: 0x0011afa0, Ghidra index: 3613, label: FUN_0011afa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0011afa0(int param_1,float param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  int iVar10;
  float10 fVar11;
  float10 fVar12;
  float fVar16;
  undefined1 in_XMM0 [16];
  undefined1 auVar13 [16];
  undefined1 auVar15 [12];
  float fVar17;
  undefined1 auVar14 [16];
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  float fStack_c8;
  undefined8 uStack_c4;
  float local_bc;
  float fStack_b8;
  undefined8 uStack_b4;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float local_9c;
  float local_98;
  float fStack_94;
  float fStack_8c;
  undefined8 uStack_88;
  undefined4 uStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined1 auStack_34 [52];
  
  if (0.0 < *(float *)(param_1 + 0x40c)) {
    *(float *)(param_1 + 0x40c) = *(float *)(param_1 + 0x40c) - param_2;
    if (*(float *)(param_1 + 0x40c) < 0.0 != (*(float *)(param_1 + 0x40c) == 0.0)) {
      *(undefined4 *)(param_1 + 0x40c) = 0;
      if (*(int *)(param_1 + 0x268) != -1) {
        FUN_0023d9c0();
      }
      if (*(int *)(param_1 + 0x26c) != -1) {
        FUN_0023d9c0();
      }
    }
  }
  if (((*(int *)(param_1 + 0x270) != -1) && (*(int *)(param_1 + 0x3ac) != 0)) &&
     (*(int *)(param_1 + 0x3ac) != -1)) {
    iVar10 = *(int *)(param_1 + 0x2e8);
    cVar9 = (**(code **)(*(int *)(iVar10 + 0x144) + 0x20))();
    if (((cVar9 != '\0') && (iVar10 = *(int *)(iVar10 + 0x164), iVar10 != 0)) &&
       ((*(int *)(*(int *)(iVar10 + 0xc) + 4) == 0x14 && (iVar10 != 0)))) {
      FUN_00156290(param_2);
    }
    iVar10 = FUN_002338c0(auStack_34,*(int *)(param_1 + 0x3ac) + 0x14,param_1 + 0x3b0);
    FUN_0003d6c0(&fStack_64,iVar10,iVar10 + 0x24);
    FUN_0003d730(param_1 + 0x34c,&fStack_64);
  }
  if (*(int *)(param_1 + 0x268) != -1) {
    if (0.2 < *(float *)(param_1 + 0x594)) {
      fStack_94 = *(float *)(param_1 + 0x5dc);
      local_98 = *(float *)(param_1 + 0x5d0);
      local_9c = *(float *)(param_1 + 0x5c4);
      in_XMM0._0_4_ = local_9c * 100.0;
      in_XMM0._4_4_ = 0;
      in_XMM0._8_4_ = local_98 * 100.0;
      in_XMM0._12_4_ = fStack_94 * 100.0;
      iVar10 = *(int *)(param_1 + 0x6c);
      fVar17 = *(float *)(iVar10 + 0x40) - in_XMM0._12_4_;
      fVar16 = *(float *)(iVar10 + 0x3c) - in_XMM0._8_4_;
      uStack_88 = CONCAT44(fVar17,fVar16);
      FUN_0011e9d0(param_1,*(float *)(iVar10 + 0x38) - in_XMM0._0_4_,fVar16,fVar17);
    }
    if ((*(int *)(param_1 + 0x408) != 0) && (*(int *)(param_1 + 0x408) != -1)) {
      fStack_94 = -*(float *)(param_1 + 0x5dc);
      local_9c = -*(float *)(param_1 + 0x5c4);
      auVar13 = rsqrtss(in_XMM0,fStack_94 * fStack_94 + local_9c * local_9c);
      local_9c = auVar13._0_4_ * local_9c;
      fStack_94 = auVar13._0_4_ * fStack_94;
      fVar16 = *(float *)(*(int *)(param_1 + 0x6c) + 0x34);
      uStack_88 = CONCAT44(fVar16,(undefined4)uStack_88);
      fVar16 = -fVar16;
      fVar17 = -*(float *)(*(int *)(param_1 + 0x6c) + 0x1c);
      auVar13 = rsqrtss(auVar13,fVar16 * fVar16 + fVar17 * fVar17);
      fVar11 = (float10)fpatan((float10)local_9c,(float10)fStack_94);
      fVar11 = (float10)FUN_0001fae0((float)fVar11);
      fVar12 = (float10)fpatan((float10)(auVar13._0_4_ * fVar17),(float10)(auVar13._0_4_ * fVar16));
      fVar12 = (float10)FUN_0001fae0((float)fVar12);
      fVar12 = (float10)(float)fVar11 - fVar12;
      if ((float10)3.1415927 < ABS(fVar12)) {
        if ((float10)0.0 <= fVar12) {
          fVar12 = fVar12 - (float10)6.2831855;
        }
        else {
          fVar12 = fVar12 + (float10)6.2831855;
        }
      }
      if ((*(int *)(param_1 + 0x1f8) == 6) || (*(int *)(param_1 + 0x1f8) == 7)) {
        fVar16 = 0.17453292;
      }
      else {
        fVar16 = 0.61086524;
      }
      fVar17 = (float)fVar12;
      if ((float)fVar12 <= -fVar16) {
        fVar17 = -fVar16;
      }
      if (fVar16 <= fVar17) {
        fVar17 = fVar16;
      }
      iVar10 = *(int *)(*(int *)(param_1 + 0x408) + 0x10);
      if (iVar10 == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = *(int *)(iVar10 + 100);
      }
      in_XMM0 = *(undefined1 (*) [16])(iVar10 + 0x14);
      uVar1 = *(undefined4 *)(iVar10 + 0x34);
      uVar5 = *(undefined4 *)(iVar10 + 0x24);
      uVar6 = *(undefined4 *)(iVar10 + 0x28);
      uVar7 = *(undefined4 *)(iVar10 + 0x2c);
      uVar8 = *(undefined4 *)(iVar10 + 0x30);
      *(undefined1 (*) [16])(param_1 + 0x2c4) = in_XMM0;
      *(undefined4 *)(param_1 + 0x2e4) = uVar1;
      *(undefined4 *)(param_1 + 0x2d4) = uVar5;
      *(undefined4 *)(param_1 + 0x2d8) = uVar6;
      *(undefined4 *)(param_1 + 0x2dc) = uVar7;
      *(undefined4 *)(param_1 + 0x2e0) = uVar8;
      FUN_00072010(param_1 + 0x2c4,-fVar17);
    }
  }
  auVar15 = in_XMM0._4_12_;
  if (*(int *)(param_1 + 0x274) != -1) {
    if (0.1 < *(float *)(param_1 + 0x598)) {
      fVar16 = *(float *)(param_1 + 0x5d0) * 100.0;
      fVar17 = *(float *)(param_1 + 0x5dc) * 100.0;
      auVar13._4_4_ = fVar17;
      auVar13._0_4_ = fVar16;
      auVar13._8_8_ = 0;
      auVar15 = SUB1612(auVar13 << 0x40,4);
      iVar10 = *(int *)(param_1 + 0x6c);
      fVar17 = *(float *)(iVar10 + 0x40) - fVar17;
      fVar16 = *(float *)(iVar10 + 0x3c) - fVar16;
      uStack_88 = CONCAT44(fVar17,fVar16);
      *(float *)(param_1 + 0x674) = *(float *)(iVar10 + 0x38) - *(float *)(param_1 + 0x5c4) * 100.0;
      *(float *)(param_1 + 0x678) = fVar16;
      *(float *)(param_1 + 0x67c) = fVar17;
    }
    iVar10 = *(int *)(param_1 + 1000);
    fStack_94 = *(float *)(iVar10 + 0x34);
    local_98 = *(float *)(iVar10 + 0x28);
    local_9c = *(float *)(iVar10 + 0x1c);
    fVar16 = *(float *)(param_1 + 0x67c) - *(float *)(iVar10 + 0x40);
    fVar17 = *(float *)(param_1 + 0x678) - *(float *)(iVar10 + 0x3c);
    fVar2 = *(float *)(param_1 + 0x674) - *(float *)(iVar10 + 0x38);
    auVar14._0_4_ = SQRT(fVar17 * fVar17 + fVar2 * fVar2 + fVar16 * fVar16);
    auVar14._4_12_ = auVar15;
    if (auVar14._0_4_ < 2.0) {
      if (auVar14._0_4_ < 1.0) {
        fVar16 = *(float *)(*(int *)(param_1 + 0x6c) + 0x34);
        uStack_88 = CONCAT44(fVar16,(undefined4)uStack_88);
        fVar16 = -fVar16;
        fStack_b8 = -*(float *)(*(int *)(param_1 + 0x6c) + 0x1c);
        auVar20 = rsqrtss(auVar14,fVar16 * fVar16 + fStack_b8 * fStack_b8);
        fStack_b8 = auVar20._0_4_ * fStack_b8;
        uStack_b4 = CONCAT44(fVar16,auVar20._0_4_ * 0.0);
      }
      else {
        fVar3 = -*(float *)(*(int *)(param_1 + 0x6c) + 0x34);
        fVar18 = -*(float *)(*(int *)(param_1 + 0x6c) + 0x1c);
        auVar13 = rsqrtss(auVar14,fVar3 * fVar3 + fVar18 * fVar18);
        auVar20 = rcpss(ZEXT416((uint)auVar14._0_4_),ZEXT416((uint)auVar14._0_4_));
        fVar19 = auVar20._0_4_;
        fVar4 = auVar14._0_4_ - 1.0;
        fStack_78 = fVar4 * fVar2 * fVar19;
        fStack_74 = fVar4 * fVar17 * fVar19;
        fStack_70 = fVar4 * fVar16 * fVar19;
        fVar4 = 1.0 - fVar4;
        auVar20._0_4_ = fVar4 * auVar13._0_4_ * fVar18;
        auVar20._4_4_ = fVar4 * 0.0;
        auVar20._8_4_ = fVar4 * auVar13._0_4_ * 0.0;
        auVar20._12_4_ = fVar4 * fVar3;
        uStack_88 = auVar20._8_8_;
        fStack_b8 = fStack_78 + auVar20._0_4_;
        uStack_b4 = CONCAT44(fStack_70 + auVar20._12_4_,fStack_74 + auVar20._8_4_);
        fStack_8c = auVar20._0_4_;
        FUN_0001fd40();
      }
    }
    else {
      auVar13 = rcpss(ZEXT416((uint)auVar14._0_4_),ZEXT416((uint)auVar14._0_4_));
      fVar18 = auVar13._0_4_;
      auVar20._0_4_ = fVar2 * fVar18;
      auVar20._4_4_ = fVar18 * 0.0;
      auVar20._8_4_ = fVar17 * fVar18;
      auVar20._12_4_ = fVar16 * fVar18;
      uStack_b4 = auVar20._8_8_;
      fStack_b8 = auVar20._0_4_;
    }
    local_bc = local_9c * fStack_b8 + local_98 * (float)uStack_b4 + fStack_94 * uStack_b4._4_4_;
    fVar16 = *(float *)(*(int *)(param_1 + 0x3ec) + 0x34);
    if ((0.0 <= *(float *)(*(int *)(param_1 + 0x3ec) + 0x1c) * fStack_b8 + fVar16 * uStack_b4._4_4_)
       || ((*(byte *)(param_1 + 0x262) & 8) != 0)) {
      fStack_c8 = fStack_b8;
      fStack_a4 = fStack_b8 * -1.0 - (float)uStack_b4 * 0.0;
      uStack_c4 = uStack_b4;
      fStack_a8 = uStack_b4._4_4_ * 0.0 - fStack_b8 * 0.0;
      fStack_ac = (float)uStack_b4 * 0.0 - uStack_b4._4_4_ * -1.0;
      fVar17 = 1.0 / SQRT(fStack_a8 * fStack_a8 + fStack_a4 * fStack_a4 + fStack_ac * fStack_ac);
      fStack_ac = fStack_ac * fVar17;
      fStack_a8 = fStack_a8 * fVar17;
      fStack_a4 = fStack_a4 * fVar17;
      fStack_94 = (float)uStack_b4 * fStack_ac - fStack_a8 * fStack_b8;
      local_98 = fStack_a4 * fStack_b8 - uStack_b4._4_4_ * fStack_ac;
    }
    else {
      fVar16 = *(float *)(*(int *)(param_1 + 0x6c) + 0x34);
      fVar17 = -fVar16;
      fStack_c8 = -*(float *)(*(int *)(param_1 + 0x6c) + 0x1c);
      auVar13 = rsqrtss(auVar20,fStack_c8 * fStack_c8 + fVar17 * fVar17);
      fStack_c8 = auVar13._0_4_ * fStack_c8;
      fVar18 = auVar13._0_4_ * 0.0;
      local_bc = local_9c * fStack_c8 + local_98 * fVar18 + fStack_94 * fVar17;
      uStack_c4 = CONCAT44(fVar17,fVar18);
      fStack_a4 = fStack_c8 * -1.0 - fVar18 * 0.0;
      fStack_a8 = fVar17 * 0.0 - fStack_c8 * 0.0;
      fStack_ac = fVar18 * 0.0 - fVar17 * -1.0;
      fVar2 = 1.0 / SQRT(fStack_a8 * fStack_a8 + fStack_a4 * fStack_a4 + fStack_ac * fStack_ac);
      fStack_ac = fStack_ac * fVar2;
      fStack_a8 = fStack_a8 * fVar2;
      fStack_a4 = fStack_a4 * fVar2;
      fStack_94 = fVar18 * fStack_ac - fStack_a8 * fStack_c8;
      local_98 = fStack_a4 * fStack_c8 - fVar17 * fStack_ac;
    }
    uStack_88 = CONCAT44(fVar16,(undefined4)uStack_88);
    fStack_a0 = 1.0;
    local_9c = fStack_a8 * uStack_c4._4_4_ - fStack_a4 * (float)uStack_c4;
    fVar16 = ABS(*(float *)(param_1 + 0x488)) * param_2;
    if (fVar16 <= param_2 * 6.28318) {
      fVar16 = param_2 * 6.28318;
    }
    uStack_7c = 0x3f800000;
    if (local_bc <= -1.0) {
      local_bc = -1.0;
    }
    fStack_68 = local_bc;
    if (1.0 <= local_bc) {
      fStack_68 = 1.0;
    }
    fVar11 = (float10)FUN_00306c80();
    if ((float10)fVar16 < fVar11) {
      fStack_a0 = (float)((float10)fVar16 / fVar11);
    }
    if (((*(byte *)(param_1 + 0x262) & 8) != 0) || (1.0 <= fStack_a0)) {
      *(float *)(param_1 + 0x37c) = local_9c;
      *(float *)(param_1 + 0x388) = local_98;
      *(float *)(param_1 + 0x394) = fStack_94;
      *(float *)(param_1 + 0x380) = fStack_ac;
      *(float *)(param_1 + 0x38c) = fStack_a8;
      *(float *)(param_1 + 0x398) = fStack_a4;
      *(float *)(param_1 + 900) = fStack_c8;
      *(float *)(param_1 + 0x390) = (float)uStack_c4;
      *(float *)(param_1 + 0x39c) = uStack_c4._4_4_;
    }
    else {
      fStack_64 = local_9c;
      fStack_4c = fStack_94;
      fStack_60 = fStack_ac;
      fStack_58 = local_98;
      fStack_48 = fStack_a4;
      fStack_5c = fStack_c8;
      fStack_54 = fStack_a8;
      fStack_44 = uStack_c4._4_4_;
      fStack_50 = (float)uStack_c4;
      FUN_002339d0(&fStack_8c);
      FUN_002339d0(&fStack_78);
      FUN_0012b250(&fStack_8c,fStack_a0);
      FUN_002333b0(&local_9c);
    }
    *(byte *)(param_1 + 0x262) = *(byte *)(param_1 + 0x262) & 0xf7;
  }
  return;
}
