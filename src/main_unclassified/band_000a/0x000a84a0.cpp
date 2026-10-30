/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 88E734F9162248A62E49BA5FCD9E2A3AB20A1509946B0852AB6D3B3CBB22CEF5
 * Entry: 0x000a84a0, Ghidra index: 2007, label: FUN_000a84a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000a84a0(int param_1)

{
  if (*(char *)(param_1 + 0x15) == '\0') {
    FUN_000a84a0(*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1);
  }
  return;
}
