/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 54E695CD65AA7FB20FBC577DD2B356696EA56926B0FD292453265FAB2D8B0BA3
 * Entry: 0x002c78c0, Ghidra index: 10105, label: FUN_002c78c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c78c0(byte param_1)

{
  FUN_002c7900();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
