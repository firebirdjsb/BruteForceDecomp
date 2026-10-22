/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D054C864AA4F255BEC80EED86FEDBFF4CB060B88A9672CA023B4B7A7CD3B1792
 * Entry: 0x0005bac0, Ghidra index: 928, label: FUN_0005bac0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0005bac0(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int unaff_ESI;
  int unaff_EDI;
  
  if (unaff_EDI == 0) {
    return 0;
  }
  uVar1 = *(uint *)(unaff_ESI + 4);
  uVar3 = 0;
  if (uVar1 != 0) {
    if (uVar1 == 0) goto LAB_0005bae3;
    do {
      iVar2 = *(int *)(*(int *)(unaff_ESI + 8) + uVar3 * 4);
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x14) == unaff_EDI)) {
        return iVar2;
      }
LAB_0005bae3:
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return 0;
}
