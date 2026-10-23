/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FAF5E7C5B08755DAD743916639274733CE52A1E8314777459F4940AC457BB3CE
 * Entry: 0x00151ac0, Ghidra index: 4417, label: FUN_00151ac0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00151ac0(void)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  float local_48 [4];
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar1 = *(int *)(in_ECX + 0xa0);
  local_10 = *(float *)(in_ECX + 0x7c) - *(float *)(iVar1 + 0x40);
  local_c = *(float *)(in_ECX + 0x8c) - *(float *)(iVar1 + 0x40);
  local_18 = *(float *)(in_ECX + 0x80) - *(float *)(iVar1 + 0x44);
  local_14 = *(float *)(in_ECX + 0x90) - *(float *)(iVar1 + 0x44);
  local_20 = *(float *)(in_ECX + 0x84) - *(float *)(iVar1 + 0x48);
  local_1c = *(float *)(in_ECX + 0x94) - *(float *)(iVar1 + 0x48);
  local_48[2] = local_10 * *(float *)(iVar1 + 0x10);
  local_48[3] = local_c * *(float *)(iVar1 + 0x10);
  local_28 = local_10 * *(float *)(iVar1 + 0x14);
  local_24 = local_c * *(float *)(iVar1 + 0x14);
  local_10 = local_10 * *(float *)(iVar1 + 0x18);
  local_c = local_c * *(float *)(iVar1 + 0x18);
  local_8 = local_18 * *(float *)(iVar1 + 0x20);
  local_4 = local_14 * *(float *)(iVar1 + 0x20);
  local_30 = local_18 * *(float *)(iVar1 + 0x24);
  local_2c = local_14 * *(float *)(iVar1 + 0x24);
  local_18 = local_18 * *(float *)(iVar1 + 0x28);
  local_14 = local_14 * *(float *)(iVar1 + 0x28);
  local_48[0] = local_20 * *(float *)(iVar1 + 0x30);
  local_48[1] = local_1c * *(float *)(iVar1 + 0x30);
  local_38 = local_20 * *(float *)(iVar1 + 0x34);
  local_34 = local_1c * *(float *)(iVar1 + 0x34);
  local_20 = local_20 * *(float *)(iVar1 + 0x38);
  local_1c = local_1c * *(float *)(iVar1 + 0x38);
  local_50 = (uint)(local_48[3] < local_48[2]);
  local_54 = (uint)(local_24 < local_28);
  local_58 = (uint)(local_c < local_10);
  local_4c = (uint)(local_4 < local_8);
  uVar3 = (uint)(local_2c < local_30);
  uVar4 = (uint)(local_14 < local_18);
  uVar2 = (uint)(local_48[1] < local_48[0]);
  uVar6 = (uint)(local_34 < local_38);
  uVar5 = (uint)(local_1c < local_20);
  *(float *)(in_ECX + 0x5c) = local_48[uVar2] + local_48[local_4c + 0x10] + local_48[local_50 + 2];
  *(float *)(in_ECX + 0x6c) =
       local_48[uVar2 == 0] + local_48[(local_4c == 0) + 0x10] + local_48[(local_50 == 0) + 2];
  *(float *)(in_ECX + 0x60) = local_48[uVar6 + 4] + local_48[uVar3 + 6] + local_48[local_54 + 8];
  *(float *)(in_ECX + 0x70) =
       local_48[(uVar6 == 0) + 4] + local_48[(uVar3 == 0) + 6] + local_48[(local_54 == 0) + 8];
  *(float *)(in_ECX + 100) = local_48[uVar5 + 10] + local_48[uVar4 + 0xc] + local_48[local_58 + 0xe]
  ;
  *(float *)(in_ECX + 0x74) =
       local_48[(uVar5 == 0) + 10] + local_48[(uVar4 == 0) + 0xc] + local_48[(local_58 == 0) + 0xe];
  return;
}
