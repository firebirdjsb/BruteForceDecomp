/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5F50338194B6C30785B8F0FE26BFE916E953D350CCC1204ECBE679E6A1E30058
 * Entry: 0x00077ca0, Ghidra index: 1410, label: FUN_00077ca0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00077ca0(byte param_1)

{
  FUN_00077d50();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
