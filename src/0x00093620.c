/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FA535DC2450708C2383C7B30B6A18156BA736E3C26A70C3E6E5B9358D40BD647
 * Entry: 0x00093620, Ghidra index: 1809, label: FUN_00093620
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00093620(byte param_1)

{
  FUN_00092c50();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
