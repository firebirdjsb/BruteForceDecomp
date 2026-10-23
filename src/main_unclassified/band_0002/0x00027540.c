/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 438F31BB01F3C29793524A5B2CE9A3771FB6FB699AB5A7CFD44E874D902830EB
 * Entry: 0x00027540, Ghidra index: 272, label: FUN_00027540
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039cc18;
undefined4 FUN_00027540(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  float *pfVar9;
  int iVar10;
  float fVar11;
  undefined1 in_XMM0 [16];
  undefined1 auVar12 [16];
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  undefined8 uStack_198;
  float fStack_190;
  uint uStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  undefined4 local_17c;
  int iStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  undefined4 uStack_168;
  float fStack_164;
  undefined8 uStack_160;
  undefined1 auStack_158 [4];
  int iStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  char cStack_138;
  undefined4 uStack_134;
  undefined **local_11c;
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_17c = 0;
  piVar5 = (int *)FUN_000120f0();
  local_18 = 0;
  local_14 = 1;
  local_8 = 0;
  local_11c = &PTR_LAB_0039cc18;
  local_10 = 0x58;
  local_c = 0x415a1018;
  iVar6 = (**(code **)(*piVar5 + 0x40))();
  pfVar9 = (float *)(iVar6 + 0x24);
  iVar7 = (**(code **)(piVar5[0x6d] + 0x28))();
  fStack_16c = *(float *)(iVar7 + 0x20);
  fStack_180 = -fStack_16c;
  fStack_188 = -*(float *)(iVar7 + 8);
  fStack_1a8 = fStack_188 * fStack_188 + fStack_180 * fStack_180;
  auVar12 = rsqrtss(in_XMM0,fStack_1a8);
  fStack_1a4 = auVar12._0_4_;
  fStack_188 = fStack_1a4 * fStack_188;
  fStack_184 = fStack_1a4 * 0.0;
  fStack_180 = fStack_180 * fStack_1a4;
  FUN_00027490();
  fStack_1a4 = 0.0;
  auVar12._0_4_ = fStack_164 * 25.0;
  auVar12._4_4_ = 0;
  auVar12._8_4_ = (float)uStack_160 * 25.0;
  auVar12._12_4_ = (float)((ulonglong)uStack_160 >> 0x20) * 25.0;
  uStack_198 = auVar12._8_8_;
  fStack_1a8 = auVar12._12_4_ + *(float *)(iVar6 + 0x2c);
  fStack_1a0 = auVar12._8_4_ + *(float *)(iVar6 + 0x28);
  fStack_174 = auVar12._0_4_ + *pfVar9;
  fStack_19c = auVar12._0_4_;
  fStack_170 = fStack_1a0;
  fStack_16c = fStack_1a8;
  cStack_138 = FUN_0004cd10(piVar5[2],0x41c8cccd);
  if (cStack_138 == '\0') {
    iStack_154 = 0;
    uStack_150 = 0;
    uStack_14c = 0;
    uStack_144 = 0;
    uStack_148 = 0xffffffff;
    uStack_13c = 0;
    uStack_140 = 0x7f7fffff;
    uStack_134 = 0;
    if (((*(byte *)(piVar5 + 0x10f) & 1) == 0) || (cVar4 = FUN_00032fd0(auStack_158), cVar4 == '\0')
       ) {
      fStack_170 = 0.0;
      fStack_16c = 0.0;
      uStack_168 = 0;
      FUN_0001b650();
      iVar7 = piVar5[0x93];
      fStack_19c = 0.8;
      uStack_198 = 0x3e4ccccd3f000000;
      fStack_190 = -0.5;
      uStack_18c = 0xbf800000;
      fStack_1a8 = 0.0;
      iVar10 = 0;
      do {
        if (fStack_170 != 0.0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(fStack_170);
        }
        fStack_170 = 0.0;
        fStack_16c = 0.0;
        uStack_168 = 0;
        FUN_0004c120(pfVar9,iVar7,0,&fStack_1a8,0x44610000,&fStack_188,(&fStack_19c)[iVar10],0x12,
                     &fStack_174);
        if (fStack_1a8 != 0.0) {
          fStack_190 = fStack_1a8;
          uStack_18c = uStack_18c & 0xfffffffc;
          uStack_198 = 0;
          fStack_19c = 0.0;
          if (*(int *)(param_1 + 8) == 0) {
            bVar8 = (byte)local_17c;
          }
          else {
            bVar8 = 1;
            iStack_178 = 0;
          }
          if (((bVar8 & 1) != 0) && (iStack_178 != 0)) {
            FUN_0008f6e0();
          }
          FUN_0011dfa0();
          cVar4 = FUN_000416a0(auStack_158,0);
          if (cVar4 != '\0') {
            fStack_1a4 = *(float *)(iStack_154 + 0x14);
          }
          break;
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < 5);
      if (fStack_170 != 0.0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(fStack_170);
      }
      fStack_170 = 0.0;
      fStack_16c = 0.0;
      uStack_168 = 0;
    }
    else {
      fStack_1a4 = *(float *)(iStack_154 + 0x14);
    }
    FUN_0001bc90();
    if ((fStack_1a4 != 0.0) &&
       (fVar1 = *(float *)((int)fStack_1a4 + 0x1c) - *(float *)(iVar6 + 0x2c),
       fVar2 = *(float *)((int)fStack_1a4 + 0x18) - *(float *)(iVar6 + 0x28),
       fVar3 = *(float *)((int)fStack_1a4 + 0x14) - *pfVar9,
       1.1920929e-07 < fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3)) {
      fVar1 = *(float *)((int)fStack_1a4 + 0x1c) - *(float *)(iVar6 + 0x2c);
      fVar2 = *(float *)((int)fStack_1a4 + 0x18) - *(float *)(iVar6 + 0x28);
      fVar3 = *(float *)((int)fStack_1a4 + 0x14) - *pfVar9;
      auVar12 = rsqrtss(auVar12,fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3);
      fVar11 = auVar12._0_4_;
      *param_2 = fVar11 * fVar3;
      param_2[1] = fVar2 * fVar11;
      param_2[2] = fVar1 * fVar11;
      return 1;
    }
  }
  return 0;
}
