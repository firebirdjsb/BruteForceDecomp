/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C332F5BA5546C7F7D578636DCEEC7E7BB741756211C35170F216A6D9976B6997
 * Entry: 0x0035bc40, Ghidra index: 13203, label: thunk_FUN_002f8e70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void thunk_FUN_002f8e70(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  if (*(char *)(param_1 + -2) == '\x03') {
                    /* WARNING: Could not recover jumptable at 0x002f8e8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + -8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(param_1 - (uint)*(byte *)(param_1 + -1));
}
