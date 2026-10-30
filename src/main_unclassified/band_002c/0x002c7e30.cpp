/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F4346E2C7F5E2F3ADECB629048EC0609ABF57772C983A168DACB217A35B4821F
 * Entry: 0x002c7e30, Ghidra index: 10113, label: FUN_002c7e30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c7e30(int param_1,int param_2,undefined4 *param_3,float param_4)

{
  float fVar1;
  double dVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int local_1c;
  
  local_1c = 0;
  while( true ) {
    piVar3 = *(int **)(param_1 + 8);
    if (*piVar3 == 0) {
      fVar1 = 1e+10;
    }
    else {
      fVar1 = (float)piVar3[1];
    }
    if (*piVar3 == 0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar7 = *(undefined4 **)(*piVar3 + 0xc);
    }
    dVar2 = *(double *)(param_1 + 0x18);
    *(int *)(param_2 + 0x120) = *(int *)(param_2 + 0x120) + 1;
    *(double *)(param_2 + 0x108) = (double)((float)dVar2 + fVar1);
    if (puVar7 == param_3) {
      local_1c = local_1c + 1;
      if (local_1c == 2) {
        return;
      }
      *(float *)(param_2 + 0xb4) = param_4;
      *(float *)(param_2 + 0xb8) = 1.0 / param_4;
    }
    piVar3 = *(int **)(param_1 + 8);
    *(double *)(param_1 + 0x10) = (double)fVar1;
    piVar4 = (int *)puVar7[1];
    if (piVar4 != (int *)0x0) break;
    puVar7[1] = 0;
    (**(code **)*puVar7)(param_2);
  }
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
