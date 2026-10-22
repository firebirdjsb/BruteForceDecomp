/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 38ACB8FEDF99B958D3C4EADF48CBD6B0FD00C1A800744EB29D06DD96BBDE42C9
 * Entry: 0x002ddda0, Ghidra index: 10329, label: FUN_002ddda0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002ddda0(byte param_1)

{
  FUN_00303220();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
