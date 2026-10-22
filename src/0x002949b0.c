/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9258407C12F3B8AF378DC5C6D9B2E1364822DC4764662975B1175C96A122911A
 * Entry: 0x002949b0, Ghidra index: 9299, label: FUN_002949b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b9768;
extern uint32_t DAT_00469888;
void FUN_002949b0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = DAT_00469888;
  puVar3 = (undefined4 *)0x0;
  *(undefined4 *)(DAT_00469888 + 0x58) = 0;
  iVar6 = 0x174;
  do {
    piVar4 = (int *)(*(int *)(iVar2 + 0x60) + iVar6);
    iVar5 = 0;
    if (0 < *(int *)(*(int *)(iVar2 + 0x60) + iVar6)) {
      do {
        puVar1 = *(undefined4 **)(piVar4[2] + iVar5 * 4);
        if ((puVar1 != (undefined4 *)0x0) && (puVar1 != (undefined4 *)&DAT_003b9768)) {
          *puVar1 = puVar3;
          *(undefined **)(piVar4[2] + iVar5 * 4) = &DAT_003b9768;
          puVar3 = puVar1;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *piVar4);
    }
    iVar6 = iVar6 + 0xc;
  } while (iVar6 < 0x2e8);
  return;
}
