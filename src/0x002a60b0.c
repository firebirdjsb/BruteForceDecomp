/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ED3C157AACC57691C215ECE6957FF27EE479435D9E9921D5387FE00CF424C586
 * Entry: 0x002a60b0, Ghidra index: 9579, label: FUN_002a60b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002a60b0(int param_1)

{
  FUN_002a0340();
  FUN_002a0000(*(undefined4 *)(*(int *)(param_1 + 0xc) + 4));
  *(int *)(*(int *)(param_1 + 0xc) + 4) = *(int *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(int *)(*(int *)(param_1 + 0xc) + 8) = *(int *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 4) = 0;
  return 0;
}
