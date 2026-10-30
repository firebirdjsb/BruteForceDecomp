/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 21E1D0058157EA32D9916CA760B9C9164CFEB4DEC791B52C7CEA654B2AB1BA7C
 * Entry: 0x00259830, Ghidra index: 8506, label: FUN_00259830
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00259830(byte param_1)

{
  FUN_002597d0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
