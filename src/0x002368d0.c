/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E18631F536FACC8FFE3BDC7AF356C8ABE0C8AA417FB8B9F3E47EF3FF3F316474
 * Entry: 0x002368d0, Ghidra index: 7832, label: FUN_002368d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002368d0(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  if ((*(uint *)(in_ECX + 0x44) >> 10 & 1) == 0) {
    piVar1 = *(int **)(in_ECX + 0x58);
    if (piVar1 != (int *)0x0) {
      if ((char)param_1 != '\0') {
        (**(code **)(*piVar1 + 0x14))(piVar1);
      }
      (**(code **)(**(int **)(in_ECX + 0x58) + 0x10))(*(int **)(in_ECX + 0x58));
    }
    if (*(int *)(in_ECX + 0x10) != 0) {
      FUN_00234f90(*(int *)(in_ECX + 0x10),in_ECX + 0x14);
    }
    iVar2 = *(int *)(in_ECX + 0x50);
    *(uint *)(in_ECX + 0x44) = *(uint *)(in_ECX + 0x44) & 0xfffffeff;
    for (iVar3 = *(int *)(in_ECX + 0x4c); iVar3 != iVar2; iVar3 = iVar3 + 4) {
      FUN_002368d0(param_1);
    }
  }
  return;
}
