/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B7423E7A410FCF153E0E2ED9E5503FC2AD9228BA18436F28E4955E5C7F01C9EA
 * Entry: 0x0013d1a0, Ghidra index: 4013, label: FUN_0013d1a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0013d1a0(int param_1,float param_2)

{
  float fVar1;
  
  *(float *)(param_1 + 0x28) = param_2 * *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x28);
  fVar1 = *(float *)(param_1 + 0x28);
  if (*(float *)(param_1 + 0x28) <= 0.0) {
    fVar1 = 0.0;
  }
  if (1.0 <= fVar1) {
    fVar1 = 1.0;
  }
  *(float *)(param_1 + 0x28) = fVar1;
  return;
}
