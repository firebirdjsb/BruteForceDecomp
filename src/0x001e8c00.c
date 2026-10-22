/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B01206EDF964B731172E186EE5E73BA5523D24DB59534211D0F009006CE8318F
 * Entry: 0x001e8c00, Ghidra index: 6844, label: FUN_001e8c00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e8c00(byte param_1)

{
  FUN_001e8c20();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
