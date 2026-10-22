/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3E5AA65DDD0F825A95F77075FC1E9B4DB75DA4FFA1B9E860DA524EC7E95C3FF2
 * Entry: 0x003838c9, Ghidra index: 13625, label: FUN_003838c9
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003838c9(int param_1)

{
  KfRaiseIrql();
  *(undefined4 *)(*(int *)(param_1 + -0x4c0) + 0x14) = 0x80000033;
  *(undefined4 *)(*(int *)(param_1 + -0x4c0) + 4) = 2;
  KfLowerIrql();
  return;
}
