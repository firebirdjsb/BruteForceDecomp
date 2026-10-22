/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8A6868AEB7E78F1FAE092AA65AD0E00A0D24ED55CA26008BCAAE0BB28DC34EB7
 * Entry: 0x0014ddf0, Ghidra index: 4380, label: FUN_0014ddf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0014ddf0(int *param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  undefined4 *in_EAX;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int *local_10;
  undefined4 *puStack_c;
  undefined4 uStack_8;
  int iStack_4;
  
  piVar2 = param_1;
  FUN_0014dc50();
  piVar5 = param_1;
  if ((param_1 == (int *)0x0) || (iVar4 = (**(code **)(*param_1 + 0x5c))(), iVar4 == 0)) {
    in_EAX[1] = 0;
  }
  else {
    iVar4 = (**(code **)(*piVar5 + 0x5c))();
    *in_EAX = *(undefined4 *)(iVar4 + 8);
    in_EAX[1] = 1;
  }
  piVar5 = local_10;
  if ((local_10 == (int *)0x0) || (iVar4 = (**(code **)(*local_10 + 0x5c))(), iVar4 == 0)) {
    in_EAX[3] = 0;
  }
  else {
    iVar4 = (**(code **)(*piVar5 + 0x5c))();
    in_EAX[2] = *(undefined4 *)(iVar4 + 8);
    in_EAX[3] = 1;
  }
  puStack_c = in_EAX + 4;
  if (in_EAX[5] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_EAX[5]);
  }
  in_EAX[5] = 0;
  in_EAX[6] = 0;
  in_EAX[7] = 0;
  if (*(int *)(piVar2[0x6d] + 0xa8) == 0) {
LAB_0014dea0:
    cVar3 = FUN_0014c230(piVar2[0x6d],&param_1,&local_10,0);
    if (cVar3 != '\0') {
      iVar4 = piVar2[0x6d];
      if (param_1 != (int *)0x0) goto LAB_0014dede;
      piVar5 = *(int **)(iVar4 + 0xbc);
      goto LAB_0014df01;
    }
  }
  iVar4 = piVar2[0x6d];
  if ((*(int *)(iVar4 + 0xb0) != 0) ||
     ((*(int *)(iVar4 + 0xb4) != 0 &&
      (uVar6 = *(int *)(iVar4 + 0xa8) + 1, *(uint *)(iVar4 + 0xa8) = uVar6,
      *(uint *)(*(int *)(iVar4 + 0xb4) + 4) <= uVar6)))) {
    *(undefined4 *)(iVar4 + 0xa8) = 0;
  }
  return;
LAB_0014dede:
  if ((int)param_1 < 10) {
    iVar1 = *(int *)(iVar4 + 0xc + (int)param_1 * 0x10);
    if ((iVar1 != 0) &&
       (local_10 < (int *)(*(int *)(iVar4 + (int)param_1 * 0x10 + 0x10) - iVar1 >> 2))) {
      piVar5 = *(int **)(iVar1 + (int)local_10 * 4);
LAB_0014df01:
      if ((piVar5 != (int *)0x0) && (iVar4 = (**(code **)(*piVar5 + 0x5c))(), iVar4 != 0)) {
        iVar4 = (**(code **)(*piVar5 + 0x5c))();
        iStack_4 = (int)*(short *)((int)piVar5 + 0x1a);
        uStack_8 = *(undefined4 *)(iVar4 + 8);
        FUN_00183a90();
      }
    }
  }
  goto LAB_0014dea0;
}
