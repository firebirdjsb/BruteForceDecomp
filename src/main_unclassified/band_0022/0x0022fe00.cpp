/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E8E54F8F33AEC3E54AB32F850514ACE733253D5DE612F6C91AEDBC41928BF675
 * Entry: 0x0022fe00, Ghidra index: 7745, label: FUN_0022fe00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0022fe00(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int unaff_EDI;
  
  if ((0 < *(int *)(unaff_EDI + 0x28c)) && (*(float *)(*(int *)(unaff_EDI + 0x228) + 0xd8) == 0.0))
  {
    return 1;
  }
  if (*(int *)(unaff_EDI + 0x1f8) == -1) {
    return 1;
  }
  iVar2 = *(int *)(unaff_EDI + 0x1b0);
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 8) == 0) {
      if ((*(int *)(iVar2 + 0x10) == 0) ||
         (iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 0xb0), *(int *)(*(int *)(iVar2 + 0xc) + 4) != 3)
         ) {
        iVar2 = 0;
      }
    }
    else {
      iVar2 = *(int *)(*(int *)(iVar2 + 8) + 0x1d4);
    }
    iVar2 = (**(code **)(**(int **)(*(int *)(iVar2 + 8) + 0xbec) + 0xc))(iVar2);
    if (iVar2 != 0) {
      iVar3 = (**(code **)(**(int **)(*(int *)(unaff_EDI + 8) + 0xbec) + 0x70))();
      if ((*(int *)(iVar3 + 8) != 0) &&
         (cVar1 = (**(code **)**(undefined4 **)(*(int *)(iVar3 + 8) + 4))(iVar2), cVar1 != '\0')) {
        return 1;
      }
    }
    return 0;
  }
  return 0;
}
