/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3450DC5BB077EE4B33A8C690D8DC111BFF5F7C5C49AC00D633B08244637620B5
 * Entry: 0x0012ea30, Ghidra index: 3817, label: FUN_0012ea30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 FUN_0012ea30(void)

{
  int iVar1;
  undefined1 uVar2;
  int in_EDX;
  int iVar3;
  int unaff_ESI;
  
  uVar2 = 0;
  if ((*(byte *)(unaff_ESI + 0x748) & 8) != 0) {
    return uVar2;
  }
  if (((-1 < in_EDX) && (in_EDX < 0x32)) && (*(int *)(unaff_ESI + 0x1f8) != 0)) {
    iVar1 = *(int *)(unaff_ESI + 0x1fc);
    if (iVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(in_EDX * 0x10 + 0x264 + iVar1);
    }
    if ((iVar3 != 0) &&
       (((((iVar1 == 0 || ((*(byte *)(iVar1 + 0x250) & 4) != 0)) ||
          (((*(byte *)(iVar1 + 0x252) & 2) == 0 ||
           ((*(int *)(unaff_ESI + 0x214) == 0 ||
            ((*(byte *)(*(int *)(unaff_ESI + 0x214) + 0x3c) & 1) != 0)))))) ||
         (*(int *)(unaff_ESI + 0x218) == 0)) ||
        ((*(byte *)(*(int *)(unaff_ESI + 0x218) + 0x3c) & 1) != 0)))) {
      uVar2 = 1;
    }
  }
  return uVar2;
}
