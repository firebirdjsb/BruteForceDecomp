/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 22B708970AD683B477861188FFDCDC2409E98914C613CF99AAAB7527D95FC89D
 * Entry: 0x00288200, Ghidra index: 9104, label: FUN_00288200
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00288200(void)

{
  int *piVar1;
  int *piVar2;
  int *unaff_EBX;
  int *unaff_ESI;
  
  piVar1 = (int *)*unaff_ESI;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  piVar2 = (int *)*unaff_ESI;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *unaff_ESI = 0;
  }
  piVar2 = (int *)*unaff_EBX;
  *unaff_ESI = (int)piVar2;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2);
    piVar2 = (int *)*unaff_EBX;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      *unaff_EBX = 0;
    }
  }
  *unaff_EBX = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}
