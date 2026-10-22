/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C5E64A99A19B7E7679350CD303BEDDC98238F6AFBAEE1644BEBCAE90CA96A82C
 * Entry: 0x000c6170, Ghidra index: 2434, label: FUN_000c6170
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000c6170(int param_1,float param_2)

{
  float fVar1;
  
  *(float *)(param_1 + 0x94) = *(float *)(param_1 + 0x94) - param_2;
  fVar1 = 0.0;
  if (0.0 <= *(float *)(param_1 + 0x94)) {
    fVar1 = *(float *)(param_1 + 0x94);
  }
  *(float *)(param_1 + 0x94) = fVar1;
  return;
}
