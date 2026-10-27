/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5EDF9E9094205A6D79F450F94AF030BE53CF04A2A97DD2B9186B92996F35135A
 * Entry: 0x00234f90, Ghidra index: 7815, label: FUN_00234f90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_00234f90(uint *param_1,undefined4 *param_2)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_194;
  float local_190;
  float local_18c;
  float fStack_188;
  float local_184;
  undefined8 local_180;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  undefined8 local_144;
  undefined4 *local_13c;
  float guest_position_z_sum; /* reused guest stack DWORD after pointer lifetime */
  float local_138;
  float local_134;
  float local_130;
  float local_128;
  float local_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  
  uVar4 = *param_1;
  puVar12 = param_2 + 9;
  local_13c = puVar12;
  if (uVar4 < 0xe94eb66b) {
    if (uVar4 == 0xe94eb66a) {
      FUN_0001fc70(&local_194,param_1 + 0xb,(float)param_1[0x12] * 57.295776);
      pfVar1 = (float *)(param_1 + 8);
      local_158 = local_194 * (float)param_1[7] -
                  (local_190 * *pfVar1 +
                  fStack_188 * (float)param_1[10] + local_18c * (float)param_1[9]);
      local_130 = local_190 * (float)param_1[9] - local_18c * *pfVar1;
      local_134 = fStack_188 * *pfVar1 - local_190 * (float)param_1[10];
      local_138 = local_18c * (float)param_1[10] - fStack_188 * (float)param_1[9];
      local_184 = local_194 * *pfVar1;
      fVar15 = local_194 * (float)*(undefined8 *)(param_1 + 9);
      local_194 = local_194 * (float)((ulonglong)*(undefined8 *)(param_1 + 9) >> 0x20);
      local_180 = CONCAT44(local_194,fVar15);
      fVar14 = (float)param_1[7];
      local_148 = fVar14 * local_190;
      local_124 = fVar14 * fStack_188;
      local_144 = CONCAT44(local_124,fVar14 * local_18c);
      local_14c = local_130 + local_194 + local_124;
      local_150 = local_134 + fVar15 + fVar14 * local_18c;
      local_154 = local_184 + local_148 + local_138;
      local_128 = local_150;
      FUN_002333b0(&local_158);
      puVar13 = (undefined4 *)FUN_002334b0();
      local_6c = *puVar13;
      uStack_68 = puVar13[1];
      uStack_64 = puVar13[2];
      uStack_60 = puVar13[3];
      local_4c = puVar13[8];
      local_5c = puVar13[4];
      uStack_58 = puVar13[5];
      uStack_54 = puVar13[6];
      uStack_50 = puVar13[7];
      *param_2 = local_6c;
      param_2[1] = uStack_68;
      param_2[2] = uStack_64;
      param_2[3] = uStack_60;
      param_2[8] = local_4c;
      param_2[4] = local_5c;
      param_2[5] = uStack_58;
      param_2[6] = uStack_54;
      param_2[7] = uStack_50;
      FUN_00234d20(puVar12);
      return 1;
    }
    if (uVar4 == 0xfb850ce) {
      FUN_002333b0(param_1 + 7);
      puVar12 = (undefined4 *)FUN_002334b0();
      local_90 = *puVar12;
      uStack_8c = puVar12[1];
      uStack_88 = puVar12[2];
      uStack_84 = puVar12[3];
      local_70 = puVar12[8];
      local_80 = puVar12[4];
      uStack_7c = puVar12[5];
      uStack_78 = puVar12[6];
      uStack_74 = puVar12[7];
      *param_2 = local_90;
      param_2[1] = uStack_8c;
      param_2[2] = uStack_88;
      param_2[3] = uStack_84;
      param_2[8] = local_70;
      param_2[4] = local_80;
      param_2[5] = uStack_7c;
      param_2[6] = uStack_78;
      param_2[7] = uStack_74;
    }
    else if (uVar4 == 0x1b0dc6c7) {
      pfVar1 = (float *)(param_1 + 0x16);
      pfVar2 = (float *)(param_1 + 8);
      local_178 = (float)param_1[0x15] * (float)param_1[7] -
                  (*pfVar2 * *pfVar1 +
                  (float)param_1[0x17] * (float)param_1[9] +
                  (float)param_1[0x18] * (float)param_1[10]);
      local_130 = (float)param_1[0x15];
      local_184 = local_130 * *pfVar2;
      local_134 = local_130 * (float)*(undefined8 *)(param_1 + 9);
      local_130 = local_130 * (float)((ulonglong)*(undefined8 *)(param_1 + 9) >> 0x20);
      local_180 = CONCAT44(local_130,local_134);
      local_124 = (float)param_1[7];
      local_148 = local_124 * *pfVar1;
      fVar14 = local_124 * (float)*(undefined8 *)(param_1 + 0x17);
      local_124 = local_124 * (float)((ulonglong)*(undefined8 *)(param_1 + 0x17) >> 0x20);
      local_144 = CONCAT44(local_124,fVar14);
      local_130 = local_130 + local_124;
      local_134 = local_134 + fVar14;
      local_16c = (*pfVar1 * (float)param_1[9] - (float)param_1[0x17] * *pfVar2) + local_130;
      local_170 = ((float)param_1[0x18] * *pfVar2 - (float)param_1[10] * *pfVar1) + local_134;
      local_174 = local_184 + local_148 +
                  ((float)param_1[0x17] * (float)param_1[10] -
                  (float)param_1[0x18] * (float)param_1[9]);
      local_138 = local_184;
      local_128 = local_170;
      FUN_002333b0(&local_178);
      puVar12 = (undefined4 *)FUN_002334b0();
      local_b4 = *puVar12;
      uStack_b0 = puVar12[1];
      uStack_ac = puVar12[2];
      uStack_a8 = puVar12[3];
      local_94 = puVar12[8];
      local_a4 = puVar12[4];
      uStack_a0 = puVar12[5];
      uStack_9c = puVar12[6];
      uStack_98 = puVar12[7];
      *param_2 = local_b4;
      param_2[1] = uStack_b0;
      param_2[2] = uStack_ac;
      param_2[3] = uStack_a8;
      param_2[8] = local_94;
      param_2[4] = local_a4;
      param_2[5] = uStack_a0;
      param_2[6] = uStack_9c;
      param_2[7] = uStack_98;
    }
    else {
      if (uVar4 != 0xe3be168e) {
        return 0;
      }
      FUN_002333b0(param_1 + 7);
      local_13c = &local_fc;
      puVar12 = (undefined4 *)FUN_002334b0();
      uVar5 = puVar12[1];
      uVar6 = puVar12[2];
      uVar7 = puVar12[3];
      uVar3 = puVar12[8];
      uVar8 = puVar12[4];
      uVar9 = puVar12[5];
      uVar10 = puVar12[6];
      uVar11 = puVar12[7];
      *local_13c = *puVar12;
      local_13c[1] = uVar5;
      local_13c[2] = uVar6;
      local_13c[3] = uVar7;
      local_13c[8] = uVar3;
      local_13c[4] = uVar8;
      local_13c[5] = uVar9;
      local_13c[6] = uVar10;
      local_13c[7] = uVar11;
      *param_2 = local_fc;
      param_2[1] = uStack_f8;
      param_2[2] = uStack_f4;
      param_2[3] = uStack_f0;
      param_2[8] = local_dc;
      param_2[4] = local_ec;
      param_2[5] = uStack_e8;
      param_2[6] = uStack_e4;
      param_2[7] = uStack_e0;
      /* Original XBE 0x0023508C FLD m32fp [EAX+0x50],
       * 0x0023508F FADD m32fp [EAX+0x18], and 0x00235092
       * FSTP m32fp [ESP+0x84]. The decompiler reused local_13c
       * as a pointer although its prior pointer lifetime ended.
       * Read original F32 bits, not integer-to-float conversions. */
      guest_position_z_sum = *(float *)(param_1 + 0x14) + *(float *)(param_1 + 6);
    }
  }
  else {
    if (uVar4 != 0xf35d5b3c) {
      if (uVar4 != 0xfd8f670c) {
        return 0;
      }
      FUN_002333b0(param_1 + 7);
      puVar13 = (undefined4 *)FUN_002334b0();
      local_d8 = *puVar13;
      uStack_d4 = puVar13[1];
      uStack_d0 = puVar13[2];
      uStack_cc = puVar13[3];
      local_b8 = puVar13[8];
      local_c8 = puVar13[4];
      uStack_c4 = puVar13[5];
      uStack_c0 = puVar13[6];
      uStack_bc = puVar13[7];
      *param_2 = local_d8;
      param_2[1] = uStack_d4;
      param_2[2] = uStack_d0;
      param_2[3] = uStack_cc;
      param_2[8] = local_b8;
      param_2[4] = local_c8;
      param_2[5] = uStack_c4;
      param_2[6] = uStack_c0;
      param_2[7] = uStack_bc;
      fVar14 = (float)param_1[0x12];
      local_124 = fVar14 * (float)((ulonglong)*(undefined8 *)(param_1 + 0xc) >> 0x20);
      local_130 = local_124 + (float)param_1[3];
      local_134 = fVar14 * (float)*(undefined8 *)(param_1 + 0xc) + (float)param_1[2];
      local_138 = fVar14 * (float)param_1[0xb] + (float)param_1[1];
      FUN_00234d20(puVar12);
      return 1;
    }
    pfVar1 = (float *)(param_1 + 0x16);
    pfVar2 = (float *)(param_1 + 8);
    fVar14 = (float)param_1[0x15];
    local_168 = (float)param_1[0x15] * (float)param_1[7] -
                (*pfVar1 * *pfVar2 +
                (float)param_1[0x17] * (float)param_1[9] + (float)param_1[0x18] * (float)param_1[10]
                );
    local_130 = *pfVar1 * (float)param_1[9] - (float)param_1[0x17] * *pfVar2;
    local_134 = (float)param_1[0x18] * *pfVar2 - (float)param_1[10] * *pfVar1;
    local_138 = (float)param_1[0x17] * (float)param_1[10] - (float)param_1[0x18] * (float)param_1[9]
    ;
    local_184 = fVar14 * *pfVar2;
    fVar15 = fVar14 * (float)*(undefined8 *)(param_1 + 9);
    fVar14 = fVar14 * (float)((ulonglong)*(undefined8 *)(param_1 + 9) >> 0x20);
    local_180 = CONCAT44(fVar14,fVar15);
    local_124 = (float)param_1[7];
    local_148 = local_124 * *pfVar1;
    fVar16 = local_124 * (float)*(undefined8 *)(param_1 + 0x17);
    local_124 = local_124 * (float)((ulonglong)*(undefined8 *)(param_1 + 0x17) >> 0x20);
    local_144 = CONCAT44(local_124,fVar16);
    local_15c = local_130 + fVar14 + local_124;
    local_160 = local_134 + fVar15 + fVar16;
    local_164 = local_184 + local_148 + local_138;
    local_128 = local_160;
    FUN_002333b0(&local_168);
    puVar12 = (undefined4 *)FUN_002334b0();
    local_120 = *puVar12;
    uStack_11c = puVar12[1];
    uStack_118 = puVar12[2];
    uStack_114 = puVar12[3];
    local_100 = puVar12[8];
    local_110 = puVar12[4];
    uStack_10c = puVar12[5];
    uStack_108 = puVar12[6];
    uStack_104 = puVar12[7];
    *param_2 = local_120;
    param_2[1] = uStack_11c;
    param_2[2] = uStack_118;
    param_2[3] = uStack_114;
    param_2[8] = local_100;
    param_2[4] = local_110;
    param_2[5] = uStack_10c;
    param_2[6] = uStack_108;
    param_2[7] = uStack_104;
  }
  FUN_00234cd0();
  return 1;
}
