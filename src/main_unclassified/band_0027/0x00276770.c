/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 43B6D82D882F31B2F950F471477EF2924045F498E01BAD1A412FC2AF2E28CE99
 * Entry: 0x00276770, Ghidra index: 8898, label: FUN_00276770
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00276770(byte param_1)

{
  FUN_00276790();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
