/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8410B9159F7E13616468E55670C8D2C5B39AACB44E5CE477A904D7F75571CD49
 * Entry: 0x002d29f0, Ghidra index: 10196, label: FUN_002d29f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_00000000;
extern uint32_t switchD_002d2bc8_default[];
/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xffffff80 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002d29f0(int param_1)

{
  double *pdVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  float *pfVar6;
  byte *pbVar7;
  float10 fVar8;
  byte *local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a4;
  uint local_94;
  float *local_90;
  float *local_8c;
  int32_t guest_mode_16;
  int32_t guest_mode_2a;
  uint *local_88;
  float local_84;
  float local_80;
  float fStack_7c;
  undefined4 local_78;
  uint *local_74;
  float local_70;
  float local_6c;
  float fStack_68;
  undefined4 local_64;
  float *local_58;
  int local_50;
  uint *local_4c;
  int local_48;
  undefined4 local_44;
  int local_40;
  int local_38;
  uint *local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  undefined1 local_20 [12];
  undefined4 local_14;
  
  local_94 = *(int *)(*(int *)(param_1 + 0x10) + 0x14);
  iVar3 = *(int *)(local_94 + 0xac);
  pfVar6 = *(float **)(iVar3 + 8);
  uVar5 = (int)pfVar6 + 0xefU & 0xffffffe0;
  if (uVar5 < *(uint *)(iVar3 + 0xc)) {
    *(uint *)(iVar3 + 8) = uVar5;
  }
  else {
    pfVar6 = (float *)FUN_002bbe20();
  }
  *(undefined1 *)(pfVar6 + 0x13) = 0;
  *(undefined2 *)((int)pfVar6 + 0x4a) = 0;
  pfVar6[0x13] = (float)((uint)pfVar6[0x13] & 0xfffffcff);
  *(float **)(param_1 + 0x40) = pfVar6;
  iVar3 = param_1 + 8;
  *(int *)(local_94 + 0x88) = *(int *)(local_94 + 0x88) + 1;
  /* Original 0x002D2A6C/0x002D2A70: MOVSX EAX/EDX,BYTE PTR.
   * These are signed control selectors, not guest or host pointers.
   * The later float* variables reuse the decompiler's local names but
   * hold actual pointers only after the dispatch at LAB_002D2C8B. */
  guest_mode_16 = (int32_t)*(int8_t *)(uintptr_t)(param_1 + 0x16);
  guest_mode_2a = (int32_t)*(int8_t *)(uintptr_t)(param_1 + 0x2a);
  uVar5 = *(uint *)(param_1 + 0x2c);
  local_a4 = 0;
  local_a8 = 0.0;
  local_ac = 0.0;
  local_b0 = 0.0;
  local_88 = (uint *)(uVar5 & 0xfffffff0) + ((*(uint *)(uVar5 & 0xfffffff0) & 0xfff) + 1) * -4;
  local_94 = *(undefined4 *)(param_1 + 0x24);
  local_58 = pfVar6;
  local_4c = local_88;
  local_48 = FUN_002c1560();
  local_44 = local_94;
  local_50 = *local_88 + (int)local_88;
  local_94 = *(uint *)(param_1 + 0x18);
  local_88 = *(uint **)(param_1 + 0x10);
  local_74 = (uint *)(local_94 & 0xfffffff0) + ((*(uint *)(local_94 & 0xfffffff0) & 0xfff) + 1) * -4
  ;
  local_40 = param_1 + 0x1c;
  local_34 = local_74;
  local_30 = FUN_002c1560();
  local_2c = local_88;
  local_38 = *local_74 + (int)local_74;
  local_64 = 0;
  local_28 = iVar3;
  if (guest_mode_16 == 0) {
    FUN_00150930();
LAB_002d2bbb:
    switch(guest_mode_2a) {
    case 0:
      local_14 = 0;
      FUN_00150930();
      FUN_002d1e80(param_1,&local_70,local_20,pfVar6,&local_b0);
      break;
    case 1:
      FUN_002d1fa0(param_1,&local_70,uVar5,&local_50,pfVar6,&local_b0);
      break;
    case 2:
      FUN_002d1be0(param_1,&local_70,uVar5,&local_50,pfVar6,&local_b0);
      break;
    case 3:
      FUN_002d1e80(param_1,&local_70,local_48 + 0x40,pfVar6,&local_b0);
      break;
    default:
      goto switchD_002d2bc8_default;
    }
  }
  else {
    if (guest_mode_16 == 1) {
      FUN_002d22b0(param_1,local_94,uVar5,&local_38,&local_50,pfVar6,&local_b0);
      goto LAB_002d2c8b;
    }
    if (guest_mode_16 == 3) {
      local_6c = *(float *)(local_30 + 0x44);
      local_70 = *(float *)(local_30 + 0x40);
      fStack_68 = *(float *)(local_30 + 0x48);
      *(undefined1 *)(param_1 + 0x60) = 1;
      goto LAB_002d2bbb;
    }
switchD_002d2bc8_default:
    _DAT_00000000 = 0;
  }
LAB_002d2c8b:
  local_88 = *(uint **)(*(int *)(param_1 + 0x10) + 0x88);
  local_90 = pfVar6 + 8;
  uVar2 = *(undefined8 *)(local_58 + 1);
  *local_90 = *local_90 + *local_58 * (float)local_88;
  *(ulonglong *)(pfVar6 + 9) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(pfVar6 + 9) >> 0x20) +
                (float)((ulonglong)uVar2 >> 0x20) * (float)local_88,
                (float)*(undefined8 *)(pfVar6 + 9) + (float)uVar2 * (float)local_88);
  *(float *)(param_1 + 0x58) =
       *(float *)(param_1 + 0x58) - (*(float *)(*(int *)(param_1 + 0x24) + 0x88) + (float)local_88);
  if (*(float *)(param_1 + 0x58) < 0.0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  *(int *)(local_30 + 100) = *(int *)(local_30 + 100) + -1;
  *(int *)(local_48 + 100) = *(int *)(local_48 + 100) + -1;
  local_8c = local_90;
  local_74 = local_88;
  FUN_002b65a0(pfVar6 + 0x1c);
  pfVar6[0x20] = pfVar6[0x1e] * pfVar6[1] - pfVar6[2] * pfVar6[0x1d];
  pfVar6[0x21] = pfVar6[2] * pfVar6[0x1c] - pfVar6[0x1e] * *pfVar6;
  pfVar6[0x22] = *pfVar6 * pfVar6[0x1d] - pfVar6[1] * pfVar6[0x1c];
  local_78 = 0;
  local_b4 = *(byte **)(*(int *)(param_1 + 0x10) + 0x90);
  if ((*local_b4 & 0xc) == 0) {
    local_a4 = 0;
    FUN_002b7360(local_b4 + 0xfc,pfVar6 + 8,pfVar6 + 0x24);
    FUN_002b73d0(local_b4 + 0xfc,pfVar6,&local_b0);
    pfVar6[0x2c] = local_a8 * pfVar6[0x25] - local_ac * pfVar6[0x26];
    pfVar6[0x2d] = local_b0 * pfVar6[0x26] - local_a8 * pfVar6[0x24];
    pfVar6[0x2e] = local_ac * pfVar6[0x24] - local_b0 * pfVar6[0x25];
    FUN_002ba160(local_b4,pfVar6 + 0x24,local_b4 + 0xac,local_b4 + 0x9c,&local_84);
    pfVar6[0x19] = *(float *)(local_b4 + 0x34) * pfVar6[0x2c] * pfVar6[0x2c] +
                   pfVar6[0x2d] * *(float *)(local_b4 + 0x38) * pfVar6[0x2d] +
                   pfVar6[0x2e] * *(float *)(local_b4 + 0x3c) * pfVar6[0x2e] +
                   *(float *)(local_b4 + 0x40);
  }
  else {
    local_80 = 0.0;
    fStack_7c = 0.0;
    local_84 = 0.0;
    pfVar6[0x19] = 0.0;
    pfVar6[0x26] = 0.0;
    pfVar6[0x25] = 0.0;
    pfVar6[0x24] = 0.0;
    local_b4 = (byte *)0x0;
    pfVar6[0x2e] = 0.0;
    pfVar6[0x2d] = 0.0;
    pfVar6[0x2c] = 0.0;
  }
  pfVar6[0x1a] = (float)local_b4;
  pbVar7 = *(byte **)(*(int *)(param_1 + 0x24) + 0x90);
  if ((*pbVar7 & 0xc) == 0) {
    local_a4 = 0;
    FUN_002b7360(pbVar7 + 0xfc,pfVar6 + 8,pfVar6 + 0x28);
    FUN_002b73d0(pbVar7 + 0xfc,pfVar6,&local_b0);
    local_64 = 0;
    pfVar6[0x30] = local_a8 * pfVar6[0x29] - local_ac * pfVar6[0x2a];
    pfVar6[0x31] = local_b0 * pfVar6[0x2a] - local_a8 * pfVar6[0x28];
    pfVar6[0x32] = local_ac * pfVar6[0x28] - local_b0 * pfVar6[0x29];
    FUN_002ba160(pbVar7,pfVar6 + 0x28,pbVar7 + 0xac,pbVar7 + 0x9c,&local_70);
    local_84 = local_84 - local_70;
    local_80 = local_80 - local_6c;
    fStack_7c = fStack_7c - fStack_68;
    pfVar6[0x19] = pfVar6[0x30] * *(float *)(pbVar7 + 0x34) * pfVar6[0x30] +
                   pfVar6[0x31] * *(float *)(pbVar7 + 0x38) * pfVar6[0x31] +
                   pfVar6[0x32] * *(float *)(pbVar7 + 0x3c) * pfVar6[0x32] +
                   *(float *)(pbVar7 + 0x40) + pfVar6[0x19];
  }
  else {
    pfVar6[0x2a] = 0.0;
    pfVar6[0x29] = 0.0;
    pfVar6[0x28] = 0.0;
    pfVar6[0x32] = 0.0;
    pfVar6[0x31] = 0.0;
    pfVar6[0x30] = 0.0;
    pbVar7 = (byte *)0x0;
  }
  pfVar6[0x1b] = (float)pbVar7;
  pfVar6[0x18] = 1.0 / pfVar6[0x19];
  iVar3 = *(int *)(*(int *)(param_1 + 0x10) + 0x14);
  pdVar1 = (double *)(iVar3 + 0x108);
  uVar4 = *(undefined4 *)(iVar3 + 0x10c);
  fVar8 = (float10)*pdVar1 - (float10)*(double *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)pdVar1;
  *(undefined4 *)(param_1 + 0x6c) = uVar4;
  *(float *)(param_1 + 0x38) =
       (float)((float10)*(float *)(param_1 + 0x38) -
              ((float10)local_84 * (float10)pfVar6[0x1c] +
              (float10)fStack_7c * (float10)pfVar6[0x1e] + (float10)local_80 * (float10)pfVar6[0x1d]
              ) * fVar8);
  *(float *)(param_1 + 0x3c) =
       (float)((float10)*(float *)(param_1 + 0x3c) -
              ((float10)local_84 * (float10)pfVar6[0x20] +
              (float10)fStack_7c * (float10)pfVar6[0x22] + (float10)local_80 * (float10)pfVar6[0x21]
              ) * fVar8);
  return;
}
