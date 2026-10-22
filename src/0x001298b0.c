/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A10BD14E3C5D631FFC7DFE6DB22DDE33FF43E9A3C3975A09E34DC0C309554D1F
 * Entry: 0x001298b0, Ghidra index: 3751, label: FUN_001298b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_001298b0(undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int unaff_EDI;
  
  do {
    piVar1 = param_2;
    if (piVar1 == param_3) {
      *param_1 = piVar1;
      return param_1;
    }
    param_2 = (int *)*piVar1;
  } while (piVar1 == *(int **)(unaff_EDI + 4));
  *(int *)piVar1[1] = *piVar1;
  *(int *)(*piVar1 + 4) = piVar1[1];
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(piVar1);
}
