/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FFCBCC39EF87C6A6C02B5FEA78ED8BD589921CF6B5B0F2AD41E2788B451F0870
 * Entry: 0x002562e0, Ghidra index: 8434, label: FUN_002562e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002562e0(int param_1)

{
  if (*(int *)(param_1 + 100) != 0) {
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
  }
  if (*(int *)(param_1 + 100) == 0) {
    *(undefined4 *)(param_1 + 100) = 1;
    FUN_00256140();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1);
  }
  return;
}
