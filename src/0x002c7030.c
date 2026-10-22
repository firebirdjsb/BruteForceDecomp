/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C37303951656086EB4569C77C5D00ED911820C548043375796AF373E52DDECE2
 * Entry: 0x002c7030, Ghidra index: 10091, label: FUN_002c7030
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c7030(byte param_1)

{
  FUN_002c7050();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
