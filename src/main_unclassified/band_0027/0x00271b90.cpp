/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1C86CD9E79F73A0AF0F074B58FD27FB8ADDA53D8600F9C782583A8EACC56E7D9
 * Entry: 0x00271b90, Ghidra index: 8821, label: FUN_00271b90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00271b90(byte param_1)

{
  FUN_00271bb0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
