/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D9EFA7760DE1EB4C9C77AFFA9754F769B832C5F48283C37F4C0D6763C1C0D2A3
 * Entry: 0x002a86d0, Ghidra index: 9618, label: FUN_002a86d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002a86d0(int param_1)

{
  FUN_002a0340();
  FUN_002a0000(*(undefined4 *)(*(int *)(param_1 + 0x10) + 4));
  *(int *)(*(int *)(param_1 + 0x10) + 4) = *(int *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(int *)(*(int *)(param_1 + 0x10) + 8) = *(int *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 8) = 0;
  return 0;
}
