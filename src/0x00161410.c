/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1DBAF6F2DC68FD5688EF7061BF9211FF94C700B74CC2E7BD471793956C3178A5
 * Entry: 0x00161410, Ghidra index: 4606, label: FUN_00161410
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00161410(int param_1)

{
  if (*(char *)(param_1 + 0x19) == '\0') {
    FUN_00161410(*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1);
  }
  return;
}
