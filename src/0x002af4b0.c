/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7F60F3A64F50CC0D282665DF61380A73B998F4700381C11986D675686CDE17F6
 * Entry: 0x002af4b0, Ghidra index: 9716, label: FUN_002af4b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002af4b0(byte param_1)

{
  FUN_002af4d0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
