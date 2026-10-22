/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 80F43FE54DD0CBD28647863D9F27067FEF11A632F28626817064BB488F76D30C
 * Entry: 0x00116bb0, Ghidra index: 3587, label: FUN_00116bb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00116bb0(int param_1)

{
  char cVar1;
  int *piVar2;
  int unaff_EBX;
  int iVar3;
  
  if (*(int *)(unaff_EBX + 0x2e8) != 0) {
    iVar3 = 1;
    do {
      piVar2 = (int *)FUN_0014d230();
      if (((piVar2 != (int *)0x0) && (cVar1 = (**(code **)(*piVar2 + 0x58))(), cVar1 != '\0')) &&
         (piVar2 = (int *)piVar2[8], piVar2 != (int *)0x0)) {
        *(int **)(param_1 + 0x990) = piVar2;
        (**(code **)(*piVar2 + 100))(param_1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 10);
  }
  return;
}
