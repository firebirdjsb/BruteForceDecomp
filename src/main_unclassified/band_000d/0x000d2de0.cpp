/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 57835A9CE2FE67D06AD1D9A62287C9321913F319AE752F87A9B99941C709108D
 * Entry: 0x000d2de0, Ghidra index: 2624, label: FUN_000d2de0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000d2de0(int *param_1)

{
  int iVar1;
  
  if ((*param_1 != 0) && (*param_1 != -1)) {
    FUN_00235b40();
    iVar1 = *param_1;
    if (iVar1 != 0) {
      FUN_00235ac0();
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(iVar1);
    }
    *param_1 = -1;
  }
  return;
}
