/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A5BDA4D757A9BA40B3192D1831E408C2D47B5AC3C5894C83CDCBF956D073BFBA
 * Entry: 0x00257780, Ghidra index: 8456, label: FUN_00257780
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00257780(int param_1)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  int *piVar3;
  
  piVar3 = *(int **)(unaff_ESI + 0x14);
  iVar1 = (**(code **)(*piVar3 + 0x14))(piVar3,param_1);
  if (iVar1 < 0) {
    return 0x80004005;
  }
  iVar1 = *(int *)(unaff_ESI + 0x38);
  if ((iVar1 != 0) && (param_1 = *(int *)(unaff_ESI + 0x3c) - iVar1, param_1 != 0)) {
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = *(int *)(unaff_ESI + 0x3c) - iVar1;
    }
    iVar1 = (**(code **)(**(int **)(unaff_ESI + 0x14) + 0x14))
                      (*(int **)(unaff_ESI + 0x14),*(undefined4 *)(unaff_ESI + 0x38),iVar2,0);
    if (iVar1 < 0) {
      return 0x80004005;
    }
  }
  if (*(int *)(unaff_ESI + 0x38) == 0) {
    *(undefined4 *)(unaff_ESI + 0x38) = 0;
    *(undefined4 *)(unaff_ESI + 0x3c) = 0;
    *(undefined4 *)(unaff_ESI + 0x40) = 0;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(int *)(unaff_ESI + 0x38),piVar3,param_1);
}
