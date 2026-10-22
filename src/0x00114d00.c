/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C0E19FF50ECABCBFEE25F9F0118D40CB4B0705C3B7D6A6A24BB17CB24EC0A692
 * Entry: 0x00114d00, Ghidra index: 3573, label: FUN_00114d00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc654;
extern uint32_t PTR_LAB_0039df40;
int FUN_00114d00(undefined4 *param_1,float param_2)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  int in_EAX;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  float local_84;
  float local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  float local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_48;
  float local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (in_EAX == 0) {
    return 0;
  }
  puVar4 = (undefined4 *)FUN_002ea01d(8);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = &PTR_LAB_0039df40;
    puVar4[1] = in_EAX;
  }
  FUN_002b4710();
  iVar6 = *(int *)(*(int *)(in_ECX + 8) + 0xa44);
  local_48 = *(undefined4 *)(iVar6 + 0xe4);
  local_50 = 0;
  local_40 = 1;
  if (0.5 <= param_2) {
    local_3c = 0x3f800000;
  }
  else {
    local_3c = 0x40a00000;
  }
  local_44 = param_2;
  if ((*(byte *)(in_ECX + 0x7d8) & 3) == 0) {
    local_28 = 0x3dcccccd;
  }
  else {
    local_28 = 0x3f333333;
  }
  local_58 = 0;
  local_64 = param_1[0xe];
  local_60 = param_1[0xf];
  local_5c = param_1[0x10];
  local_38 = local_3c;
  local_34 = local_3c;
  local_24 = local_28;
  local_20 = local_28;
  local_1c = local_28;
  FUN_002339d0(&local_84);
  iVar6 = *(int *)(iVar6 + 0xe0);
  local_74 = local_80;
  local_70 = local_7c;
  local_6c = local_78;
  local_68 = local_84;
  iVar5 = FUN_002ea01d(0xa0);
  if (iVar5 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_002ccc70(iVar5,**(undefined4 **)(iVar6 + 0xc),&local_74);
  }
  *(int *)(iVar6 + 0x9c) = in_ECX + 0x518;
  *(uint *)(iVar6 + 0x8c) = *(uint *)*param_1 | 0x80000000;
  iVar5 = *(int *)(iVar6 + 0x90);
  local_80 = *(float *)(iVar5 + 0x18);
  local_84 = *(float *)(iVar5 + 0x14);
  fVar1 = *(float *)(iVar5 + 0x1c);
  bVar2 = local_84 < 0.005;
  if (bVar2) {
    local_84 = 0.005;
  }
  bVar3 = local_80 < 0.005;
  if (bVar3) {
    local_80 = 0.005;
  }
  if (0.005 <= fVar1) {
    if (!bVar3 && !bVar2) goto LAB_00114eea;
  }
  else {
    fVar1 = 0.005;
  }
  *(float *)(iVar5 + 0x1c) = fVar1;
  *(float *)(iVar5 + 0x14) = local_84;
  *(float *)(iVar5 + 0x18) = local_80;
  FUN_002bb410(iVar5);
LAB_00114eea:
  FUN_002b3c60();
  if (local_54 == 0) {
    return iVar6;
  }
  iVar6 = (*(code *)PTR_FUN_003bc654)(local_54);
  return iVar6;
}
