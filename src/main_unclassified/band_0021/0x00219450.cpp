/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7CADE90B36E356E5F57C992D8BCCB39C99B41C925343F1211D96A279E72AAE22
 * Entry: 0x00219450, Ghidra index: 7497, label: FUN_00219450
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00219450(void)

{
  int iVar1;
  int *piVar2;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  if (iVar1 != 0) {
    piVar2 = *(int **)(iVar1 + 0x14);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x34))(piVar2,7);
    }
    piVar2 = *(int **)(iVar1 + 0x14);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      *(undefined4 *)(iVar1 + 0x14) = 0;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar1);
  }
  if (in_ECX[4] != 0) {
    FUN_0008f6e0();
  }
  piVar2 = (int *)in_ECX[2];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    in_ECX[2] = 0;
  }
  piVar2 = (int *)in_ECX[1];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    in_ECX[1] = 0;
  }
  return;
}
