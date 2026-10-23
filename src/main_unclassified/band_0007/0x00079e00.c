/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 73772C1904672BDAE861FFB3A12EBA8BEA5BE327ABB6E4C9CF841758985DAFDD
 * Entry: 0x00079e00, Ghidra index: 1452, label: FUN_00079e00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00079e00(undefined4 param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *in_ECX;
  
  iVar3 = (**(code **)(*in_ECX + 0x18))();
  piVar1 = *(int **)(iVar3 + 0xbec);
  cVar2 = (**(code **)(*piVar1 + 100))(param_1);
  if (cVar2 != '\0') {
    iVar3 = (**(code **)(*in_ECX + 0x18))();
    (**(code **)(**(int **)(iVar3 + 0xbec) + 0x38))(param_1);
    (**(code **)(*in_ECX + 0x144))(param_1);
    (**(code **)(*in_ECX + 0x18))(0);
    FUN_00084f50();
    return;
  }
  iVar3 = (**(code **)(*piVar1 + 8))(param_1);
  if (iVar3 != 0) {
    *(byte *)(iVar3 + 0x6c) = *(byte *)(iVar3 + 0x6c) | 8;
  }
  return;
}
