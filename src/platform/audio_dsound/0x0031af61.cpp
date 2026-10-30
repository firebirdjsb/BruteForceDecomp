/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2006018476CCD7CCFBA4C389D5084F74F0AC7D98A4DB8AAC14FBE9017A755E4D
 * Entry: 0x0031af61, Ghidra index: 12284, label: FUN_0031af61
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0031af61(int *param_1)

{
  int iVar1;
  int in_ECX;
  
  **(int **)(in_ECX + 0x1c) = **(int **)(in_ECX + 0x1c) + (uint)*(ushort *)((int)param_1 + 10);
  for (; (iVar1 = *param_1, iVar1 != in_ECX + 4 && (*(int *)(iVar1 + 0xc) == 0));
      param_1 = (int *)FUN_0031ac0c(param_1,iVar1)) {
  }
  while ((iVar1 = param_1[1], iVar1 != in_ECX + 4 && (*(int *)(iVar1 + 0xc) == 0))) {
    param_1 = (int *)FUN_0031ac0c(iVar1,param_1);
  }
  if ((*(int *)(in_ECX + 0x18) == 0) ||
     (*(ushort *)(*(int *)(in_ECX + 0x18) + 10) < *(ushort *)((int)param_1 + 10))) {
    *(int **)(in_ECX + 0x18) = param_1;
  }
  return;
}
