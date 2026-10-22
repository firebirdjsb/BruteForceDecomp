/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BCF03B190C78874FC0D53B1AC14AE05985ABFC4B2579504CB5094EF6E7EB2C08
 * Entry: 0x002b5950, Ghidra index: 9803, label: FUN_002b5950
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b5950(byte param_1)

{
  FUN_002b57e0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
