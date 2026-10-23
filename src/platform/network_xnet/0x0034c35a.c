/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8F0F120AF95D92571C2F3A3AB174CD470E8BEAF525AA4F1345C908E46444467C
 * Entry: 0x0034c35a, Ghidra index: 12956, label: FUN_0034c35a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034c35a(int *param_1,uint param_2)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    piVar2 = (int *)param_1[1];
    *piVar2 = iVar1;
    *(int **)(iVar1 + 4) = piVar2;
    *param_1 = 0;
  }
  param_1[2] = param_2;
  if (param_2 != 0xffffffff) {
    piVar2 = (int *)(in_ECX + 0x1d0);
    if (((int *)*piVar2 == piVar2) || (param_2 <= (uint)((int *)*piVar2)[2])) {
      iVar1 = *piVar2;
      *param_1 = iVar1;
      param_1[1] = (int)piVar2;
      *(int **)(iVar1 + 4) = param_1;
      *piVar2 = (int)param_1;
    }
    else {
      for (piVar2 = *(int **)(in_ECX + 0x1d4); param_2 < (uint)piVar2[2]; piVar2 = (int *)piVar2[1])
      {
      }
      *param_1 = *piVar2;
      param_1[1] = (int)piVar2;
      *(int **)(*piVar2 + 4) = param_1;
      *piVar2 = (int)param_1;
    }
  }
  return;
}
