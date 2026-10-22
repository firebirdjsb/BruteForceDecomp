/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 100A80318CAF03A817154CEA8FE3FD883A5A764A8488578E915E8F1EE10BDEEB
 * Entry: 0x0010ea00, Ghidra index: 3519, label: FUN_0010ea00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_0010ea00(float param_1)

{
  int *unaff_ESI;
  float10 fVar1;
  
  if ((float)unaff_ESI[1] == 0.0) {
    fVar1 = (float10)(**(code **)(*unaff_ESI + 0x18))();
    unaff_ESI[1] = (int)(float)fVar1;
  }
  param_1 = (float)unaff_ESI[1] - param_1;
  if (!isnan(param_1) && param_1 < 0.0 != (param_1 == 0.0)) {
    unaff_ESI[1] = 0;
    return (float10)(float)unaff_ESI[1];
  }
  unaff_ESI[1] = (int)param_1;
  return (float10)(float)unaff_ESI[1];
}
