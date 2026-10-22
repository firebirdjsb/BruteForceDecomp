/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 12346530498603F20897FC364722D1AE6B1270D879E95D4486009A889C3D23F8
 * Entry: 0x002bf320, Ghidra index: 9996, label: FUN_002bf320
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002bf320(byte param_1)

{
  FUN_002bf340();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
