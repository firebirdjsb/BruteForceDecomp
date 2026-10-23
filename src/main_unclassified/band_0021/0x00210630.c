/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F393D4A892DFBFE56596DD9D68F612BB7438BB24FBB49EDC9F588586B4BD7C6E
 * Entry: 0x00210630, Ghidra index: 7422, label: FUN_00210630
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00210630(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  int unaff_EDI;
  
  piVar1 = *(int **)(unaff_EDI + 8);
  piVar2 = (int *)*piVar1;
  while (piVar2 != piVar1) {
    if (((int *)piVar2[4] != (int *)0x0) && ((*(uint *)(unaff_EDI + 0x10) & piVar2[3]) != 0)) {
      (**(code **)(*(int *)piVar2[4] + 8))(param_1);
    }
    FUN_0012aba0();
  }
  return;
}
