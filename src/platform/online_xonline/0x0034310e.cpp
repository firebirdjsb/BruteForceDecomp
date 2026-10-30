/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D52B217B6DA9EEE5C2824A0B49CFEA4566E175F94F7ECF05F718156C2B3AFFA9
 * Entry: 0x0034310e, Ghidra index: 12704, label: FUN_0034310e
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034310e(int param_1,undefined4 param_2,uint param_3)

{
  if (1 < param_3) {
    **(char **)(param_1 + 0x24) = (char)param_3 + '\x7f';
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  }
  if (param_3 != 3) {
    if (param_3 != 4) {
      if (param_3 != 5) goto LAB_0034315f;
      **(undefined1 **)(param_1 + 0x24) = (char)((uint)param_2 >> 0x18);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    }
    **(undefined1 **)(param_1 + 0x24) = (char)((uint)param_2 >> 0x10);
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  }
  **(undefined1 **)(param_1 + 0x24) = (char)((uint)param_2 >> 8);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
LAB_0034315f:
  **(undefined1 **)(param_1 + 0x24) = (char)param_2;
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  return;
}
