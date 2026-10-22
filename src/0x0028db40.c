/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7C404F363DD7186ACD45B7E6541EE51464C5EB6C5D244457997D3F3F2FA1EE87
 * Entry: 0x0028db40, Ghidra index: 9196, label: FUN_0028db40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0028db40(void)

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
    uVar4 = *(int *)(unaff_EDI + 8) - iVar1 >> 4;
  }
  if (uVar4 < in_EAX) {
    FUN_0028dc50();
    return;
  }
  if (((iVar1 != 0) && (iVar2 = *(int *)(unaff_EDI + 8), in_EAX < (uint)(iVar2 - iVar1 >> 4))) &&
     (in_EAX * 0x10 + iVar1 != iVar2)) {
    uVar3 = FUN_0028e380(iVar2);
    *(undefined4 *)(unaff_EDI + 8) = uVar3;
  }
  return;
}
