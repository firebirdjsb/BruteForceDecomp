/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3F5C9B07F723783C516FFF98F7BBAE1E4505479909638FC4D3C1D8E0FE81E469
 * Entry: 0x00095d40, Ghidra index: 1827, label: FUN_00095d40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00095d40(void)

{
  int in_EAX;
  int *piVar1;
  char in_DL;
  int iVar2;
  char unaff_BL;
  
  if (in_DL != '\0') {
    if (unaff_BL == '\0') {
      iVar2 = *(int *)(in_EAX + 0x178);
    }
    else {
      iVar2 = *(int *)(in_EAX + 0x174);
    }
    if (iVar2 != 0) {
      if (unaff_BL != '\0') {
        (**(code **)(**(int **)(in_EAX + 0x174) + 0x38))(*(int **)(in_EAX + 0x174));
        return;
      }
      piVar1 = *(int **)(in_EAX + 0x178);
      goto LAB_00095d72;
    }
  }
  piVar1 = *(int **)(in_EAX + 0x17c);
  if (piVar1 == (int *)0x0) {
    FUN_00062280();
    return;
  }
LAB_00095d72:
  (**(code **)(*piVar1 + 0x38))(piVar1);
  return;
}
