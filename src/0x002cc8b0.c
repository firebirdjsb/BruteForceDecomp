/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 33CAF18ABA4A11C842150026368E70AB819697339DD5B35E3E7C78F012DCD2F5
 * Entry: 0x002cc8b0, Ghidra index: 10149, label: FUN_002cc8b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_00000000;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002cc8b0(int param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint *puVar7;
  int local_20;
  uint *local_1c;
  int local_18;
  undefined4 local_14;
  
  iVar2 = *(int *)(param_1 + 0x10);
  uVar3 = *(uint *)(iVar2 + 0x48);
  uVar4 = *(undefined4 *)(iVar2 + 0x28);
  iVar6 = FUN_002c1560();
  uVar5 = *(undefined4 *)(iVar2 + 0x44);
  puVar7 = (uint *)(uVar3 & 0xfffffff0) + ((*(uint *)(uVar3 & 0xfffffff0) & 0xfff) + 1) * -4;
  local_1c = puVar7;
  local_18 = FUN_002c1560();
  local_20 = *puVar7 + (int)puVar7;
  *(undefined4 *)(param_1 + 0x28) = 0;
  sVar1 = *(short *)(iVar2 + 0x4e);
  local_14 = uVar5;
  if (sVar1 == 0) {
    FUN_002cb4b0(param_1,uVar4,uVar3,iVar6,&local_20);
  }
  else if (sVar1 == 1) {
    FUN_002cc340(param_1,uVar4,uVar3,iVar6,&local_20);
  }
  else if (sVar1 == 2) {
    FUN_002ca470();
  }
  else {
    _DAT_00000000 = 0;
  }
  *(int *)(iVar6 + 100) = *(int *)(iVar6 + 100) + -1;
  *(int *)(local_18 + 100) = *(int *)(local_18 + 100) + -1;
  return;
}
