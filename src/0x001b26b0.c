/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4BD283AB85CF87FAADF31550D8A8C703C97C9835726871EDFBFE281C09DD46AA
 * Entry: 0x001b26b0, Ghidra index: 5624, label: FUN_001b26b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b26b0(void)

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
    uVar4 = *(int *)(unaff_EDI + 8) - iVar1 >> 10;
  }
  if (uVar4 < in_EAX) {
    FUN_001ba180();
    return;
  }
  if (((iVar1 != 0) && (iVar2 = *(int *)(unaff_EDI + 8), in_EAX < (uint)(iVar2 - iVar1 >> 10))) &&
     (in_EAX * 0x400 + iVar1 != iVar2)) {
    uVar3 = FUN_001d6e00(iVar2);
    *(undefined4 *)(unaff_EDI + 8) = uVar3;
  }
  return;
}
