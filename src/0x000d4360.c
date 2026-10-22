/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4299A8D1044B9190C93EBB92453AFF4004822FF08B370DC5E304AA748844C193
 * Entry: 0x000d4360, Ghidra index: 2646, label: FUN_000d4360
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000d4360(int param_1,float param_2)

{
  float fVar1;
  
  *(float *)(param_1 + 0xc10) = *(float *)(param_1 + 0xc10) - param_2;
  fVar1 = 0.0;
  if (0.0 <= *(float *)(param_1 + 0xc10)) {
    fVar1 = *(float *)(param_1 + 0xc10);
  }
  *(float *)(param_1 + 0xc10) = fVar1;
  if (0.0 < *(float *)(param_1 + 0xc10)) {
    return 1;
  }
  return 0;
}
