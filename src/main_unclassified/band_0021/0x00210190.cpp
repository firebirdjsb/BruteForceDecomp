/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F2C8750145BD95F584DA34237BA45DC2998F34F823CCEEFA130185A85E0F433B
 * Entry: 0x00210190, Ghidra index: 7416, label: FUN_00210190
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00210190(void)

{
  int *piVar1;
  int *piVar2;
  int in_EAX;
  
  piVar1 = *(int **)(in_EAX + 8);
  piVar2 = (int *)*piVar1;
  while (piVar2 != piVar1) {
    if ((int *)piVar2[4] != (int *)0x0) {
      (**(code **)(*(int *)piVar2[4] + 0xc))();
      if ((undefined4 *)piVar2[4] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar2[4])(1);
      }
    }
    FUN_0012aba0();
  }
  return 1;
}
