/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BDE63ABD32CDA15E54DE4C9040AA40C30A4885EAEF0139A90F6CBA52FDF4427D
 * Entry: 0x00139220, Ghidra index: 3939, label: FUN_00139220
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00139220(int param_1)

{
  if (*(char *)(param_1 + 0x15) == '\0') {
    FUN_00139220(*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1);
  }
  return;
}
