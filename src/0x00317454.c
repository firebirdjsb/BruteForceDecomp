/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 97103B31C6AECBE8ACABA8A5EC7AF5D6C54E5254A85A1D7E8ADC6481642A8B46
 * Entry: 0x00317454, Ghidra index: 12175, label: FUN_00317454
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00317454(float *param_1)

{
  float10 fVar1;
  
  if ((((*param_1 != 0.0) || (param_1[1] != 0.0)) || (param_1[2] != 0.0)) &&
     (((*param_1 != 3.4028235e+38 && (param_1[1] != 3.4028235e+38)) && (param_1[2] != 3.4028235e+38)
      ))) {
    fVar1 = (float10)FUN_00314c76(param_1);
    fVar1 = (float10)1 / fVar1;
    *param_1 = (float)(fVar1 * (float10)*param_1);
    param_1[1] = (float)(fVar1 * (float10)param_1[1]);
    param_1[2] = (float)(fVar1 * (float10)param_1[2]);
  }
  return;
}
