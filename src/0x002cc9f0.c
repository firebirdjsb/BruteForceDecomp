/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CC9A6C24D40D2D00845446B378F1E79B59A492CD585581904A17B7D2EC85E364
 * Entry: 0x002cc9f0, Ghidra index: 10151, label: FUN_002cc9f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_00000000;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002cc9f0(int param_1)

{
  int iVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint *puVar8;
  int local_38;
  uint *local_34;
  int local_30;
  undefined4 local_2c;
  int local_20;
  uint *local_1c;
  int local_18;
  undefined4 local_14;
  
  iVar3 = *(int *)(param_1 + 0x10);
  iVar1 = ((*(uint *)(iVar3 + 0x14) ^ 0x100) >> 8 & 3) * 0x1c + 0x18 + iVar3;
  iVar3 = (*(uint *)(iVar3 + 0x14) >> 8 & 3) * 0x1c + 0x18 + iVar3;
  uVar4 = *(uint *)(iVar3 + 0x14);
  uVar5 = *(uint *)(iVar1 + 0x14);
  puVar8 = (uint *)(uVar4 & 0xfffffff0) + ((*(uint *)(uVar4 & 0xfffffff0) & 0xfff) + 1) * -4;
  uVar6 = *(undefined4 *)(iVar3 + 0x10);
  local_34 = puVar8;
  local_30 = FUN_002c1560();
  local_38 = *puVar8 + (int)puVar8;
  uVar7 = *(undefined4 *)(iVar1 + 0x10);
  puVar8 = (uint *)(uVar5 & 0xfffffff0) + ((*(uint *)(uVar5 & 0xfffffff0) & 0xfff) + 1) * -4;
  local_2c = uVar6;
  local_1c = puVar8;
  local_18 = FUN_002c1560();
  local_20 = *puVar8 + (int)puVar8;
  *(undefined4 *)(param_1 + 0x28) = 0;
  local_14 = uVar7;
  if (*(short *)(iVar3 + 0x1a) == 0) {
    sVar2 = *(short *)(iVar1 + 0x1a);
    if (sVar2 == 0) {
      FUN_002cafa0(param_1,uVar4,uVar5,&local_38,&local_20);
      goto LAB_002ccb52;
    }
    if (sVar2 == 1) {
      FUN_002cba20(param_1,uVar4,uVar5,&local_38,&local_20);
      goto LAB_002ccb52;
    }
    if (sVar2 == 2) {
      FUN_002c9f30(param_1,uVar4,uVar5,&local_38,&local_20);
      goto LAB_002ccb52;
    }
  }
  else if ((*(short *)(iVar3 + 0x1a) == 1) && (*(short *)(iVar1 + 0x1a) == 1)) {
    FUN_002ca850(param_1,uVar4,uVar5,&local_38,&local_20);
    goto LAB_002ccb52;
  }
  _DAT_00000000 = 0;
LAB_002ccb52:
  *(int *)(local_30 + 100) = *(int *)(local_30 + 100) + -1;
  *(int *)(local_18 + 100) = *(int *)(local_18 + 100) + -1;
  return;
}
