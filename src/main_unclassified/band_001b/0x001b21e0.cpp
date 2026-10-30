/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 98CFA4588A0924824F618314D254B4E4246356B09D089EA9AFE90754EC8D9471
 * Entry: 0x001b21e0, Ghidra index: 5617, label: FUN_001b21e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b21e0(void)

{
  int iVar1;
  int iVar2;
  uint in_EAX;
  undefined4 uVar3;
  uint uVar4;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 4);
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (*(int *)(unaff_EDI + 8) - iVar1) / 0xc;
  }
  if (uVar4 < in_EAX) {
    FUN_001b8ab0(*(undefined4 *)(unaff_EDI + 8));
    return;
  }
  if (((iVar1 != 0) && (iVar2 = *(int *)(unaff_EDI + 8), in_EAX < (uint)((iVar2 - iVar1) / 0xc))) &&
     (iVar1 + in_EAX * 0xc != iVar2)) {
    uVar3 = FUN_001e07e0(iVar2);
    *(undefined4 *)(unaff_EDI + 8) = uVar3;
  }
  return;
}
