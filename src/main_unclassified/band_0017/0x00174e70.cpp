/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F5A8473DCE4A6E849C7983129C1FAA61BA1AFCB93450669B0C2E3D08500A61DD
 * Entry: 0x00174e70, Ghidra index: 4925, label: FUN_00174e70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00174e70(void)

{
  int iVar1;
  int unaff_ESI;
  uint uVar2;
  
  for (uVar2 = 0;
      (iVar1 = *(int *)(unaff_ESI + 0xc4), iVar1 != 0 &&
      (uVar2 < (uint)(*(int *)(unaff_ESI + 200) - iVar1 >> 3))); uVar2 = uVar2 + 1) {
    iVar1 = *(int *)(iVar1 + 4 + uVar2 * 8);
    if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x834) & 1) != 0)) {
      *(byte *)(iVar1 + 0x834) = *(byte *)(iVar1 + 0x834) & 0xfc;
      FUN_00129530();
    }
  }
  return;
}
