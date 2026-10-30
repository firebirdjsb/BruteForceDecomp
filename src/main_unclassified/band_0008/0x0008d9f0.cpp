/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2F98732B6B407257F00AAE38775FCBD133434EA6E8B6E225E406B41F490E1F38
 * Entry: 0x0008d9f0, Ghidra index: 1717, label: FUN_0008d9f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0008d9f0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = 0;
  if (param_1 != 0) {
    if ((*(int *)(in_ECX + 8) != 0) && (*(int *)(*(int *)(in_ECX + 8) + 0x28) == param_1)) {
      iVar1 = 1;
    }
    if ((*(int *)(in_ECX + 0x10) != 0) && (*(int *)(*(int *)(in_ECX + 0x10) + 0x28) == param_1)) {
      iVar1 = iVar1 + 1;
    }
    if ((*(int *)(in_ECX + 0x18) != 0) && (*(int *)(*(int *)(in_ECX + 0x18) + 0x28) == param_1)) {
      iVar1 = iVar1 + 1;
    }
    if ((*(int *)(in_ECX + 0x20) != 0) && (*(int *)(*(int *)(in_ECX + 0x20) + 0x28) == param_1)) {
      iVar1 = iVar1 + 1;
    }
    if ((*(int *)(in_ECX + 0x28) != 0) && (*(int *)(*(int *)(in_ECX + 0x28) + 0x28) == param_1)) {
      iVar1 = iVar1 + 1;
    }
    if ((*(int *)(in_ECX + 0x30) != 0) && (*(int *)(*(int *)(in_ECX + 0x30) + 0x28) == param_1)) {
      iVar1 = iVar1 + 1;
    }
    if ((*(int *)(in_ECX + 0x38) != 0) && (*(int *)(*(int *)(in_ECX + 0x38) + 0x28) == param_1)) {
      iVar1 = iVar1 + 1;
    }
    if ((*(int *)(in_ECX + 0x40) != 0) && (*(int *)(*(int *)(in_ECX + 0x40) + 0x28) == param_1)) {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}
