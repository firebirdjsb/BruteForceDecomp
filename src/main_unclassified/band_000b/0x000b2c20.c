/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D747A005DDA74110F28D27655F43907FBD3F42288A0FAFFF9D5AE8A8FCCDC610
 * Entry: 0x000b2c20, Ghidra index: 2158, label: FUN_000b2c20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000b2c20(int param_1,float param_2)

{
  float fVar1;
  
  *(float *)(param_1 + 0x30) = param_2 + *(float *)(param_1 + 0x30);
  fVar1 = 1.0;
  if (*(float *)(param_1 + 0x30) <= 1.0) {
    fVar1 = *(float *)(param_1 + 0x30);
  }
  *(float *)(param_1 + 0x30) = fVar1;
  return;
}
