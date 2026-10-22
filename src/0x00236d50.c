/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F36E9E7B408D9AF57BEDB76D48D97BA0AEA28A29C2A1D1B6011304A6DA02A597
 * Entry: 0x00236d50, Ghidra index: 7839, label: FUN_00236d50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00236d50(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *unaff_EBX;
  
  if ((char)unaff_EBX[2] == '\0') {
    iVar2 = FUN_00235d10();
    return iVar2;
  }
  iVar2 = unaff_EBX[1];
  piVar3 = *(int **)(iVar2 + 0x4c);
  if ((piVar3 == (int *)0x0) || (*(int *)(iVar2 + 0x50) - (int)piVar3 >> 2 == 0)) {
    do {
      if (*(int *)(iVar2 + 0x10) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(iVar2 + 0x10) + 100);
      }
      piVar3 = *(int **)(iVar4 + 0x4c);
      if ((piVar3 == (int *)0x0) || (*(int *)(iVar4 + 0x50) - (int)piVar3 >> 2 == 0)) {
LAB_00236dcd:
        iVar4 = 0;
      }
      else {
        do {
          if (piVar3 == *(int **)(iVar4 + 0x50)) goto LAB_00236dcd;
          iVar1 = *piVar3;
          piVar3 = piVar3 + 1;
        } while (iVar1 != iVar2);
        if (piVar3 == *(int **)(iVar4 + 0x50)) goto LAB_00236dcd;
        iVar4 = *piVar3;
      }
      unaff_EBX[1] = iVar4;
      if (iVar4 != 0) {
        return iVar4;
      }
    } while (((*(int *)(iVar2 + 0x10) != 0) &&
             (iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 100), iVar2 != 0)) && (iVar2 != *unaff_EBX))
    ;
  }
  else {
    iVar2 = *piVar3;
    unaff_EBX[1] = iVar2;
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  return 0;
}
