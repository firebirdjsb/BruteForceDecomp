/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C6F2C0DE50237EEAECF0B535D53919A2DE4609B74A8E4B61E7CA72D2B439BCE2
 * Entry: 0x00288460, Ghidra index: 9108, label: FUN_00288460
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00288460(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int **ppiVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piStack_10;
  int *piStack_c;
  int *piStack_8;
  int *local_4;
  
  iVar7 = (int)param_3 - (int)param_1 >> 2;
  iVar8 = param_2 - (int)param_1 >> 2;
  iVar5 = iVar8;
  param_2 = iVar7;
  while (iVar2 = iVar5, iVar2 != 0) {
    iVar5 = param_2 % iVar2;
    param_2 = iVar2;
  }
  if ((param_2 < iVar7) && (0 < param_2)) {
    piVar9 = param_1 + param_2;
    do {
      local_4 = (int *)*piVar9;
      if (local_4 != (int *)0x0) {
        (**(code **)(*local_4 + 4))(local_4);
      }
      if (piVar9 + iVar8 == param_3) {
        ppiVar6 = &param_1;
      }
      else {
        piStack_10 = piVar9 + iVar8;
        ppiVar6 = &piStack_10;
      }
      piVar1 = *ppiVar6;
      piVar4 = piVar9;
      while (piVar3 = piVar1, piVar3 != piVar9) {
        piVar1 = (int *)*piVar4;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
          *piVar4 = 0;
        }
        piVar1 = (int *)*piVar3;
        *piVar4 = (int)piVar1;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 4))(piVar1);
        }
        iVar5 = (int)param_3 - (int)piVar3 >> 2;
        if (iVar8 < iVar5) {
          piStack_c = piVar3 + iVar8;
          ppiVar6 = &piStack_c;
        }
        else {
          piStack_8 = param_1 + (iVar8 - iVar5);
          ppiVar6 = &piStack_8;
        }
        piVar4 = piVar3;
        piVar1 = *ppiVar6;
      }
      piVar1 = (int *)*piVar4;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *piVar4 = 0;
      }
      piVar1 = local_4;
      *piVar4 = (int)local_4;
      if (local_4 != (int *)0x0) {
        (**(code **)(*local_4 + 4))(local_4);
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      piVar9 = piVar9 + -1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}
