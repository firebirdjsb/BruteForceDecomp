/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C9637DB07161938A02C8289D585F982EAACF72111FD43B03C980C424E366C1C7
 * Entry: 0x00235e40, Ghidra index: 7827, label: FUN_00235e40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00235e40(void)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  int unaff_EBX;
  int *piVar3;
  int iVar4;
  
  piVar2 = *(int **)(unaff_EBX + 0x50);
  piVar3 = *(int **)(unaff_EBX + 0x4c);
  if (piVar3 != piVar2) {
    do {
      if (*piVar3 == in_ECX) break;
      piVar3 = piVar3 + 1;
    } while (piVar3 != piVar2);
    if (piVar3 != piVar2) {
      FUN_00235dd0();
      piVar1 = *(int **)(unaff_EBX + 0x50);
      piVar2 = piVar3 + 1;
      if (piVar2 != piVar1) {
        iVar4 = (int)piVar3 - (int)piVar2;
        do {
          *(int *)(iVar4 + (int)piVar2) = *piVar2;
          piVar2 = piVar2 + 1;
        } while (piVar2 != piVar1);
      }
      *(int *)(unaff_EBX + 0x50) = *(int *)(unaff_EBX + 0x50) + -4;
      return CONCAT31((int3)((uint)piVar2 >> 8),1);
    }
  }
  return (uint)piVar2 & 0xffffff00;
}
