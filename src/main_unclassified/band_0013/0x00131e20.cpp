/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0F7A65F2589998307057509AA4F39266874B8B6FA6C5CB570BB50EBC885F7DCC
 * Entry: 0x00131e20, Ghidra index: 3837, label: FUN_00131e20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00131e20(void)

{
  int iVar1;
  int iVar2;
  uint in_EAX;
  undefined4 uVar3;
  uint uVar4;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_ESI + 4);
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (*(int *)(unaff_ESI + 8) - iVar1) / 0x38;
  }
  if (uVar4 < in_EAX) {
    FUN_00131fc0(unaff_ESI);
    return;
  }
  if (((iVar1 != 0) && (iVar2 = *(int *)(unaff_ESI + 8), in_EAX < (uint)((iVar2 - iVar1) / 0x38)))
     && (in_EAX * 0x38 + iVar1 != iVar2)) {
    uVar3 = FUN_00132660(iVar2);
    *(undefined4 *)(unaff_ESI + 8) = uVar3;
  }
  return;
}
