/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4424D7F60853F672CE5DD12B642D4045B857A15A50DC3FD66206B55D1336247A
 * Entry: 0x00227f80, Ghidra index: 7658, label: FUN_00227f80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046cfd8;
extern uint32_t DAT_0046d064;
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_00227f80(int *param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  char cVar11;
  int iVar12;
  float *pfVar13;
  int *piVar14;
  byte bVar15;
  float *pfStack_208;
  float fStack_204;
  float fStack_200;
  undefined4 *puStack_1fc;
  float local_1f8;
  undefined4 *local_1f4;
  undefined4 uStack_1f0;
  float fStack_1ec;
  undefined4 *puStack_1e8;
  float fStack_1e4;
  int iStack_1e0;
  int iStack_1dc;
  float local_1d8;
  float fStack_1d4;
  undefined4 *puStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  int iStack_1c4;
  int iStack_1c0;
  float afStack_1bc [2];
  float fStack_1b4;
  undefined4 uStack_1b0;
  float fStack_1a8;
  undefined4 uStack_1a4;
  float fStack_19c;
  float fStack_198;
  undefined4 uStack_194;
  float fStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  float fStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  float fStack_178;
  float fStack_174;
  undefined4 *puStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  undefined4 uStack_160;
  float fStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  float fStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  float fStack_144;
  float fStack_140;
  float *pfStack_13c;
  float fStack_138;
  undefined1 auStack_134 [36];
  undefined1 auStack_110 [4];
  int iStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  int iStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  undefined8 uStack_e4;
  undefined4 *puStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined4 uStack_d0;
  float fStack_cc;
  undefined8 uStack_c8;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  undefined4 *puStack_b4;
  int iStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  int iStack_a0;
  float fStack_9c;
  float *pfStack_98;
  undefined4 *puStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  float fStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  float fStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  float fStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float fStack_50;
  undefined4 uStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  local_1f8 = (float)param_1[0x7f];
  if (5 < (int)local_1f8) {
    local_1f8 = 8.40779e-45;
  }
  DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
  local_1f4 = (undefined4 *)(DAT_0046cfd8 >> 9 | 0x3f800000);
  uStack_1f0 = (float)((uint)uStack_1f0 & 0xffffff);
  local_168 = (1.0 / (float)(int)local_1f8) * 360.0;
  local_1d8 = ((float)local_1f4 - 1.0) * 360.0;
  iVar12 = (**(code **)(*param_1 + 0x40))();
  local_1f8 = *(float *)(iVar12 + 0x2c);
  local_1f4 = *(undefined4 **)(iVar12 + 0x28);
  fStack_174 = *(float *)(iVar12 + 0x24);
  puStack_170 = local_1f4;
  fStack_16c = local_1f8;
  pfVar13 = (float *)(**(code **)(*param_1 + 0x54))();
  puStack_1e8 = (undefined4 *)pfVar13[1];
  local_1f8 = pfVar13[2];
  fStack_1ec = *pfVar13;
  fStack_1e4 = local_1f8;
  if ((float)puStack_1e8 * (float)puStack_1e8 + local_1f8 * local_1f8 + fStack_1ec * fStack_1ec <=
      0.0) {
    local_1f4 = &fStack_198;
    pfVar13 = (float *)(**(code **)(*param_1 + 0x40))();
    fVar4 = pfVar13[1];
    fVar5 = pfVar13[2];
    fVar6 = pfVar13[3];
    fVar1 = pfVar13[8];
    fVar7 = pfVar13[4];
    fVar8 = pfVar13[5];
    fVar9 = pfVar13[6];
    fVar10 = pfVar13[7];
    *local_1f4 = *pfVar13;
    local_1f4[1] = fVar4;
    local_1f4[2] = fVar5;
    local_1f4[3] = fVar6;
    local_1f4[8] = fVar1;
    local_1f4[4] = fVar7;
    local_1f4[5] = fVar8;
    local_1f4[6] = fVar9;
    local_1f4[7] = fVar10;
  }
  else {
    local_1f4 = puStack_1e8;
    FUN_0001d0c0();
    fStack_198 = uStack_90;
    uStack_194 = uStack_8c;
    fStack_190 = fStack_88;
    uStack_18c = uStack_84;
    fStack_178 = fStack_70;
    uStack_188 = uStack_80;
    fStack_184 = fStack_7c;
    uStack_180 = uStack_78;
    uStack_17c = uStack_74;
  }
  local_1f8 = -fStack_178;
  local_1f4 = (undefined4 *)-fStack_184;
  fStack_1d4 = -fStack_190;
  iStack_10c = 0;
  uStack_108 = 0;
  uStack_104 = 0;
  iStack_1e0 = 0;
  puStack_1d0 = local_1f4;
  fStack_1cc = local_1f8;
  if ((*(byte *)(param_1 + 0x88) & 0x40) == 0) {
    if (((*(byte *)(param_1 + 0x88) & 8) != 0) && (iVar12 = param_1[0x7b], iVar12 != 0)) {
      iStack_1c4 = 0;
      if (iVar12 != 0) {
        FUN_0008f6a0(iVar12);
      }
      FUN_0004ad70(&fStack_1c8);
      if (iStack_1c4 != 0) {
        FUN_0008f6e0();
      }
      iStack_1e0 = 1;
    }
  }
  else {
    iVar12 = param_1[2];
    iVar2 = param_1[0x8d];
    (**(code **)(*param_1 + 0x40))();
    iStack_1e0 = FUN_002237c0(auStack_110,&fStack_1d4,*(undefined4 *)(iVar2 + 0x214),0x41f00000,
                              param_1[0x7f],param_1[0x87],iVar12,0,1);
  }
  local_1f8 = (float)param_1[0x7f];
  iStack_1dc = 0;
  if ((*(byte *)((int)param_1 + 0x221) & 2) != 0) {
    local_1f8 = 1.4013e-45;
  }
  iStack_1c0 = 0;
  if (0 < (int)local_1f8) {
    do {
      iVar12 = param_1[2];
      piVar14 = (int *)FUN_00160da0(0xffffffff,1);
      if ((piVar14 != (int *)0x0) &&
         (piVar14 = (int *)(**(code **)(*piVar14 + 8))(iVar12), piVar14 != (int *)0x0)) {
        FUN_000da880(iVar12,piVar14,1);
        FUN_000da8f0(iVar12);
        if (piVar14 != (int *)0x0) {
          uStack_1f0 = (float)CONCAT13(1,(undefined3)uStack_1f0);
          FUN_00227dd0();
          iVar12 = DAT_0046d064;
          piVar14[0x81] = 0;
          piVar14[0x80] = iVar12;
          *(byte *)((int)piVar14 + 0x221) = *(byte *)((int)piVar14 + 0x221) & 0xfd;
          bVar15 = *(byte *)(piVar14 + 0x88) & 0x7f;
          *(byte *)(piVar14 + 0x88) = bVar15;
          piVar14[0x7f] = 0;
          piVar14[0x84] = 0;
          piVar14[0x83] = 0;
          iVar12 = param_1[0x82];
          *(byte *)(piVar14 + 0x88) =
               ((*(byte *)(param_1 + 0x88) >> 2 & 1) << 2 ^ bVar15) & 4 ^ bVar15;
          piVar14[0x82] = iVar12;
          if (piVar14[0x6d] != param_1[0x6d]) {
            FUN_0008f6a0(param_1[0x6d]);
          }
          if (piVar14[0x6f] != param_1[0x6f]) {
            FUN_0008f6a0(param_1[0x6f]);
          }
          DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
          puStack_1fc = &fStack_164;
          pfStack_208 = &fStack_198;
          fVar1 = ((float)(DAT_0046cfd8 >> 9 | 0x3f800000) - 1.0) * (float)piVar14[0x76] * 0.15;
          piVar14[0x76] =
               (int)(((float)piVar14[0x76] - (float)piVar14[0x76] * 0.15) + fVar1 + fVar1);
          fStack_164 = fStack_198;
          uStack_160 = uStack_194;
          fStack_15c = fStack_190;
          uStack_158 = uStack_18c;
          fStack_144 = fStack_178;
          uStack_154 = uStack_188;
          fStack_150 = fStack_184;
          uStack_14c = uStack_180;
          uStack_148 = uStack_17c;
          fStack_bc = fStack_16c;
          puStack_b4 = puStack_170;
          fStack_138 = fStack_16c;
          fStack_140 = fStack_174;
          pfStack_13c = (float *)puStack_170;
          (**(code **)(*param_1 + 0xac))(&fStack_1ec,&fStack_200);
          puStack_1fc = (undefined4 *)
                        SQRT((float)local_1f4 * (float)local_1f4 +
                             uStack_1f0 * uStack_1f0 + fStack_1ec * fStack_1ec);
          pfStack_208 = (float *)((float)puStack_1fc + (float)pfStack_208);
          (**(code **)(*piVar14 + 0xac))(&local_1f4,&stack0xfffffdf4);
          pfStack_208 = afStack_1bc;
          fStack_204 = ((float)local_1f4 + fStack_204 + fStack_200) * (float)(iStack_1c0 / 0xc + 1);
          puStack_1fc = &fStack_164;
          afStack_1bc[0] = fStack_164;
          fStack_1b4 = fStack_15c;
          uStack_1b0 = uStack_158;
          fStack_19c = fStack_144;
          fStack_1a8 = fStack_150;
          uStack_1a4 = uStack_14c;
          FUN_0020e080(auStack_134,local_1d8 * 0.017453292);
          pfStack_208 = &fStack_6c;
          pfVar13 = (float *)FUN_002334b0();
          fVar4 = pfVar13[1];
          fVar5 = pfVar13[2];
          fVar6 = pfVar13[3];
          fVar1 = pfVar13[8];
          fVar7 = pfVar13[4];
          fVar8 = pfVar13[5];
          fVar9 = pfVar13[6];
          fVar10 = pfVar13[7];
          *pfStack_208 = *pfVar13;
          pfStack_208[1] = fVar4;
          pfStack_208[2] = fVar5;
          pfStack_208[3] = fVar6;
          pfStack_208[8] = fVar1;
          pfStack_208[4] = fVar7;
          pfStack_208[5] = fVar8;
          pfStack_208[6] = fVar9;
          pfStack_208[7] = fVar10;
          afStack_1bc[0] = fStack_6c;
          fStack_1b4 = (float)uStack_64;
          uStack_1b0 = uStack_60;
          fStack_19c = (float)uStack_4c;
          fStack_1a8 = (float)uStack_58;
          uStack_1a4 = uStack_54;
          local_1d8 = local_1d8 + local_168;
          fStack_fc = fStack_50;
          fStack_d4 = fStack_5c;
          fStack_ac = fStack_68;
          fStack_a8 = fStack_5c;
          fStack_a4 = fStack_50;
          fStack_c0 = fStack_204;
          fStack_cc = fStack_204 * fStack_68;
          uStack_c8 = CONCAT44(fStack_204 * fStack_50,fStack_204 * fStack_5c);
          puStack_1fc = (undefined4 *)(fStack_138 + fStack_204 * fStack_50);
          pfStack_208 = (float *)((float)pfStack_13c + fStack_204 * fStack_5c);
          fStack_140 = fStack_140 + fStack_cc;
          pfStack_13c = pfStack_208;
          fStack_138 = (float)puStack_1fc;
          FUN_0013e800(auStack_134,(float)param_1[0x84] * 90.0 * 0.017453292);
          pfStack_208 = &fStack_48;
          pfVar13 = (float *)FUN_002334b0();
          fVar4 = pfVar13[1];
          fVar5 = pfVar13[2];
          fVar6 = pfVar13[3];
          fVar1 = pfVar13[8];
          fVar7 = pfVar13[4];
          fVar8 = pfVar13[5];
          fVar9 = pfVar13[6];
          fVar10 = pfVar13[7];
          *pfStack_208 = *pfVar13;
          pfStack_208[1] = fVar4;
          pfStack_208[2] = fVar5;
          pfStack_208[3] = fVar6;
          pfStack_208[8] = fVar1;
          pfStack_208[4] = fVar7;
          pfStack_208[5] = fVar8;
          pfStack_208[6] = fVar9;
          pfStack_208[7] = fVar10;
          afStack_1bc[0] = fStack_48;
          fStack_1b4 = (float)uStack_40;
          uStack_1b0 = uStack_3c;
          fStack_19c = (float)uStack_28;
          fStack_1a8 = (float)uStack_34;
          uStack_1a4 = uStack_30;
          pfStack_208 = &fStack_164;
          puStack_1fc = afStack_1bc;
          fStack_164 = fStack_48;
          uStack_160 = uStack_44;
          fStack_15c = (float)uStack_40;
          uStack_158 = uStack_3c;
          fStack_144 = (float)uStack_28;
          uStack_154 = uStack_38;
          fStack_150 = (float)uStack_34;
          uStack_14c = uStack_30;
          uStack_148 = uStack_2c;
          if (*(char *)(piVar14[0x8d] + 0x239) == '\0') {
            pfVar13 = (float *)(**(code **)(*param_1 + 0x54))();
            pfStack_208 = (float *)(pfVar13[2] * pfVar13[2] +
                                   pfVar13[1] * pfVar13[1] + *pfVar13 * *pfVar13);
            fStack_b8 = SQRT((float)pfStack_208);
            piVar14[0x82] = (int)fStack_b8;
            *(byte *)(piVar14 + 0x88) = *(byte *)(piVar14 + 0x88) & 0xfb;
          }
          FUN_00227ce0(piVar14,&fStack_164,0,0);
          if ((*(byte *)((int)param_1 + 0x221) & 2) == 0) {
LAB_0022886b:
            if ((char)param_1[0x88] < '\0') goto LAB_00228879;
            if (iStack_1e0 < 1) {
              fStack_d8 = fStack_178;
              fStack_f8 = fStack_184;
              fStack_f4 = fStack_190;
              pfStack_208 = &fStack_f4;
              fStack_f0 = fStack_184;
              fStack_ec = fStack_178;
              uStack_d0 = 0xc3480000;
              fStack_1d4 = fStack_190 * -200.0;
              puStack_1d0 = (undefined4 *)(fStack_184 * -200.0);
              fStack_1cc = fStack_178 * -200.0;
              uStack_e4 = CONCAT44(fStack_1cc,puStack_1d0);
              fStack_1c8 = fStack_1cc;
              fStack_e8 = fStack_1d4;
              puStack_dc = puStack_1d0;
              iVar12 = (**(code **)(*param_1 + 0x40))();
              puStack_1fc = (undefined4 *)(fStack_1cc + *(float *)(iVar12 + 0x2c));
              pfStack_208 = (float *)((float)puStack_1d0 + *(float *)(iVar12 + 0x28));
              fStack_9c = fStack_1d4 + *(float *)(iVar12 + 0x24);
              pfStack_98 = pfStack_208;
              puStack_94 = puStack_1fc;
              FUN_00226360();
            }
            else {
              piVar3 = *(int **)(iStack_10c + 4 + iStack_1dc * 8);
              iStack_1dc = iStack_1dc + 1;
              if (piVar3 != (int *)0x0) {
                (**(code **)(*piVar3 + 0x40))();
                FUN_00226360();
              }
              if (iStack_1e0 <= iStack_1dc) {
                iStack_1dc = 0;
              }
            }
          }
          else {
            param_1[0x7f] = param_1[0x7f] + -1;
            if (-1 < (char)param_1[0x88]) {
              fVar1 = 1.0 / (float)piVar14[0x82];
              *(byte *)((int)piVar14 + 0x221) = *(byte *)((int)piVar14 + 0x221) | 4;
              *(byte *)(piVar14 + 0x88) = *(byte *)(piVar14 + 0x88) & 0xdb;
              piVar14[0x77] = (int)fVar1;
              piVar14[0x76] = (int)fVar1;
              piVar14[0x8c] = (int)fVar1;
              cVar11 = (**(code **)(*piVar14 + 0xc4))(&iStack_b0);
              if ((((cVar11 != '\0') &&
                   (iVar12 = *(int *)(*(int *)(param_1[2] + 0xa44) + 0x1c), iVar12 != 0)) &&
                  (iStack_b0 != 0)) && (*(int *)(iStack_b0 + 0x90) != 0)) {
                FUN_002bdfc0(iVar12);
              }
              goto LAB_0022886b;
            }
LAB_00228879:
            iVar12 = (**(code **)(*param_1 + 0x40))();
            if ((int *)piVar14[0x7b] != param_1) {
              FUN_0008f6a0(param_1);
            }
            iStack_100 = *(int *)(iVar12 + 0x2c);
            iStack_a0 = *(int *)(iVar12 + 0x28);
            iVar12 = *(int *)(iVar12 + 0x24);
            piVar14[0x7d] = iStack_a0;
            piVar14[0x7c] = iVar12;
            piVar14[0x7e] = iStack_100;
            piVar14[0x89] = (int)(local_1d8 - local_168);
            *(byte *)((int)piVar14 + 0x221) = *(byte *)((int)piVar14 + 0x221) | 1;
            piVar14[0x8a] = 0x3f800000;
            piVar14[0x8b] = 0x40800000;
          }
          if (((param_1[0x8d] != 0) &&
              (((*(byte *)((int)param_1 + 0x221) & 2) == 0 || ((char)param_1[0x88] < '\0')))) &&
             (*(int *)(param_1[0x8d] + 0x284) != DAT_0046d064)) {
            pfStack_208 = (float *)0x0;
            FUN_000defa0(1,0,piVar14,&pfStack_208,0x3f800000);
          }
        }
      }
      iStack_1c0 = iStack_1c0 + 1;
    } while (iStack_1c0 < (int)local_1f8);
  }
  iVar12 = iStack_10c;
  if (((*(byte *)((int)param_1 + 0x221) & 2) == 0) || (param_1[0x7f] == 0)) {
    param_1[0x81] = 0;
  }
  if ((char)param_1[0x88] < '\0') {
    iVar2 = param_1[0x8d];
    if (iVar2 != 0) {
      fVar1 = *(float *)(iVar2 + 0x228);
      param_1[0x77] = (int)(*(float *)(iVar2 + 0x214) / (float)param_1[0x82]);
      param_1[0x76] = param_1[0x77];
      param_1[0x8c] = (int)(fVar1 * (float)param_1[0x76]);
      param_1[0x75] = *(int *)(iVar2 + 0x230);
    }
    *(byte *)((int)param_1 + 0x221) = *(byte *)((int)param_1 + 0x221) & 0xfe;
  }
  else {
    param_1[0x75] = 0;
    param_1[0x76] = 0;
    *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) | 2;
  }
  if ((*(byte *)((int)param_1 + 0x221) & 2) != 0) {
    param_1[0x76] = 0x3e800000;
    *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) & 0xfd;
  }
  if (iStack_10c == 0) {
    return (uint)uStack_1f0 >> 0x18;
  }
  FUN_0001d590(auStack_110,fStack_1c8);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(iVar12);
}
