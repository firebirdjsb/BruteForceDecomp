/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A7C8254EADFC1FBB9CCCC85DEB958AAC23779B74684C1EF7B64710474E0EED7C
 * Entry: 0x00054bc0, Ghidra index: 799, label: FUN_00054bc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00054bc0(void)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  int *piVar3;
  int iVar4;
  int unaff_EBX;
  uint uVar5;
  undefined1 local_4 [4];
  
  iVar4 = *(int *)(unaff_EBX + 4);
  uVar5 = 0xffffffff;
  piVar3 = (int *)FUN_00023010(local_4,*(undefined4 *)(in_EAX + 4));
  if (*piVar3 != *(int *)(iVar4 + 0xc)) {
    uVar5 = *piVar3 - *(int *)(iVar4 + 8) >> 2;
  }
  iVar4 = 0;
  if (0 < (int)uVar5) {
    iVar4 = *(int *)(unaff_EBX + 8);
    if ((*(int *)(iVar4 + 4) == 0) ||
       ((uint)(*(int *)(iVar4 + 8) - *(int *)(iVar4 + 4) >> 2) <= uVar5)) {
      FUN_0015b7c0(iVar4);
    }
    iVar1 = *(int *)(*(int *)(iVar4 + 4) + uVar5 * 4);
    iVar2 = *(int *)(iVar1 + 0xc);
    for (iVar4 = 0; (iVar2 != 0 && (iVar4 < 10)); iVar4 = iVar4 + 1) {
      iVar2 = *(int *)(iVar1 + 0x14 + iVar4 * 8);
    }
  }
  return iVar4;
}
