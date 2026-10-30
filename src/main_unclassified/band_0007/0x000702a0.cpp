/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 36FCD06D5CE234D0608B0BCB102B14F53B392F21DCE21E54BBEA6F49CFC55C2C
 * Entry: 0x000702a0, Ghidra index: 1268, label: FUN_000702a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);
extern char FUN_00156290(undefined4 param_1);
extern void FUN_0006f780(int param_1,float param_2);
extern void FUN_00070110(void);
extern void FUN_0001f9c0(void);
extern void FUN_0006e940(void);
extern void FUN_000736c0(void);
extern void FUN_00073a80(float *param_1,float param_2);
extern void FUN_0011c0b0(undefined4 param_1);
extern void FUN_0006c660(void);
extern void FUN_0006c720(float param_1);
extern void FUN_002334b0(void);
extern undefined4 FUN_00073f10(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern void FUN_00073710(float *param_1,float param_2,float *param_3);
extern void FUN_00073970(float param_1,float param_2);
extern unkbyte10 FUN_0005a6e0(char param_1);
extern uint FUN_00073f90(float param_1);
extern void FUN_0006ffc0(float *param_1);

extern uint32_t DAT_003f7f14;
extern uint32_t DAT_0040de18;
extern uint32_t DAT_0040de1c;
extern uint32_t *DAT_00469b58;
extern uint32_t DAT_0046d034;
extern uint32_t DAT_004a5c14;
extern uint32_t _DAT_0040de20;
extern uint32_t _DAT_004a5c18;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_000702a0(float param_1)

{
  byte bVar1;
  float *pfVar2;
  float *pfVar3;
  bool bVar4;
  float fVar5;
  undefined1 uVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  float *pfVar10;
  undefined4 uVar11;
  int iVar12;
  int *in_ECX;
  int *piVar13;
  uint uVar14;
  int *extraout_EDX;
  int *piVar15;
  int *unaff_EBX;
  int unaff_ESI;
  float10 fVar16;
  float10 fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  int *local_1a4;
  float *pfStack_19c;
  float local_198;
  float local_194;
  int *piStack_190;
  float local_18c;
  int *local_188;
  float fStack_184;
  float local_180;
  float local_17c;
  float *local_178;
  float *pfStack_174;
  float local_170;
  float local_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float *pfStack_15c;
  float fStack_158;
  float fStack_154;
  float *pfStack_150;
  int *piStack_14c;
  float fStack_148;
  float *pfStack_144;
  int *piStack_140;
  float fStack_13c;
  float *pfStack_138;
  float fStack_134;
  undefined8 uStack_130;
  float fStack_128;
  undefined8 uStack_124;
  float *pfStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float *local_f4;
  float local_f0;
  float local_ec;
  float fStack_e8;
  float fStack_e4;
  float *pfStack_e0;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float *pfStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float *pfStack_ac;
  int *piStack_a8;
  undefined4 uStack_a4;
  float fStack_a0;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float *pfStack_70;
  float fStack_6c;
  undefined1 auStack_40 [8];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float *pfStack_20;
  float fStack_1c;
  float fStack_18;
  
  in_ECX[4] = *(int *)(in_ECX[2] + 0xb60);
  piVar15 = (int *)in_ECX[0x52];
  if (piVar15 == (int *)0x0) {
    return 1;
  }
  local_188 = (int *)0x0;
  uVar14 = (*(int *)(piVar15[3] + 4) != 3) - 1 & (uint)piVar15;
  if (uVar14 != 0) {
    FUN_0008f6a0(uVar14);
  }
  local_168 = 0.0;
  local_16c = 0.0;
  local_170 = 0.0;
  local_f0 = 0.0;
  local_f4 = (float *)0x0;
  local_f8 = 0.0;
  local_100 = 0.0;
  local_104 = 0.0;
  local_108 = 0.0;
  local_ec = 1.0;
  local_fc = 1.0;
  local_10c = 1.0;
  local_178 = (float *)0x0;
  local_17c = 0.0;
  local_180 = 0.0;
  local_194 = 1.0;
  local_198 = 0.0;
  if (local_188 == (int *)0x0) {
    piVar13 = (int *)(-(uint)((*(byte *)((int)piVar15 + 0x26) & 0x40) != 0) & (uint)piVar15);
    if (piVar13 != (int *)0x0) goto LAB_0007045e;
    pfVar10 = (float *)(**(code **)(*piVar15 + 0x40))();
    local_168 = pfVar10[0xb];
    local_16c = pfVar10[10];
    local_170 = pfVar10[9];
    local_10c = *pfVar10;
    local_108 = pfVar10[1];
    local_104 = pfVar10[2];
    local_100 = pfVar10[3];
    local_ec = pfVar10[8];
    local_fc = pfVar10[4];
    local_f8 = pfVar10[5];
    local_f4 = (float *)pfVar10[6];
    local_f0 = pfVar10[7];
    pfStack_19c = (float *)0x3f800000;
    local_180 = 0.0;
    local_17c = 0.0;
    local_178 = (float *)0x3f800000;
    local_198 = 1.55;
  }
  else {
    if ((((*(byte *)((int)local_188 + 0x26) & 8) != 0) && ((*(byte *)(local_188 + 0x1c) & 1) == 0))
       && (FUN_00156290(param_1), local_188 == (int *)0x0)) {
      return 1;
    }
    pfStack_19c = (float *)(**(code **)(*in_ECX + 0x130))();
    local_10c = *pfStack_19c;
    local_108 = pfStack_19c[1];
    local_104 = pfStack_19c[2];
    local_100 = pfStack_19c[3];
    local_ec = pfStack_19c[8];
    local_fc = pfStack_19c[4];
    local_f8 = pfStack_19c[5];
    local_f4 = (float *)pfStack_19c[6];
    local_f0 = pfStack_19c[7];
    piVar13 = local_188;
    if ((*(byte *)(local_188 + 0x1c) & 1) == 0) {
LAB_0007045e:
      (**(code **)(*piVar13 + 300))(&local_170,&local_180,&local_10c,&local_194,&local_198);
    }
    else {
      FUN_0006f780(in_ECX,param_1);
      FUN_0006fb00(in_ECX,&local_170,&local_180,&local_10c,&local_194,&local_198);
    }
  }
  FUN_00070110();
  if ((local_188 != (int *)0x0) &&
     (((iVar9 = (**(code **)(**(int **)(local_188[2] + 0xbec) + 0xc))(local_188), iVar9 == 0 ||
       (*(int *)(iVar9 + 0x24) == 0)) || ((*(byte *)(*(int *)(iVar9 + 0x24) + 0x14) & 2) == 0)))) {
    *(byte *)(in_ECX + 0x7d) = *(byte *)(in_ECX + 0x7d) | 2;
  }
  bVar1 = *(byte *)(in_ECX + 0x7d);
  FUN_0001f9c0();
  piStack_140 = (int *)(local_198 * fStack_e8);
  fStack_13c = local_198 * fStack_e4;
  pfStack_138 = (float *)(local_198 * (float)pfStack_e0);
  pfStack_19c = (float *)((float)pfStack_138 + local_168);
  fStack_154 = fStack_13c + local_16c;
  fStack_158 = (float)piStack_140 + local_170;
  pfStack_150 = pfStack_19c;
  fStack_a0 = (float)pfStack_138;
  pfVar10 = (float *)(**(code **)(in_ECX[0x12] + 0xc))();
  pfStack_19c = (float *)((float)pfStack_150 - pfVar10[2]);
  fStack_13c = fStack_154 - pfVar10[1];
  pfStack_138 = pfStack_19c;
  if ((fStack_158 - *pfVar10) * (fStack_158 - *pfVar10) +
      fStack_13c * fStack_13c + (float)pfStack_19c * (float)pfStack_19c <= 100.0) {
    if ((bVar1 >> 1 & 1) == 1) goto LAB_00070668;
  }
  else {
    FUN_0006e940();
LAB_00070668:
    (**(code **)(*in_ECX + 0x3c))(&local_10c);
    (**(code **)(*unaff_EBX + 0x38))(&pfStack_15c);
    in_ECX[0x66] = (int)local_198;
    in_ECX[100] = (int)local_198;
    pfStack_19c = local_178;
    in_ECX[0x67] = (int)local_180;
    in_ECX[0x69] = (int)local_178;
    in_ECX[0x68] = (int)local_17c;
    FUN_000736c0();
    in_ECX[0x5f] = (int)local_16c;
    in_ECX[0x60] = (int)local_16c;
    *(undefined1 *)(in_ECX + 0x5e) = 1;
    in_ECX[0x61] = 0;
  }
  if ((*(byte *)(in_ECX + 0x7d) & 2) != 0) {
    FUN_00073a80(in_ECX + 0x37,param_1);
    if (local_188 != (int *)0x0) {
      FUN_0011c0b0(param_1);
    }
    *(byte *)(in_ECX + 0x7d) = *(byte *)(in_ECX + 0x7d) & 0xfd;
    goto LAB_000718c9;
  }
  if (local_194 == 1.0) {
    if ((*(byte *)(in_ECX + 0x13) & 1) != 0) {
      FUN_0006e940();
      *(byte *)(in_ECX + 0x13) = *(byte *)(in_ECX + 0x13) & 0xfe;
      if ((*(byte *)(in_ECX + 0x13) & 0x20) != 0) {
        FUN_0006c660();
      }
    }
  }
  else if ((*(byte *)(in_ECX + 0x13) & 1) == 0) {
    if ((*(byte *)(in_ECX + 0x13) & 0x20) != 0) {
      FUN_0006c660();
    }
    *(byte *)(in_ECX + 0x13) = *(byte *)(in_ECX + 0x13) | 1;
  }
  FUN_0006c720(local_194);
  in_ECX[0x7f] = (int)local_194;
  pfVar10 = (float *)FUN_002334b0();
  local_10c = *pfVar10;
  local_108 = pfVar10[1];
  local_104 = pfVar10[2];
  local_100 = pfVar10[3];
  local_ec = pfVar10[8];
  local_fc = pfVar10[4];
  local_f8 = pfVar10[5];
  local_f4 = (float *)pfVar10[6];
  local_f0 = pfVar10[7];
  pfStack_19c = &fStack_38;
  fStack_38 = local_10c;
  fStack_34 = local_108;
  fStack_30 = local_104;
  fStack_2c = local_100;
  fStack_28 = local_fc;
  fStack_24 = local_f8;
  pfStack_20 = local_f4;
  fStack_1c = local_f0;
  fStack_18 = local_ec;
  if (local_188 == (int *)0x0) {
    fVar18 = 3.14159;
LAB_00070851:
    (**(code **)(*in_ECX + 0x130))(&local_10c,fVar18 * param_1);
    FUN_00073f10(&local_10c);
  }
  else if ((*(byte *)(local_188 + 0x1c) & 1) == 0) {
    fVar18 = *(float *)(local_188[3] + 0x2d0) + *(float *)(local_188[3] + 0x2d0);
    goto LAB_00070851;
  }
  FUN_00073710(in_ECX + 0x53,param_1,&local_170);
  pfStack_19c = (float *)in_ECX[0x57];
  fStack_160 = (float)in_ECX[0x56];
  fStack_164 = (float)in_ECX[0x55];
  pfStack_15c = pfStack_19c;
  FUN_00073970(param_1,fStack_160);
  fStack_160 = (float)in_ECX[0x5f];
  if (((0.0 < param_1) &&
      (1.1920929e-07 <
       local_180 * local_180 + (float)local_178 * (float)local_178 + local_17c * local_17c)) &&
     (1.1920929e-07 <
      (float)in_ECX[0x69] * (float)in_ECX[0x69] +
      (float)in_ECX[0x68] * (float)in_ECX[0x68] + (float)in_ECX[0x67] * (float)in_ECX[0x67])) {
    fVar16 = (float10)FUN_0005a6e0(1);
    FUN_00073f90((float)((fVar16 / (float10)(float)DAT_003f7f14) * (float10)param_1));
  }
  FUN_0001f9c0();
  fVar18 = local_100;
  if (local_188 == (int *)0x0) {
    pfStack_174 = (float *)0x0;
  }
  else {
    pfStack_174 = (float *)local_188[0x180];
    local_188[0x180] = 0;
  }
  piStack_140 = (int *)(fStack_134 * -1.0);
  fStack_13c = (float)uStack_130 * -1.0;
  pfStack_138 = (float *)((float)((ulonglong)uStack_130 >> 0x20) * -1.0);
  pfStack_19c = local_f4;
  fStack_e8 = local_10c;
  fStack_e4 = local_100;
  pfStack_e0 = local_f4;
  FUN_0006ffc0(&pfStack_19c);
  piStack_190 = (int *)local_198;
  fVar16 = (float10)FUN_000718f0(in_ECX,&fStack_164,pfStack_19c,fVar18,pfStack_174,local_198);
  fStack_184 = (float)fVar16;
  if ((float10)(float)piStack_190 < fVar16) {
    fStack_184 = (float)piStack_190;
  }
  if (fStack_184 < 0.0) {
    fStack_184 = 0.0;
  }
  if (((float)piStack_190 < local_198) && ((float)piStack_190 < (float)in_ECX[100])) {
    in_ECX[100] = (int)piStack_190;
    in_ECX[0x7c] = 0;
  }
  piStack_190 = DAT_003f7f14;
  if (fStack_184 < (float)in_ECX[100]) {
    piStack_190 = (int *)((float)DAT_003f7f14 * 0.7);
  }
  if (param_1 <= (float)piStack_190) {
    FUN_00070090(in_ECX[100],in_ECX[0x7c],fStack_184,0,piStack_190,param_1);
    piVar15 = extraout_EDX;
  }
  else {
    fVar18 = 0.0;
    piVar15 = in_ECX;
  }
  piVar15[0x7c] = (int)fVar18;
  in_ECX[100] = (int)fStack_184;
  fStack_a0 = fStack_184 * (float)((ulonglong)uStack_130 >> 0x20);
  pfStack_19c = (float *)(fStack_a0 + (float)pfStack_15c);
  fStack_13c = fStack_184 * (float)uStack_130 + fStack_160;
  piStack_140 = (int *)(fStack_164 + fStack_184 * fStack_134);
  pfStack_138 = pfStack_19c;
  fVar16 = (float10)(**(code **)(in_ECX[0x12] + 0x24))();
  if ((float10)0.0 <= (float10)fStack_184 - fVar16) {
    fVar16 = (float10)(**(code **)(in_ECX[0x12] + 0x24))();
    fVar16 = (float10)fStack_184 - fVar16;
  }
  else {
    fVar16 = (float10)0.0;
  }
  in_ECX[0x65] = (int)(float)fVar16;
  bVar4 = false;
  pfStack_bc = (float *)0x0;
  fStack_c0 = 0.0;
  fStack_c4 = 0.0;
  fStack_cc = 0.0;
  fStack_d0 = 0.0;
  fStack_d4 = 0.0;
  fStack_b8 = 1.0;
  fStack_c8 = 1.0;
  fStack_d8 = 1.0;
  if (((local_188 == (int *)0x0) || ((*(byte *)(local_188 + 0x1c) & 1) == 0)) ||
     ((*(byte *)(in_ECX + 0x94) & 2) != 0)) {
    in_ECX[0x7a] = 0;
    in_ECX[0x79] = 0;
    in_ECX[0x78] = 0;
    in_ECX[0x76] = 0;
    in_ECX[0x75] = 0;
    in_ECX[0x74] = 0;
    in_ECX[0x7b] = 0x3f800000;
    in_ECX[0x77] = 0x3f800000;
    in_ECX[0x73] = 0x3f800000;
  }
  else {
    pfStack_e0 = (float *)in_ECX[0x89];
    fStack_e4 = (float)in_ECX[0x88];
    pfStack_19c = (float *)((float)pfStack_e0 - (float)pfStack_138);
    bVar4 = true;
    pfVar10 = (float *)(fStack_e4 - fStack_13c);
    fStack_128 = (float)in_ECX[0x87] - (float)piStack_140;
    uStack_124 = CONCAT44(pfStack_19c,pfVar10);
    piStack_190 = (int *)(fStack_128 * fStack_128 + (float)pfStack_19c * (float)pfStack_19c);
    if ((float)piStack_190 * 3.0 < (float)pfVar10 * (float)pfVar10) {
      if ((float)piStack_190 <= 0.0) {
        (**(code **)(*in_ECX + 0x130))();
        pfVar10 = (float *)FUN_0001fdd0();
        pfStack_19c = (float *)-pfVar10[2];
        fStack_128 = -*pfVar10;
        uStack_124 = CONCAT44(pfStack_19c,-pfVar10[1]);
      }
      else {
        pfVar2 = (float *)(SQRT((float)piStack_190) * 3.0);
        pfVar3 = (float *)-(float)pfVar2;
        pfStack_11c = pfVar10;
        if ((float)pfVar10 <= (float)pfVar3) {
          pfStack_11c = pfVar3;
        }
        if ((float)pfVar2 <= (float)pfStack_11c) {
          pfStack_11c = pfVar2;
        }
        uStack_124 = CONCAT44(pfStack_19c,pfStack_11c);
        pfStack_19c = pfVar3;
        pfStack_174 = pfVar10;
      }
    }
    pfVar10 = (float *)SQRT(fStack_128 * fStack_128 +
                            uStack_124._4_4_ * uStack_124._4_4_ +
                            (float)uStack_124 * (float)uStack_124);
    if (1.1920929e-07 < (float)pfVar10) {
      auVar19 = rcpss(ZEXT416(pfVar10),ZEXT416(pfVar10));
      fVar18 = auVar19._0_4_;
      auVar19._0_4_ = fStack_128 * fVar18;
      auVar19._4_4_ = fVar18 * 0.0;
      auVar19._8_4_ = (float)uStack_124 * fVar18;
      auVar19._12_4_ = uStack_124._4_4_ * fVar18;
      uStack_124 = auVar19._8_8_;
      pfStack_19c = pfVar10;
      fStack_128 = auVar19._0_4_;
      FUN_0001fd80();
      if (ABS((float)uStack_124) < 0.9848 == (ABS((float)uStack_124) == 0.9848)) {
        fVar18 = 0.0;
        pfStack_ac = (float *)0x3f800000;
      }
      else {
        fVar18 = 1.0;
        pfStack_ac = (float *)0x0;
      }
      fStack_b8 = -uStack_124._4_4_;
      fStack_c4 = -(float)uStack_124;
      fStack_e8 = -fStack_128;
      fStack_110 = fStack_c4 * 0.0 - fVar18 * fStack_e8;
      fStack_114 = (float)pfStack_ac * fStack_e8 - fStack_b8 * 0.0;
      fStack_b4 = fVar18 * fStack_b8 - (float)pfStack_ac * fStack_c4;
      auVar19 = rsqrtss(auVar19,fStack_b4 * fStack_b4 +
                                fStack_114 * fStack_114 + fStack_110 * fStack_110);
      fVar18 = auVar19._0_4_;
      fStack_118 = fVar18 * fStack_b4;
      fStack_114 = fStack_114 * fVar18;
      fStack_110 = fStack_110 * fVar18;
      pfStack_19c = (float *)(fStack_114 * fStack_e8 - fStack_118 * fStack_c4);
      fStack_b0 = fStack_b8 * fStack_118 - fStack_110 * fStack_e8;
      piStack_a8 = (int *)(fStack_110 * fStack_c4 - fStack_114 * fStack_b8);
      auVar19 = rsqrtss(auVar19,(float)piStack_a8 * (float)piStack_a8 +
                                fStack_b0 * fStack_b0 + (float)pfStack_19c * (float)pfStack_19c);
      piStack_190 = auVar19._0_4_;
      fStack_d4 = (float)piStack_190 * (float)piStack_a8;
      fStack_c8 = fStack_b0 * (float)piStack_190;
      pfStack_bc = (float *)((float)pfStack_19c * (float)piStack_190);
      fStack_d8 = fStack_118;
      fStack_d0 = fStack_e8;
      fStack_cc = fStack_114;
      fStack_c0 = fStack_110;
      pfStack_ac = pfStack_bc;
      fStack_94 = fStack_c4;
      fStack_90 = fStack_b8;
    }
  }
  fVar16 = (float10)FUN_00073d20(in_ECX + 0x37);
  FUN_00073c00();
  in_ECX[0x3b] = (int)(float)fVar16;
  pfStack_19c = pfStack_138;
  piStack_14c = piStack_140;
  pfStack_144 = pfStack_138;
  fStack_148 = fStack_13c;
  FUN_00073b20(in_ECX + 0x37,&fStack_8c,&local_10c);
  if (bVar4) {
    pfStack_19c = &fStack_d8;
    fStack_8c = fStack_d8;
    fStack_88 = fStack_d4;
    fStack_84 = fStack_d0;
    fStack_80 = fStack_cc;
    fStack_6c = fStack_b8;
    fStack_7c = fStack_c8;
    fStack_78 = fStack_c4;
    fStack_74 = fStack_c0;
    pfStack_70 = pfStack_bc;
  }
  FUN_00073a80(in_ECX + 0x37,param_1);
  in_ECX[0x66] = (int)fStack_184;
  pfStack_19c = local_178;
  in_ECX[0x67] = (int)local_180;
  in_ECX[0x69] = (int)local_178;
  in_ECX[0x68] = (int)local_17c;
  (**(code **)(*in_ECX + 0x38))(&piStack_14c);
  (**(code **)(*unaff_EBX + 0x3c))(&fStack_90);
  if (*(int *)(unaff_ESI + 0x208) != 0) {
    FUN_002b4070(&local_f0,0,0,0);
    pfStack_ac = pfStack_150;
    uStack_a4 = 0;
    fStack_b0 = fStack_154;
    piStack_a8 = piStack_14c;
    FUN_002b39f0(0);
  }
  local_1a4 = in_ECX;
  if (piStack_190 != (int *)0x0) {
    uVar11 = (**(code **)(*(int *)(unaff_ESI + 0x48) + 0x14))();
    iVar9 = FUN_002338c0(auStack_40,&DAT_0046d034,uVar11);
    FUN_0003d6c0(&pfStack_70,iVar9,iVar9 + 0x24);
    if ((piStack_190[0x1ea] == 0) || ((*(byte *)(piStack_190 + 0x1c) & 1) != 0)) {
      bVar1 = *(byte *)(unaff_ESI + 0x4c);
      *(byte *)(unaff_ESI + 0x4c) = (bVar1 << 1 ^ bVar1) & 8 ^ bVar1;
      *(undefined1 *)(unaff_ESI + 0x117) = *(undefined1 *)(unaff_ESI + 0x114);
      uVar14 = *(uint *)(unaff_ESI + 0x11c);
      *(uint *)(unaff_ESI + 0x11c) = (uVar14 * 4 ^ uVar14) & 0xc ^ uVar14;
      *(undefined1 *)(unaff_ESI + 0x118) = *(undefined1 *)(unaff_ESI + 0x115);
      *(undefined1 *)(unaff_ESI + 0x119) = *(undefined1 *)(unaff_ESI + 0x116);
      *(byte *)(unaff_ESI + 500) = *(byte *)(unaff_ESI + 500) & 0xfe;
    }
    else {
      *(byte *)(unaff_ESI + 0x4c) = *(byte *)(unaff_ESI + 0x4c) | 8;
      *(undefined1 *)(unaff_ESI + 0x117) = 0xff;
      *(uint *)(unaff_ESI + 0x11c) = *(uint *)(unaff_ESI + 0x11c) & 0xfffffffb | 8;
      *(undefined1 *)(unaff_ESI + 0x119) = 0x7f;
      iVar9 = FUN_0006ef00();
      iVar9 = *(int *)(iVar9 + 0xf0);
      local_1a4 = *(int **)(iVar9 + 0xc0);
      pfStack_ac = *(float **)(iVar9 + 0xbc);
      fStack_b0 = *(float *)(iVar9 + 0xb8);
      piStack_a8 = local_1a4;
      FUN_000621c0();
      fVar16 = (float10)(**(code **)(*(int *)(unaff_ESI + 0x48) + 0x24))();
      local_198 = (float)fVar16;
      fVar16 = (float10)(**(code **)(*(int *)(unaff_ESI + 0x48) + 0x28))();
      if (((float10)fStack_e8 <= fVar16) && (fVar16 = (float10)fStack_e8, fStack_e8 < local_198)) {
        fVar16 = (float10)local_198;
      }
      if ((*(byte *)(unaff_ESI + 500) & 1) == 0) {
        *(float *)(unaff_ESI + 0x1f8) = (float)fVar16;
        *(byte *)(unaff_ESI + 500) = *(byte *)(unaff_ESI + 500) | 1;
      }
      if (fVar16 <= (float10)*(float *)(unaff_ESI + 0x1f8)) {
        if ((fVar16 < (float10)*(float *)(unaff_ESI + 0x1f8)) &&
           (*(float *)(unaff_ESI + 0x1f8) = *(float *)(unaff_ESI + 0x1f8) - _DAT_0040de20 * param_1,
           (float10)*(float *)(unaff_ESI + 0x1f8) < fVar16)) {
          *(float *)(unaff_ESI + 0x1f8) = (float)fVar16;
        }
      }
      else {
        *(float *)(unaff_ESI + 0x1f8) = _DAT_0040de20 * param_1 + *(float *)(unaff_ESI + 0x1f8);
        if (fVar16 < (float10)*(float *)(unaff_ESI + 0x1f8)) {
          *(float *)(unaff_ESI + 0x1f8) = (float)fVar16;
        }
      }
      uVar6 = FUN_002ebf10();
      *(undefined1 *)(unaff_ESI + 0x118) = uVar6;
    }
    if (((*(byte *)(piStack_190 + 0x1c) & 1) == 0) && (piStack_190[0x1ea] == 0)) {
      local_17c = (float)piStack_190[0x15] / (float)piStack_190[0x14];
      local_1a4 = (int *)0x0;
      fVar18 = local_17c;
      if (local_17c <= 0.0) {
        fVar18 = 0.0;
      }
      if (DAT_0040de1c <= fVar18) {
        fVar18 = DAT_0040de1c;
      }
      uStack_124 = CONCAT44(uStack_124._4_4_,fVar18);
      local_18c = 1.0 - fVar18 / DAT_0040de1c;
      if (0.0 < local_18c) {
        (**(code **)(*piStack_190 + 0x40))();
        FUN_000621c0();
        fVar16 = (float10)(**(code **)(*(int *)(unaff_ESI + 0x48) + 0x24))();
        local_198 = (float)fVar16;
        fVar17 = (float10)(**(code **)(*(int *)(unaff_ESI + 0x48) + 0x28))();
        fVar16 = fVar17;
        if (((float10)(float)piStack_a8 <= fVar17) &&
           (fVar16 = (float10)(float)piStack_a8, (float)piStack_a8 < local_198)) {
          fVar16 = (float10)local_198;
        }
        fVar18 = (float)(((float10)1.0 - (float10)local_198 / fVar16) *
                        (fVar17 / (fVar17 - (float10)local_198)));
        if ((*(byte *)(unaff_ESI + 0x4c) & 8) == 0) {
          local_198 = DAT_0040de18;
          local_17c = -1.0;
          fVar5 = fVar18;
        }
        else {
          local_198 = (float)*(byte *)(unaff_ESI + 0x117) * 0.003921569;
          local_17c = (float)*(byte *)(unaff_ESI + 0x119) * 0.007843138 - 1.0;
          fVar5 = (float)*(byte *)(unaff_ESI + 0x118) * 0.003921569;
        }
        uStack_124 = CONCAT44(uStack_124._4_4_,fVar5);
        *(byte *)(unaff_ESI + 0x4c) = *(byte *)(unaff_ESI + 0x4c) | 8;
        iVar9 = FUN_002ebf10();
        fVar5 = DAT_0040de18 - local_198;
        *(uint *)(unaff_ESI + 0x11c) =
             *(uint *)(unaff_ESI + 0x11c) ^
             ((int)(float)iVar9 << 2 ^ *(uint *)(unaff_ESI + 0x11c)) & 0xc;
        local_1a4 = (int *)((fVar5 * local_18c + local_198) * 255.0);
        *(char *)(unaff_ESI + 0x117) = (char)(int)(float)local_1a4;
        fVar5 = _DAT_004a5c18 - local_17c;
        *(char *)(unaff_ESI + 0x118) =
             (char)(int)(((fVar18 - (float)uStack_124) * local_18c + (float)uStack_124) * 255.0);
        *(char *)(unaff_ESI + 0x119) = (char)(int)((fVar5 * local_18c + local_17c + 1.0) * 127.5);
      }
    }
  }
  cVar8 = '\0';
  cVar7 = (**(code **)*DAT_00469b58)();
  if (((cVar7 != '\0') && (local_188 != (int *)0x0)) &&
     (iVar9 = (**(code **)(**(int **)(local_188[2] + 0xbec) + 0xc))(local_188), iVar9 != 0)) {
    iVar12 = (**(code **)(**(int **)(local_1a4[2] + 0xbec) + 0x70))();
    if (*(int *)(iVar12 + 0x10) == 0) {
      cVar8 = '\0';
    }
    else {
      cVar8 = (**(code **)**(undefined4 **)(*(int *)(iVar12 + 0x10) + 4))(iVar9);
    }
  }
  if ((DAT_004a5c14 != '\0') || (cVar8 != '\0')) {
    *(byte *)(local_1a4 + 0x13) = *(byte *)(local_1a4 + 0x13) | 8;
    local_1a4[0x47] = local_1a4[0x47] | 0xc;
    *(undefined1 *)((int)local_1a4 + 0x119) = 0xff;
  }
  if (local_188 == (int *)0x0) {
    return 1;
  }
  FUN_0011c0b0(param_1);
LAB_000718c9:
  if (local_188 != (int *)0x0) {
    FUN_0008f6e0();
  }
  return 1;
}
