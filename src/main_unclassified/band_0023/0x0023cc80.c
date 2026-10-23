/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9D4244A85DD5C5144E85BE2A8D5CCD36F8EE4733AF5532D3257639FBD6757D9F
 * Entry: 0x0023cc80, Ghidra index: 7942, label: FUN_0023cc80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0023cc80(int param_1)

{
  if (param_1 != 0) {
    FUN_0023cb60();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1);
  }
  return;
}
