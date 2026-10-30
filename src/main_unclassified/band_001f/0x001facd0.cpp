/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1D25046A828BF6E91E5728EE3A94E7B03737315DC59EC2F69FA3652CAAF74712
 * Entry: 0x001facd0, Ghidra index: 7099, label: FUN_001facd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001facd0(int *param_1)

{
  int *unaff_EBX;
  int unaff_EDI;
  
  if (param_1 != *(int **)(unaff_EDI + 4)) {
    *(int *)param_1[1] = *param_1;
    *(int *)(*param_1 + 4) = param_1[1];
    if (param_1[3] != 0) {
      FUN_0008f6e0();
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1);
  }
  *unaff_EBX = *param_1;
  return;
}
