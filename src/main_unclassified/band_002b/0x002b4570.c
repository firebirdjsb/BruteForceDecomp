/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 83C4ECE919046F84B1324AA73F413C3F7B0DF936DE6DCD347C451EFDBA5F668E
 * Entry: 0x002b4570, Ghidra index: 9785, label: FUN_002b4570
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b4570(float *param_1)

{
  float fVar1;
  
  fVar1 = param_1[3] * param_1[3] +
          param_1[2] * param_1[2] + param_1[1] * param_1[1] + *param_1 * *param_1;
  if (1e-10 < fVar1) {
    fVar1 = 1.0 / SQRT(fVar1);
    *param_1 = fVar1 * *param_1;
    param_1[1] = fVar1 * param_1[1];
    param_1[2] = fVar1 * param_1[2];
    param_1[3] = fVar1 * param_1[3];
    return;
  }
  return;
}
