/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2C2E10C3520FE93130985DBB4A3497C504E28F4B20C7BDC87E6E1B5159592EEC
 * Entry: 0x001fe130, Ghidra index: 7223, label: FUN_001fe130
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001fe130(byte param_1)

{
  FUN_001fe150();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
