/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4231BEF33EFE0EAE09EBADB9206F78499A6FE3DF63530C6732820522D72CDFFA
 * Entry: 0x0017b520, Ghidra index: 5028, label: FUN_0017b520
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0017b520(byte param_1)

{
  FUN_0017b540();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
