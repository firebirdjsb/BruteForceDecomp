/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A4FE66F8EE1539132A1DCEB88ED201CEFD79E68F79C249EB242921128CD66B69
 * Entry: 0x00124740, Ghidra index: 3686, label: FUN_00124740
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_00124740(int param_1)

{
  float10 fVar1;
  float fVar2;
  
  fVar1 = (float10)0.0;
  if (0.0 < *(float *)(*(int *)(param_1 + 0xc) + 600)) {
    fVar2 = (*(float *)(param_1 + 2000) / *(float *)(*(int *)(param_1 + 0xc) + 600)) * 4.0;
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
    fVar1 = (float10)fVar2;
  }
  return fVar1;
}
