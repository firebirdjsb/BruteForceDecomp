/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0FAE9132CCAD7A7FE99D2F9750B7C3C428C5DEE3F36C91A79267A36F1B6E6A5F
 * Entry: 0x00153eb0, Ghidra index: 4430, label: FUN_00153eb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00153eb0(void)

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
    uVar4 = (*(int *)(unaff_ESI + 8) - iVar1) / 0x54;
  }
  if (uVar4 < in_EAX) {
    FUN_00153f60(*(undefined4 *)(unaff_ESI + 8));
    return;
  }
  if (((iVar1 != 0) && (iVar2 = *(int *)(unaff_ESI + 8), in_EAX < (uint)((iVar2 - iVar1) / 0x54)))
     && (in_EAX * 0x54 + iVar1 != iVar2)) {
    uVar3 = FUN_00154360(iVar2);
    *(undefined4 *)(unaff_ESI + 8) = uVar3;
  }
  return;
}
