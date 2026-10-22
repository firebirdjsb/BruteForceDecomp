/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DDED75D3F354E5A31B7D0E78499006EDDFCA04F95CB8CF4D3C8D51809EA3565F
 * Entry: 0x00262ba0, Ghidra index: 8662, label: FUN_00262ba0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00262ba0(int param_1,uint param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    if (param_2 < (uint)((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c)) / 0x14)) {
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x10 + param_2 * 0x14) = param_3;
      return 1;
    }
  }
  return 0;
}
