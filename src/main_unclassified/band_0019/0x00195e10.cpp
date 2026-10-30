/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DE86622EF250C7FD77F2455573F2B163A30597A9D2694A9A9EBF4FB927F4631A
 * Entry: 0x00195e10, Ghidra index: 5303, label: FUN_00195e10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00195e10(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_000d8bc0(param_2);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_2);
  }
  return 0;
}
