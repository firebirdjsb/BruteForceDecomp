/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E1AECD110771A879DF4ACA19E8BF5C62910721510D7DF6B459B755770ACF0A40
 * Entry: 0x00239dc0, Ghidra index: 7895, label: FUN_00239dc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00239dc0(void)

{
  int **ppiVar1;
  int *unaff_ESI;
  int *piVar2;
  int *piStack_14;
  undefined4 *puStack_10;
  undefined4 local_4;
  
  puStack_10 = &local_4;
  piStack_14 = (int *)0x2;
  local_4 = 0;
  (**(code **)(*unaff_ESI + 0x20))();
  if (piStack_14 != (int *)0x0) {
    (**(code **)(*piStack_14 + 8))(piStack_14);
    piStack_14 = (int *)0x0;
  }
  ppiVar1 = &piStack_14;
  piVar2 = (int *)0x1;
  (**(code **)(*unaff_ESI + 0x20))();
  if (ppiVar1 != (int **)0x0) {
    (*(code *)(*ppiVar1)[6])(ppiVar1,1,piVar2);
  }
  if ((piVar2 != (int *)0x0) &&
     ((**(code **)(*piVar2 + 0x18))(piVar2,2,ppiVar1), piVar2 != (int *)0x0)) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  if (ppiVar1 != (int **)0x0) {
    (*(code *)(*ppiVar1)[2])(ppiVar1,0);
  }
  return 0;
}
