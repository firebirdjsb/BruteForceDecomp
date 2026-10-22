/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 13119C7EEDBB33C0C6DC941B73C5614B91E30ABB7B5542A606F6E4D5DBE3AC32
 * Entry: 0x00272810, Ghidra index: 8839, label: FUN_00272810
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00272810(byte param_1)

{
  FUN_00271260();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
