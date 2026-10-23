/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B1C239BA413B8CD0692C81AD50F709BBAEB974D54BAFFB7EC4793BD263494B5B
 * Entry: 0x002b66f0, Ghidra index: 9828, label: FUN_002b66f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b66f0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  if (1e-10 <= ABS(*param_2)) {
    *param_1 = param_2[1] * param_2[1] - param_2[2] * *param_2 * 4.0;
    if (0.0 <= *param_1) {
      fVar1 = *param_2;
      fVar2 = param_2[1];
      param_1[1] = (-param_2[1] - SQRT(*param_1)) * (0.5 / fVar1);
      param_1[2] = (SQRT(*param_1) - fVar2) * (0.5 / fVar1);
    }
    return;
  }
  *param_1 = 0.0;
  if (ABS(param_2[1]) < 1e-10) {
    *param_1 = -1.0;
    return;
  }
  param_1[2] = -(param_2[2] / param_2[1]);
  param_1[1] = param_1[2];
  return;
}
