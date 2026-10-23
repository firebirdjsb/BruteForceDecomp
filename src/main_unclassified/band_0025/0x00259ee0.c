/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F434675868A2D9EDAD286FDF7B658BB99094B804EB6D4EC681E05E35C6F01254
 * Entry: 0x00259ee0, Ghidra index: 8516, label: FUN_00259ee0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00259ee0(byte param_1)

{
  FUN_00259e20();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
