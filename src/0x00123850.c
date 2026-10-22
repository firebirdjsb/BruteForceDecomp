/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E5B7D4D37872832A39AB6640638139F29D64D8EF6F91FD4C9179CD23F0478EC2
 * Entry: 0x00123850, Ghidra index: 3675, label: FUN_00123850
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039dbdc;
/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte FUN_00123850(int param_1,int *param_2)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  float *pfVar4;
  int iVar5;
  undefined4 unaff_EBX;
  undefined4 *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int unaff_retaddr;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  undefined4 uStack_1a8;
  float local_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float local_184;
  float local_180;
  undefined8 uStack_17c;
  float fStack_174;
  undefined8 uStack_170;
  undefined1 auStack_168 [4];
  undefined1 local_164 [4];
  float fStack_160;
  undefined1 auStack_15c [4];
  undefined4 local_158 [10];
  undefined1 auStack_130 [12];
  undefined1 auStack_124 [4];
  undefined **local_120;
  undefined4 local_1c;
  undefined1 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  bVar2 = (byte)((uint)unaff_EBX >> 0x18);
  puVar6 = local_158;
  for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_10 = 0;
  local_1c = 0;
  local_18 = 1;
  local_c = 0;
  local_120 = &PTR_LAB_0039dbdc;
  local_14 = 0xfffffffc;
  local_8 = *(int *)(param_1 + 0x6c);
  if (*(int *)(local_8 + 0x10) != 0) {
    local_8 = *(int *)(local_8 + 8);
  }
  iVar5 = *param_2;
  local_1a4 = *(float *)(iVar5 + 0x40);
  local_184 = *(float *)(iVar5 + 0x3c);
  local_188 = *(float *)(iVar5 + 0x38);
  local_180 = local_1a4;
  pfVar4 = (float *)(**(code **)(*(int *)(param_1 + 0x1b4) + 0x30))(local_164);
  fStack_194 = pfVar4[1];
  fStack_190 = pfVar4[2];
  fStack_198 = *pfVar4;
  uStack_1a8 = 0x3ecccccd;
  local_1a4 = fStack_198 * 0.4;
  fStack_1a0 = fStack_194 * 0.4;
  fStack_19c = fStack_190 * 0.4;
  fStack_18c = fStack_18c - local_1a4;
  local_188 = local_188 - fStack_1a0;
  local_184 = local_184 - fStack_19c;
  fStack_160 = fStack_19c;
  iVar5 = FUN_000ddd10(*(undefined4 *)(unaff_retaddr + 8),&uStack_1a8,auStack_168,auStack_130,
                       &fStack_18c,&fStack_198,auStack_124,0x40000000,0);
  if (iVar5 != 0) {
    bVar2 = FUN_00123430(unaff_retaddr,auStack_15c,param_2);
  }
  local_1a4 = fStack_198 * 0.4;
  fStack_1a0 = fStack_194 * 0.4;
  fStack_19c = fStack_190 * 0.4;
  fStack_18c = local_1a4 + fStack_18c;
  uStack_17c = CONCAT44(fStack_19c,(undefined4)uStack_17c);
  local_188 = fStack_1a0 + local_188;
  fStack_1bc = fStack_194;
  local_184 = fStack_19c + local_184;
  fStack_1c0 = -fStack_190;
  fStack_1b8 = fStack_198;
  iVar5 = FUN_000ddd10(*(undefined4 *)(unaff_retaddr + 8),&uStack_1a8,auStack_168,auStack_130,
                       &fStack_18c,&fStack_1c0,auStack_124,0x3f19999a,0);
  if (iVar5 != 0) {
    bVar3 = FUN_00123430(unaff_retaddr,auStack_15c,param_2);
    bVar2 = bVar2 | bVar3;
  }
  fStack_1b4 = -fStack_1c0;
  fStack_1b0 = 0.0;
  fStack_1ac = -fStack_1b8;
  iVar5 = FUN_000ddd10(*(undefined4 *)(unaff_retaddr + 8),&uStack_1a8,auStack_168,auStack_130,
                       &fStack_18c,&fStack_1b4,auStack_124,0x3f19999a,0);
  if (iVar5 != 0) {
    bVar3 = FUN_00123430(unaff_retaddr,auStack_15c,param_2);
    bVar2 = bVar2 | bVar3;
  }
  local_1a4 = fStack_198 * 0.5;
  fStack_1a0 = fStack_194 * 0.5;
  uStack_170 = CONCAT44(fStack_190 * 0.5,fStack_1a0);
  auVar8._0_4_ = fStack_1c0 * 0.5;
  auVar8._4_4_ = 0;
  auVar8._8_4_ = fStack_1bc * 0.5;
  auVar8._12_4_ = fStack_1b8 * 0.5;
  uStack_17c = auVar8._8_8_;
  fVar1 = fStack_190 * 0.5 + auVar8._12_4_;
  fStack_1bc = fStack_1a0 + auVar8._8_4_;
  fStack_1c0 = local_1a4 + auVar8._0_4_;
  auVar7 = rsqrtss(auVar8,fVar1 * fVar1 + fStack_1c0 * fStack_1c0 + fStack_1bc * fStack_1bc);
  fStack_1b8 = auVar7._0_4_;
  fStack_1c0 = fStack_1b8 * fStack_1c0;
  fStack_1bc = fStack_1bc * fStack_1b8;
  fStack_1b8 = fStack_1b8 * fVar1;
  fStack_19c = auVar8._12_4_;
  local_180 = auVar8._0_4_;
  fStack_174 = local_1a4;
  iVar5 = FUN_000ddd10(*(undefined4 *)(unaff_retaddr + 8),&uStack_1a8,auStack_168,auStack_130,
                       &fStack_18c,&fStack_1c0,auStack_124,0x3f99999a,0);
  if (iVar5 != 0) {
    bVar3 = FUN_00123430(unaff_retaddr,auStack_15c,param_2);
    bVar2 = bVar2 | bVar3;
  }
  local_1a4 = fStack_198 * 0.5;
  fStack_1a0 = fStack_194 * 0.5;
  uStack_17c = CONCAT44(fStack_190 * 0.5,fStack_1a0);
  auVar7._0_4_ = fStack_1b4 * 0.5;
  auVar7._4_4_ = 0;
  auVar7._8_4_ = fStack_1b0 * 0.5;
  auVar7._12_4_ = fStack_1ac * 0.5;
  uStack_170 = auVar7._8_8_;
  fVar1 = fStack_190 * 0.5 + auVar7._12_4_;
  fStack_1b0 = fStack_1a0 + auVar7._8_4_;
  fStack_1b4 = local_1a4 + auVar7._0_4_;
  auVar8 = rsqrtss(auVar7,fVar1 * fVar1 + fStack_1b0 * fStack_1b0 + fStack_1b4 * fStack_1b4);
  fStack_1ac = auVar8._0_4_;
  fStack_1b4 = fStack_1ac * fStack_1b4;
  fStack_1b0 = fStack_1ac * fStack_1b0;
  fStack_1ac = fStack_1ac * fVar1;
  fStack_19c = auVar7._12_4_;
  local_180 = local_1a4;
  fStack_174 = auVar7._0_4_;
  iVar5 = FUN_000ddd10(*(undefined4 *)(unaff_retaddr + 8),&uStack_1a8,auStack_168,auStack_130,
                       &fStack_18c,&fStack_1b4,auStack_124,0x3f99999a,0);
  if (iVar5 != 0) {
    bVar3 = FUN_00123430(unaff_retaddr,auStack_15c,param_2);
    return bVar2 | bVar3;
  }
  return bVar2;
}
