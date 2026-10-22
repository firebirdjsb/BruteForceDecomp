/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A0191092BE29C32B77C84938B06B3D7D2F2AC219F4D4B342C85EB322E2EC7DF2
 * Entry: 0x001fe790, Ghidra index: 7235, label: FUN_001fe790
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001fe790(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_8 [4];
  int iStack_4;
  
  cVar1 = (**(code **)(*param_1 + 0x3c))();
  if (cVar1 == '\0') {
    FUN_001fe6c0(param_1,param_2);
  }
  else {
    iVar2 = FUN_001fb020();
    if (iVar2 == 0) {
      iVar2 = 0;
      if ((int *)param_1[9] != (int *)0x0) {
        iVar2 = *(int *)param_1[9];
      }
      if (((*(int **)(iVar2 + 0xc) == (int *)0x0) ||
          (piVar3 = (int *)(**(code **)(**(int **)(iVar2 + 0xc) + 0xc))(), piVar3 == (int *)0x0)) ||
         (iVar2 = (**(code **)(*piVar3 + 0x20))(), iVar2 != 7)) {
        iVar2 = 0;
        if ((int *)param_1[9] != (int *)0x0) {
          iVar2 = *(int *)param_1[9];
        }
        if (*(int **)(iVar2 + 0xc) != param_2) {
          FUN_0008f6a0(param_2);
        }
        goto LAB_001fe865;
      }
    }
    iStack_4 = 0;
    if (param_2 != (int *)0x0) {
      FUN_0008f6a0(param_2);
    }
    iVar2 = param_1[9];
    iVar4 = FUN_000e1910(param_1 + 8,iVar2,*(undefined4 *)(iVar2 + 4),auStack_8);
    FUN_000389d0();
    *(int *)(iVar2 + 4) = iVar4;
    **(int **)(iVar4 + 4) = iVar4;
    if (iStack_4 != 0) {
      FUN_0008f6e0();
    }
  }
LAB_001fe865:
  if ((param_2 != (int *)0x0) && (iVar2 = (**(code **)(*param_2 + 0xfc))(), iVar2 != 0)) {
    (**(code **)(*param_2 + 0x100))(param_1);
  }
  return;
}
