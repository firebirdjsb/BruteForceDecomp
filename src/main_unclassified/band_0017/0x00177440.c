/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EEC2C9EB52219313FAB3570833DA197BA0C29F3029F5AA868A6DEDAE8A6EE122
 * Entry: 0x00177440, Ghidra index: 4950, label: FUN_00177440
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00177440(byte param_1)

{
  FUN_00177460();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
