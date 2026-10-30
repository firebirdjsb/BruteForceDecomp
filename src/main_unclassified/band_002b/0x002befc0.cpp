/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9A7CBA09736E3718EFBDC4DF18947FDE68AF2B7C6624BF97CCDFC8E7DA9F3DAA
 * Entry: 0x002befc0, Ghidra index: 9988, label: FUN_002befc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002befc0(double *param_1,int param_2,float param_3,double param_4)

{
  undefined4 uVar1;
  
  FUN_002d5de0();
  uVar1 = FUN_002d5d50(param_2,(float)(((float10)param_4 - (float10)*param_1) *
                                       (float10)*(float *)(param_1 + 1) +
                                       (float10)*(float *)(param_1 + 2) + (float10)param_3));
  *(undefined4 *)(param_2 + 4) = uVar1;
  return;
}
