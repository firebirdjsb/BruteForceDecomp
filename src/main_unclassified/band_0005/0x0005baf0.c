/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7D770F67ED56C67B63D108FBF30E5FA752C8BFE20F603C0E5FCB90049A63E03F
 * Entry: 0x0005baf0, Ghidra index: 929, label: FUN_0005baf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0005baf0(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int unaff_EDI;
  
  uVar1 = *(uint *)(unaff_EDI + 4);
  iVar3 = 0;
  uVar4 = 0;
  if (uVar1 != 0) {
    if (uVar1 == 0) goto LAB_0005bb18;
    do {
      iVar2 = *(int *)(*(int *)(unaff_EDI + 8) + uVar4 * 4);
      if (((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + 4), iVar2 != 0)) &&
         ((*(byte *)(iVar2 + 0x70) & 1) == 0)) {
        iVar3 = iVar3 + 1;
      }
LAB_0005bb18:
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return iVar3;
}
