/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ACAF8702B7B11541F166778B66DF03F77E1050EBE05F4C87E906F9AC8CAA1A86
 * Entry: 0x000b70a0, Ghidra index: 2201, label: FUN_000b70a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_000b70a0(int param_1)

{
  float10 fVar1;
  float fVar2;
  
  fVar1 = ((float10)*(float *)(param_1 + 0x38) / (float10)*(float *)(param_1 + 0x30)) *
          ((float10)*(float *)(param_1 + 0x30) / (float10)*(float *)(param_1 + 0x6c)) *
          (float10)*(float *)(param_1 + 0x84);
  if ((float10)0.0 < fVar1) {
    fVar2 = (float)fVar1;
    if ((float)fVar1 <= 2.0) {
      fVar2 = 2.0;
    }
    fVar1 = (float10)fVar2;
  }
  return fVar1;
}
