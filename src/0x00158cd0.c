/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DDF2B351B363A0B57C3894707AD4EEC5514963B6A01D6B8DFDC9EEE9B42D1D7A
 * Entry: 0x00158cd0, Ghidra index: 4500, label: FUN_00158cd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc654;
extern uint32_t PTR_LAB_0039df40;
int FUN_00158cd0(undefined4 param_1,char param_2)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  int iVar7;
  int *piVar8;
  float local_88;
  float local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  float local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58 [4];
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  puVar4 = (undefined4 *)FUN_002ea01d(8);
  iVar7 = 0;
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = &PTR_LAB_0039df40;
    puVar4[1] = param_1;
  }
  local_58[0] = 0;
  local_34 = 0;
  local_1c = 0;
  piVar8 = local_58;
  for (iVar6 = 0x13; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar8 = 0;
    piVar8 = piVar8 + 1;
  }
  iVar6 = *(int *)(in_ECX + 0xc);
  local_44 = 1;
  local_40 = 0x3f800000;
  local_3c = 0x3f800000;
  local_38 = 0x3f800000;
  local_30 = 0x3cf5c28f;
  local_28 = 0x3c23d70a;
  local_24 = 0x3c23d70a;
  local_20 = 0x3c23d70a;
  local_58[3] = 0;
  switch(*(undefined4 *)(iVar6 + 4)) {
  case 2:
  case 0x16:
  case 0x1a:
  case 0x1f:
    local_58[1] = 1;
    local_48 = *(float *)(iVar6 + 0x138) * 1000.0;
    break;
  default:
    local_48 = *(float *)(iVar6 + 0x138);
    local_58[1] = 0;
  }
  iVar6 = *(int *)(in_ECX + 0x6c);
  local_64 = *(undefined4 *)(iVar6 + 0x3c);
  local_68 = *(undefined4 *)(iVar6 + 0x38);
  local_60 = *(undefined4 *)(iVar6 + 0x40);
  local_2c = 0x3dcccccd;
  local_5c = 0;
  FUN_002339d0(&local_88);
  local_74 = local_80;
  local_78 = local_84;
  local_70 = local_7c;
  iVar6 = *(int *)(*(int *)(*(int *)(in_ECX + 8) + 0xa44) + 0xe0);
  local_6c = local_88;
  iVar5 = FUN_002ea01d(0xa0);
  if (iVar5 != 0) {
    iVar7 = FUN_002ccc70(iVar5,**(undefined4 **)(iVar6 + 0xc),&local_78);
  }
  iVar6 = *(int *)(iVar7 + 0x90);
  local_84 = *(float *)(iVar6 + 0x18);
  local_88 = *(float *)(iVar6 + 0x14);
  fVar1 = *(float *)(iVar6 + 0x1c);
  bVar2 = 0.005 <= local_88;
  if (!bVar2) {
    local_88 = 0.005;
  }
  bVar3 = 0.005 <= local_84;
  if (!bVar3) {
    local_84 = 0.005;
  }
  if (0.005 <= fVar1) {
    if (bVar3 && bVar2) goto LAB_00158ebd;
  }
  else {
    fVar1 = 0.005;
  }
  *(float *)(iVar6 + 0x1c) = fVar1;
  *(float *)(iVar6 + 0x14) = local_88;
  *(float *)(iVar6 + 0x18) = local_84;
  FUN_002bb410(iVar6);
LAB_00158ebd:
  if ((*(byte *)(*(int *)(in_ECX + 0xc) + 0xa8) & 0x10) != 0) {
    FUN_0016a760(*(undefined4 *)(*(int *)(in_ECX + 8) + 0xa44));
  }
  *(int *)(iVar7 + 0x9c) = in_ECX + 0x118;
  *(uint *)(iVar7 + 0x8c) = *(uint *)(in_ECX + 4) | 0x80000000;
  if ((param_2 != '\0') && ((*(uint *)(iVar7 + 0x70) & 0x300) == 0)) {
    FUN_002c00d0(*(undefined4 *)(*(int *)(iVar7 + 0x14) + 0x10));
    *(uint *)(iVar7 + 0x70) = *(uint *)(iVar7 + 0x70) & 0xfffffdff | 0x100;
  }
  if (((byte)**(undefined4 **)(iVar7 + 0x90) & 0xc) != 4) {
    FUN_002b3c60();
  }
  if (local_58[0] != 0) {
    iVar7 = (*(code *)PTR_FUN_003bc654)(local_58[0]);
    return iVar7;
  }
  return iVar7;
}
