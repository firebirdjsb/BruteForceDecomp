/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5D4A88CDE95834A23418A25B7B29D161E64282260C52C9152C9B57AA311EFBC0
 * Entry: 0x00258600, Ghidra index: 8470, label: FUN_00258600
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00258600(int param_1)

{
  if (*(char *)(param_1 + 0x15) == '\0') {
    FUN_00258600(*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1);
  }
  return;
}
