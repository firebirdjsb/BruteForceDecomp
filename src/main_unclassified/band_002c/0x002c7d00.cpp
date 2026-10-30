/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A0D5FC625726DED4C1EFA22AA72944569BA9D24085BBFEDCB606787041DB39BC
 * Entry: 0x002c7d00, Ghidra index: 10112, label: FUN_002c7d00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c7d00(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  double dVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  
  do {
    piVar3 = *(int **)(param_1 + 8);
    if (*piVar3 == 0) {
      fVar1 = 1e+10;
    }
    else {
      fVar1 = (float)piVar3[1];
    }
    if ((double)(float)(double)CONCAT44(param_4,param_3) - *(double *)(param_1 + 0x18) <=
        (double)fVar1) break;
    if (*piVar3 == 0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar7 = *(undefined4 **)(*piVar3 + 0xc);
    }
    piVar4 = (int *)puVar7[1];
    if (piVar4 != (int *)0x0) {
      piVar5 = (int *)piVar4[1];
      iVar6 = *piVar4;
      if (piVar5 == (int *)0x0) {
        *piVar3 = iVar6;
        if (iVar6 == 0) {
          piVar3[1] = 0x501502f9;
        }
        else {
          *(undefined4 *)(iVar6 + 4) = 0;
          piVar3[1] = *(int *)(iVar6 + 8);
        }
      }
      else {
        *piVar5 = iVar6;
        if (iVar6 != 0) {
          *(int **)(iVar6 + 4) = piVar5;
        }
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(piVar4);
    }
    puVar7[1] = 0;
    dVar2 = *(double *)(param_1 + 0x18);
    *(double *)(param_1 + 0x10) = (double)fVar1;
    *(int *)(param_2 + 0x120) = *(int *)(param_2 + 0x120) + 1;
    *(double *)(param_2 + 0x108) = dVar2 + (double)fVar1;
    (**(code **)*puVar7)(param_2);
  } while (*(int *)(*(int *)(param_1 + 4) + 4) != 1);
  *(int *)(param_2 + 0x120) = *(int *)(param_2 + 0x120) + 1;
  *(undefined4 *)(param_2 + 0x108) = param_3;
  *(undefined4 *)(param_2 + 0x10c) = param_4;
  return;
}
