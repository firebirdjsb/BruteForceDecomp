/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D8E0A5D4EC6E24997188455936A2016F506EB24682D30374AC8D6BAE873192EA
 * Entry: 0x0028e5f0, Ghidra index: 9214, label: FUN_0028e5f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_0028e5f0(undefined4 param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float *in_EAX;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *unaff_EBX;
  float *unaff_EDI;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_114;
  float local_110;
  float local_10c;
  float fStack_108;
  float local_104;
  float local_100;
  float local_fc;
  float fStack_f8;
  float local_f4;
  /* Original x86 has two adjacent binary32 scratch lanes.
   * Ghidra collapsed both words into a 64-bit CONCAT44
   * pseudo-lvalue. Restore the low and high 32-bit values
   * separately without numeric float/pointer reinterpretation.
   * Original x87 and native guest ABI remain ABI_UNVERIFIED. */
  float guest_f32_pair_at_f0[2];
  _Static_assert(sizeof(guest_f32_pair_at_f0) == 8,
                 "original two adjacent binary32 scratch words");
  float fStack_ec;
  float local_e8;
  undefined8 local_e4;
  float local_dc;
  undefined8 local_d8;
  float local_d0;
  undefined8 local_cc;
  float local_c4;
  undefined8 local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  undefined8 local_84;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  FUN_0028f1f0(&local_114);
  FUN_0028f1f0(&local_104);
  pfVar3 = in_EAX + 1;
  local_a8 = local_114 * *in_EAX -
             (local_110 * *pfVar3 + local_10c * in_EAX[2] + fStack_108 * in_EAX[3]);
  local_e8 = local_114 * *pfVar3;
  fVar6 = local_114 * (float)*(undefined8 *)(in_EAX + 2);
  fVar8 = local_114 * (float)((ulonglong)*(undefined8 *)(in_EAX + 2) >> 0x20);
  local_e4 = CONCAT44(fVar8,fVar6);
  fVar2 = *in_EAX;
  local_dc = fVar2 * local_110;
  local_d8 = CONCAT44(fVar2 * fStack_108,fVar2 * local_10c);
  local_9c = (local_110 * in_EAX[2] - local_10c * *pfVar3) + fVar8 + fVar2 * fStack_108;
  pfVar1 = unaff_EDI + 1;
  local_a0 = (fStack_108 * *pfVar3 - local_110 * in_EAX[3]) + fVar6 + fVar2 * local_10c;
  local_a4 = local_e8 + local_dc + (local_10c * in_EAX[3] - fStack_108 * in_EAX[2]);
  local_98 = local_114 * *unaff_EDI -
             (local_110 * *pfVar1 + local_10c * unaff_EDI[2] + fStack_108 * unaff_EDI[3]);
  local_74 = local_110 * unaff_EDI[2] - local_10c * *pfVar1;
  local_78 = fStack_108 * *pfVar1 - local_110 * unaff_EDI[3];
  local_7c = local_10c * unaff_EDI[3] - fStack_108 * unaff_EDI[2];
  local_f4 = local_114 * *pfVar1;
  fVar6 = local_114 * (float)*(undefined8 *)(unaff_EDI + 2);
  local_114 = local_114 * (float)((ulonglong)*(undefined8 *)(unaff_EDI + 2) >> 0x20);
  local_84 = CONCAT44(local_114,fVar6);
  guest_f32_pair_at_f0[0] = fVar6;
  guest_f32_pair_at_f0[1] = local_114;
  fVar2 = *unaff_EDI;
  local_c4 = fVar2 * local_110;
  local_c0 = CONCAT44(fVar2 * fStack_108,fVar2 * local_10c);
  local_8c = local_74 + local_114 + fVar2 * fStack_108;
  local_90 = local_78 + fVar6 + fVar2 * local_10c;
  local_94 = local_f4 + local_c4 + local_7c;
  local_88 = local_f4;
  pfVar3 = (float *)FUN_0028f400(&local_a8,local_30);
  pfVar4 = (float *)FUN_0028f400(&local_98,local_50);
  local_b8 = (*pfVar4 + *pfVar3) * -0.25;
  local_b4 = (pfVar4[1] + pfVar3[1]) * -0.25;
  local_b0 = (pfVar4[2] + pfVar3[2]) * -0.25;
  local_ac = (pfVar4[3] + pfVar3[3]) * -0.25;
  local_20 = -0.25;
  fStack_1c = -0.25;
  fStack_18 = -0.25;
  fStack_14 = -0.25;
  pfVar5 = (float *)FUN_0028f2d0(&local_b8,local_40);
  pfVar3 = unaff_EBX + 1;
  pfVar4 = pfVar5 + 1;
  local_60 = *pfVar5 * *unaff_EBX -
             (*pfVar3 * *pfVar4 + unaff_EBX[2] * pfVar5[2] + unaff_EBX[3] * pfVar5[3]);
  fVar2 = *unaff_EBX;
  local_f4 = fVar2 * *pfVar4;
  local_78 = fVar2 * (float)*(undefined8 *)(pfVar5 + 2);
  fVar6 = *pfVar5;
  fVar8 = fVar6 * (float)((ulonglong)*(undefined8 *)(unaff_EBX + 2) >> 0x20);
  guest_f32_pair_at_f0[0] = local_78;
  guest_f32_pair_at_f0[1] = fVar8;
  local_54 = (*pfVar3 * pfVar5[2] - *pfVar4 * unaff_EBX[2]) +
             fVar2 * (float)((ulonglong)*(undefined8 *)(pfVar5 + 2) >> 0x20) + fVar8;
  local_58 = (*pfVar4 * unaff_EBX[3] - *pfVar3 * pfVar5[3]) +
             local_78 + fVar6 * (float)*(undefined8 *)(unaff_EBX + 2);
  local_5c = local_f4 + fVar6 * *pfVar3 + (unaff_EBX[2] * pfVar5[3] - pfVar5[2] * unaff_EBX[3]);
  local_b8 = local_104 * *unaff_EBX -
             (local_100 * *pfVar3 + fStack_f8 * unaff_EBX[3] + local_fc * unaff_EBX[2]);
  local_e8 = local_104 * *pfVar3;
  fVar6 = local_104 * (float)*(undefined8 *)(unaff_EBX + 2);
  fVar8 = local_104 * (float)((ulonglong)*(undefined8 *)(unaff_EBX + 2) >> 0x20);
  local_e4 = CONCAT44(fVar8,fVar6);
  fVar2 = *unaff_EBX;
  local_dc = fVar2 * local_100;
  local_d8 = CONCAT44(fVar2 * fStack_f8,fVar2 * local_fc);
  local_ac = (local_100 * unaff_EBX[2] - local_fc * *pfVar3) + fVar8 + fVar2 * fStack_f8;
  local_b0 = (fStack_f8 * *pfVar3 - local_100 * unaff_EBX[3]) + fVar6 + fVar2 * local_fc;
  local_b4 = local_e8 + local_dc + (local_fc * unaff_EBX[3] - fStack_f8 * unaff_EBX[2]);
  pfVar3 = param_2 + 1;
  local_98 = local_104 * *param_2 -
             (local_100 * *pfVar3 + fStack_f8 * param_2[3] + local_fc * param_2[2]);
  local_8c = local_100 * param_2[2] - local_fc * *pfVar3;
  local_90 = fStack_f8 * *pfVar3 - local_100 * param_2[3];
  local_cc = CONCAT44(local_8c,local_90);
  local_d0 = local_fc * param_2[3] - fStack_f8 * param_2[2];
  local_88 = local_104 * *pfVar3;
  fVar6 = local_104 * (float)*(undefined8 *)(param_2 + 2);
  local_104 = local_104 * (float)((ulonglong)*(undefined8 *)(param_2 + 2) >> 0x20);
  local_84 = CONCAT44(local_104,fVar6);
  fVar2 = *param_2;
  local_c4 = fVar2 * local_100;
  local_74 = fVar2 * fStack_f8;
  local_c0 = CONCAT44(local_74,fVar2 * local_fc);
  local_8c = local_8c + local_104 + local_74;
  local_90 = local_90 + fVar6 + fVar2 * local_fc;
  local_94 = local_88 + local_c4 + local_d0;
  local_7c = local_f4;
  pfVar3 = (float *)FUN_0028f400(&local_b8,local_40);
  pfVar4 = (float *)FUN_0028f400(&local_98,local_50);
  local_a8 = (*pfVar4 + *pfVar3) * local_20;
  local_a4 = (pfVar4[1] + pfVar3[1]) * fStack_1c;
  local_a0 = (pfVar4[2] + pfVar3[2]) * fStack_18;
  local_9c = (pfVar4[3] + pfVar3[3]) * fStack_14;
  pfVar4 = (float *)FUN_0028f2d0(&local_a8,local_30);
  pfVar3 = pfVar4 + 1;
  local_70 = *pfVar4 * *unaff_EDI -
             (*pfVar1 * *pfVar3 + unaff_EDI[2] * pfVar4[2] + unaff_EDI[3] * pfVar4[3]);
  local_74 = *pfVar1 * pfVar4[2] - unaff_EDI[2] * *pfVar3;
  local_78 = unaff_EDI[3] * *pfVar3 - pfVar4[3] * *pfVar1;
  fVar2 = *unaff_EDI;
  local_7c = unaff_EDI[2] * pfVar4[3] - unaff_EDI[3] * pfVar4[2];
  local_f4 = fVar2 * *pfVar3;
  fVar8 = fVar2 * (float)*(undefined8 *)(pfVar4 + 2);
  fVar6 = *pfVar4;
  local_d0 = fVar6 * *pfVar1;
  fVar7 = fVar6 * (float)*(undefined8 *)(unaff_EDI + 2);
  fVar6 = fVar6 * (float)((ulonglong)*(undefined8 *)(unaff_EDI + 2) >> 0x20);
  local_cc = CONCAT44(fVar6,fVar7);
  guest_f32_pair_at_f0[0] = fVar8;
  guest_f32_pair_at_f0[1] = fVar6;
  local_64 = local_74 + fVar2 * (float)((ulonglong)*(undefined8 *)(pfVar4 + 2) >> 0x20) + fVar6;
  local_68 = local_78 + fVar8 + fVar7;
  local_6c = local_f4 + local_d0 + local_7c;
  FUN_0028f520();
  return param_1;
}
