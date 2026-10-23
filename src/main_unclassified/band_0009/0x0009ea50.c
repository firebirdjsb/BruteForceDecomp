/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B727F40C01023A6D44C9B2DC91586A4400EBE9FDA84DA4625D70C25AF344C33F
 * Entry: 0x0009ea50, Ghidra index: 1882, label: FUN_0009ea50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_0009ea50(int param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = 1.0 - *(float *)(*(int *)(param_1 + 0xc) + 0x4c) * *(float *)(param_1 + 0x78);
  fVar2 = 0.0;
  if (0.0 <= fVar1) {
    fVar2 = fVar1;
  }
  return (float10)fVar2;
}
