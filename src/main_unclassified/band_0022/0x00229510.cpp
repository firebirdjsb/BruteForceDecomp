/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 55387B3E07684CA117A49568710099156986499A69FFF60356071D6397A57377
 * Entry: 0x00229510, Ghidra index: 7668, label: FUN_00229510
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00229510(byte param_1)

{
  FUN_0022b050();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
