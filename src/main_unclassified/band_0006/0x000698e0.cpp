/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C2E2AB84017E6F49AABB0076A5E19A578AE74D6114176E6E07E9537C91149AF1
 * Entry: 0x000698e0, Ghidra index: 1168, label: FUN_000698e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000698e0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 != 0) {
    iVar1 = *(int *)(param_1 + 8);
    for (; iVar2 != iVar1; iVar2 = iVar2 + 0x94) {
      FUN_00069f10();
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}
