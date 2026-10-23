/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DE9108968706969870886FB8EDAEAD11F70C084D042E1FFA72FBC53E5E0F00F0
 * Entry: 0x002c62f0, Ghidra index: 10082, label: FUN_002c62f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c62f0(int param_1,float *param_2,float *param_3)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x24);
  pfVar2 = *(float **)(param_1 + 0x4c);
  if (pfVar2 == (float *)0x0) {
    fVar4 = (float)*(undefined8 *)(param_3 + 1);
    fVar5 = (float)((ulonglong)*(undefined8 *)(param_3 + 1) >> 0x20);
    if (*(float *)(iVar1 + 0x14) < fVar4 * fVar4 + fVar5 * fVar5 + *param_3 * *param_3) {
      (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + 0x20) + 4))(iVar1,param_1,param_3);
    }
  }
  else {
    if (*param_3 <= *pfVar2) {
      if (*param_3 < -*pfVar2) {
        *param_3 = -*pfVar2;
      }
    }
    else {
      *param_3 = *pfVar2;
    }
    iVar3 = *(int *)(param_1 + 0x4c);
    if (param_3[1] <= *(float *)(iVar3 + 4)) {
      if (param_3[1] < -*(float *)(iVar3 + 4)) {
        param_3[1] = -*(float *)(iVar3 + 4);
      }
    }
    else {
      param_3[1] = *(float *)(iVar3 + 4);
    }
    iVar3 = *(int *)(param_1 + 0x4c);
    if (param_3[2] <= *(float *)(iVar3 + 8)) {
      if (param_3[2] < -*(float *)(iVar3 + 8)) {
        param_3[2] = -*(float *)(iVar3 + 8);
      }
    }
    else {
      param_3[2] = *(float *)(iVar3 + 8);
    }
  }
  fVar4 = (float)*(undefined8 *)(param_2 + 1);
  fVar5 = (float)((ulonglong)*(undefined8 *)(param_2 + 1) >> 0x20);
  if (*(float *)(iVar1 + 0x18) < fVar4 * fVar4 + fVar5 * fVar5 + *param_2 * *param_2) {
    (**(code **)**(undefined4 **)(*(int *)(param_1 + 0xc) + 0x20))(iVar1,param_1,param_2);
  }
  return;
}
