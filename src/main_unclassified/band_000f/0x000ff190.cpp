/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9D3904209C8F9A2648EBCF56ECDE5D668C13BCEF28874E82C71971C954F34996
 * Entry: 0x000ff190, Ghidra index: 3191, label: FUN_000ff190
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000ff190(int *param_1)

{
  int iVar1;
  int *piVar2;
  int in_EDX;
  int unaff_EBX;
  
  piVar2 = (int *)0x0;
  if (*(undefined4 **)(in_EDX + 8) != (undefined4 *)0x0) {
    piVar2 = (int *)**(undefined4 **)(in_EDX + 8);
  }
  iVar1 = 0;
  if (piVar2 != *(int **)(in_EDX + 8)) {
    while ((iVar1 = piVar2[2], *(int *)(iVar1 + 0x24) != *param_1 ||
           (*(int *)(iVar1 + 0x60) != unaff_EBX))) {
      piVar2 = (int *)*piVar2;
      if (piVar2 == *(int **)(in_EDX + 8)) {
        return 0;
      }
    }
  }
  return iVar1;
}
