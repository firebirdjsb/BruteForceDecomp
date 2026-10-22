/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 552308F98DDC42D71A6B93FA3896C4B348C07F3622D40449BD472EC87F52BAA8
 * Entry: 0x00226cc0, Ghidra index: 7652, label: FUN_00226cc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_00226cc0(float param_1)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  uint uVar4;
  float fVar5;
  bool bVar6;
  char cVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int *in_ECX;
  int *piVar14;
  int *extraout_EDX;
  float fVar15;
  float fVar16;
  undefined1 in_XMM0 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fStack_c0;
  float fStack_a4;
  undefined8 uStack_a0;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float local_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  undefined4 uStack_78;
  float fStack_74;
  undefined8 uStack_70;
  int iStack_60;
  int iStack_30;
  
  if ((*(byte *)(in_ECX[2] + 0xc50) & 0x10) != 0) {
    return 0;
  }
  cVar7 = FUN_00157c40(param_1);
  if (cVar7 == '\0') {
    return 0;
  }
  if (((float)in_ECX[0x76] < 0.0 != ((float)in_ECX[0x76] == 0.0)) &&
     ((float)in_ECX[0x75] < 0.0 != ((float)in_ECX[0x75] == 0.0))) {
    return 0;
  }
  local_8c = 1.0;
  if (0 < (short)in_ECX[0x41]) {
    local_8c = 5.0;
  }
  *(byte *)(in_ECX + 0x88) = *(byte *)(in_ECX + 0x88) & 0xfe;
  if ((((0.0 < (float)in_ECX[0x8c]) &&
       (in_ECX[0x8c] = (int)((float)in_ECX[0x8c] - param_1),
       (float)in_ECX[0x8c] < 0.0 != ((float)in_ECX[0x8c] == 0.0))) &&
      (in_ECX[0x8c] = 0, (*(byte *)(in_ECX + 0x88) & 0x40) != 0)) && (in_ECX[0x81] == 0)) {
    FUN_00226b80(param_1);
  }
  if ((in_ECX[0x7b] == 0) && ((*(byte *)((int)in_ECX + 0x221) & 1) != 0)) {
    *(byte *)(in_ECX + 0x88) = *(byte *)(in_ECX + 0x88) & 0xf7;
    *(byte *)(in_ECX + 0x88) = *(byte *)(in_ECX + 0x88) & 0xbf;
  }
  if (((*(byte *)(in_ECX + 0x88) & 4) == 0) &&
     (((*(byte *)(in_ECX + 0x88) & 0x48) == 0 ||
      ((float)in_ECX[0x8c] < 0.0 == ((float)in_ECX[0x8c] == 0.0))))) goto LAB_00227259;
  if (((*(byte *)(in_ECX + 0x88) & 0x40) != 0) && ((in_ECX[0x7b] == 0 && (in_ECX[0x81] == 0)))) {
    FUN_00226b80(param_1);
  }
  pfVar8 = (float *)(**(code **)(*in_ECX + 0x54))();
  fStack_a4 = *pfVar8;
  fVar1 = pfVar8[2];
  fVar2 = pfVar8[1];
  uStack_a0 = *(undefined8 *)(pfVar8 + 1);
  auVar17._4_12_ = in_XMM0._4_12_;
  auVar17._0_4_ = SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fStack_a4 * fStack_a4);
  auVar20 = auVar17;
  if (1.1920929e-07 < auVar17._0_4_) {
    auVar20 = rcpss(ZEXT416((uint)auVar17._0_4_),ZEXT416((uint)auVar17._0_4_));
    fVar16 = auVar20._0_4_;
    auVar20._0_4_ = fStack_a4 * fVar16;
    auVar20._4_4_ = fVar16 * 0.0;
    auVar20._8_4_ = fVar2 * fVar16;
    auVar20._12_4_ = fVar1 * fVar16;
    uStack_a0 = auVar20._8_8_;
    fStack_a4 = auVar20._0_4_;
  }
  if (((*(byte *)(in_ECX + 0x88) & 0x48) != 0) &&
     ((float)in_ECX[0x8c] < 0.0 != ((float)in_ECX[0x8c] == 0.0))) {
    fStack_90 = (float)in_ECX[0x7e];
    fStack_94 = (float)in_ECX[0x7d];
    fStack_98 = (float)in_ECX[0x7c];
    iVar9 = (**(code **)(*in_ECX + 0x40))();
    fVar1 = fStack_90 - *(float *)(iVar9 + 0x2c);
    fVar2 = fStack_94 - *(float *)(iVar9 + 0x28);
    fVar16 = fStack_98 - *(float *)(iVar9 + 0x24);
    fVar15 = fVar2 * fVar2 + fVar1 * fVar1 + fVar16 * fVar16;
    if (fVar15 <= 1.0) {
LAB_00227038:
      pfVar8 = (float *)(**(code **)(*in_ECX + 0x54))();
      auVar19._0_4_ = *pfVar8 * 200.0;
      auVar19._4_4_ = 0;
      auVar19._8_4_ = (float)*(undefined8 *)(pfVar8 + 1) * 200.0;
      auVar19._12_4_ = (float)((ulonglong)*(undefined8 *)(pfVar8 + 1) >> 0x20) * 200.0;
      uStack_70 = auVar19._8_8_;
      fStack_88 = auVar19._0_4_;
      fStack_84 = auVar19._8_4_;
      fStack_80 = auVar19._12_4_;
      fStack_74 = auVar19._0_4_;
      iVar9 = (**(code **)(*in_ECX + 0x40))();
      fStack_90 = fStack_80 + *(float *)(iVar9 + 0x2c);
      fStack_94 = fStack_84 + *(float *)(iVar9 + 0x28);
      fStack_98 = fStack_88 + *(float *)(iVar9 + 0x24);
      FUN_00226360();
      if ((*(byte *)(in_ECX + 0x88) & 0x40) != 0) {
        in_ECX[0x74] = 0x3f000000;
      }
    }
    else {
      auVar20 = rsqrtss(auVar20,fVar15);
      fVar15 = auVar20._0_4_;
      auVar18._0_4_ = fVar16 * fVar15;
      auVar18._4_4_ = fVar15 * 0.0;
      auVar18._8_4_ = fVar2 * fVar15;
      auVar18._12_4_ = fVar1 * fVar15;
      auVar19 = auVar18;
      (**(code **)(*in_ECX + 0x40))();
      pfVar8 = (float *)FUN_0001fdd0();
      fStack_80 = -pfVar8[2];
      fStack_84 = -pfVar8[1];
      if (fStack_84 * auVar18._8_4_ + fStack_80 * auVar18._12_4_ + auVar18._0_4_ * -*pfVar8 < 0.5)
      goto LAB_00227038;
    }
    if ((int *)in_ECX[0x7b] != (int *)0x0) {
      iVar10 = (**(code **)(*(int *)in_ECX[0x7b] + 0x40))();
      fStack_90 = *(float *)(iVar10 + 0x2c);
      iVar9 = *(int *)(iVar10 + 0x28);
      in_ECX[0x7c] = (int)*(float *)(iVar10 + 0x24);
      in_ECX[0x7d] = iVar9;
      in_ECX[0x7e] = (int)fStack_90;
      fStack_94 = (float)in_ECX[0x7d];
      fStack_98 = (float)in_ECX[0x7c];
      if ((*(byte *)((int)in_ECX + 0x221) & 1) != 0) {
        FUN_00226930(in_ECX,param_1,&fStack_98);
      }
    }
    iVar9 = (**(code **)(*in_ECX + 0x40))();
    fVar1 = fStack_90 - *(float *)(iVar9 + 0x2c);
    fVar2 = fStack_94 - *(float *)(iVar9 + 0x28);
    fStack_a4 = fStack_98 - *(float *)(iVar9 + 0x24);
    uStack_a0 = CONCAT44(fVar1,fVar2);
    fVar16 = fStack_a4 * fStack_a4 + fVar2 * fVar2 + fVar1 * fVar1;
    if (1.4210855e-14 < fVar16) {
      auVar20 = rsqrtss(auVar19,fVar16);
      fVar16 = auVar20._0_4_;
      fStack_a4 = fStack_a4 * fVar16;
      uStack_a0 = CONCAT44(fVar1 * fVar16,fVar2 * fVar16);
    }
  }
  fStack_c0 = auVar17._0_4_;
  if ((*(byte *)(in_ECX + 0x88) & 4) != 0) {
    fStack_c0 = (float)in_ECX[0x82];
  }
  FUN_002266d0(in_ECX,param_1,auVar17._0_4_,&fStack_a4,fStack_c0);
