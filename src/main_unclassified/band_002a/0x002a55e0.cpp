/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5F85896ABAB6B4DF6D005A32947F2928F089A1A93C8F3398BA64C6A84DB97B01
 * Entry: 0x002a55e0, Ghidra index: 9565, label: FUN_002a55e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002a55e0(void)

{
  int iVar1;
  int *piVar2;
  int *unaff_EBX;
  int *piVar3;
  int unaff_ESI;
  int *piVar4;
  int *unaff_EDI;
  
  (**(code **)(*unaff_EDI + 0x4c))();
  iVar1 = (**(code **)(*unaff_EBX + 0x30))();
  if (iVar1 == 0) {
    (**(code **)(*unaff_EBX + 0x50))();
    return;
  }
  (**(code **)(*unaff_EDI + 0x3c))();
  piVar2 = (int *)(**(code **)(*unaff_EBX + 0x30))();
  piVar3 = (int *)0x0;
  piVar4 = piVar2;
  if (piVar2 != (int *)0x0) {
    do {
      iVar1 = (**(code **)(*piVar4 + 0x3c))(piVar4);
      piVar2 = piVar4;
      if (unaff_ESI < iVar1) break;
      piVar2 = (int *)(**(code **)(*piVar4 + 0x38))(piVar4);
      piVar3 = piVar4;
      piVar4 = piVar2;
    } while (piVar2 != (int *)0x0);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x58))(piVar3);
      goto LAB_002a5646;
    }
  }
  (**(code **)(*unaff_EBX + 0x50))();
LAB_002a5646:
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x54))(piVar2);
  }
  (**(code **)(*unaff_EDI + 0x54))();
  (**(code **)(*unaff_EDI + 0x58))();
  return;
}
