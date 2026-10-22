/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BC1752C442D135DCA9E268824BF565C99E4FA43413212AEE298F7263453A1E23
 * Entry: 0x001a3c60, Ghidra index: 5342, label: FUN_001a3c60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001a3c60(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00165970();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_2);
  }
  return 0;
}
