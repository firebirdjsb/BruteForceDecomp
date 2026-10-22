/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 59122FA64AFFAD168D0329C240AD173AC8409365AED8885E5E480D41CE2B180D
 * Entry: 0x00288260, Ghidra index: 9105, label: FUN_00288260
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00288260(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int in_EAX;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  
  iVar2 = in_EAX;
  while( true ) {
    iVar5 = iVar2 * 2 + 2;
    if (param_2 <= iVar5) break;
    piVar1 = *(int **)(param_1 + iVar5 * 4);
    puVar3 = (uint *)(**(code **)(*piVar1 + 0xc))(piVar1);
    piVar1 = *(int **)(param_1 + -4 + iVar5 * 4);
    puVar4 = (uint *)(**(code **)(*piVar1 + 0xc))(piVar1);
    if (*puVar3 < *puVar4) {
      iVar5 = iVar2 * 2 + 1;
    }
    piVar1 = *(int **)(param_1 + iVar2 * 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + iVar2 * 4) = 0;
    }
    piVar1 = *(int **)(param_1 + iVar5 * 4);
    *(int **)(param_1 + iVar2 * 4) = piVar1;
    iVar2 = iVar5;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
  }
  if (iVar5 == param_2) {
    piVar1 = *(int **)(param_1 + iVar2 * 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + iVar2 * 4) = 0;
    }
    piVar1 = *(int **)(param_1 + -4 + param_2 * 4);
    *(int **)(param_1 + iVar2 * 4) = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
  }
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 4))(param_3,param_3);
  }
  FUN_00288340(param_1,in_EAX);
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))(param_3);
  }
  return;
}
