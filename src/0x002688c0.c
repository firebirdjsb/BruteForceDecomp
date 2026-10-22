/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 972D196FF744ED83023AA30B499DF9D110D91A4FED8584B0F8D3B9860C4BFA15
 * Entry: 0x002688c0, Ghidra index: 8744, label: FUN_002688c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002688c0(int param_1)

{
  float *pfVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  float10 fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_274;
  float local_270;
  float local_26c;
  undefined4 *local_268;
  float local_264;
  float local_260;
  float local_25c;
  float local_258;
  float fStack_254;
  undefined4 local_250;
  float local_24c;
  float local_248;
  float fStack_244;
  float local_240;
  float local_23c;
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  float fStack_228;
  float local_224;
  float local_220;
  float local_21c;
  float fStack_218;
  float local_214;
  float local_210;
  float local_20c;
  float fStack_208;
  float local_204;
  undefined8 local_200;
  float local_1f8;
  undefined8 local_1f4;
  float local_1ec;
  undefined8 local_1e8;
  float local_1e0;
  undefined8 local_1dc;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float fStack_1c0;
  undefined4 local_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 local_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 local_19c;
  float local_198;
  float local_194;
  float local_190;
  undefined4 local_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 local_17c;
  undefined4 uStack_178;
  undefined4 auStack_174 [4];
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  float local_144 [4];
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined1 local_60 [48];
  undefined1 local_30 [48];
  
  iVar10 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    iVar11 = 0;
    pfVar12 = local_144;
    do {
      FUN_00234f00();
      FUN_0003d730(pfVar12,*(int *)(*(int *)(param_1 + 0x24) + iVar11) + 0x14);
      iVar10 = iVar10 + 1;
      iVar11 = iVar11 + 0x3c;
      pfVar12 = pfVar12 + 0xc;
    } while (iVar10 < *(int *)(param_1 + 0x28));
  }
  iVar10 = *(int *)(param_1 + 0x28) + -1;
  if ((*(byte *)(param_1 + 0x18) & 0x40) == 0) {
    pfVar12 = *(float **)(param_1 + 8);
    local_190 = pfVar12[2];
    local_194 = pfVar12[1];
    local_198 = *pfVar12;
    puVar9 = *(undefined4 **)(param_1 + 0xc);
    local_268 = &local_1bc;
    local_1bc = *puVar9;
    uStack_1b8 = puVar9[1];
    uStack_1b4 = puVar9[2];
    uStack_1b0 = puVar9[3];
    local_19c = puVar9[8];
    local_1ac = puVar9[4];
    uStack_1a8 = puVar9[5];
    uStack_1a4 = puVar9[6];
    uStack_1a0 = puVar9[7];
  }
  else {
    iVar11 = FUN_002338c0(local_60,*(int *)(param_1 + 0x10) + 0x14,*(undefined4 *)(param_1 + 0x14));
    FUN_0003d6c0(local_30,iVar11,iVar11 + 0x24);
    FUN_0003d730(&local_1bc,local_30);
  }
  if (1.1920929e-07 <
      SQRT((local_c0 - local_198) * (local_c0 - local_198) +
           (local_bc - local_194) * (local_bc - local_194) +
           (local_b8 - local_190) * (local_b8 - local_190))) {
    piVar2 = *(int **)(param_1 + 0x24);
    iVar11 = piVar2[0xf];
    iVar3 = *piVar2;
    fVar16 = *(float *)(iVar11 + 0x38) - *(float *)(iVar3 + 0x38);
    fVar6 = *(float *)(iVar11 + 0x3c) - *(float *)(iVar3 + 0x3c);
    iVar4 = piVar2[0x1e];
    fVar5 = *(float *)(iVar11 + 0x40) - *(float *)(iVar3 + 0x40);
    fVar15 = *(float *)(iVar4 + 0x38) - *(float *)(iVar11 + 0x38);
    fVar14 = *(float *)(iVar4 + 0x3c) - *(float *)(iVar11 + 0x3c);
    fVar17 = *(float *)(iVar4 + 0x40) - *(float *)(iVar11 + 0x40);
    local_274 = local_198 - *(float *)(iVar3 + 0x38);
    local_270 = local_194 - *(float *)(iVar3 + 0x3c);
    local_26c = local_190 - *(float *)(iVar3 + 0x40);
    local_260 = SQRT(local_274 * local_274 + local_270 * local_270 + local_26c * local_26c);
    fVar16 = SQRT(fVar15 * fVar15 + fVar14 * fVar14 + fVar17 * fVar17) +
             SQRT(fVar16 * fVar16 + fVar6 * fVar6 + fVar5 * fVar5);
    if (fVar16 < local_260 == (fVar16 == local_260)) {
      local_268 = (undefined4 *)0x3f800000;
      local_264 = -1.0;
      fVar13 = (float10)FUN_00306c80();
      fVar13 = (float10)3.14159 - fVar13;
    }
    else {
      fVar13 = (float10)0.17453279;
    }
    local_23c = 1.0;
    local_240 = 0.0;
    local_238 = 0.0;
    FUN_0001fc70(&local_250,&local_240,(float)(fVar13 * (float10)-57.295776));
    iVar11 = *(int *)(param_1 + 0x24);
    local_264 = fStack_244;
    *(undefined4 *)(iVar11 + 0x40) = local_250;
    *(float *)(iVar11 + 0x44) = local_24c;
    *(float *)(iVar11 + 0x48) = local_248;
    *(float *)(iVar11 + 0x4c) = fStack_244;
    FUN_002684c0(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x78),*(int *)(param_1 + 0x24),local_144
                );
    fVar16 = local_b8 - local_190;
    local_258 = local_bc - local_194;
    _local_258 = CONCAT44(fVar16,local_258);
    if (1.1920929e-07 <
        SQRT(local_258 * local_258 +
             fVar16 * fVar16 + (local_c0 - local_198) * (local_c0 - local_198))) {
      local_25c = local_c0 - *(float *)(iVar3 + 0x38);
      fVar5 = local_bc - *(float *)(iVar3 + 0x3c);
      fStack_254 = local_b8 - *(float *)(iVar3 + 0x40);
      fVar16 = 1.0 / SQRT(local_25c * local_25c + fVar5 * fVar5 + fStack_254 * fStack_254);
      local_25c = fVar16 * local_25c;
      fVar15 = 1.0 / local_260;
      fVar14 = local_25c * fVar15 * local_270 - fVar16 * fVar5 * local_274 * fVar15;
      fVar17 = fVar16 * fStack_254 * local_274 * fVar15 - local_25c * fVar15 * local_26c;
      fVar16 = fVar16 * fVar5 * fVar15 * local_26c - fVar16 * fStack_254 * fVar15 * local_270;
      local_274 = local_144[3] * fVar17 + local_12c * fVar14 + local_144[0] * fVar16;
      local_270 = local_134 * fVar17 + local_128 * fVar14 + local_144[1] * fVar16;
      local_26c = local_130 * fVar17 + local_124 * fVar14 + local_144[2] * fVar16;
      local_264 = SQRT(fVar17 * fVar17 + fVar14 * fVar14 + fVar16 * fVar16);
      local_268 = (undefined4 *)local_264;
      if (local_264 <= -1.0) {
        local_268 = (undefined4 *)-1.0;
      }
      if (1.0 <= (float)local_268) {
        local_268 = (undefined4 *)1.0;
      }
      iVar11 = *(int *)(**(int **)(param_1 + 0x24) + 0x10);
      fVar13 = (float10)FUN_00306b90();
      FUN_0001fc70(&local_224,&local_274,(float)(fVar13 * (float10)57.295776));
      fStack_228 = -*(float *)(iVar11 + 0x28);
      local_234 = *(float *)(iVar11 + 0x1c);
      local_22c = -*(float *)(iVar11 + 0x24);
      local_230 = -*(float *)(iVar11 + 0x20);
      iVar3 = *(int *)(param_1 + 0x24);
      pfVar12 = (float *)(iVar3 + 8);
      pfVar1 = (float *)(iVar11 + 0x20);
      local_214 = *(float *)(iVar11 + 0x1c) * *(float *)(iVar3 + 4) -
                  (*pfVar12 * *pfVar1 +
                  *(float *)(iVar3 + 0xc) * *(float *)(iVar11 + 0x24) +
                  *(float *)(iVar3 + 0x10) * *(float *)(iVar11 + 0x28));
      fVar16 = *(float *)(iVar3 + 4);
      local_204 = fVar16 * *pfVar1;
      fVar14 = fVar16 * (float)*(undefined8 *)(iVar11 + 0x24);
      fVar16 = fVar16 * (float)((ulonglong)*(undefined8 *)(iVar11 + 0x24) >> 0x20);
      local_200 = CONCAT44(fVar16,fVar14);
      fVar17 = *(float *)(iVar11 + 0x1c);
      local_1ec = fVar17 * *pfVar12;
      fVar15 = fVar17 * (float)*(undefined8 *)(iVar3 + 0xc);
      fVar17 = fVar17 * (float)((ulonglong)*(undefined8 *)(iVar3 + 0xc) >> 0x20);
      local_1e8 = CONCAT44(fVar17,fVar15);
      fStack_208 = (*pfVar12 * *(float *)(iVar11 + 0x24) - *(float *)(iVar3 + 0xc) * *pfVar1) +
                   fVar16 + fVar17;
      local_20c = (*(float *)(iVar3 + 0x10) * *pfVar1 - *(float *)(iVar11 + 0x28) * *pfVar12) +
                  fVar14 + fVar15;
      local_210 = local_204 + local_1ec +
                  (*(float *)(iVar3 + 0xc) * *(float *)(iVar11 + 0x28) -
                  *(float *)(iVar3 + 0x10) * *(float *)(iVar11 + 0x24));
      local_260 = local_224 * local_214 -
                  (fStack_218 * fStack_208 + local_21c * local_20c + local_220 * local_210);
      local_1e0 = local_214 * local_220;
      local_1dc = CONCAT44(local_214 * fStack_218,local_214 * local_21c);
      local_1f8 = local_224 * local_210;
      local_1f4 = CONCAT44(local_224 * fStack_208,local_224 * local_20c);
      fVar17 = (local_21c * local_210 - local_20c * local_220) +
               local_214 * fStack_218 + local_224 * fStack_208;
      fVar14 = (fStack_208 * local_220 - fStack_218 * local_210) +
               local_214 * local_21c + local_224 * local_20c;
      fVar16 = local_1e0 + local_1f8 + (local_20c * fStack_218 - local_21c * fStack_208);
      local_238 = fVar16 * local_22c - local_230 * fVar14;
      local_240 = fVar14 * fStack_228 - local_22c * fVar17;
      local_25c = local_260 * local_230;
      local_1d0 = local_260 * local_22c;
      local_1cc = local_260 * fStack_228;
      local_1c8 = local_234 * fVar16;
      _local_258 = CONCAT44(local_234 * fVar17,local_1d0);
      fVar15 = local_1cc + local_234 * fVar17;
      local_23c = local_1d0 + local_234 * fVar14;
      _local_1c4 = CONCAT44(fVar15,local_23c);
      local_268 = (undefined4 *)(local_238 + fVar15);
      local_23c = (local_230 * fVar17 - fVar16 * fStack_228) + local_23c;
      iVar11 = *(int *)(param_1 + 0x24);
      *(float *)(iVar11 + 4) =
           local_234 * local_260 - (fStack_228 * fVar17 + local_22c * fVar14 + local_230 * fVar16);
      *(float *)(iVar11 + 8) = local_25c + local_1c8 + local_240;
      *(float *)(iVar11 + 0xc) = local_23c;
      *(undefined4 **)(iVar11 + 0x10) = local_268;
      local_1d4 = local_25c;
    }
    iVar11 = *(int *)(*(int *)(*(int *)(param_1 + 0x24) + iVar10 * 0x3c) + 0x10);
    local_250 = *(undefined4 *)(iVar11 + 0x1c);
    local_264 = -*(float *)(iVar11 + 0x28);
    local_248 = -*(float *)(iVar11 + 0x24);
    local_24c = -*(float *)(iVar11 + 0x20);
    fStack_244 = local_264;
    FUN_002333b0(&local_250);
    local_164 = auStack_174[iVar10 * 0xc + 3];
    local_160 = auStack_174[iVar10 * 0xc + 6];
    auStack_174[3] = auStack_174[iVar10 * 0xc];
    local_15c = auStack_174[iVar10 * 0xc + 1];
    local_158 = auStack_174[iVar10 * 0xc + 4];
    local_154 = auStack_174[iVar10 * 0xc + 7];
    local_150 = auStack_174[iVar10 * 0xc + 2];
    local_14c = auStack_174[iVar10 * 0xc + 5];
    local_148 = auStack_174[iVar10 * 0xc + 8];
    puVar9 = (undefined4 *)FUN_002334b0();
    local_84 = *puVar9;
    uStack_80 = puVar9[1];
    uStack_7c = puVar9[2];
    uStack_78 = puVar9[3];
    local_64 = puVar9[8];
    local_74 = puVar9[4];
    uStack_70 = puVar9[5];
    uStack_6c = puVar9[6];
    uStack_68 = puVar9[7];
    puVar9 = (undefined4 *)FUN_002334b0();
    local_18c = *puVar9;
    uStack_188 = puVar9[1];
    uStack_184 = puVar9[2];
    uStack_180 = puVar9[3];
    auStack_174[2] = puVar9[8];
    local_17c = puVar9[4];
    uStack_178 = puVar9[5];
    auStack_174[0] = puVar9[6];
    auStack_174[1] = puVar9[7];
    FUN_002339d0(*(int *)(param_1 + 0x24) + 4 + iVar10 * 0x3c);
    pfVar12 = *(float **)(param_1 + 0xc);
    fVar17 = pfVar12[1];
    fVar14 = pfVar12[2];
    fVar15 = pfVar12[3];
    fVar16 = pfVar12[8];
    fVar5 = pfVar12[4];
    fVar6 = pfVar12[5];
    fVar7 = pfVar12[6];
    fVar8 = pfVar12[7];
    local_144[iVar10 * 0xc] = *pfVar12;
    local_144[iVar10 * 0xc + 1] = fVar17;
    local_144[iVar10 * 0xc + 2] = fVar14;
    local_144[iVar10 * 0xc + 3] = fVar15;
    local_144[iVar10 * 0xc + 8] = fVar16;
    local_144[iVar10 * 0xc + 4] = fVar5;
    local_144[iVar10 * 0xc + 5] = fVar6;
    local_144[iVar10 * 0xc + 6] = fVar7;
    local_144[iVar10 * 0xc + 7] = fVar8;
  }
  return;
}
