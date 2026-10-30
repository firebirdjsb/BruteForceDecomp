/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C1736663C9DEC382B4D1E5B522B2EB5C25A0506C1E046F72189387FB01F88950
 * Entry: 0x0027c1a0, Ghidra index: 8973, label: FUN_0027c1a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0027c1a0(uint *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int unaff_EBX;
  int *piVar4;
  undefined4 *unaff_EDI;
  bool bVar5;
  
  piVar1 = *(int **)(unaff_EBX + 4);
  bVar5 = true;
  piVar4 = piVar1;
  if (*(char *)(piVar1[1] + 0x21) == '\0') {
    piVar2 = (int *)piVar1[1];
    do {
      piVar4 = piVar2;
      bVar5 = *param_1 < (uint)piVar4[3];
      if (bVar5) {
        piVar2 = (int *)*piVar4;
      }
      else {
        piVar2 = (int *)piVar4[2];
      }
    } while (*(char *)((int)piVar2 + 0x21) == '\0');
  }
  if (bVar5) {
    if (piVar4 == (int *)*piVar1) {
      puVar3 = (undefined4 *)FUN_0027c770(&param_1,1,param_1);
      *unaff_EDI = *puVar3;
      *(undefined1 *)(unaff_EDI + 1) = 1;
      return;
    }
    FUN_00139120();
  }
  if ((uint)piVar4[3] < *param_1) {
    puVar3 = (undefined4 *)FUN_0027c770(&param_1,bVar5,param_1);
    *unaff_EDI = *puVar3;
    *(undefined1 *)(unaff_EDI + 1) = 1;
    return;
  }
  *unaff_EDI = piVar4;
  *(undefined1 *)(unaff_EDI + 1) = 0;
  return;
}
