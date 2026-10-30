/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4A4D660AE3A6B945375DC2CA501A25E4EC594AA8850E527A1F3ADFAB56074BF1
 * Entry: 0x000c4e10, Ghidra index: 2417, label: FUN_000c4e10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_000c4e10(int param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0xc) + *(float *)(param_1 + 8);
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  if (100.0 <= fVar1) {
    fVar1 = 100.0;
  }
  return ((float10)100.0 - (float10)fVar1) * (float10)0.01 * (float10)3.0;
}
