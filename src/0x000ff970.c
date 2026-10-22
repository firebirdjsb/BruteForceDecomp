/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BEED683C11E5090BE8171BF757C935C66C5541786520DA7AE98EFDF90788769C
 * Entry: 0x000ff970, Ghidra index: 3199, label: FUN_000ff970
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000ff970(int param_1)

{
  int *piVar1;
  int *piVar2;
  byte in_DL;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x74) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x78) - *(int *)(param_1 + 0x74) >> 2;
  }
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x74) + iVar4 * 4);
      *(byte *)(piVar1 + 10) = *(byte *)(piVar1 + 10) & 0xfe | in_DL & 1;
      if ((((in_DL & 1) != 0) && (piVar1[1] != 0)) &&
         (piVar2 = *(int **)(piVar1[1] + 0x94), piVar2 != (int *)0x0)) {
        (**(code **)(*piVar2 + 0x28))(piVar1);
      }
      (**(code **)(*piVar1 + 0x20))();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  return;
}
