/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 09EEC62BCA076B665006BBE48AA16210192354DDC24AE1A41B8AE3E254C677C9
 * Entry: 0x001258d0, Ghidra index: 3697, label: FUN_001258d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_001258d0(int param_1,float param_2)

{
  float fVar1;
  
  if (*(float *)(param_1 + 0x494) <= param_2) {
    param_2 = *(float *)(param_1 + 0x494);
  }
  fVar1 = 0.0;
  if (0.0 <= param_2) {
    fVar1 = param_2;
  }
  *(float *)(param_1 + 0x490) = fVar1;
  return (float10)*(float *)(param_1 + 0x490);
}
