/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 963DCA3019BAFADC084BB425769CA51BEC515102600889768DDC2FEF8BFEA49B
 * Entry: 0x00190a20, Ghidra index: 5296, label: FUN_00190a20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00190a20(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00160050();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_2);
  }
  return 0;
}
