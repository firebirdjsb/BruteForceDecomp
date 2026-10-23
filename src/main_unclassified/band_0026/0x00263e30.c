/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ED26FD15351EC6A6C6F702BB170EB62C8666F5285F6B33214BA9E6BB9A30DFA6
 * Entry: 0x00263e30, Ghidra index: 8695, label: FUN_00263e30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00263e30(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int unaff_ESI;
  
  iVar3 = *(int *)(unaff_ESI + 0x10);
  while (iVar3 != 0) {
    if (*(int *)(unaff_ESI + 0x10) != 0) {
      uVar2 = *(int *)(unaff_ESI + 0x10) + -1 + *(int *)(unaff_ESI + 0xc);
      uVar5 = uVar2 >> 1;
      if (*(uint *)(unaff_ESI + 8) <= uVar5) {
        uVar5 = uVar5 - *(uint *)(unaff_ESI + 8);
      }
      piVar1 = (int *)(*(int *)(*(int *)(unaff_ESI + 4) + uVar5 * 4) + (uVar2 & 1) * 8);
      piVar4 = (int *)*piVar1;
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 8))(piVar4);
        *piVar1 = 0;
      }
      piVar1 = (int *)(unaff_ESI + 0x10);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *(undefined4 *)(unaff_ESI + 0xc) = 0;
      }
    }
    iVar3 = *(int *)(unaff_ESI + 0x10);
  }
  if (*(int *)(unaff_ESI + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(*(int *)(unaff_ESI + 4) + -4 + *(int *)(unaff_ESI + 8) * 4));
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(undefined4 *)(unaff_ESI + 4));
}
