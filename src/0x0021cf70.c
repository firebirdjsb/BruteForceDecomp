/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 913B834855290FAC4F1D46C984EA98F26F87334DB4637FB859966C3ECDD6F635
 * Entry: 0x0021cf70, Ghidra index: 7534, label: FUN_0021cf70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0021cf70(void)

{
  int *piVar1;
  int iVar2;
  char in_AL;
  int *unaff_EDI;
  
  if (in_AL == '\0') {
    iVar2 = *unaff_EDI;
    if (iVar2 != 0) {
      piVar1 = *(int **)(iVar2 + 0x14);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x34))(piVar1,7);
      }
      piVar1 = *(int **)(iVar2 + 0x14);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *(undefined4 *)(iVar2 + 0x14) = 0;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(iVar2);
    }
  }
  else if (*unaff_EDI != 0) {
    piVar1 = *(int **)(*unaff_EDI + 0x14);
    (**(code **)(*piVar1 + 0x34))(piVar1,1);
    (**(code **)(**(int **)(*unaff_EDI + 0x14) + 0x14))(*(int **)(*unaff_EDI + 0x14),0x7f7fffff,4);
    return;
  }
  return;
}
