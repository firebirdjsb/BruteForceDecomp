/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6D597756260453914942E2587E6BB55B43A2109562B6241D95A006D46BFAA5A2
 * Entry: 0x00280a90, Ghidra index: 9034, label: FUN_00280a90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00280a90(int param_1)

{
  int *piVar1;
  int *piVar2;
  int in_EAX;
  int iVar3;
  int *unaff_EBX;
  int *unaff_EDI;
  
  if (0 < in_EAX) {
    return 0;
  }
  piVar1 = (int *)*unaff_EBX;
  if (piVar1 == unaff_EDI) {
    return 1;
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
    iVar3 = (**(code **)(*piVar1 + 0x40))(piVar1);
    if (iVar3 == param_1) {
      (**(code **)(*piVar1 + 0x3c))(piVar1,0);
    }
  }
  piVar2 = (int *)*unaff_EBX;
  if (piVar2 != unaff_EDI) {
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      *unaff_EBX = 0;
    }
    *unaff_EBX = (int)unaff_EDI;
    if (unaff_EDI == (int *)0x0) goto LAB_00280aea;
    (**(code **)(*unaff_EDI + 4))();
  }
  if (unaff_EDI != (int *)0x0) {
    (**(code **)(*unaff_EDI + 0x3c))();
  }
LAB_00280aea:
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return 1;
}
