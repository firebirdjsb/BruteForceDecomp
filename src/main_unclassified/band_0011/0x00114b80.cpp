/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 492A149A734132ACEBE9632076E593289265C403831818AF653E5836E0047AB6
 * Entry: 0x00114b80, Ghidra index: 3572, label: FUN_00114b80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc654;
int FUN_00114b80(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54 [5];
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
  undefined4 local_18;
  
  local_60 = param_2[0xf];
  local_64 = param_2[0xe];
  local_88 = param_4;
  local_54[0] = 0;
  local_30 = 0;
  local_18 = 0;
  piVar3 = local_54;
  for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  local_54[4] = param_3;
  local_5c = param_2[0x10];
  local_40 = 1;
  local_3c = 0x3f800000;
  local_38 = 0x3f800000;
  local_34 = 0x3f800000;
  local_2c = 0x3cf5c28f;
  local_54[3] = 0;
  local_54[1] = 0;
  local_28 = 0x3f000000;
  local_24 = 0x3f000000;
  local_20 = 0x3f000000;
  local_1c = 0x3f000000;
  local_58 = 0;
  FUN_002339d0(&local_84);
  local_74 = local_80;
  local_68 = local_84;
  local_70 = local_7c;
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 8) + 0xa44) + 0xe0);
  local_6c = local_78;
  iVar1 = FUN_002ea01d(0xa0);
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_002cce90(**(undefined4 **)(iVar2 + 0xc),&local_88,&local_74);
  }
  *(int *)(iVar2 + 0x9c) = param_1 + 0x518;
  *(uint *)(iVar2 + 0x8c) = *(uint *)*param_2 | 0x80000000;
  FUN_002b3c60();
  if (local_54[0] != 0) {
    iVar2 = (*(code *)PTR_FUN_003bc654)(local_54[0]);
    return iVar2;
  }
  return iVar2;
}