LAB_00227259:
  if (((float)in_ECX[0x76] < 0.0 == ((float)in_ECX[0x76] == 0.0)) ||
     ((*(byte *)((int)in_ECX + 0x221) & 4) != 0)) {
    in_ECX[0x76] = (int)((float)in_ECX[0x76] - local_8c * param_1);
  }
  else if (0.0 < (float)in_ECX[0x75]) {
    in_ECX[0x75] = (int)((float)in_ECX[0x75] - local_8c * param_1);
  }
  if (((in_ECX[0x81] == 1) && (iVar9 = (**(code **)(*in_ECX + 0x54))(), *(float *)(iVar9 + 4) < 0.5)
      ) && ((float)in_ECX[0x8c] == 0.0)) {
    FUN_00227f80(in_ECX);
  }
  bVar6 = false;
  if (((((0.0 < (float)in_ECX[0x85]) && ((*(byte *)(in_ECX + 0x88) & 0x20) != 0)) &&
       ((in_ECX[0x7b] != 0 || (in_ECX[0x87] != 2)))) &&
      ((in_ECX[0x6d] != 0 && (*(int *)(*(int *)(in_ECX[0x6d] + 0xc) + 4) == 3)))) &&
     (cVar7 = FUN_00112800(), cVar7 != '\0')) {
    if ((float)in_ECX[0x86] < 0.25) {
      in_ECX[0x86] = (int)(param_1 + (float)in_ECX[0x86]);
    }
    else {
      in_ECX[0x86] = 0;
      iVar9 = *(int *)(in_ECX[2] + 0x204);
      iVar10 = *(int *)(iVar9 + 0x3c);
      *(int *)(iVar9 + 0x3c) = iVar10 + 1;
      (**(code **)(*in_ECX + 0x40))();
      FUN_000d4240(in_ECX[0x85]);
      FUN_000d1420(uStack_78);
      FUN_000d4270(&fStack_88);
      if (iStack_60 != iStack_30) {
        do {
          if (bVar6) goto LAB_002276a3;
          for (puVar3 = *(undefined4 **)(iStack_60 + 0x1c); puVar3 != (undefined4 *)0x0;
              puVar3 = (undefined4 *)*puVar3) {
            uVar4 = *(uint *)((uint)*(ushort *)(puVar3 + 2) * 0x10 + 0xc + *(int *)(iVar9 + 0x14));
            if (((uVar4 != 0) &&
                (iVar11 = *(int *)(uVar4 + 0x18), *(int *)(uVar4 + 0x18) = iVar10, iVar11 != iVar10)
                ) && (piVar14 = (int *)(-(uint)((*(byte *)(uVar4 + 0x26) & 0x40) != 0) & uVar4),
                     piVar14 != (int *)0x0)) {
              if ((int *)in_ECX[0x7b] == (int *)0x0) {
                iVar11 = (**(code **)(*piVar14 + 0xec))();
                if (iVar11 != 0) {
                  piVar13 = (int *)(**(code **)(*piVar14 + 0xec))();
                  (**(code **)(*piVar13 + 0x9c))();
                  cVar7 = FUN_0004b940();
                  if (cVar7 != '\0') {
                    iVar11 = (**(code **)(*extraout_EDX + 0x40))();
                    iVar12 = (**(code **)(*piVar14 + 0x40))();
                    fVar1 = *(float *)(iVar12 + 0x2c) - *(float *)(iVar11 + 0x2c);
                    local_8c = *(float *)(iVar12 + 0x28) - *(float *)(iVar11 + 0x28);
                    fStack_a4 = *(float *)(iVar12 + 0x24) - *(float *)(iVar11 + 0x24);
                    uStack_a0 = CONCAT44(fVar1,local_8c);
                    fVar1 = fStack_a4 * fStack_a4 + local_8c * local_8c + fVar1 * fVar1;
                    fVar2 = (float)in_ECX[0x85] * (float)in_ECX[0x85];
                    if (fVar1 < fVar2 != (fVar1 == fVar2)) {
                      if (fVar1 < 0.0 != (fVar1 == 0.0)) goto LAB_0022767c;
                      pfVar8 = (float *)(**(code **)(*in_ECX + 0x54))();
                      if (1.1920929e-07 <
                          pfVar8[2] * pfVar8[2] + pfVar8[1] * pfVar8[1] + *pfVar8 * *pfVar8) {
                        fVar2 = (float)uStack_a0 * pfVar8[1] + uStack_a0._4_4_ * pfVar8[2];
                        fVar1 = fStack_a4;
                        goto LAB_00227667;
                      }
                    }
                  }
                }
              }
              else if (piVar14 == (int *)in_ECX[0x7b]) {
                iVar11 = (**(code **)(*in_ECX + 0x40))();
                iVar12 = (**(code **)(*piVar14 + 0x40))();
                fVar2 = *(float *)(iVar12 + 0x2c) - *(float *)(iVar11 + 0x2c);
                fVar16 = *(float *)(iVar12 + 0x28) - *(float *)(iVar11 + 0x28);
                fVar1 = *(float *)(iVar12 + 0x24) - *(float *)(iVar11 + 0x24);
                fVar15 = fVar1 * fVar1 + fVar16 * fVar16 + fVar2 * fVar2;
                fVar5 = (float)in_ECX[0x85] * (float)in_ECX[0x85];
                local_8c = fVar16;
                if (fVar15 < fVar5 != (fVar15 == fVar5)) {
                  if (fVar15 < 0.0 != (fVar15 == 0.0)) {
LAB_0022767c:
                    bVar6 = true;
                    break;
                  }
                  pfVar8 = (float *)(**(code **)(*in_ECX + 0x54))();
                  if (1.1920929e-07 <
                      pfVar8[2] * pfVar8[2] + pfVar8[1] * pfVar8[1] + *pfVar8 * *pfVar8) {
                    fVar2 = fVar16 * pfVar8[1] + fVar2 * pfVar8[2];
LAB_00227667:
                    fVar2 = fVar1 * *pfVar8 + fVar2;
                    if (fVar2 < 0.0 != (fVar2 == 0.0)) goto LAB_0022767c;
                  }
                }
              }
            }
          }
          FUN_000d4210();
        } while (iStack_60 != iStack_30);
        if (bVar6) {
LAB_002276a3:
          in_ECX[0x76] = 0;
          in_ECX[0x75] = 0;
        }
      }
    }
  }
  if ((float)in_ECX[0x76] < 0.0 != ((float)in_ECX[0x76] == 0.0)) {
    if ((in_ECX[0x81] == 2) || (in_ECX[0x81] == 1)) {
      FUN_00227f80(in_ECX);
    }
    else if ((float)in_ECX[0x75] < 0.0 != ((float)in_ECX[0x75] == 0.0)) {
      if ((((*(byte *)(in_ECX + 0x88) & 0x10) != 0) || (bVar6)) &&
         ((*(byte *)(in_ECX + 0x88) & 2) == 0)) {
        FUN_00227760();
      }
      return 0;
    }
  }
  FUN_00228c10();
  return 1;
}
