/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4D4C59DBAA971BB0240EFDF83C2E94B30E85E0C42816FA4BC29C76E9EE233AA0
 * Entry: 0x002c0e30, Ghidra index: 10019, label: FUN_002c0e30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c0e30(float param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int in_EAX;
  
  if ((*(byte *)(*(int *)(in_EAX + 0x28) + 0x70) & 7) == 0) {
    FUN_002c0dd0(0x2edbe6ff,param_1);
    return;
  }
  if ((*(byte *)(*(int *)(in_EAX + 0x44) + 0x70) & 7) == 0) {
    FUN_002c0dd0(param_1,0x2edbe6ff);
    return;
  }
  iVar1 = *(int *)(*(int *)(in_EAX + 0x28) + 0x90);
  iVar2 = *(int *)(*(int *)(in_EAX + 0x44) + 0x90);
  fVar3 = *(float *)(iVar1 + 0x158) + *(float *)(iVar1 + 0x150) + 1e-10;
  fVar5 = *(float *)(iVar2 + 0x158) + *(float *)(iVar2 + 0x150) + 1e-10;
  fVar4 = fVar5 * 0.1 + fVar3;
  fVar5 = fVar3 * 0.1 + fVar5;
  param_1 = param_1 / (fVar4 + fVar5);
  FUN_002c0dd0(param_1 * fVar4,param_1 * fVar5);
  return;
}
