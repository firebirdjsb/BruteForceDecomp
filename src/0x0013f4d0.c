/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 97C4DEDA44FBC60256D22FF9F8835960171168CFC05ECF3932A52ACDDB918078
 * Entry: 0x0013f4d0, Ghidra index: 4053, label: FUN_0013f4d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0013f4d0(byte param_1)

{
  FUN_0013f480();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
