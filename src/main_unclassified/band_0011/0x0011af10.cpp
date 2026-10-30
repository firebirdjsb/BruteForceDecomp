/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 622F9582FA610658509609B0B2AD7B4EF0BDE5F3F31D77928AB1720690AA0913
 * Entry: 0x0011af10, Ghidra index: 3612, label: FUN_0011af10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0011af10(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00124920();
  if (fVar1 < (float10)*(float *)(param_1 + 0x7ac)) {
    (**(code **)(**(int **)(param_1 + 0x5a4) + 0x28))(1);
    FUN_00124920();
    FUN_00124920();
  }
  return;
}
