/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9990D2066F6C6B04555E30395AE5EE670827A4A82C1381FE4076FA00ABA47899
 * Entry: 0x001fd970, Ghidra index: 7203, label: FUN_001fd970
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001fd970(byte param_1)

{
  FUN_001fd8b0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
