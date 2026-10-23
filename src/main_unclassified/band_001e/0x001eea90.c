/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E76A356E6E031ECE42F22A7367109AE685566E8295EE73E06582FC512AF8EA05
 * Entry: 0x001eea90, Ghidra index: 6962, label: FUN_001eea90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004698d0;
extern uint32_t PTR_FUN_00396978;
void FUN_001eea90(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  int *local_170;
  int local_16c;
  undefined **local_160 [6];
  uint local_148;
  int local_144;
  int local_140;
  uint local_13c [79];
  
  if ((DAT_004698d0 < (int)param_2) &&
     (uVar1 = param_2 & 0x1f, *(uint *)(param_1 + 0x5690 + uVar1 * 4) != param_2)) {
    iVar4 = 0;
    iVar2 = 0;
    if ((*(char *)(param_1 + 0x5630) != '\0') &&
       (iVar2 = 1, (int)param_2 <= *(int *)(param_1 + 0x5634))) {
      iVar4 = 1;
    }
    if ((*(char *)(param_1 + 0x5648) != '\0') &&
       (iVar2 = iVar2 + 1, (int)param_2 <= *(int *)(param_1 + 0x564c))) {
      iVar4 = iVar4 + 1;
    }
    if ((*(char *)(param_1 + 0x5660) != '\0') &&
       (iVar2 = iVar2 + 1, (int)param_2 <= *(int *)(param_1 + 0x5664))) {
      iVar4 = iVar4 + 1;
    }
    if ((*(char *)(param_1 + 0x5678) != '\0') &&
       (iVar2 = iVar2 + 1, (int)param_2 <= *(int *)(param_1 + 0x567c))) {
      iVar4 = iVar4 + 1;
    }
    if ((iVar2 != 0) && (iVar2 == iVar4)) {
      FUN_002e8c40();
      local_170 = (int *)(param_1 + 0x168);
      puVar3 = (uint *)(param_1 + 0x2e30 + uVar1 * 0x28);
      local_160[0] = &PTR_FUN_00396978;
      local_148 = param_2;
      local_144 = 0;
      piVar5 = &local_140;
      puVar6 = local_13c;
      iVar2 = 1;
      local_16c = 8;
      do {
        if ((char)local_170[-3] != '\0') {
          if (*puVar3 == param_2) {
            *piVar5 = iVar2;
            puVar7 = puVar6;
            puVar8 = puVar3;
            for (iVar4 = 9; puVar8 = puVar8 + 1, iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar7 = *puVar8;
              puVar7 = puVar7 + 1;
            }
          }
          else {
            if (*local_170 == -1) goto LAB_001eebf0;
            *piVar5 = iVar2;
            puVar8 = puVar6;
            for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar8 = 0;
              puVar8 = puVar8 + 1;
            }
          }
          local_144 = local_144 + 1;
          puVar6 = puVar6 + 10;
          piVar5 = piVar5 + 10;
        }
LAB_001eebf0:
        local_170 = local_170 + 0x166;
        puVar3 = puVar3 + 0x140;
        iVar2 = iVar2 + 1;
        local_16c = local_16c + -1;
      } while (local_16c != 0);
      FUN_002e7f50(0xfffffffc,local_160,1,1);
      *(uint *)(param_1 + 0x5690 + uVar1 * 4) = param_2;
      FUN_002e8b80();
    }
  }
  return;
}
