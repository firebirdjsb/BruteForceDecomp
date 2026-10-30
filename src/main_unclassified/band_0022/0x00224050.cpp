/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 81EA05E9F0BCEA541C1CE1F5DD634133C11ADD6442853B02FEB5AEFE26F85A89
 * Entry: 0x00224050, Ghidra index: 7610, label: FUN_00224050
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00224050(int param_1)

{
  if (*(char *)(param_1 + 0x15) == '\0') {
    FUN_00224050(*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1);
  }
  return;
}
