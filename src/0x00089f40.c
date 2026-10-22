/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F03C181ADD59F1290EDB981A108AE852864CE28DB09524A15A95422AF94D3ABD
 * Entry: 0x00089f40, Ghidra index: 1650, label: FUN_00089f40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00089f40(int param_1,undefined4 *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  
  do {
    piVar1 = param_3;
    if (piVar1 == param_4) {
      *param_2 = piVar1;
      return;
    }
    param_3 = (int *)*piVar1;
  } while (piVar1 == *(int **)(param_1 + 4));
  *(int *)piVar1[1] = *piVar1;
  *(int *)(*piVar1 + 4) = piVar1[1];
  FUN_002248e0();
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(piVar1);
}
