/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7459E8323DB0E24794A0ABFE166E6766DC42B1CB96A4C875A8FE757E61E3351E
 * Entry: 0x001b4770, Ghidra index: 5656, label: FUN_001b4770
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b4770(void)

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
    uVar4 = (*(int *)(unaff_ESI + 8) - iVar1) / 0x88;
  }
  if (uVar4 < in_EAX) {
    FUN_001c35d0();
    return;
  }
  if (((iVar1 != 0) && (iVar2 = *(int *)(unaff_ESI + 8), in_EAX < (uint)((iVar2 - iVar1) / 0x88)))
     && (in_EAX * 0x88 + iVar1 != iVar2)) {
    uVar3 = FUN_001d8a50(iVar2);
    *(undefined4 *)(unaff_ESI + 8) = uVar3;
  }
  return;
}
