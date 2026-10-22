/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 438ADE12CA9592E6433CFF7E02361AC26B28C02E8EEF9A394A52A5ACE1D89B54
 * Entry: 0x00158f80, Ghidra index: 4501, label: FUN_00158f80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc654;
int FUN_00158f80(undefined4 param_1,char param_2,undefined4 param_3)

{
  int in_ECX;
  int iVar1;
  int *piVar2;
  int local_58 [5];
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
  
  local_58[0] = 0;
  local_34 = 0;
  local_1c = 0;
  piVar2 = local_58;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  }
  local_58[1] = (int)(param_2 != '\0');
  local_58[3] = 0;
  local_58[4] = param_3;
  local_44 = 1;
  local_40 = 0x3f800000;
  local_3c = 0x3f800000;
  local_38 = 0x3f800000;
  local_30 = 0x3cf5c28f;
  local_28 = 0x3c23d70a;
  local_24 = 0x3c23d70a;
  local_20 = 0x3c23d70a;
  local_2c = 0x3dcccccd;
  iVar1 = FUN_0016b3f0(*(undefined4 *)(in_ECX + 8),param_1,local_58);
  *(int *)(iVar1 + 0x9c) = in_ECX + 0x118;
  *(uint *)(iVar1 + 0x8c) = *(uint *)(in_ECX + 4) | 0x80000000;
  if ((*(uint *)(iVar1 + 0x70) & 0x300) == 0) {
    FUN_002c00d0(*(undefined4 *)(*(int *)(iVar1 + 0x14) + 0x10));
    *(uint *)(iVar1 + 0x70) = *(uint *)(iVar1 + 0x70) & 0xfffffdff | 0x100;
  }
  if (((byte)**(undefined4 **)(iVar1 + 0x90) & 0xc) != 4) {
    FUN_002b3c60();
  }
  if (local_58[0] != 0) {
    iVar1 = (*(code *)PTR_FUN_003bc654)(local_58[0]);
    return iVar1;
  }
  return iVar1;
}
