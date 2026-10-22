/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 23A977298A768E79D48FAB5D8BCF09590698ECF954F712FBA0669CB395C02F97
 * Entry: 0x000ef7f0, Ghidra index: 2977, label: FUN_000ef7f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000ef7f0(void)

{
  int unaff_EBX;
  int *piVar1;
  
  for (piVar1 = *(int **)(unaff_EBX + 0x54); piVar1 != *(int **)(unaff_EBX + 0x58);
      piVar1 = piVar1 + 1) {
    if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*piVar1);
    }
  }
  if (*(int *)(unaff_EBX + 0x54) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_EBX + 0x54));
  }
  *(undefined4 *)(unaff_EBX + 0x54) = 0;
  *(undefined4 *)(unaff_EBX + 0x58) = 0;
  *(undefined4 *)(unaff_EBX + 0x5c) = 0;
  return;
}
