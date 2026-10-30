/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AE7CAD55ABA6ECC035887C435B1937C2E5DFD2ABB79C2320CD70A393C0B472A2
 * Entry: 0x000c4cd0, Ghidra index: 2414, label: FUN_000c4cd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000c4cd0(int param_1,int param_2)

{
  float fVar1;
  
  fVar1 = ((*(float *)(param_1 + 0x30) - 0.5) - (float)param_2 * 0.1) * 3.333;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  if (1.0 <= fVar1) {
    fVar1 = 1.0;
  }
  if ((0.0 < *(float *)(param_1 + 0x34)) && (*(float *)(param_1 + 0x34) < 0.3)) {
    fVar1 = *(float *)(param_1 + 0x34) * 3.3333333;
  }
  return (int)(fVar1 * 254.0 + (1.0 - fVar1) * 0.0);
}
