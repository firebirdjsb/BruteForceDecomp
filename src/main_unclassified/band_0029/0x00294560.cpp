/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 833D6B09879D03CD5D733821273D6341658A5675B17C51ECDF81AA1EFF846FA9
 * Entry: 0x00294560, Ghidra index: 9289, label: FUN_00294560
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
int FUN_00294560(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint unaff_EBX;
  undefined4 *puVar4;
  
  iVar2 = FUN_00294b90(0,unaff_EBX + 0x30);
  puVar4 = (undefined4 *)(iVar2 + 0x28);
  for (uVar3 = unaff_EBX >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar4 = *param_1;
    param_1 = param_1 + 1;
    puVar4 = puVar4 + 1;
  }
  for (uVar3 = unaff_EBX & 3; iVar1 = DAT_00469888, uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar4 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  *(undefined1 *)(unaff_EBX + 0x28 + iVar2) = 0;
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(undefined4 *)(iVar2 + 0x10) = 0xfffffffa;
  *(uint *)(iVar2 + 0x20) = unaff_EBX;
  *(int *)(iVar1 + 0x78) =
       *(int *)(iVar1 + 0x78) + ((int)(unaff_EBX + ((int)unaff_EBX >> 0x1f & 0x3fU)) >> 6) + 1;
  *(undefined4 *)(iVar2 + 4) = 0;
  *(undefined4 *)(iVar2 + 8) = param_2;
  *(int *)iVar2 = iVar2;
  return iVar2;
}
