/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 27C857BD579A153DE4D82069E6F02059880AA9F410EF3BD36A31653F9D1EE6F8
 * Entry: 0x00144e50, Ghidra index: 4180, label: FUN_00144e50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00144e50(float param_1)

{
  float fVar1;
  float *in_ECX;
  float *in_EDX;
  
  param_1 = param_1 * param_1;
  fVar1 = (*in_EDX - *in_ECX) * (*in_EDX - *in_ECX);
  if ((((fVar1 < param_1 != (fVar1 == param_1)) &&
       (fVar1 = (in_EDX[1] - in_ECX[1]) * (in_EDX[1] - in_ECX[1]),
       fVar1 < param_1 != (fVar1 == param_1))) &&
      (fVar1 = (in_EDX[2] - in_ECX[2]) * (in_EDX[2] - in_ECX[2]),
      fVar1 < param_1 != (fVar1 == param_1))) &&
     (fVar1 = (in_EDX[3] - in_ECX[3]) * (in_EDX[3] - in_ECX[3]),
     fVar1 < param_1 != (fVar1 == param_1))) {
    return 1;
  }
  return 0;
}
