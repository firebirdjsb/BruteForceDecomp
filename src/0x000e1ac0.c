/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FE71DEC90114865B585F6939893946569CE42888EED7C04D2D9DE08C260798EB
 * Entry: 0x000e1ac0, Ghidra index: 2777, label: FUN_000e1ac0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e1ac0(undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int unaff_EBX;
  
  do {
    piVar1 = param_2;
    if (piVar1 == param_3) {
      *param_1 = piVar1;
      return;
    }
    param_2 = (int *)*piVar1;
  } while (piVar1 == *(int **)(unaff_EBX + 4));
  *(int *)piVar1[1] = *piVar1;
  *(int *)(*piVar1 + 4) = piVar1[1];
  if (piVar1[3] != 0) {
    FUN_0008f6e0();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(piVar1);
}
