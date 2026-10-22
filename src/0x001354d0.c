/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FEB553FD0B334F4434AC52CE484B4A7C1DF6D251A0120E6A8E7E9DBCFD31BD8E
 * Entry: 0x001354d0, Ghidra index: 3876, label: FUN_001354d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001354d0(int param_1)

{
  if (*(char *)(param_1 + 0x15) == '\0') {
    FUN_001354d0(*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1);
  }
  return;
}
