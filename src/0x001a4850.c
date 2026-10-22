/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1D5731D48293E7ACE05884F954E5D081FC4540836D957F56223ED91A5D4175F7
 * Entry: 0x001a4850, Ghidra index: 5345, label: FUN_001a4850
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001a4850(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_0007b430();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_2);
  }
  return 0;
}
