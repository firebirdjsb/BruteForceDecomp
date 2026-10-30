/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AAC9DCBB3562735722D55CA0B123A602CA16F3CA25BE79438E2B220E4C39FBCE
 * Entry: 0x00288130, Ghidra index: 9102, label: FUN_00288130
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00288130(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_2 - param_1 >> 2;
  iVar2 = iVar3 - (param_2 - param_1 >> 0x1f) >> 1;
  while (0 < iVar2) {
    piVar1 = *(int **)(param_1 + -4 + iVar2 * 4);
    iVar2 = iVar2 + -1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
    FUN_00288260(param_1,iVar3);
  }
  return;
}
