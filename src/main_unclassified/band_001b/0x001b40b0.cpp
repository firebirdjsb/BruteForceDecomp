/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8F6DA04D701DABA64274154084E776BA7A17496C26ED1A93DBF6CDBC1CE7F91B
 * Entry: 0x001b40b0, Ghidra index: 5652, label: FUN_001b40b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b40b0(void)

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
    uVar4 = (*(int *)(unaff_ESI + 8) - iVar1) / 0x5c;
  }
  if (uVar4 < in_EAX) {
    FUN_001c14a0(unaff_ESI);
    return;
  }
  if (((iVar1 != 0) && (iVar2 = *(int *)(unaff_ESI + 8), in_EAX < (uint)((iVar2 - iVar1) / 0x5c)))
     && (in_EAX * 0x5c + iVar1 != iVar2)) {
    uVar3 = FUN_001d0640(iVar2);
    *(undefined4 *)(unaff_ESI + 8) = uVar3;
  }
  return;
}
