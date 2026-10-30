/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CD624BFFC2118FE5F98D6B60497726F248DE1B8005EBF850F208196541F029F0
 * Entry: 0x002c22c0, Ghidra index: 10036, label: FUN_002c22c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_00000000;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002c22c0(int *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint *puVar6;
  int iVar7;
  int local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  uint *local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  
  iVar2 = *param_1;
  local_28 = *(undefined4 *)(iVar2 + 0x28);
  local_2c = FUN_002c1560();
  iVar3 = *param_1;
  uVar4 = *(uint *)(iVar3 + 0x48);
  uVar5 = *(undefined4 *)(iVar3 + 0x44);
  iVar7 = iVar3 + 0x34;
  puVar6 = (uint *)(uVar4 & 0xfffffff0) + ((*(uint *)(uVar4 & 0xfffffff0) & 0xfff) + 1) * -4;
  local_24 = iVar2 + 0x18;
  local_1c = puVar6;
  local_18 = FUN_002c1560();
  local_20 = *puVar6 + (int)puVar6;
  sVar1 = *(short *)(iVar3 + 0x4e);
  local_14 = uVar5;
  local_10 = iVar7;
  if (sVar1 == 0) {
    FUN_002d7d60(&local_2c,uVar4,&local_20);
  }
  else if (sVar1 == 1) {
    FUN_002d86e0(&local_2c,uVar4,&local_20);
  }
  else if (sVar1 == 2) {
    FUN_002d6640(param_1,&local_2c,uVar4,&local_20);
  }
  else {
    _DAT_00000000 = 0;
  }
  *(int *)(local_18 + 100) = *(int *)(local_18 + 100) + -1;
  *(int *)(local_2c + 100) = *(int *)(local_2c + 100) + -1;
  return;
}
