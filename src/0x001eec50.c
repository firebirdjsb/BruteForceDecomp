/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 574C04CD94075DA02651E91EAE1285EA7064CBDE2AFD6753837B5005B009B623
 * Entry: 0x001eec50, Ghidra index: 6963, label: FUN_001eec50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004698d0;
extern uint32_t PTR_FUN_00396978;
void FUN_001eec50(int param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  char *local_168;
  undefined **local_160 [6];
  uint local_148;
  int local_144;
  uint local_13c [79];
  
  if ((DAT_004698d0 < (int)param_2) &&
     (uVar5 = param_2 & 0x1f, *(uint *)(param_1 + 0x5690 + uVar5 * 4) != param_2)) {
    FUN_002e8c40();
    local_148 = param_2;
    iVar3 = 0;
    local_168 = (char *)(param_1 + 0x15c);
    local_160[0] = &PTR_FUN_00396978;
    local_144 = 0;
    puVar4 = local_13c;
    puVar2 = (uint *)(param_1 + 0x2e30 + uVar5 * 0x28);
    do {
      if (*local_168 != '\0') {
        puVar4[-1] = iVar3 + 1;
        if ((puVar2 == (uint *)0x0) || (*puVar2 != param_2)) {
          puVar7 = puVar4;
          for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar7 = 0;
            puVar7 = puVar7 + 1;
          }
        }
        else {
          puVar6 = puVar4;
          puVar7 = puVar2;
          for (iVar1 = 9; puVar7 = puVar7 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar6 = *puVar7;
            puVar6 = puVar6 + 1;
          }
        }
        puVar4 = puVar4 + 10;
        local_144 = local_144 + 1;
      }
      iVar3 = iVar3 + 1;
      local_168 = local_168 + 0x598;
      puVar2 = puVar2 + 0x140;
    } while (iVar3 < 8);
    FUN_002e7f50(0xfffffffc,local_160,1,1);
    *(uint *)(param_1 + 0x5690 + uVar5 * 4) = param_2;
    FUN_002e8b80();
  }
  return;
}
