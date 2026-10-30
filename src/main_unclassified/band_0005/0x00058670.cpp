/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1B59F2C535C501E140E77EB5E427B5D313A92278EBEE7C6733DBE57030887135
 * Entry: 0x00058670, Ghidra index: 872, label: FUN_00058670
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00058670(undefined4 param_1)

{
  int iVar1;
  undefined4 *unaff_ESI;
  
  if ((int *)unaff_ESI[2] != (int *)0x0) {
    iVar1 = (**(code **)(*(int *)unaff_ESI[2] + 0xf4))();
    if (iVar1 != 0) {
      if ((((*(uint *)(iVar1 + 0x3c4) & 0x100) == 0) ||
          ((*(int *)(iVar1 + 0x58) != 4 && (*(int *)(iVar1 + 0x58) != 1)))) &&
         (iVar1 = (**(code **)(*(int *)unaff_ESI[2] + 0xf4))(), *(int *)(iVar1 + 0x770) == 0)) {
        unaff_ESI[8] = 0x3f800000;
        unaff_ESI[3] = 0x404ccccd;
        unaff_ESI[4] = 0x40c00000;
      }
      else {
        unaff_ESI[8] = 0x3e2e147b;
        unaff_ESI[3] = 0x402ccccd;
        unaff_ESI[4] = 0x40800000;
      }
    }
    (**(code **)unaff_ESI[10])(param_1);
    switch(*unaff_ESI) {
    case 1:
      FUN_000589b0();
      return;
    case 2:
      FUN_00058a20();
      return;
    case 3:
      FUN_00058aa0();
      return;
    case 4:
      FUN_00058b10();
    }
  }
  return;
}
