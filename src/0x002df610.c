/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3828BAFAC12686D95FE145AE5B114B263E59589924C9039229FAC6C2B6AAB1C5
 * Entry: 0x002df610, Ghidra index: 10336, label: FUN_002df610
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_002df610(int param_1,float param_2)

{
  float fVar1;
  
  fVar1 = (param_2 - *(float *)(*(int *)(param_1 + 8) + 4)) * *(float *)(param_1 + 0x60);
  if (fVar1 < 0.0) {
    fVar1 = fVar1 - 1.0;
  }
  return (float10)(int)fVar1;
}
