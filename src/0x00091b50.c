/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 48E73977E2AE57D8722F389C8D6218D7D8C49DB6C0F4271B08BFDFA2411293FF
 * Entry: 0x00091b50, Ghidra index: 1790, label: FUN_00091b50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00091b50(int param_1)

{
  FUN_00090930(param_1);
  if ((*(int *)(param_1 + 0x24) == 2) || (*(int *)(param_1 + 0x34) == 2)) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    return;
  }
  if ((*(int *)(param_1 + 0x24) == 1) && (*(int *)(param_1 + 0x34) == 1)) {
    *(undefined4 *)(param_1 + 0x14) = 2;
    return;
  }
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}
