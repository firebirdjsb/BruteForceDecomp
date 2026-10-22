/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C24DBD0D08D2B783C3055E67BCF56E0B9CFC5C1DE6C31547CB0969ACDC470853
 * Entry: 0x00274210, Ghidra index: 8874, label: FUN_00274210
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00274210(byte param_1)

{
  FUN_00274230();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
