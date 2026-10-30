/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9A0B1A2AD016D945BDABC6E90B83DCDD1379DA2FB37C4F0A0DB078F378C7CB6B
 * Entry: 0x001f3ca0, Ghidra index: 7029, label: FUN_001f3ca0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001f3ca0(void)

{
  int *piVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  int in_EDX;
  
  piVar1 = *(int **)(*(int *)(in_EAX + 0x18) + 0x20);
  iVar2 = in_EAX - *(int *)(*(int *)(in_EAX + 0x18) + 0x18) >> 6;
  iVar4 = *piVar1;
  iVar5 = piVar1[1] * iVar4 + -1;
  if (in_ECX == 0x10) {
    if (in_EDX == 0x10) {
      iVar4 = iVar4 + iVar2;
      in_EDX = 0;
      iVar3 = iVar4 + 1;
      if ((iVar5 < iVar4 + 1) && (in_EDX = 0xf, iVar3 = iVar4, iVar5 < iVar4)) {
        in_EDX = 0xff;
        iVar3 = iVar2;
      }
    }
    else {
      iVar3 = iVar4 + iVar2;
      if (iVar5 < iVar4 + iVar2) {
        in_EDX = in_EDX + 0xf0;
        iVar3 = iVar2;
      }
    }
  }
  else if (in_EDX == 0x10) {
    in_EDX = in_ECX << 4;
    iVar3 = iVar2 + 1;
    if (iVar5 < iVar2 + 1) {
      in_EDX = in_ECX * 0x10 + 0xf;
      iVar3 = iVar2;
    }
  }
  else {
    in_EDX = in_ECX * 0x10 + in_EDX;
    iVar3 = iVar2;
  }
  iVar4 = iVar3 * 0x134 + piVar1[0xf];
  return CONCAT31((int3)((uint)iVar4 >> 8),*(undefined1 *)(iVar4 + 0xc + in_EDX));
}
