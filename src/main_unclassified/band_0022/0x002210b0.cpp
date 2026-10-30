/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1496977A02FE67084679CEC223EAC80606E044282396969EDBD2725A6B6F4322
 * Entry: 0x002210b0, Ghidra index: 7567, label: FUN_002210b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002210b0(byte param_1)

{
  FUN_00220fe0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
