/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FA3A5644C24EA3606B8DD28BFEF258F2CE18E5D3E5261F07875647C09A3B3863
 * Entry: 0x000b70f0, Ghidra index: 2202, label: FUN_000b70f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_000b70f0(int param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = ((*(float *)(param_1 + 0x30) / *(float *)(param_1 + 0x6c)) * *(float *)(param_1 + 0x84) -
          (*(float *)(param_1 + 0x94) - *(float *)(param_1 + 0x88))) -
          (*(float *)(param_1 + 0x98) - *(float *)(param_1 + 0x8c));
  fVar2 = 0.0;
  if (0.0 <= fVar1) {
    fVar2 = fVar1;
  }
  return (float10)fVar2;
}
