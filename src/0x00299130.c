/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C83471A310FBCB99E9898E7D22A424E833802CEE603DAD0782B966A631731A64
 * Entry: 0x00299130, Ghidra index: 9368, label: FUN_00299130
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
void FUN_00299130(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (*(int *)(DAT_00469888 + 0x14) < 1) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(DAT_00469888 + 0x10) + 1;
    if ((iVar3 != 0) && (*(int *)(*(int *)(DAT_00469888 + 4) + -0x10 + iVar3 * 0x10) == -3))
    goto LAB_0029918c;
  }
  FUN_00295240();
LAB_0029918c:
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(DAT_00469888 + 4) + -0x10 + iVar3 * 0x10;
  }
  uVar1 = *(undefined4 *)(iVar3 + 8);
  FUN_00296d20();
  uVar2 = FUN_002ebf10();
  if ((((1 < *(int *)(DAT_00469888 + 0x14)) &&
       (iVar4 = *(int *)(DAT_00469888 + 0x10) + 2, iVar4 != 0)) &&
      (iVar3 = FUN_00289e20(), iVar3 != -4)) && (iVar3 != -5)) {
    FUN_00295240();
  }
  FUN_0028a460();
  FUN_00298d40(uVar1,1,uVar2,iVar4);
  FUN_00289d80();
  return;
}
