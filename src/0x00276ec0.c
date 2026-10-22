/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BABB6F8E70D618734D6960E994F8B2B3F097F41D4CA255939E65B55D84ABDDAA
 * Entry: 0x00276ec0, Ghidra index: 8902, label: FUN_00276ec0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00276ec0(byte param_1)

{
  FUN_00276ee0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
