/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 16ED2998ACF2222328415C2A7D7D45D429B659B898B5EC570FEA256FCBF96727
 * Entry: 0x0013f5d0, Ghidra index: 4057, label: FUN_0013f5d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0013f5d0(int param_1)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  undefined1 local_8 [4];
  int local_4;
  
  local_4 = 0;
  if (in_EAX != 0) {
    FUN_0008f6a0();
  }
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = FUN_000e1910(param_1 + 4,iVar1,*(undefined4 *)(iVar1 + 4),local_8);
  FUN_000389d0();
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  if (local_4 != 0) {
    FUN_0008f6e0();
  }
  if (*(undefined4 **)(param_1 + 8) == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = **(undefined4 **)(param_1 + 8);
  return;
}
