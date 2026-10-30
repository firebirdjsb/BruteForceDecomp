/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A03DAE264FADD43658E766791A2B25B17D23461EE26C4E7279466DB485F781D6
 * Entry: 0x000ffd60, Ghidra index: 3207, label: FUN_000ffd60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000ffd60(int param_1)

{
  byte bVar1;
  int *piVar2;
  byte unaff_BL;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x74) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x78) - *(int *)(param_1 + 0x74) >> 2;
  }
  iVar3 = 0;
  if (0 < iVar4) {
    do {
      piVar2 = *(int **)(*(int *)(param_1 + 0x74) + iVar3 * 4);
      bVar1 = *(byte *)(piVar2 + 10);
      if ((bVar1 >> 1 & 1) != unaff_BL) {
        *(byte *)(piVar2 + 10) = (unaff_BL << 1 ^ bVar1) & 2 ^ bVar1;
        (**(code **)(*piVar2 + 0x24))();
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  return;
}
