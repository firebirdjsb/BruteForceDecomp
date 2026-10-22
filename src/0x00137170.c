/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 806301B5BD4F78F0E449A2D542BB2F4568FC29B5D548F99D5C94B462E6713DF7
 * Entry: 0x00137170, Ghidra index: 3900, label: FUN_00137170
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00137170(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int unaff_EBX;
  int *piVar2;
  int unaff_EDI;
  
  if (*(int *)(unaff_EBX + 4) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_EBX + 4));
  }
  *(undefined4 *)(unaff_EBX + 4) = 0;
  *(undefined4 *)(unaff_EBX + 8) = 0;
  *(undefined4 *)(unaff_EBX + 0xc) = 0;
  piVar2 = *(int **)(unaff_EDI + 0x30);
  if (piVar2 != *(int **)(unaff_EDI + 0x34)) {
    do {
      iVar1 = FUN_00137360(unaff_EDI,param_2,0);
      if ((*piVar2 <= iVar1) && (iVar1 <= piVar2[1])) {
        FUN_00137720(piVar2);
      }
      piVar2 = piVar2 + 5;
    } while (piVar2 != *(int **)(unaff_EDI + 0x34));
  }
  if (*(int *)(unaff_EBX + 4) != 0) {
    return (*(int *)(unaff_EBX + 8) - *(int *)(unaff_EBX + 4)) / 0x14;
  }
  return 0;
}
