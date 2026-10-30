/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BEF9E2D54D4FCE43FB7FA6E4529B6B10AA154594E8DBE91A99AA5E05A8239D35
 * Entry: 0x001b1dc0, Ghidra index: 5613, label: FUN_001b1dc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b1dc0(void)

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
    uVar4 = (*(int *)(unaff_ESI + 8) - iVar1) / 0xc;
  }
  if (uVar4 < in_EAX) {
    FUN_001b96c0();
    return;
  }
  if (((iVar1 != 0) && (iVar2 = *(int *)(unaff_ESI + 8), in_EAX < (uint)((iVar2 - iVar1) / 0xc))) &&
     (iVar1 + in_EAX * 0xc != iVar2)) {
    uVar3 = FUN_001d6800(iVar2);
    *(undefined4 *)(unaff_ESI + 8) = uVar3;
  }
  return;
}
