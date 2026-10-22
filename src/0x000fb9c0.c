/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1DD4517FE95B47AA000D2CE6C39A76C71548F7CD8BBBEF17FD391D340DE573F5
 * Entry: 0x000fb9c0, Ghidra index: 3137, label: FUN_000fb9c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000fb9c0(int param_1)

{
  if (*(char *)(param_1 + 0x15) == '\0') {
    FUN_000fb9c0(*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1);
  }
  return;
}
