/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9F9E74DB719963BBF627CF927893E1F57B454372053028DD076E83A1134EE63B
 * Entry: 0x0004e8f0, Ghidra index: 677, label: FUN_0004e8f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0004e8f0(void)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int unaff_EDI;
  
  if (((*(int *)(unaff_EDI + 4) != 0) &&
      ((*(int *)(unaff_EDI + 8) - *(int *)(unaff_EDI + 4)) / 0x18 != 0)) &&
     (iVar4 = *(int *)(*(int *)(unaff_EDI + 8) + -4), iVar4 != 0)) {
    puVar1 = (uint *)(iVar4 + 0x28);
    *puVar1 = *puVar1 & 0xfffffffd;
  }
  iVar4 = *(int *)(unaff_EDI + 4);
  if (iVar4 != *(int *)(unaff_EDI + 8)) {
    do {
      iVar2 = *(int *)(iVar4 + 0x14);
      if ((iVar2 != 0) && ((*(uint *)(iVar2 + 0x28) & 8) != 0)) {
        *(uint *)(iVar2 + 0x28) = *(uint *)(iVar2 + 0x28) & 0xfffffff7;
      }
      iVar4 = iVar4 + 0x18;
    } while (iVar4 != *(int *)(unaff_EDI + 8));
  }
  if (*(int *)(unaff_EDI + 0x10) != -1) {
    *(undefined4 *)(unaff_EDI + 0x10) = 0xffffffff;
    *(undefined4 *)(unaff_EDI + 0x18) = 0x7f7fffff;
    *(undefined4 *)(unaff_EDI + 0x24) = 0;
  }
  puVar5 = *(undefined4 **)(unaff_EDI + 4);
  if (puVar5 != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)(unaff_EDI + 8);
    for (; puVar5 != puVar3; puVar5 = puVar5 + 6) {
      (**(code **)*puVar5)(0);
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_EDI + 4));
  }
  *(undefined4 *)(unaff_EDI + 4) = 0;
  *(undefined4 *)(unaff_EDI + 8) = 0;
  *(undefined4 *)(unaff_EDI + 0xc) = 0;
  *(undefined1 *)(unaff_EDI + 0x20) = 0;
  return;
}
