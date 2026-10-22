/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EE622DA17BDDC125DFE12F4A41C4513153227634D61A8C54A63FC15E8B8B4739
 * Entry: 0x0022f640, Ghidra index: 7739, label: FUN_0022f640
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0022f640(void)

{
  int iVar1;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 0x1b0);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 8) == 0) {
      if (*(int *)(iVar1 + 0x10) == 0) {
        return;
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x10) + 0xb0);
      if (*(int *)(*(int *)(iVar1 + 0xc) + 4) != 3) {
        return;
      }
    }
    else {
      iVar1 = *(int *)(*(int *)(iVar1 + 8) + 0x1d4);
    }
    if (iVar1 != 0) {
      (**(code **)(**(int **)(iVar1 + 0x5a4) + 0xb0))();
      FUN_00126f20(iVar1,unaff_EDI);
    }
  }
  return;
}
