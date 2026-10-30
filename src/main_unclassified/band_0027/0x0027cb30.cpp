/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9D34251DCA4C873781E3E4A327434E25C65A46F1357D8587BCB23A8A56DD4960
 * Entry: 0x0027cb30, Ghidra index: 8989, label: FUN_0027cb30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0027cb30(int param_1)

{
  if (*(char *)(param_1 + 0x21) == '\0') {
    FUN_0027cb30(*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1);
  }
  return;
}
