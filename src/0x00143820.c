/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 15BACDE585476748C9A6E66A9F86004EAE4EB83C1E2E54D3244CE89AF986BC18
 * Entry: 0x00143820, Ghidra index: 4144, label: FUN_00143820
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00143820(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int unaff_EDI;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(unaff_EDI + 0x10) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(int *)(unaff_EDI + 0x14) - *(int *)(unaff_EDI + 0x10) >> 2;
  }
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 4;
  }
  if ((uVar4 == uVar1) && (uVar1 = 0, uVar4 != 0)) {
    iVar3 = 0;
    do {
      puVar2 = (undefined4 *)(*(int *)(param_1 + 4) + iVar3);
      if (*(int *)(*(int *)(*(int *)(unaff_EDI + 0x1c) + 0x24) + 4 + uVar1 * 8) == 0) {
        local_4 = puVar2[2];
        local_c = *puVar2;
        local_8 = puVar2[1];
        local_10 = puVar2[3];
        puVar2 = &local_10;
      }
      FUN_00234dc0(*(undefined4 *)(*(int *)(*(int *)(unaff_EDI + 0x10) + uVar1 * 4) + 0x10),puVar2);
      uVar1 = uVar1 + 1;
      iVar3 = iVar3 + 0x10;
    } while (uVar1 < uVar4);
  }
  return;
}
