/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3AC6715802AE8AAD5CF7620719703E3793D02B4145B324328D60B792249E16C3
 * Entry: 0x0012cd10, Ghidra index: 3800, label: FUN_0012cd10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003c05a0;
extern uint32_t DAT_003c05dc;
extern uint32_t DAT_003c05e0;
extern uint32_t DAT_003c05e4;
extern uint32_t DAT_0046cfd8;
extern uint32_t PTR_LAB_0039dbbc;
extern uint32_t _DAT_003c0584;
extern uint32_t _DAT_003c058c;
extern uint32_t _DAT_003c059c;
extern uint32_t *_DAT_003c05a4;
extern uint32_t _DAT_003c05a8;
extern uint32_t *_DAT_003c05c0;
extern uint32_t *_DAT_003c05d4;
extern uint32_t _DAT_003c05d8;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0012cd10(int *param_1,float param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  byte bVar7;
  float *pfVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  undefined1 in_XMM0 [16];
  undefined1 auVar14 [12];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined4 local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  float local_220;
  float local_21c;
  float local_218;
  float local_214;
  float local_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  float fStack_19c;
  undefined4 uStack_198;
  undefined **appuStack_194 [65];
  undefined4 uStack_90;
  undefined1 uStack_8c;
  uint uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  int *piStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  undefined1 uStack_68;
  
  if (param_2 <= 1.1920929e-07) {
    local_210 = 0.0;
  }
  else {
    local_210 = 1.0 / param_2;
  }
  pfVar8 = (float *)FUN_00066160();
  local_1d8 = pfVar8[1];
  local_1d4 = pfVar8[2];
  local_1dc = *pfVar8;
  local_1d0 = local_1dc + *(float *)(param_1[0x1b] + 0x38);
  local_1c8 = local_1d4 + *(float *)(param_1[0x1b] + 0x40);
  local_218 = (float)param_1[0x11b];
  local_21c = (float)param_1[0x10e] - *(float *)(param_1[3] + 0x2ac);
  local_220 = (float)param_1[0x119];
  local_214 = local_218;
  local_200 = local_220;
  local_1fc = local_21c;
  local_1f8 = local_218;
  local_1cc = local_21c;
  if ((((*(byte *)((int)param_1 + 0x261) & 0x40) == 0) && ((int *)param_1[0x7f] != (int *)0x0)) &&
     (*(int *)param_1[0x7f] == 0x23)) {
    FUN_0012bf40();
  }
  if ((0.0 < (float)param_1[0x99]) &&
     (param_1[0x99] = (int)((float)param_1[0x99] - param_2), (float)param_1[0x99] < 0.0)) {
    param_1[0x99] = 0;
  }
  if ((((*(byte *)((int)param_1 + 0x261) & 0x40) == 0) ||
      ((char)*(byte *)((int)param_1 + 0x261) < '\0')) && (param_1[0x7c] == 0)) {
    local_1f4 = local_1d0 - (float)param_1[0x119];
    fStack_1f0 = local_1cc - (float)param_1[0x11a];
    fStack_1ec = local_1c8 - (float)param_1[0x11b];
    iVar9 = (**(code **)(**(int **)(param_1[2] + 0xbec) + 0xc))(param_1);
    if (((iVar9 == 0) || (*(int *)(iVar9 + 0x24) == 0)) ||
       ((*(byte *)(*(int *)(iVar9 + 0x24) + 0x14) & 2) == 0)) {
      FUN_0012cb40(param_2);
    }
    else {
      FUN_0012c6c0(param_1,&local_1f4,param_2,&fStack_22c);
    }
  }
  else {
    if ((param_1[0x7c] != 4) ||
       (0.09 <= (float)param_1[0x17c] * (float)param_1[0x17c] +
                (float)param_1[0x17b] * (float)param_1[0x17b] +
                (float)param_1[0x17a] * (float)param_1[0x17a])) {
      param_1[0x11c] = (int)(_DAT_003c058c * (float)param_1[0x11c]);
      param_1[0x11e] = (int)(_DAT_003c058c * (float)param_1[0x11e]);
    }
    else {
      param_1[0x11d] = 0;
    }
    fStack_22c = param_2 * (float)param_1[0x11c];
    fStack_228 = param_2 * (float)param_1[0x11d];
    fStack_224 = param_2 * (float)param_1[0x11e];
  }
  if ((*(byte *)((int)param_1 + 0x262) & 4) != 0) {
    param_1[0x11d] = (int)((float)param_1[0x11d] - _DAT_003c0584 * param_2);
  }
  if (param_1[0x7c] == 2) {
    param_1[0x1ba] = (int)local_1cc;
    param_1[0x7c] = 3;
  }
  FUN_0012c020(param_1,param_2,&fStack_22c);
  auVar14 = in_XMM0._4_12_;
  local_214 = SQRT(fStack_22c * fStack_22c + fStack_228 * fStack_228 + fStack_224 * fStack_224);
  bVar10 = false;
  if ((_DAT_003c059c < local_214 * local_210) || (param_1[0x7c] != 0)) {
    uStack_90 = 0;
    uStack_8c = 1;
    uStack_80 = 0;
    appuStack_194[0] = &PTR_LAB_0039dbbc;
    piStack_7c = param_1;
    iStack_78 = param_1[0x1b];
    uStack_88 = 0xea;
    uStack_84 = 0x15a0000;
    bVar10 = true;
    iVar9 = (**(code **)(**(int **)(param_1[2] + 0xbec) + 0xc))(param_1);
    uVar4 = DAT_003c05e0;
    if ((iVar9 == 0) ||
       ((*(int *)(iVar9 + 0x24) == 0 || ((*(byte *)(*(int *)(iVar9 + 0x24) + 0x14) & 2) == 0)))) {
      iVar9 = (**(code **)(*param_1 + 0xf4))();
      if ((iVar9 == 0) || ((*(uint *)(iVar9 + 0x3c4) & 0x1000) == 0)) {
        uStack_88 = uStack_88 & 0xffffffbf;
      }
      iVar9 = *(int *)(param_1[2] + 0xc54);
      *(undefined4 *)(iVar9 + 0xb4) = 3;
      *(undefined4 *)(iVar9 + 0xb8) = 3;
      *(undefined4 *)(iVar9 + 0xbc) = 2;
    }
    else {
      iVar9 = *(int *)(param_1[2] + 0xc54);
      *(undefined4 *)(iVar9 + 0xb4) = DAT_003c05dc;
      uVar5 = DAT_003c05e4;
      *(undefined4 *)(iVar9 + 0xb8) = uVar4;
      *(undefined4 *)(iVar9 + 0xbc) = uVar5;
    }
    if (((*(byte *)((int)param_1 + 0x262) & 4) == 0) && (param_1[0x7c] == 0)) {
      fStack_1ec = fStack_224;
      fVar2 = fStack_22c * (float)param_1[0x113] +
              fStack_228 * (float)param_1[0x114] + fStack_224 * (float)param_1[0x115];
      fStack_20c = fStack_22c - fVar2 * (float)param_1[0x113];
      fStack_208 = fStack_228 - fVar2 * (float)param_1[0x114];
      fStack_204 = fStack_224 - fVar2 * (float)param_1[0x115];
      fVar2 = fStack_22c * fStack_22c + fStack_228 * fStack_228 + fStack_224 * fStack_224;
      fVar3 = fStack_20c * fStack_20c + fStack_208 * fStack_208 + fStack_204 * fStack_204;
      if ((fVar2 <= 1.4210855e-14) || (fVar3 <= 1.4210855e-14)) {
        fStack_22c = 0.0;
        fStack_228 = 0.0;
        fStack_224 = 0.0;
      }
      else {
        auVar12._0_4_ = SQRT(fVar2);
        auVar12._4_12_ = auVar14;
        auVar13 = rsqrtss(auVar12,fVar3);
        fStack_224 = auVar13._0_4_ * auVar12._0_4_;
        fStack_22c = fStack_20c * fStack_224;
        fStack_228 = fStack_208 * fStack_224 - (local_214 * _DAT_003c05d4 + _DAT_003c05d8);
        fStack_224 = fStack_224 * fStack_204;
        fStack_230 = fVar3;
      }
    }
    iVar9 = param_1[3];
    fStack_234 = *(float *)(iVar9 + 0x1d4);
    if ((param_1[0x7e] == 6) || (param_1[0x7e] == 7)) {
      local_238 = *(undefined4 *)(iVar9 + 0x1dc);
    }
    else {
      local_238 = *(undefined4 *)(iVar9 + 0x1d8);
    }
    FUN_00153810(*(undefined4 *)(param_1[2] + 0xc54),param_1[2],param_1,appuStack_194,fStack_234,
                 local_238,param_2,&local_200,&fStack_22c,&local_220);
  }
  else {
    *(byte *)((int)param_1 + 0x261) = *(byte *)((int)param_1 + 0x261) & 0xfe;
    if ((*(char *)((int)param_1 + 0x43d) == '\x01') && (param_1[0x112] == 0)) {
      *(byte *)((int)param_1 + 0x262) = *(byte *)((int)param_1 + 0x262) | 4;
    }
  }
  fStack_20c = local_220 - local_200;
  fStack_208 = local_21c - local_1fc;
  fStack_204 = local_218 - local_1f8;
  param_1[0x1c4] = (int)(fStack_20c * local_210);
  param_1[0x1c5] = (int)(fStack_208 * local_210);
  param_1[0x1c6] = (int)(fStack_204 * local_210);
  piVar1 = (int *)param_1[0x7f];
  if (((((piVar1 == (int *)0x0) ||
        (((iVar9 = *piVar1, iVar9 != 0x13 && (iVar9 != 0)) && (iVar9 != 0x2b)))) &&
       (param_1[0x7e] != 6)) && ((piVar1 == (int *)0x0 || (*piVar1 != 0x2e)))) ||
     ((bVar10 || (param_1[0x7c] != 0)))) {
    fStack_230 = 0.0;
    fStack_234 = (float)param_1[0x163] - param_2 * 5.0;
    fVar2 = 0.0;
    if (0.0 <= fStack_234) {
      fVar2 = fStack_234;
    }
    param_1[0x163] = (int)fVar2;
  }
  else {
    fStack_234 = param_2 + (float)param_1[0x163];
    fStack_230 = DAT_003c05a0;
    fVar2 = DAT_003c05a0;
    if (fStack_234 <= DAT_003c05a0) {
      fVar2 = fStack_234;
    }
    param_1[0x163] = (int)fVar2;
  }
  local_210 = *(float *)(param_1[3] + 0x2ac) + local_21c;
  if (((DAT_003c05a0 <= (float)param_1[0x163]) && ((*(byte *)((int)param_1 + 0x261) & 0x40) == 0))
     || (param_1[0x7c] == 1)) {
    FUN_0023d6e0(local_210);
  }
  else {
    fStack_234 = 1.0;
    fStack_230 = (float)param_1[0x163] / DAT_003c05a0;
    fVar2 = fStack_230;
    if (1.0 <= fStack_230) {
      fVar2 = 1.0;
    }
    fStack_1e4 = local_21c;
    fStack_1e8 = (local_1d0 - local_220) * fVar2 + local_220;
    fStack_1e0 = (local_1c8 - local_218) * fVar2 + local_218;
    local_210 = *(float *)(param_1[3] + 0x2ac) + local_21c;
    FUN_0023d6e0(local_210);
    local_1f4 = local_1d0 - fStack_1e8;
    fStack_1f0 = local_1cc - fStack_1e4;
    fStack_1ec = local_1c8 - fStack_1e0;
    fStack_1e8 = fStack_1e8 - local_1dc;
    fStack_1e4 = fStack_1e4 - local_1d8;
    fStack_1e0 = fStack_1e0 - local_1d4;
    FUN_0023d4f0(&fStack_1e8);
    iVar9 = (**(code **)(**(int **)(param_1[2] + 0xbec) + 0xc))(param_1);
    if ((((iVar9 != 0) && (*(int *)(iVar9 + 0x24) != 0)) &&
        ((*(byte *)(*(int *)(iVar9 + 0x24) + 0x14) & 2) != 0)) &&
       (((param_1[0x7c] != 0 || (param_1[0x7e] == 8)) ||
        ((cVar6 = FUN_00126a40(), cVar6 != '\0' ||
         (_DAT_003c05c0 * _DAT_003c05c0 <
          local_1f4 * local_1f4 + fStack_1f0 * fStack_1f0 + fStack_1ec * fStack_1ec)))))) {
      FUN_002368d0(1);
    }
  }
  if (!bVar10) goto LAB_0012d7a3;
  *(byte *)((int)param_1 + 0x261) = *(byte *)((int)param_1 + 0x261) & 0xfe;
  if (param_1[0x7c] == 0) {
    if (1.1920929e-07 < local_214) {
      bVar7 = *(byte *)((int)param_1 + 0x261) ^
              (*(byte *)((int)param_1 + 0x261) ^
              fStack_20c * fStack_20c + fStack_208 * fStack_208 + fStack_204 * fStack_204 <
              local_214 * _DAT_003c05a4 * local_214 * _DAT_003c05a4) & 1;
      goto LAB_0012d757;
    }
  }
  else if (1.1920929e-07 < ABS(fStack_228)) {
    bVar7 = *(byte *)((int)param_1 + 0x261) ^
            (*(byte *)((int)param_1 + 0x261) ^ ABS(fStack_208 / fStack_228) < _DAT_003c05a4) & 1;
LAB_0012d757:
    *(byte *)((int)param_1 + 0x261) = bVar7;
  }
  if ((*(byte *)((int)param_1 + 0x261) & 1) != 0) {
    if ((*(byte *)((int)param_1 + 0x261) & 0x40) != 0) {
      FUN_0012bf40();
    }
    if ((float)param_1[0x11d] < _DAT_003c05a8) {
      *(byte *)((int)param_1 + 0x262) = *(byte *)((int)param_1 + 0x262) & 0xfb;
    }
  }
LAB_0012d7a3:
  bVar10 = false;
  if ((*(byte *)((int)param_1 + 0x262) & 4) == 0) {
    bVar10 = param_1[0x7c] == 3;
    if (bVar10) {
      FUN_0012b740(local_21c);
    }
    param_1[0x11d] = 0;
  }
  else if (param_1[0x7c] == 0) {
    FUN_0012b950();
  }
  if (*(char *)((int)param_1 + 0x43d) == '\x01') {
    bVar11 = param_1[0x112] == 0;
  }
  else {
    bVar11 = *(char *)((int)param_1 + 0x43d) == '\0';
  }
  if (bVar11) {
    FUN_0012dc00(0x3f800000,0x41a00000,&fStack_234);
  }
  if ((bVar10) && ((short)param_1[0x41] < 1)) {
    uStack_1a8 = 0;
    uStack_1ac = 0;
    uStack_1b0 = 0;
    uStack_1b8 = 0;
    uStack_1bc = 0;
    uStack_1c0 = 0;
    uStack_1a4 = 0x3f800000;
    uStack_1b4 = 0x3f800000;
    uStack_1c4 = 0x3f800000;
    fStack_234 = (float)param_1[0x10e];
    iVar9 = param_1[0x1b];
    fStack_230 = *(float *)(iVar9 + 0x40);
    uStack_1a0 = *(undefined4 *)(iVar9 + 0x38);
    fStack_19c = fStack_234;
    uStack_198 = fStack_230;
    FUN_000def50(0x3f800000);
    DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
    FUN_0003f010();
    fStack_230 = *(float *)(iVar9 + 0x40);
    fStack_234 = *(float *)(iVar9 + 0x3c);
    uStack_74 = *(undefined4 *)(iVar9 + 0x38);
    uStack_68 = 1;
    fStack_70 = fStack_234;
    uStack_6c = fStack_230;
    FUN_0017c020(&uStack_74);
  }
  param_1[0x119] = (int)local_220;
  param_1[0x11a] = (int)local_21c;
  param_1[0x11b] = (int)local_218;
  param_1[0x116] = (int)(local_220 - local_1dc);
  param_1[0x117] = (int)(local_21c - local_1d8);
  param_1[0x118] = (int)(local_218 - local_1d4);
  param_1[0x10e] = (int)(local_210 - local_1d8);
  return;
}
