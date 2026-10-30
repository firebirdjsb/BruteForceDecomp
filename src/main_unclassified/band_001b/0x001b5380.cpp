/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 41979BA0EB69F94B07AABD540043246F240CDD362A48E9791F59F2E7B273CFCC
 * Entry: 0x001b5380, Ghidra index: 5669, label: FUN_001b5380
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b5380(void)

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
    uVar4 = (*(int *)(unaff_EDI + 8) - iVar1) / 0x6c;
  }
  if (uVar4 < in_EAX) {
    FUN_001c6cc0(*(undefined4 *)(unaff_EDI + 8));
    return;
  }
  if (((iVar1 != 0) && (iVar2 = *(int *)(unaff_EDI + 8), in_EAX < (uint)((iVar2 - iVar1) / 0x6c)))
     && (in_EAX * 0x6c + iVar1 != iVar2)) {
    uVar3 = FUN_001d9030(iVar2);
    *(undefined4 *)(unaff_EDI + 8) = uVar3;
  }
  return;
}
