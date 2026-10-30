/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 162CD293BBC06E5EBC1429A7ED03A4A8C3674788D8719CAD47ECEDA38713B83F
 * Entry: 0x0010c200, Ghidra index: 3463, label: FUN_0010c200
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_0010c200(int *param_1,int *param_2)

{
  int unaff_EBX;
  
  if (param_2 != *(int **)(unaff_EBX + 4)) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
    if (param_2[7] != 0) {
      FUN_00141df0(param_2 + 6,param_2[9] - param_2[7] >> 2);
    }
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_2);
  }
  *param_1 = *param_2;
  return param_1;
}
