/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 428A0C109963871BE482A025AABB9EC9B36CB3CD903A34A91527C4AED7331C4A
 * Entry: 0x0022c120, Ghidra index: 7692, label: FUN_0022c120
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469aac;
extern uint32_t PTR_FUN_003bc654;
int FUN_0022c120(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_68 [16];
  int local_58 [4];
  undefined4 local_48;
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
  
  iVar1 = DAT_00469aac;
  local_8c = *(undefined4 *)(in_ECX + 0x4c);
  iVar3 = 0;
  local_58[0] = 0;
  local_34 = 0;
  local_1c = 0;
  piVar4 = local_58;
  for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  local_48 = *(undefined4 *)(in_ECX + 0x48);
  local_58[3] = *(undefined4 *)(*(int *)(DAT_00469aac + 0xa44) + 0xe4);
  local_88 = *param_2;
  local_84 = param_2[1];
  local_80 = param_2[2];
  local_44 = 1;
  local_40 = 0x3f800000;
  local_3c = 0x3f800000;
  local_38 = 0x3f800000;
  local_30 = 0x3cf5c28f;
  local_2c = 0x3c23d70a;
  local_28 = 0x3c23d70a;
  local_24 = 0x3c23d70a;
  local_20 = 0x3c23d70a;
  local_58[1] = 0;
  local_7c = 0;
  FUN_002b4070(local_68,0,0,0);
  iVar1 = *(int *)(*(int *)(iVar1 + 0xa44) + 0xe0);
  iVar2 = FUN_002ea01d(0xa0);
  if (iVar2 != 0) {
    iVar3 = FUN_002cce90(**(undefined4 **)(iVar1 + 0xc),&local_8c,local_68);
  }
  FUN_0016a760(*(undefined4 *)(DAT_00469aac + 0xa44));
  *(int *)(iVar3 + 0x9c) = param_1 + 0x38;
  *(uint *)(iVar3 + 0x8c) = *(uint *)(in_ECX + -0x1cc) | 0x80000000;
  if ((*(uint *)(iVar3 + 0x70) & 0x300) == 0) {
    FUN_002c00d0(*(undefined4 *)(*(int *)(iVar3 + 0x14) + 0x10));
    *(uint *)(iVar3 + 0x70) = *(uint *)(iVar3 + 0x70) & 0xfffffdff | 0x100;
  }
  FUN_002b3c60();
  local_74 = param_3[1];
  local_78 = *param_3;
  local_70 = param_3[2];
  local_6c = 0;
  FUN_002b3b20(iVar3,&local_78);
  if (local_58[0] != 0) {
    iVar1 = (*(code *)PTR_FUN_003bc654)(local_58[0]);
    return iVar1;
  }
  return iVar3;
}
