/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6D0AFC987617146C649DE9A3787B7DB3D9F023CA15F1948D3CF9F7E0AE9B5C66
 * Entry: 0x001f94e0, Ghidra index: 7073, label: FUN_001f94e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001f94e0(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined1 auStack_c [4];
  int iStack_8;
  int iStack_4;
  
  iVar3 = (int)param_2;
  if (param_1[0x3e] == 0) {
    puVar1 = *(undefined4 **)((int)param_2 + 4);
    if (puVar1 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)*puVar1;
    }
    if (puVar5 != puVar1) {
      do {
        puVar5[4] = 0;
        puVar5 = (undefined4 *)*puVar5;
      } while (puVar5 != *(undefined4 **)((int)param_2 + 4));
    }
    puVar1 = *(undefined4 **)(param_1[4] + 0x28);
    if (puVar1 == (undefined4 *)0x0) {
      param_2 = (int *)0x0;
    }
    else {
      param_2 = (int *)*puVar1;
    }
    if (param_2 != *(int **)(param_1[4] + 0x28)) {
      do {
        iVar2 = param_2[2];
        if (((iVar2 != 0) && (cVar4 = FUN_001fb980(), cVar4 != '\0')) &&
           (cVar4 = (**(code **)(*param_1 + 0x6c))(iVar2), cVar4 != '\0')) {
          puVar1 = *(undefined4 **)(iVar3 + 4);
          if (puVar1 == (undefined4 *)0x0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            puVar5 = (undefined4 *)*puVar1;
          }
          if (puVar5 != puVar1) {
            do {
              if (puVar5[3] == iVar2) break;
              puVar5 = (undefined4 *)*puVar5;
            } while (puVar5 != puVar1);
            if (puVar5 != puVar1) {
              puVar5[4] = puVar5[4] + 1;
              goto LAB_001f95ed;
            }
          }
          iStack_8 = 0;
          iStack_4 = 0;
          FUN_0008f6a0(iVar2);
          iVar2 = *(int *)(iVar3 + 4);
          iStack_4 = iStack_4 + 1;
          iVar6 = FUN_00222830(iVar3,iVar2,*(undefined4 *)(iVar2 + 4),auStack_c);
          FUN_0021d890();
          *(int *)(iVar2 + 4) = iVar6;
          **(int **)(iVar6 + 4) = iVar6;
          if (iStack_8 != 0) {
            FUN_0008f6e0();
          }
        }
LAB_001f95ed:
        param_2 = (int *)*param_2;
      } while (param_2 != (int *)*(int *)(param_1[4] + 0x28));
    }
    piVar8 = *(int **)(iVar3 + 4);
    if (piVar8 == (int *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7 = (int *)*piVar8;
    }
    if (piVar7 != piVar8) {
      do {
        if ((piVar7[3] == 0) || (piVar7[4] == 0)) {
          piVar8 = (int *)*piVar7;
          if (piVar7 != *(int **)(iVar3 + 4)) {
            *(int **)piVar7[1] = piVar8;
            *(int *)(*piVar7 + 4) = piVar7[1];
            if (piVar7[3] != 0) {
              FUN_0008f6e0();
            }
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00237ec0(piVar7);
          }
        }
        else {
          piVar8 = (int *)*piVar7;
        }
        piVar7 = piVar8;
      } while (piVar8 != *(int **)(iVar3 + 4));
    }
  }
  return;
}
