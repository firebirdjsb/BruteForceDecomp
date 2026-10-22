/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8F5721DCB74A82191B70DA4A7E10CE37055141DE3A94CB07434394B48AB88600
 * Entry: 0x001faba0, Ghidra index: 7097, label: FUN_001faba0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_001faba0(int param_1)

{
  float10 fVar1;
  float fVar2;
  
  fVar1 = (float10)*(float *)(param_1 + 0x124);
  if (*(float *)(param_1 + 0x124) < 0.0) {
    fVar2 = *(float *)(param_1 + 0x118);
    if (*(float *)(param_1 + 0x118) <= *(float *)(param_1 + 0x120)) {
      fVar2 = *(float *)(param_1 + 0x120);
    }
    fVar1 = (float10)fVar2 + (float10)fVar2;
  }
  return fVar1;
}
