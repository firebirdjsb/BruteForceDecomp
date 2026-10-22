/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4F0E433E27172A84E937F4A52FCF6985B26964084CCDBB9A1BC4078C780AFC22
 * Entry: 0x002d6f30, Ghidra index: 10246, label: FUN_002d6f30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b86e0;
void FUN_002d6f30(uint param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  int *in_ECX;
  uint uVar2;
  uint uVar3;
  uint local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  uint local_a0;
  uint local_9c;
  float local_98;
  uint local_94;
  float local_90;
  uint local_8c;
  undefined1 local_88 [12];
  undefined4 local_7c;
  undefined1 local_78 [12];
  undefined4 local_6c;
  undefined1 local_68 [104];
  
  FUN_002cd4c0(local_68,param_1,param_2,param_3,param_4);
  FUN_002cd7d0();
  if (-1 < (int)((uint)local_a4 | (uint)local_a8)) {
    if (0.0 <= local_b0) {
      if (0.0 <= local_ac) {
        FUN_002d7270(in_ECX,param_1,param_2,local_68,&local_b0,param_3,param_4);
        return;
      }
      param_1 = *(int *)(&DAT_003b86e0 + (param_1 & 0xc)) + param_1;
    }
    FUN_002d8d60(in_ECX,param_1,param_2);
    return;
  }
  if (-1 < (int)((uint)local_ac | (uint)local_b0)) {
    iVar1 = *in_ECX;
    if (*(int *)(param_4 + 0x10) != (*(uint *)(iVar1 + 0x14) >> 8 & 3) * 0x1c + 0x18 + iVar1) {
      *(uint *)(iVar1 + 0x14) = *(uint *)(iVar1 + 0x14) ^ 0x100;
    }
    if (0.0 <= local_a8) {
      FUN_002d8d60(in_ECX,*(int *)(&DAT_003b86e0 + (param_2 & 0xc)) + param_2,param_1);
      return;
    }
    FUN_002d8d60(in_ECX,param_2,param_1);
    return;
  }
  if (local_ac <= local_b0) {
    local_b4 = *(int *)(&DAT_003b86e0 + (param_1 & 0xc)) + param_1;
    local_9c = param_1;
  }
  else {
    local_9c = *(int *)(&DAT_003b86e0 + (param_1 & 0xc)) + param_1;
    local_b4 = param_1;
  }
  if (local_a4 <= local_a8) {
    uVar2 = *(int *)(&DAT_003b86e0 + (param_2 & 0xc)) + param_2;
    local_a0 = param_2;
  }
  else {
    local_a0 = *(int *)(&DAT_003b86e0 + (param_2 & 0xc)) + param_2;
    uVar2 = param_2;
  }
  local_7c = 0;
  FUN_002cd030(param_4,local_88);
  FUN_002cd190(local_88);
  if (-1 < (int)(local_94 | (uint)local_98)) {
    FUN_002d8d60(in_ECX,local_b4,param_2);
    return;
  }
  local_6c = 0;
  FUN_002cd030(param_3,local_78);
  FUN_002cd190(local_78);
  if (-1 < (int)(local_8c | (uint)local_90)) {
    FUN_002c14e0(*(undefined4 *)(param_4 + 0x10),*(undefined4 *)(param_3 + 0x10));
    FUN_002d8d60(in_ECX,uVar2,param_1);
    return;
  }
  uVar3 = local_a0;
  if ((0.0 <= local_98 * local_a8) && (uVar3 = uVar2, local_90 * local_b0 < 0.0)) {
    FUN_002c14e0(*(undefined4 *)(param_4 + 0x10),*(undefined4 *)(param_3 + 0x10));
    FUN_002d80b0(uVar2,local_9c,param_4,param_3);
    return;
  }
  FUN_002d80b0(local_b4,uVar3,param_3,param_4);
  return;
}
