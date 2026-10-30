/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0B98CC40C42C95DF5E1EDAC1DA1C37018A7BF47B8A4C73DFD775C5BFE44D9E58
 * Entry: 0x002f5eb1, Ghidra index: 10909, label: FUN_002f5eb1
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002f5eb1(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x4c);
  *(undefined4 **)(*(int *)(param_1 + 0x18) + 0x4c) = param_2;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}
