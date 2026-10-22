/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E2CC260A24D1B7E7084DD2DDC101929912DE0DC3626C907F3C73CA45D437AC3C
 * Entry: 0x0016e200, Ghidra index: 4813, label: FUN_0016e200
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_0016e200(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  piVar3 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  FUN_0016e6e0(param_2,piVar3,param_3 + -1,param_4);
  piVar4 = piVar3 + 1;
  for (; param_2 < piVar3; piVar3 = piVar3 + -1) {
    if ((*(int *)(piVar3[-1] + 0xc) < *(int *)(*piVar3 + 0xc)) ||
       (*(int *)(*piVar3 + 0xc) < *(int *)(piVar3[-1] + 0xc))) break;
  }
  piVar5 = piVar4;
  piVar2 = piVar3;
  if (piVar4 < param_3) {
    do {
      piVar5 = piVar4;
      if ((*(int *)(*piVar4 + 0xc) < *(int *)(*piVar3 + 0xc)) ||
         (*(int *)(*piVar3 + 0xc) < *(int *)(*piVar4 + 0xc))) break;
      piVar4 = piVar4 + 1;
      piVar5 = piVar4;
    } while (piVar4 < param_3);
  }
joined_r0x0016e284:
  do {
    if (param_3 <= piVar4) {
joined_r0x0016e2b4:
      for (; param_2 < piVar3; piVar3 = piVar3 + -1) {
        if (*(int *)(*piVar2 + 0xc) <= *(int *)(piVar3[-1] + 0xc)) {
          if (*(int *)(*piVar2 + 0xc) < *(int *)(piVar3[-1] + 0xc)) break;
          iVar1 = piVar2[-1];
          piVar2 = piVar2 + -1;
          *piVar2 = piVar3[-1];
          piVar3[-1] = iVar1;
        }
      }
      if (piVar3 == param_2) {
        if (piVar4 == param_3) {
          *param_1 = piVar2;
          param_1[1] = piVar5;
          return param_1;
        }
        if (piVar5 != piVar4) {
          iVar1 = *piVar2;
          *piVar2 = *piVar5;
          *piVar5 = iVar1;
        }
        iVar1 = *piVar2;
        *piVar2 = *piVar4;
        *piVar4 = iVar1;
        piVar4 = piVar4 + 1;
        piVar5 = piVar5 + 1;
        piVar2 = piVar2 + 1;
      }
      else {
        piVar3 = piVar3 + -1;
        if (piVar4 == param_3) {
          piVar2 = piVar2 + -1;
          if (piVar3 != piVar2) {
            iVar1 = *piVar3;
            *piVar3 = *piVar2;
            *piVar2 = iVar1;
          }
          iVar1 = *piVar2;
          *piVar2 = piVar5[-1];
          piVar5[-1] = iVar1;
          piVar5 = piVar5 + -1;
        }
        else {
          iVar1 = *piVar4;
          *piVar4 = *piVar3;
          piVar4 = piVar4 + 1;
          *piVar3 = iVar1;
        }
      }
      goto joined_r0x0016e284;
    }
    if (*(int *)(*piVar4 + 0xc) <= *(int *)(*piVar2 + 0xc)) {
      if (*(int *)(*piVar4 + 0xc) < *(int *)(*piVar2 + 0xc)) goto joined_r0x0016e2b4;
      iVar1 = *piVar5;
      *piVar5 = *piVar4;
      piVar5 = piVar5 + 1;
      *piVar4 = iVar1;
    }
    piVar4 = piVar4 + 1;
  } while( true );
}
