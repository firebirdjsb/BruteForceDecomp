/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F562E93A0997733F980787D5C0FFC676D3AA5A29EEF3E9AA734BC72AFD21C81E
 * Entry: 0x001f3880, Ghidra index: 7024, label: FUN_001f3880
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001f3880(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  short in_CX;
  int unaff_ESI;
  
  piVar3 = *(int **)(unaff_ESI + 0x1c);
  if (piVar3 != (int *)0x0) {
    while ((short)piVar3[2] != in_CX) {
      piVar3 = (int *)*piVar3;
      if (piVar3 == (int *)0x0) {
        return;
      }
    }
    piVar1 = (int *)piVar3[1];
    iVar2 = *piVar3;
    if (piVar1 == (int *)0x0) {
      *(int *)(unaff_ESI + 0x1c) = iVar2;
    }
    else {
      *piVar1 = iVar2;
    }
    if (iVar2 == 0) {
      *(int **)(unaff_ESI + 0x20) = piVar1;
    }
    else {
      *(int **)(iVar2 + 4) = piVar1;
    }
    piVar3[1] = 0;
    *piVar3 = 0;
    iVar2 = *(int *)(*(int *)(*(int *)(unaff_ESI + 0x18) + 0x1c) + 0x204);
    *piVar3 = 0;
    if (*(undefined4 **)(iVar2 + 0x24) != (undefined4 *)0x0) {
      **(undefined4 **)(iVar2 + 0x24) = piVar3;
      piVar3[1] = *(int *)(iVar2 + 0x24);
      *(int **)(iVar2 + 0x24) = piVar3;
      return;
    }
    piVar3[1] = 0;
    *(int **)(iVar2 + 0x20) = piVar3;
    *(int **)(iVar2 + 0x24) = piVar3;
  }
  return;
}
