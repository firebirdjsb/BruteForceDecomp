/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2D1FF73206084CC642343F7112B314DFFBB54366678864544368D092B7071F76
 * Entry: 0x0017ac10, Ghidra index: 5022, label: FUN_0017ac10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0017ac10(byte param_1)

{
  FUN_0017ac30();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
