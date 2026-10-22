/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FE554DD1BCDF084240B35E027FE0CD93F5B7B77BC987B48E9E01719854F1D8AA
 * Entry: 0x002cd080, Ghidra index: 10163, label: FUN_002cd080
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002cd080(int param_1,undefined4 param_2)

{
  int iVar1;
  int in_EAX;
  float *in_ECX;
  float local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  iVar1 = *(int *)(in_EAX + 8);
  local_4 = 0;
  local_10 = *(float *)(iVar1 + 0x10) * *in_ECX +
             *(float *)(iVar1 + 0x14) * in_ECX[1] + *(float *)(iVar1 + 0x18) * in_ECX[2];
  local_c = *(float *)(iVar1 + 0x20) * *in_ECX +
            *(float *)(iVar1 + 0x24) * in_ECX[1] + *(float *)(iVar1 + 0x28) * in_ECX[2];
  local_8 = *(float *)(iVar1 + 0x30) * *in_ECX +
            *(float *)(iVar1 + 0x34) * in_ECX[1] + *(float *)(iVar1 + 0x38) * in_ECX[2];
  FUN_002b73d0(*(int *)(param_1 + 8) + 0x10,&local_10,param_2);
  return;
}
