/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A88F7021A5BA2EAD3297A9B067585988A48F83DA438E193ADB41438619A27799
 * Entry: 0x0016d420, Ghidra index: 4795, label: FUN_0016d420
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0016d420(void)

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
    uVar4 = (*(int *)(unaff_ESI + 8) - iVar1) / 0x34;
  }
  if (uVar4 < in_EAX) {
    FUN_0016d7f0();
    return;
  }
  if (((iVar1 != 0) && (iVar2 = *(int *)(unaff_ESI + 8), in_EAX < (uint)((iVar2 - iVar1) / 0x34)))
     && (in_EAX * 0x34 + iVar1 != iVar2)) {
    uVar3 = FUN_001d92e0(iVar2);
    *(undefined4 *)(unaff_ESI + 8) = uVar3;
  }
  return;
}
