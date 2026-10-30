/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F20BB6C3CE8C64FEB733EAA9F3FFB0C98A00EE17C0837487F6B58B3CE6543ED4
 * Entry: 0x001a4f10, Ghidra index: 5352, label: FUN_001a4f10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001a4f10(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00086940();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_2);
  }
  return 0;
}
