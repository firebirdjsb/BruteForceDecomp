/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B68CE049EF5FD688D536156B3826CDE3816588161C811C53BFC9A9244851CEC8
 * Entry: 0x0020c1f0, Ghidra index: 7350, label: FUN_0020c1f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0020c1f0(int param_1)

{
  undefined4 in_EAX;
  int iVar1;
  undefined4 unaff_EBX;
  
  iVar1 = FUN_000e1910(unaff_EBX,param_1,*(undefined4 *)(param_1 + 4),in_EAX);
  FUN_000389d0();
  *(int *)(param_1 + 4) = iVar1;
  **(int **)(iVar1 + 4) = iVar1;
  return;
}
