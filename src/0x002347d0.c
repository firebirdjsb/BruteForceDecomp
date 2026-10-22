/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9DC7EF11BE55AEB5BB39F7E30CD0246563DA36A0CBCEBB723A4D068D182F5E8B
 * Entry: 0x002347d0, Ghidra index: 7804, label: FUN_002347d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002347d0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int in_EAX;
  int iVar3;
  int *in_ECX;
  int *unaff_EBX;
  
  if (1 < in_EAX) {
    return 0;
  }
  if (in_EAX != 0) {
    in_ECX = in_ECX + 1;
  }
  piVar1 = (int *)*in_ECX;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  if ((int *)*in_ECX != unaff_EBX) {
    if (piVar1 != (int *)0x0) {
      iVar3 = (**(code **)(*piVar1 + 0x40))(piVar1);
      if (iVar3 == param_1) {
        (**(code **)(*piVar1 + 0x3c))(piVar1,0);
      }
    }
    piVar2 = (int *)*in_ECX;
    if (piVar2 != unaff_EBX) {
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
        *in_ECX = 0;
      }
      *in_ECX = (int)unaff_EBX;
      if (unaff_EBX == (int *)0x0) goto LAB_00234838;
      (**(code **)(*unaff_EBX + 4))();
    }
    if (unaff_EBX != (int *)0x0) {
      (**(code **)(*unaff_EBX + 0x3c))();
    }
  }
LAB_00234838:
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return 1;
}
