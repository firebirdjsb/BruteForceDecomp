/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A930C19DCF76A0AAC5037E269379216513229EE6516A0984038D4C75576A780A
 * Entry: 0x00119020, Ghidra index: 3604, label: FUN_00119020
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
void FUN_00119020(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int extraout_EDX;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_134;
  float local_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined1 local_110 [4];
  undefined4 uStack_10c;
  float fStack_108;
  undefined4 uStack_100;
  float fStack_fc;
  undefined4 uStack_f4;
  float fStack_f0;
  undefined4 local_ec;
  float local_e8;
  undefined4 local_e4;
  float fStack_dc;
  float fStack_d8;
  float fStack_94;
  undefined1 uStack_90;
  float fStack_8c;
  undefined1 uStack_88;
  undefined1 local_64 [48];
  undefined1 local_34 [52];
  
  if (param_2 == '\0') {
    iVar2 = *(int *)(param_1 + 0x42c);
    iVar4 = *(int *)(param_1 + 0x424);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x428);
    iVar4 = *(int *)(param_1 + 0x420);
  }
  if (iVar4 == -1) {
    return;
  }
  if (*(int *)(param_1 + 0x1f8) == 8) {
    iVar5 = 100;
    local_12c = 1.0;
  }
  else {
    cVar1 = FUN_00126a40();
    if (cVar1 == '\0') {
      if (extraout_EDX == 7) {
        iVar5 = 0x23;
        local_12c = 0.35;
      }
      else {
        iVar5 = 0x32;
        local_12c = 0.5;
      }
    }
    else {
      iVar5 = 100;
      local_12c = 1.0;
    }
  }
  FUN_002333b0(iVar2 + 0x14);
  local_e8 = *(float *)(iVar2 + 0xc);
  local_e4 = *(undefined4 *)(iVar2 + 0x10);
  local_ec = *(undefined4 *)(iVar2 + 8);
  iVar2 = FUN_002338c0(local_34,iVar4 + 0x14,local_110);
  FUN_0003d6c0(local_64,iVar2,iVar2 + 0x24);
  FUN_0003d730(local_110,local_64);
  iVar2 = *(int *)(*(int *)(param_1 + 8) + 0xbd8) + 0xc + *(int *)(param_1 + 0x440) * 0x14;
  if (iVar5 != 0) {
    iVar4 = *(int *)(param_1 + 0x410);
    if (((iVar4 == 0) &&
        (*(int *)(iVar2 + 0xc) + 0x4a8 + *(int *)(*(int *)(param_1 + 0xc) + 0x214) * 0x14 != 0)) &&
       (*(short *)(param_1 + 0x104) < 1)) {
      piVar3 = (int *)FUN_0012af30();
      iVar4 = *piVar3;
    }
    *(undefined4 *)(param_1 + 0x410) = 0;
    fVar6 = (float10)(**(code **)(**(int **)(param_1 + 0x5a4) + 0xe8))();
    fVar8 = (float)fVar6;
    local_134 = fVar8;
    if (0 < *(short *)(param_1 + 0x104)) {
      fVar9 = *(float *)(param_1 + 0x414) - local_e8;
      if (fVar9 <= 0.25) goto LAB_001192d5;
      local_134 = 1.0;
      if (fVar9 <= 1.0) {
        local_134 = fVar9;
      }
      if (local_134 <= fVar8) {
        local_134 = fVar8;
      }
    }
    if (iVar4 != 0) {
      FUN_0003f010();
      cVar1 = FUN_00112790();
      if (cVar1 == '\0') {
        FUN_00040f10();
        fStack_8c = local_134 * local_12c;
        uStack_88 = 1;
      }
      else {
        uStack_88 = 1;
        fStack_8c = local_134 * local_12c * 0.75;
        FUN_00040f10();
      }
      uStack_90 = 1;
      fVar6 = (float10)FUN_00233b90();
      fStack_94 = (float)(fVar6 * (float10)0.7 - (float10)0.35);
      FUN_00179250(*(undefined4 *)(*(int *)(param_1 + 8) + 0x208),iVar4,4);
    }
  }
LAB_001192d5:
  if (((*(float *)(*(int *)(param_1 + 8) + 0xc58) <= 0.2) &&
      (*(int *)(*(int *)(param_1 + 8) + 0xc70) < 2)) && (cVar1 = FUN_00126c60(0,0), cVar1 != '\0'))
  {
    uStack_11c = uStack_10c;
    uStack_118 = uStack_100;
    uStack_114 = uStack_f4;
    fStack_d8 = fStack_f0;
    fStack_120 = -fStack_f0;
    fStack_dc = fStack_fc;
    fStack_124 = -fStack_fc;
    fStack_128 = -fStack_108;
    fVar8 = *(float *)(param_1 + 0x418) * 0.5;
    iVar4 = *(int *)(param_1 + 0x448);
    fVar9 = 1.0;
    if (fVar8 <= 1.0) {
      fVar9 = fVar8;
    }
    if ((0.0 < local_12c) && (iVar5 = FUN_0012e920(), iVar5 != 0)) {
      fVar8 = fVar9 * 0.6 + *(float *)(*(int *)(iVar2 + 0xc) + 0x4a4) * local_12c;
      fVar7 = 1.0;
      if (fVar8 <= 1.0) {
        fVar7 = fVar8;
      }
      FUN_00213e60(*(undefined4 *)(*(int *)(param_1 + 8) + 0x200),&local_ec,&uStack_11c,&fStack_128,
                   iVar5,0x3f800000,fVar7,iVar4,0,iVar4 == 0,1);
    }
    if ((0.0 < fVar9) && (iVar5 = FUN_0012e9a0(), iVar5 != 0)) {
      FUN_00213e60(*(undefined4 *)(*(int *)(param_1 + 8) + 0x200),&local_ec,&uStack_11c,&fStack_128,
                   iVar5,0x3f800000,fVar9,iVar4,0,iVar4 == 0,1);
    }
    if (*(short *)(param_1 + 0x104) < 1) {
      local_12c = *(float *)(*(int *)(param_1 + 0xc) + 0x21c) * local_12c;
      fVar8 = 0.0;
      if (0.0 <= local_12c) {
        fVar8 = local_12c;
      }
      fVar9 = 1.0;
      if (fVar8 <= 1.0) {
        fVar9 = fVar8;
      }
      if ((*(int *)(*(int *)(iVar2 + 0xc) + 0x49c) != DAT_0046d064) && (fVar9 != 0.0)) {
        FUN_000def50(fVar9);
      }
    }
  }
  return;
}
