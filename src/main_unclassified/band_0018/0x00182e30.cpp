/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0304BA636608739B671DF50EEAE0FE19BA5ACB36608E23C4B3FC1A0C37C989A1
 * Entry: 0x00182e30, Ghidra index: 5190, label: FUN_00182e30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00182e30(byte param_1)

{
  FUN_00182e50();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
