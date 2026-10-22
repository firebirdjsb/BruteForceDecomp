/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EF7CF7F1E341BAD9D9D50DCD371A7D788AAD473DBBC714AC8265F46C81E3C518
 * Entry: 0x002b3020, Ghidra index: 9754, label: FUN_002b3020
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b3020(byte param_1)

{
  FUN_002b3040();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
