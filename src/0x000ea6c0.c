/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 272AF2618E95B4F997AA72A4F2BC3BA0B3D4B2B19C4BA5B93EFAE4871989B6F9
 * Entry: 0x000ea6c0, Ghidra index: 2890, label: FUN_000ea6c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a8cf0;
extern uint32_t _DAT_0040cf4c;
extern uint32_t _DAT_0040cf50;
extern uint32_t *_DAT_0040cf54;
extern uint32_t _DAT_004a8cf0;
extern uint32_t _DAT_004a8cf4;
extern uint32_t _DAT_004a8cf8;
extern uint32_t _DAT_004a8cfc;
extern uint32_t _DAT_004a8d00;
extern uint32_t _DAT_004a8d04;
extern uint32_t _DAT_004a8d08;
extern uint32_t _DAT_004a8d0c;
extern uint32_t _DAT_004a8d10;
extern uint32_t _DAT_004a8d14;
extern uint32_t _DAT_004a8d18;
extern uint32_t _DAT_004a8d1c;
extern uint32_t _DAT_004a8d20;
extern uint32_t _DAT_004a8d24;
extern uint32_t _DAT_004a8d28;
extern uint32_t _DAT_004a8d2c;
extern uint32_t _DAT_004a8d30;
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000ea6c0(int param_1,int param_2,int param_3,int *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  float10 fVar7;
  float fVar8;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110 [48];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (param_3 == 0) {
    if (param_4 == (int *)0x0) {
      return 0;
    }
  }
  else if (param_4 != (int *)0x0) {
    return 0;
  }
  local_134 = 0.0;
  if (param_3 == 0) {
    local_134 = *(float *)(*param_4 + 0x20);
    pfVar1 = *(float **)(*param_4 + 0x1c);
    fVar8 = pfVar1[2];
    fVar2 = pfVar1[1];
    fVar3 = *pfVar1;
    local_128 = fVar3 * (float)param_4[5] + fVar8 * (float)param_4[7] + fVar2 * (float)param_4[6] +
                (float)param_4[0xe];
    local_124 = fVar8 * (float)param_4[10] + fVar3 * (float)param_4[8] + fVar2 * (float)param_4[9] +
                (float)param_4[0xf];
    local_130 = fVar8 * (float)param_4[0xd] +
                fVar3 * (float)param_4[0xb] + fVar2 * (float)param_4[0xc] + (float)param_4[0x10];
    local_120 = local_130;
    local_11c = local_124;
  }
  else {
    FUN_00022bc0(&local_134);
  }
  fVar8 = local_128;
  iVar4 = *(int *)(*(int *)(param_2 + 0x80) + 0xa40);
  local_12c = local_120;
  if (iVar4 == 0) {
    fVar7 = (float10)0.0;
  }
  else {
    cVar6 = FUN_001f4740(iVar4,&local_130,&local_11c,local_128,local_120);
    if ((cVar6 == '\0') ||
       ((**(int **)(iVar4 + 0x20) * (int)local_11c + (int)local_130) * 0x40 + *(int *)(iVar4 + 0x18)
        == 0)) {
      fVar7 = (float10)-3.4028235e+38;
    }
    else {
      fVar7 = (float10)FUN_001f3aa0(fVar8,local_12c);
    }
  }
  fVar8 = (float)fVar7;
  if (fVar7 == (float10)-3.4028235e+38) {
    fVar8 = 0.0;
  }
  local_11c = 0.0;
  local_124 = local_124 + local_134;
  local_134 = (local_124 - fVar8) * _DAT_0040cf54 * 0.5;
  local_124 = local_124 - local_134;
  fVar8 = (local_124 - local_134) - fVar8;
  if (0.0 < fVar8) {
    local_130 = (fVar8 / local_134) / _DAT_0040cf50;
    local_12c = local_130;
    if (local_130 <= 0.0) {
      local_12c = 0.0;
    }
    local_11c = local_12c;
    if (1.0 <= local_12c) {
      local_12c = 1.0;
      local_11c = 1.0;
    }
  }
  local_110[0x10] = 0.0;
  local_110[0x11] = 0.0;
  local_110[0x12] = 0.0;
  local_110[0x13] = 0.0;
  local_110[0x14] = 0.0;
  local_110[0x15] = 0.0;
  local_110[0x16] = 0.0;
  local_110[0x17] = 0.0;
  local_110[0x18] = 0.0;
  local_110[0x19] = 0.0;
  local_110[0x1a] = 0.0;
  local_110[0x1b] = 0.0;
  local_110[0x1c] = 0.0;
  local_110[0x1d] = 0.0;
  local_110[0x1e] = 0.0;
  local_110[0x1f] = 0.0;
  local_110[4] = 0.0;
  local_110[5] = 0.0;
  local_110[0xe] = 0.0;
  local_110[3] = 0.0;
  local_110[2] = 5.0;
  local_110[0] = 0.0;
  local_110[1] = 0.0;
  local_110[0xd] = 0.0;
  local_110[0xf] = 0.0;
  local_114 = 0.0;
  local_118 = 0.0;
  local_110[6] = 0.0;
  local_110[7] = 0.0;
  local_110[8] = 0.0;
  local_110[9] = 0.0;
  local_110[10] = 0.0;
  local_110[0xb] = 0.0;
  local_110[0xc] = 0.0;
  uVar5 = (uint)local_12c >> 8;
  local_12c = (float)((uint)local_12c & 0xffffff00);
  if ((param_3 != 0) && (*(int *)(*(int *)(param_3 + 0xc) + 4) == 3)) {
    local_12c = (float)(CONCAT31((int3)uVar5,*(undefined1 *)(param_3 + 0x43c)) & 0xffffff01);
  }
  cVar6 = FUN_000ea0a0(param_1,local_110 + 0x10,local_110 + 9,local_110 + 3,local_110 + 2,
                       local_110 + 0xd,local_110,local_110 + 1,local_110 + 6,&local_118,&local_114,
                       &local_128,local_134,local_12c,param_2);
  if (cVar6 == '\0') {
    return 0;
  }
  *(float *)(param_2 + 0x40) = local_110[0x10];
  *(float *)(param_2 + 0x44) = local_110[0x11];
  *(float *)(param_2 + 0x48) = local_110[0x12];
  *(float *)(param_2 + 0x4c) = local_110[0x13];
  *(float *)(param_2 + 0x50) = local_110[0x14];
  *(float *)(param_2 + 0x54) = local_110[0x15];
  *(float *)(param_2 + 0x58) = local_110[0x16];
  *(float *)(param_2 + 0x5c) = local_110[0x17];
  *(float *)(param_2 + 0x60) = local_110[0x18];
  *(float *)(param_2 + 100) = local_110[0x19];
  *(float *)(param_2 + 0x68) = local_110[0x1a];
  *(float *)(param_2 + 0x6c) = local_110[0x1b];
  *(float *)(param_2 + 0x70) = local_110[0x1c];
  *(float *)(param_2 + 0x74) = local_110[0x1d];
  *(float *)(param_2 + 0x78) = local_110[0x1e];
  *(float *)(param_2 + 0x7c) = local_110[0x1f];
  if ((_DAT_004a8d30 & 1) == 0) {
    _DAT_004a8d30 = _DAT_004a8d30 | 1;
    _DAT_004a8cf0 = 0x3f000000;
    _DAT_004a8cf4 = 0;
    _DAT_004a8cf8 = 0;
    _DAT_004a8cfc = 0x3f000000;
    _DAT_004a8d00 = 0;
    _DAT_004a8d04 = 0x3f000000;
    _DAT_004a8d08 = 0;
    _DAT_004a8d0c = 0x3f000000;
    _DAT_004a8d10 = 0;
    _DAT_004a8d14 = 0;
    _DAT_004a8d18 = 0x3f800000;
    _DAT_004a8d1c = 0;
    _DAT_004a8d20 = 0;
    _DAT_004a8d24 = 0;
    _DAT_004a8d28 = 0;
    _DAT_004a8d2c = 0x3f800000;
  }
  FUN_002337a0(&local_50,&DAT_004a8cf0,local_110 + 0x10);
  fVar8 = local_118;
  if (local_118 <= local_134) {
    fVar8 = local_134;
  }
  *(float *)(param_2 + 0x14) = local_128;
  *(float *)(param_2 + 0x18) = local_124;
  *(float *)(param_2 + 0x1c) = local_120;
  *(float *)(param_2 + 0x20) = fVar8;
  *(float *)(*(int *)(param_1 + 0x5c) + 0xac) = local_118;
  iVar4 = *(int *)(param_1 + 0x5c);
  *(float *)(iVar4 + 0x10) = local_110[6];
  *(float *)(iVar4 + 0x14) = local_110[7];
  *(float *)(iVar4 + 0x18) = local_110[8];
  iVar4 = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(iVar4 + 0x180) = 0;
  *(undefined4 *)(iVar4 + 0x17c) = 0x3f800000;
  *(float *)(*(int *)(param_1 + 0x5c) + 0xb8) = ((fVar8 + local_134) / fVar8) * 0.5;
  *(float *)(*(int *)(param_1 + 0x5c) + 0xbc) = local_134 / (fVar8 + local_134);
  iVar4 = *(int *)(param_1 + 0x5c);
  *(float *)(iVar4 + 0xc4) = local_110[4];
  *(float *)(iVar4 + 0xc0) = local_110[3];
  *(undefined4 *)(iVar4 + 0xcc) = 0x3f800000;
  *(float *)(iVar4 + 200) = local_110[5];
  fVar8 = _DAT_0040cf4c - 1.0;
  iVar4 = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(iVar4 + 0x28) = local_50;
  *(undefined4 *)(iVar4 + 0x2c) = uStack_4c;
  *(undefined4 *)(iVar4 + 0x30) = uStack_48;
  *(undefined4 *)(iVar4 + 0x34) = uStack_44;
  *(undefined4 *)(iVar4 + 0x38) = local_40;
  *(undefined4 *)(iVar4 + 0x3c) = uStack_3c;
  *(undefined4 *)(iVar4 + 0x40) = uStack_38;
  *(undefined4 *)(iVar4 + 0x44) = uStack_34;
  *(undefined4 *)(iVar4 + 0x48) = local_30;
  *(undefined4 *)(iVar4 + 0x4c) = uStack_2c;
  *(undefined4 *)(iVar4 + 0x50) = uStack_28;
  *(undefined4 *)(iVar4 + 0x54) = uStack_24;
  *(undefined4 *)(iVar4 + 0x58) = local_20;
  *(undefined4 *)(iVar4 + 0x5c) = uStack_1c;
  *(undefined4 *)(iVar4 + 0x60) = uStack_18;
  *(undefined4 *)(iVar4 + 100) = uStack_14;
  *(float *)(*(int *)(param_1 + 0x5c) + 0xb0) = fVar8 * local_110[0] + 1.0;
  *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0xb4) = *(undefined4 *)(param_1 + 0x58);
  iVar4 = *(int *)(param_1 + 0x5c);
  *(float *)(iVar4 + 0xd4) = local_110[10];
  *(float *)(iVar4 + 0xd0) = local_110[9];
  *(float *)(iVar4 + 0xd8) = local_110[0xb];
  *(float *)(iVar4 + 0xdc) = local_110[0xc];
  *(float *)(param_2 + 0x2c) =
       1.0 - (1.0 - local_11c) * (1.0 - local_114) * (1.0 - *(float *)(param_2 + 0x2c));
  return 1;
}
