/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 162C7932B28E47240B47C0E875511F11E0216C93B9FDA21B0E1B07FF435CB439
 * Entry: 0x00272f20, Ghidra index: 8849, label: FUN_00272f20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00272f20(byte param_1)

{
  FUN_002733b0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
