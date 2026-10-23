/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E4B5F1B2BEDC307670B023841EBC9A0517A7D82CAE5882F1BB231CF7FB2AC32F
 * Entry: 0x00172fd0, Ghidra index: 4874, label: FUN_00172fd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00172fd0(byte param_1)

{
  FUN_00172ff0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
