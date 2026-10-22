/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 842DB59BAC23F08837ECC8A8102F3ED9FF735CAE0281862A59CEA6DA0A33371C
 * Entry: 0x00292dd0, Ghidra index: 9262, label: FUN_00292dd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469888;
extern uint32_t PTR_s_gettable_003b9690;
void FUN_00292dd0(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int unaff_EDI;
  
  iVar5 = *DAT_00469888;
  uVar2 = *(uint *)(iVar5 + -0x20);
  if (uVar2 == 0xfffffff9) {
    uVar2 = *(uint *)(*(int *)(iVar5 + -0x18) + 0x10);
  }
  else if (uVar2 == 0xfffffffd) {
    uVar2 = *(uint *)(*(int *)(iVar5 + -0x18) + 0x14);
  }
  else if (uVar2 == 0) {
    uVar2 = *(uint *)(*(int *)(iVar5 + -0x18) + 0x10);
    uVar2 = uVar2 & (-1 < (int)uVar2) - 1;
  }
  iVar1 = DAT_00469888[0x19];
  iVar3 = (unaff_EDI + uVar2 * -0x12) * 0x10;
  puVar4 = (undefined4 *)(iVar3 + iVar1);
  if (*(int *)(iVar3 + iVar1) == -6) {
    uVar2 = *(uint *)(iVar5 + -0x10);
    if (uVar2 == 0xfffffff9) {
      uVar2 = *(uint *)(*(int *)(iVar5 + -8) + 0x10);
    }
    else if (uVar2 == 0xfffffffd) {
      uVar2 = *(uint *)(*(int *)(iVar5 + -8) + 0x14);
    }
    else if (uVar2 == 0) {
      uVar2 = *(uint *)(*(int *)(iVar5 + -8) + 0x10);
      uVar2 = uVar2 & (-1 < (int)uVar2) - 1;
    }
    iVar5 = (unaff_EDI + uVar2 * -0x12) * 0x10;
    puVar4 = (undefined4 *)(iVar5 + iVar1);
    if ((*(int *)(iVar5 + iVar1) == -6) &&
       (puVar4 = (undefined4 *)(unaff_EDI * 0x10 + iVar1), *(int *)(unaff_EDI * 0x10 + iVar1) == -6)
       ) {
      FUN_0028ab50(param_1);
    }
  }
  FUN_00289bc0((&PTR_s_gettable_003b9690)[unaff_EDI]);
  FUN_0028a540(3);
  iVar5 = *DAT_00469888;
  *(undefined4 *)(iVar5 + -0x40) = *puVar4;
  *(undefined4 *)(iVar5 + -0x3c) = puVar4[1];
  *(undefined4 *)(iVar5 + -0x38) = puVar4[2];
  *(undefined4 *)(iVar5 + -0x34) = puVar4[3];
  FUN_0028a8b0(3,1);
  return;
}
