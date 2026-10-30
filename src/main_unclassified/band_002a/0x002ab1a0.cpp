/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7ED74EB48FAFC46A8E53BC3076A0F142BC317F79545B0539648DFBF64F9BC4FE
 * Entry: 0x002ab1a0, Ghidra index: 9661, label: FUN_002ab1a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002ab1a0(byte param_1)

{
  FUN_002ab1c0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
