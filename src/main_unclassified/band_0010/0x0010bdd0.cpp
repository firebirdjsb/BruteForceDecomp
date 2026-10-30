/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1CB9450B0684B83DD09024259161F9AAD921EF1295CAB78D2D608C9C076944A0
 * Entry: 0x0010bdd0, Ghidra index: 3456, label: FUN_0010bdd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0010bdd0(byte param_1)

{
  FUN_0010bdf0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
