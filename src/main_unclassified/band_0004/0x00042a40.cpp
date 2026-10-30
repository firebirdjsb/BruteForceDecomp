/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4564F68454DF15D00B119EF4FC3158EC45540A0C932BB9A2DFD45FD3D4C9FA42
 * Entry: 0x00042a40, Ghidra index: 511, label: FUN_00042a40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00042a40(void)

{
  undefined4 *puVar1;
  int unaff_EBX;
  undefined4 *puVar2;
  
  if ((*(int *)(unaff_EBX + 4) != 0) &&
     (puVar1 = *(undefined4 **)(unaff_EBX + 8), ((int)puVar1 - *(int *)(unaff_EBX + 4)) / 0x18 != 0)
     ) {
    for (puVar2 = puVar1 + -6; puVar2 != puVar1; puVar2 = puVar2 + 6) {
      (**(code **)*puVar2)(0);
    }
    *(int *)(unaff_EBX + 8) = *(int *)(unaff_EBX + 8) + -0x18;
  }
  return;
}
