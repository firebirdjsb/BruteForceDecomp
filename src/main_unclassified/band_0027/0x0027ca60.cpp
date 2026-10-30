/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8E9E7C3868C253C80B6A239DD90CD379A3F13A8B41716BBB1ED56EA53E90A3CA
 * Entry: 0x0027ca60, Ghidra index: 8985, label: FUN_0027ca60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Guest32 free-thunk symbol and single word are modeled; ABI unverified. */
#include "bf_002ea018_heap_free_guest32.h"
void FUN_0027ca60(int param_1)

{
  if (*(char *)(param_1 + 0x1d) == '\0') {
    FUN_0027ca60(*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1);
  }
  return;
}
