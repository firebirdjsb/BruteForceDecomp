/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3B246A2279BDC106876DCC99E05E83C20C643A0EF2EEE30A4489EE1550382518
 * Entry: 0x001f8b10, Ghidra index: 7068, label: FUN_001f8b10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001f8b10(byte param_1)

{
  FUN_001f8b30();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
