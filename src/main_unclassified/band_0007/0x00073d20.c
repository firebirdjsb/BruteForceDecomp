/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C9EE96DBFA2CA396DB0E588D454FB587AE4151C140B2713478BE0F3E49DF4052
 * Entry: 0x00073d20, Ghidra index: 1310, label: FUN_00073d20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_00073d20(float *param_1)

{
  float fVar1;
  
  fVar1 = *param_1;
  if (*param_1 <= param_1[2]) {
    fVar1 = param_1[2];
  }
  if (1.0 <= fVar1) {
    fVar1 = 1.0;
  }
  return (float10)fVar1;
}
