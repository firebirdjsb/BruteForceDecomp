/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3CA5EB4982AA01DC4F35FB570D252B46E711ECD03336E74E63225E6A71F3F8E7
 * Entry: 0x0023d3e0, Ghidra index: 7955, label: FUN_0023d3e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0023d3e0(void)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  int *piVar3;
  int iVar4;
  int unaff_EDI;
  
  piVar2 = *(int **)(unaff_EDI + 0xc);
  piVar3 = *(int **)(unaff_EDI + 8);
  if (piVar3 != piVar2) {
    do {
      if (*(int *)(*piVar3 + 4) == in_ECX) break;
      piVar3 = piVar3 + 1;
    } while (piVar3 != piVar2);
    if (piVar3 != piVar2) {
      iVar4 = *piVar3;
      if (iVar4 != 0) {
        FUN_0023cb60();
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(iVar4);
      }
      piVar1 = *(int **)(unaff_EDI + 0xc);
      piVar2 = piVar3 + 1;
      if (piVar2 != piVar1) {
        iVar4 = (int)piVar3 - (int)piVar2;
        do {
          *(int *)(iVar4 + (int)piVar2) = *piVar2;
          piVar2 = piVar2 + 1;
        } while (piVar2 != piVar1);
      }
      *(int *)(unaff_EDI + 0xc) = *(int *)(unaff_EDI + 0xc) + -4;
    }
  }
  FUN_0023cb60();
  return;
}
