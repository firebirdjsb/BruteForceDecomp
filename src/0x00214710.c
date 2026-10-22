/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1D852145832029395D6CC00854DC8323360F994254DC92D8760D29C4871ED690
 * Entry: 0x00214710, Ghidra index: 7453, label: FUN_00214710
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046cfdc;
int FUN_00214710(int param_1,undefined4 param_2,undefined4 param_3,float *param_4,int param_5,
                float param_6,undefined4 param_7,int *param_8,float *param_9,char param_10)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  float fVar7;
  float *pfVar8;
  int iVar9;
  float10 fVar10;
  undefined1 auVar11 [16];
  float *pfVar12;
  float *pfVar13;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float local_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  int iStack_6c;
  float fStack_68;
  undefined4 uStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  undefined1 auStack_3c [20];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [28];
  
  iVar9 = 0;
  if ((param_8 != (int *)0x0) &&
     (((*(int *)(param_8[3] + 4) == 3 || (*(int *)(param_8[3] + 4) == 0x16)) ||
      (iVar4 = (**(code **)(*param_8 + 0x30))(), iVar4 == 0)))) {
    return 0;
  }
  uVar5 = DAT_0046cfdc * 0x19660d + 0x3c6ef35f;
  if ((uVar5 & 1) == 0) {
    uVar5 = uVar5 * 0x19660d + 0x3c6ef35f;
    DAT_0046cfdc = uVar5 * 0x19660d + 0x3c6ef35f;
    local_b4 = (float)(uVar5 >> 9 | 0x3f800000);
    local_f0 = (float)(DAT_0046cfdc >> 9 | 0x3f800000);
    fVar1 = -((local_b4 - 1.0) * (local_f0 - 1.0) * *(float *)(param_5 + 0x30));
  }
  else {
    uVar5 = uVar5 * 0x19660d + 0x3c6ef35f;
    DAT_0046cfdc = uVar5 * 0x19660d + 0x3c6ef35f;
    local_b4 = (float)(uVar5 >> 9 | 0x3f800000);
    local_f0 = (float)(DAT_0046cfdc >> 9 | 0x3f800000);
    fVar1 = (local_b4 - 1.0) * (local_f0 - 1.0) * *(float *)(param_5 + 0x30);
  }
  fStack_b0 = 0.0;
  fStack_a4 = (fVar1 + *(float *)(param_5 + 0x28)) * param_6;
  fStack_a8 = (fVar1 + *(float *)(param_5 + 0x2c)) * param_6;
  if (param_10 == '\0') {
    iVar4 = FUN_00213730(&fStack_b0);
    cVar3 = iVar4 != 0;
  }
  else {
    cVar3 = FUN_002136b0();
  }
  fVar1 = fStack_b0;
  if (cVar3 != '\0') {
    if (*(char *)(param_5 + 0x21) == '\0') {
      local_b4 = (float)(param_1 + 4);
    }
    else {
      local_b4 = (float)(param_1 + 0x14);
    }
    fVar2 = local_b4;
    if (local_b4 != 0.0) {
      FUN_00218c70(*(undefined4 *)((int)local_b4 + 4),*(undefined4 *)((int)local_b4 + 8),param_5,
                   fStack_b0);
      fVar7 = local_f0;
      if (local_f0 == *(float *)((int)fVar2 + 8)) {
        uVar6 = FUN_00213880(param_5,fVar1);
        FUN_00218430(uVar6);
        FUN_00214f10();
        fVar7 = (float)(*(int *)((int)fVar2 + 8) + -0x14);
      }
      iStack_58 = *(int *)((int)fVar7 + 0x10);
      if (param_8 == (int *)0x0) {
        FUN_00217920(param_1,(int)fVar7 + 8,param_2,param_3,param_4,fStack_a4,fStack_a8,param_7,
                     param_5);
      }
      else {
        local_f0 = fStack_a8;
        fStack_ac = fStack_a4;
        fStack_84 = fStack_a4;
        if (fStack_a4 <= fStack_a8) {
          fStack_84 = fStack_a8;
        }
        auVar11 = ZEXT416((uint)fStack_84);
        fVar10 = (float10)FUN_00233bf0();
        fStack_8c = (float)(fVar10 * (float10)*(float *)(param_5 + 0x34));
        iStack_6c = (**(code **)(*param_8 + 0x30))();
        fStack_ac = 0.0;
        if (0 < iStack_6c) {
          do {
            pfVar8 = param_9;
            fVar1 = (float)iStack_6c;
            if (param_9 == (float *)0x0) {
              pfVar8 = (float *)(**(code **)(*param_8 + 0x34))(fStack_ac);
              fVar1 = fStack_ac;
            }
            fStack_ac = fVar1;
            if (((pfVar8[0x1c] == 0.0) && (FUN_00236670(0,&local_f0,&fStack_54), 0.0 < local_f0)) &&
               (FUN_000a0c60(),
               (fStack_54 - fStack_a0) * (fStack_54 - fStack_a0) +
               (fStack_50 - fStack_9c) * (fStack_50 - fStack_9c) +
               (fStack_4c - fStack_98) * (fStack_4c - fStack_98) <
               (fStack_84 + local_f0) * (fStack_84 + local_f0))) {
              fStack_d4 = *pfVar8;
              iVar9 = FUN_0023c5c0();
              if (iVar9 != 0) {
                FUN_0012b2a0();
                if (*(int *)(param_5 + 0x38) == 1) {
                  pfVar13 = (float *)0x0;
                  pfVar12 = (float *)0x0;
                }
                else {
                  uStack_64 = 0;
                  uStack_5c = 0;
                  fStack_d8 = 0.0;
                  fStack_e0 = 0.0;
                  fStack_dc = 0.0;
                  if (param_4 == (float *)0x0) {
LAB_00214d20:
                    fStack_d4 = -fStack_c4;
                    fStack_d0 = -fStack_c8;
                    fStack_48 = -fStack_cc;
                    fStack_44 = fStack_d0;
                    fStack_40 = fStack_d4;
                    FUN_00219110(&fStack_48);
                  }
                  else {
                    fStack_88 = param_4[1];
                    fStack_80 = param_4[2];
                    fStack_e0 = *param_4;
                    fStack_d4 = fStack_88 * fStack_88 +
                                fStack_80 * fStack_80 + fStack_e0 * fStack_e0;
                    auVar11 = rsqrtss(auVar11,fStack_d4);
                    fStack_b0 = auVar11._0_4_;
                    fStack_e0 = fStack_b0 * fStack_e0;
                    fStack_dc = fStack_88 * fStack_b0;
                    fStack_d8 = fStack_80 * fStack_b0;
                    pfVar13 = (float *)FUN_0012b2a0();
                    fStack_dc = pfVar13[1];
                    fStack_d8 = pfVar13[2];
                    fStack_e0 = *pfVar13;
                    fStack_78 = fStack_dc;
                    fStack_70 = fStack_d8;
                    if ((param_4 == (float *)0x0) ||
                       (0.98 < ABS(fStack_c8 * fStack_dc +
                                   fStack_c4 * fStack_d8 + fStack_cc * fStack_e0)))
                    goto LAB_00214d20;
                    fStack_e4 = fStack_c8 * fStack_e0 - fStack_dc * fStack_cc;
                    fStack_e8 = fStack_d8 * fStack_cc - fStack_c4 * fStack_e0;
                    fStack_ec = fStack_c4 * fStack_dc - fStack_c8 * fStack_d8;
                    auVar11 = rsqrtss(auVar11,fStack_e8 * fStack_e8 +
                                              fStack_e4 * fStack_e4 + fStack_ec * fStack_ec);
                    fStack_94 = auVar11._0_4_;
                    fStack_ec = fStack_94 * fStack_ec;
                    fStack_e8 = fStack_e8 * fStack_94;
                    fStack_e4 = fStack_e4 * fStack_94;
                    fStack_d4 = fStack_e8 * fStack_cc - fStack_c8 * fStack_ec;
                    fStack_bc = fStack_c4 * fStack_ec - fStack_e4 * fStack_cc;
                    fStack_c0 = fStack_e4 * fStack_c8 - fStack_e8 * fStack_c4;
                    fStack_d0 = fStack_bc * fStack_bc +
                                fStack_d4 * fStack_d4 + fStack_c0 * fStack_c0;
                    auVar11 = rsqrtss(auVar11,fStack_d0);
                    fStack_90 = auVar11._0_4_;
                    fStack_c0 = fStack_90 * fStack_c0;
                    fStack_bc = fStack_bc * fStack_90;
                    fStack_b8 = fStack_d4 * fStack_90;
                  }
                  if (*(float *)(param_5 + 0x34) != 0.0) {
                    FUN_0001fc70(auStack_3c,&fStack_cc,fStack_8c);
                    pfVar13 = (float *)FUN_0001fb70(auStack_3c,auStack_28,&fStack_ec);
                    fStack_e4 = pfVar13[2];
                    fStack_e8 = pfVar13[1];
                    fStack_ec = *pfVar13;
                    fStack_7c = fStack_e8;
                    fStack_68 = fStack_e4;
                    pfVar13 = (float *)FUN_0001fb70(auStack_3c,auStack_1c,&fStack_c0);
                    fStack_b8 = pfVar13[2];
                    fStack_bc = pfVar13[1];
                    fStack_c0 = *pfVar13;
                    fStack_74 = fStack_bc;
                    fStack_60 = fStack_b8;
                  }
                  pfVar13 = &fStack_c0;
                  pfVar12 = &fStack_ec;
                }
                FUN_00214f50(param_1,iVar9,(int)fVar7 + 8,&fStack_a0,fStack_a4,fStack_a8,param_7,
                             pfVar12,pfVar13,&fStack_cc,param_5,param_8,pfVar8);
              }
            }
            fStack_ac = (float)((int)fStack_ac + 1);
          } while ((int)fStack_ac < iStack_6c);
        }
      }
      if (*(int *)((int)fVar7 + 0x10) == 0) {
        FUN_002184c0();
        return 0;
      }
      iVar9 = *(int *)((int)fVar7 + 0x10) - iStack_58;
    }
  }
  return iVar9;
}
