/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F422E7251F6A9A070932F3982EF823694774201F1A7B6375E8AA3745A069A3D3
 * Entry: 0x000b1f80, Ghidra index: 2135, label: FUN_000b1f80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_000b1f80(int param_1)

{
  float fVar1;
  
  fVar1 = (1.0 - *(float *)(param_1 + 0x4c) / *(float *)(param_1 + 0x54)) * 6.0;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  if (1.0 <= fVar1) {
    fVar1 = 1.0;
  }
  return (float10)fVar1;
}
