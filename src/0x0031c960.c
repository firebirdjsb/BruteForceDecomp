/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 95424751FCAD439C9B06F8DFB5BF4A7E4A3D0B2EFC960CB754DACF7A3A22D0DB
 * Entry: 0x0031c960, Ghidra index: 12346, label: FUN_0031c960
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0031c960(uint param_1)

{
  int iVar1;
  int *piVar2;
  int *in_ECX;
  uint uVar3;
  int local_34 [12];
  
  uVar3 = param_1;
  *(uint *)(**(int **)(*in_ECX + 0x10) + 0x438) = param_1 >> 2;
  *(undefined4 *)(**(int **)(*in_ECX + 0x10) + 0x43c) = 0x600;
  iVar1 = *in_ECX;
  piVar2 = local_34 + 1;
  param_1 = 3;
  do {
    piVar2[-1] = **(int **)(iVar1 + 0x10) + uVar3;
    *piVar2 = *(int *)(*(int *)(iVar1 + 0x10) + 4) + uVar3;
    piVar2[1] = 0x1000;
    uVar3 = uVar3 + 0x1000;
    piVar2 = piVar2 + 4;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  FUN_003158c4(local_34,3);
  return;
}
