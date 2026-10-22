/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EF8B46543209C70258EB15AF0310B5553B5E3E272CA572517BEB1B320D2AB71E
 * Entry: 0x00216560, Ghidra index: 7460, label: FUN_00216560
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00216560(undefined4 param_1,int param_2,float *param_3,float param_4,float param_5,
                 float param_6,float *param_7,float *param_8,float *param_9,float *param_10,
                 float *param_11,float *param_12,float *param_13,float *param_14,int param_15,
                 float param_16)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  undefined1 in_XMM0 [16];
  undefined1 auVar9 [16];
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  undefined1 local_4;
  undefined1 local_3;
  undefined2 local_2;
  
  if (0.258819 <= *param_13 * *param_9 + param_9[1] * param_13[1] + param_9[2] * param_13[2]) {
    param_4 = param_4 + param_4;
    if (param_15 == 7) {
      fVar2 = *param_11 - *param_10;
      fVar3 = param_11[1] - param_10[1];
      fVar4 = param_11[2] - param_10[2];
      auVar9 = rsqrtss(in_XMM0,fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4);
      fVar5 = auVar9._0_4_ * param_4;
      fVar2 = fVar2 * fVar5;
      fVar3 = fVar3 * fVar5;
      fVar5 = fVar5 * fVar4;
      fVar4 = fVar3 * *param_13 - fVar2 * param_13[1];
      fVar6 = fVar2 * param_13[2] - fVar5 * *param_13;
      fVar7 = fVar5 * param_13[1] - fVar3 * param_13[2];
      auVar9 = rsqrtss(auVar9,fVar7 * fVar7 + fVar6 * fVar6 + fVar4 * fVar4);
      param_4 = auVar9._0_4_ * param_4;
      local_2c = fVar7 * param_4 * 0.5;
      local_38 = (*param_14 - fVar2 * 0.8660254) - local_2c;
      local_28 = param_4 * fVar6 * 0.5;
      local_34 = (param_14[1] - fVar3 * 0.8660254) - local_28;
      local_24 = param_4 * fVar4 * 0.5;
      local_30 = (param_14[2] - fVar5 * 0.8660254) - local_24;
      local_2c = (fVar2 * 0.8660254 + *param_14) - local_2c;
      local_28 = (fVar3 * 0.8660254 + param_14[1]) - local_28;
      local_24 = (fVar5 * 0.8660254 + param_14[2]) - local_24;
      local_20 = fVar7 * param_4 + *param_14;
      local_1c = param_4 * fVar6 + param_14[1];
      local_18 = param_4 * fVar4 + param_14[2];
    }
    else if (param_15 == 1) {
      FUN_00216050(param_10,param_13,param_4,&local_20,&local_38);
    }
    else if (param_15 == 3) {
      FUN_00216050(param_11,param_13,param_4,&local_38,&local_2c);
    }
    else if (param_15 == 5) {
      FUN_00216050(param_12,param_13,param_4,&local_2c,&local_20);
    }
    else {
      local_30 = param_10[2];
      local_34 = param_10[1];
      local_38 = *param_10;
      local_24 = param_11[2];
      local_28 = param_11[1];
      local_2c = *param_11;
      local_18 = param_12[2];
      local_1c = param_12[1];
      local_20 = *param_12;
    }
    fVar2 = ((local_38 - *param_3) * *param_7 +
            (local_34 - param_3[1]) * param_7[1] + (local_30 - param_3[2]) * param_7[2]) * param_5 +
            0.5;
    local_13 = (undefined1)((uint)fVar2 >> 0x10);
    local_14 = (undefined1)((uint)fVar2 >> 8);
    local_12 = (undefined1)((uint)fVar2 >> 0x18);
    fVar2 = ((local_38 - *param_3) * *param_8 +
            (local_34 - param_3[1]) * param_8[1] + (local_30 - param_3[2]) * param_8[2]) * param_6 +
            0.5;
    local_11 = (undefined1)((uint)fVar2 >> 8);
    local_10 = (undefined1)((uint)fVar2 >> 0x10);
    local_f = (undefined1)((uint)fVar2 >> 0x18);
    fVar2 = ((local_2c - *param_3) * *param_7 +
            (local_28 - param_3[1]) * param_7[1] + (local_24 - param_3[2]) * param_7[2]) * param_5 +
            0.5;
    local_e = (undefined1)((uint)fVar2 >> 8);
    local_d = (undefined1)((uint)fVar2 >> 0x10);
    local_c = (undefined1)((uint)fVar2 >> 0x18);
    local_2 = 0x7fff;
    fVar2 = ((local_2c - *param_3) * *param_8 +
            (local_28 - param_3[1]) * param_8[1] + (local_24 - param_3[2]) * param_8[2]) * param_6 +
            0.5;
    local_b = (undefined1)((uint)fVar2 >> 8);
    local_a = (undefined1)((uint)fVar2 >> 0x10);
    local_9 = (undefined1)((uint)fVar2 >> 0x18);
    fVar2 = ((local_20 - *param_3) * *param_7 +
            (local_1c - param_3[1]) * param_7[1] + (local_18 - param_3[2]) * param_7[2]) * param_5 +
            0.5;
    local_8 = (undefined1)((uint)fVar2 >> 8);
    local_7 = (undefined1)((uint)fVar2 >> 0x10);
    local_6 = (undefined1)((uint)fVar2 >> 0x18);
    fVar2 = ((local_20 - *param_3) * *param_8 +
            (local_1c - param_3[1]) * param_8[1] + (local_18 - param_3[2]) * param_8[2]) * param_6 +
            0.5;
    local_4 = (undefined1)((uint)fVar2 >> 0x10);
    local_5 = (undefined1)((uint)fVar2 >> 8);
    local_3 = (undefined1)((uint)fVar2 >> 0x18);
    if (0.0 < param_16) {
      fVar2 = param_16 * *param_9;
      fVar3 = param_16 * param_9[1];
      param_16 = param_16 * param_9[2];
      local_38 = fVar2 + local_38;
      local_34 = local_34 + fVar3;
      local_30 = param_16 + local_30;
      local_2c = fVar2 + local_2c;
      local_28 = local_28 + fVar3;
      local_24 = param_16 + local_24;
      local_20 = fVar2 + local_20;
      local_1c = fVar3 + local_1c;
      local_18 = param_16 + local_18;
    }
    iVar1 = *(int *)(param_2 + 4);
    iVar8 = FUN_00218660(param_2,iVar1,*(undefined4 *)(iVar1 + 4),&local_38);
    FUN_002186f0();
    *(int *)(iVar1 + 4) = iVar8;
    **(int **)(iVar8 + 4) = iVar8;
  }
  return;
}
