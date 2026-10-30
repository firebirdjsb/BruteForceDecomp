/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F2EEE00289FCD2D4BA389A38A45B11AA19793E10FF334CE0E1BDA355A460351A
 * Entry: 0x00193960, Ghidra index: 5301, label: FUN_00193960
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00193960(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_001604c0();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_2);
  }
  return 0;
}
