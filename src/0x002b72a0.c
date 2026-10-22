/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0B9E71B488349ACFF4470DF5FCF9D64F563F80475EE03218EA9F7DA2B4B1B931
 * Entry: 0x002b72a0, Ghidra index: 9843, label: FUN_002b72a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_002b72a0(float param_1)

{
  float10 fVar1;
  
  if (param_1 < -0.5) {
    fVar1 = (float10)FUN_002b7160(SQRT((param_1 + 1.0) * 0.5));
    return (float10)3.1415927 - (fVar1 + fVar1);
  }
  if (0.5 < param_1) {
    fVar1 = (float10)FUN_002b7160(SQRT((1.0 - param_1) * 0.5));
    return fVar1 + fVar1;
  }
  fVar1 = (float10)FUN_002b7160(param_1);
  return (float10)1.5707964 - fVar1;
}
