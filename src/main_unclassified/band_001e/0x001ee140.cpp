/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D460F0EEBB5825CC38E1FC7A1EA4FFB2B51A3E338596EAD682AD6928AF89D96C
 * Entry: 0x001ee140, Ghidra index: 6955, label: FUN_001ee140
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00396a60;
void FUN_001ee140(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int unaff_EBX;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined **local_c4 [6];
  undefined4 local_ac;
  int local_a8;
  int local_a4;
  undefined4 local_a0;
  undefined4 local_9c [9];
  undefined4 local_78 [30];
  
  if ((0 < (int)*(uint *)(unaff_EBX + 0xa8)) && (param_1 != *(int *)(unaff_EBX + 0x2e20))) {
    uVar3 = (uint)(*(int *)(unaff_EBX + 0xb0) == param_1);
    if (*(int *)(unaff_EBX + 0xdc) == param_1) {
      uVar3 = uVar3 + 1;
    }
    if (*(int *)(unaff_EBX + 0x108) == param_1) {
      uVar3 = uVar3 + 1;
    }
    if (*(int *)(unaff_EBX + 0x134) == param_1) {
      uVar3 = uVar3 + 1;
    }
    if (uVar3 == *(uint *)(unaff_EBX + 0xa8)) {
      FUN_002e8c40();
      local_ac = 0xffffffff;
      local_c4[0] = &PTR_FUN_00396a60;
      puVar5 = &local_a0;
      local_a4 = 0;
      local_a8 = param_1;
      if (*(int *)(unaff_EBX + 0x1c) != 0) {
        cVar2 = FUN_002e5880();
        if (cVar2 == '\0') {
          iVar4 = FUN_002e5bf0(0);
          local_ac = *(undefined4 *)(iVar4 + 0x2c);
        }
        else {
          local_ac = 0;
        }
      }
      if (*(int *)(unaff_EBX + 0xb0) == param_1) {
        local_a0 = *(undefined4 *)(unaff_EBX + 0xac);
        puVar5 = (undefined4 *)(unaff_EBX + 0xb4);
        puVar7 = local_9c;
        for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        local_a4 = local_a4 + 1;
        puVar5 = local_78;
      }
      if (*(int *)(unaff_EBX + 0xdc) == param_1) {
        puVar6 = (undefined4 *)(unaff_EBX + 0xe0);
        puVar7 = puVar5;
        for (iVar4 = 9; puVar7 = puVar7 + 1, iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
        }
        *puVar5 = *(undefined4 *)(unaff_EBX + 0xd8);
        puVar5 = puVar5 + 10;
        local_a4 = local_a4 + 1;
      }
      if (*(int *)(unaff_EBX + 0x108) == param_1) {
        uVar1 = *(undefined4 *)(unaff_EBX + 0x104);
        puVar6 = (undefined4 *)(unaff_EBX + 0x10c);
        puVar7 = puVar5;
        for (iVar4 = 9; puVar7 = puVar7 + 1, iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
        }
        *puVar5 = uVar1;
        puVar5 = puVar5 + 10;
        local_a4 = local_a4 + 1;
      }
      if (*(int *)(unaff_EBX + 0x134) == param_1) {
        uVar1 = *(undefined4 *)(unaff_EBX + 0x130);
        puVar6 = (undefined4 *)(unaff_EBX + 0x138);
        puVar7 = puVar5;
        for (iVar4 = 9; puVar7 = puVar7 + 1, iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
        }
        *puVar5 = uVar1;
        local_a4 = local_a4 + 1;
      }
      FUN_002e7f50(0xfffffffb,local_c4,1,1);
      *(int *)(unaff_EBX + 0x2e20) = param_1;
      FUN_002e8b80();
    }
  }
  return;
}
