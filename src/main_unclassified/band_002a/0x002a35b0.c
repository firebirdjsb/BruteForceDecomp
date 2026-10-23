/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9E114C355A1E33862895BD9F01A8CBCCE151DF05057E1DE2A8F57E8950960A81
 * Entry: 0x002a35b0, Ghidra index: 9535, label: FUN_002a35b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002a35b0(int param_1,int param_2,float param_3)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  float10 fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float local_90;
  float local_8c;
  float local_88;
  float fStack_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined8 local_70;
  float local_68;
  float local_64;
  float local_60;
  float fStack_5c;
  float local_58;
  float local_54;
  float local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  undefined4 local_20;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float fStack_4;
  
  auVar8._0_4_ = param_3 * *(float *)(param_2 + 0x18);
  auVar8._4_4_ = param_3 * 0.0;
  auVar8._8_4_ = param_3 * (float)*(undefined8 *)(param_2 + 0x1c);
  auVar8._12_4_ = param_3 * (float)((ulonglong)*(undefined8 *)(param_2 + 0x1c) >> 0x20);
  local_70 = auVar8._8_8_;
  *(float *)(param_2 + 0xc) = auVar8._0_4_ + *(float *)(param_2 + 0xc);
  *(float *)(param_2 + 0x10) = auVar8._8_4_ + *(float *)(param_2 + 0x10);
  *(float *)(param_2 + 0x14) = auVar8._12_4_ + *(float *)(param_2 + 0x14);
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_40 = 0;
  local_44 = 0;
  local_48 = 0;
  local_2c = 0x3f800000;
  local_3c = 0x3f800000;
  local_4c = 0x3f800000;
  local_20 = *(undefined4 *)(param_2 + 0x14);
  fVar9 = *(float *)(param_2 + 0x10);
  local_28 = *(undefined4 *)(param_2 + 0xc);
  local_78 = auVar8._12_4_;
  local_74 = auVar8._0_4_;
  local_24 = fVar9;
  if ((*(byte *)(*(int *)(param_1 + 200) + 0x80) & 1) != 0) {
    local_80 = *(float *)(param_2 + 0x20);
    fVar9 = *(float *)(param_2 + 0x1c);
    fVar1 = *(float *)(param_2 + 0x18);
    auVar8 = rsqrtss(auVar8,fVar9 * fVar9 + fVar1 * fVar1 + local_80 * local_80);
    fVar7 = auVar8._0_4_;
    fVar9 = fVar7 * fVar9;
    local_80 = fVar7 * local_80;
    if (0.99 <= ABS(fVar9)) {
      local_74 = 0.0;
      local_70 = CONCAT44(fVar9,-local_80);
      fVar6 = (float10)FUN_00306c80(fVar9);
      FUN_0001fc70(&local_68,&local_74,(float)(fVar6 * (float10)57.295776));
      local_7c = 0.0;
      local_80 = 0.0;
      local_78 = 1.0;
      FUN_0001fc70(&local_90,&local_80,0xc2b3ffff);
      local_78 = local_64 * local_88 - local_8c * local_60;
      local_7c = local_8c * fStack_5c - local_64 * fStack_84;
      local_80 = local_60 * fStack_84 - local_88 * fStack_5c;
      local_58 = local_68 * local_8c;
      local_c = local_90 * local_64;
      local_8 = local_90 * local_60;
      fStack_4 = local_90 * fStack_5c;
      local_50 = local_68 * fStack_84 + fStack_4;
      local_54 = local_68 * local_88 + local_8;
      local_10 = local_78 + local_50;
      fVar9 = local_7c + local_54;
      *(float *)(param_2 + 0x58) =
           local_90 * local_68 - (local_88 * local_60 + local_8c * local_64 + fStack_84 * fStack_5c)
      ;
      *(float *)(param_2 + 0x5c) = local_58 + local_c + local_80;
      *(float *)(param_2 + 0x60) = fVar9;
      *(float *)(param_2 + 100) = local_10;
      *(undefined4 *)(param_2 + 0x68) = 0;
      local_18 = fVar9;
      local_14 = fVar9;
    }
    else {
      local_78 = -(fVar7 * fVar1);
      local_7c = 0.0;
      fVar6 = (float10)FUN_00306c80();
      FUN_0001fc70(&local_90,&local_80,(float)(fVar6 * (float10)57.295776));
      *(float *)(param_2 + 0x58) = local_90;
      *(float *)(param_2 + 0x5c) = local_8c;
      *(float *)(param_2 + 0x60) = local_88;
      *(float *)(param_2 + 100) = fStack_84;
      *(undefined4 *)(param_2 + 0x68) = 0;
      fVar9 = local_8c;
    }
    if ((*(byte *)(*(int *)(param_1 + 200) + 0x80) & 2) == 0) {
      iVar5 = param_2 + 0x58;
    }
    else {
      if (*(float *)(param_2 + 0x68) < 1.0) {
        fVar1 = *(float *)(param_2 + 0x20) * *(float *)(param_2 + 0x20) +
                *(float *)(param_2 + 0x1c) * *(float *)(param_2 + 0x1c) +
                *(float *)(param_2 + 0x18) * *(float *)(param_2 + 0x18);
        if (0.25 <= fVar1) {
          fVar1 = SQRT(fVar1) * param_3 + *(float *)(param_2 + 0x68);
        }
        else {
          *(undefined4 *)(param_2 + 0x5c) = 0;
          fVar9 = 0.0;
          *(undefined4 *)(param_2 + 0x58) = 0x3f800000;
          *(undefined4 *)(param_2 + 0x60) = 0;
          *(undefined4 *)(param_2 + 100) = 0;
          fVar1 = param_3 + *(float *)(param_2 + 0x68) + 0.01;
        }
        *(float *)(param_2 + 0x68) = fVar1;
        if (1.0 < *(float *)(param_2 + 0x68)) {
          *(undefined4 *)(param_2 + 0x68) = 0x3f800000;
        }
        puVar4 = (undefined4 *)FUN_0012b250(param_2 + 0x3c,*(undefined4 *)(param_2 + 0x68),fVar9);
        fVar9 = (float)puVar4[3];
        uVar2 = puVar4[2];
        uVar3 = puVar4[1];
        *(undefined4 *)(param_2 + 0x3c) = *puVar4;
        *(undefined4 *)(param_2 + 0x40) = uVar3;
        *(undefined4 *)(param_2 + 0x44) = uVar2;
        *(float *)(param_2 + 0x48) = fVar9;
      }
      iVar5 = param_2 + 0x3c;
    }
    FUN_002333b0(iVar5);
  }
  (**(code **)(**(int **)(param_2 + 0x6c) + 0xc))(*(int **)(param_2 + 0x6c),1,&local_4c,fVar9);
  return;
}
