/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AE85AF8B6398DF18CD00FEE1943493B7A142760D788CD11DEAE19028DEF431C7
 * Entry: 0x000c1f30, Ghidra index: 2362, label: FUN_000c1f30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000c1f30(byte param_1)

{
  FUN_000c1f50();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
