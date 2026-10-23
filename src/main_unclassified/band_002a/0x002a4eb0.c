/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1653F48E1B2C83C35B3AAEADD9DC635D4D6CD5F0B839A2FE566C487C84242E2B
 * Entry: 0x002a4eb0, Ghidra index: 9556, label: FUN_002a4eb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002a4eb0(byte param_1)

{
  FUN_002a4c70();
  FUN_00060dc0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
