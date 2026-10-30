/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 203AE11EA608EFDF1D210D62CA8A5A4E6A1826FCA59D1FCCF303D2666B7CC331
 * Entry: 0x001b3730, Ghidra index: 5644, label: FUN_001b3730
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b3730(void)

{
  uint in_EAX;
  uint uVar1;
  int iVar2;
  int unaff_ESI;
  undefined1 local_4 [4];
  
  iVar2 = *(int *)(unaff_ESI + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(int *)(unaff_ESI + 8) - iVar2) / 0x3c;
  }
  if (uVar1 < in_EAX) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(unaff_ESI + 8) - iVar2) / 0x3c;
    }
    FUN_001bf190(unaff_ESI,*(undefined4 *)(unaff_ESI + 8),in_EAX - iVar2);
    FUN_0006a540();
    return;
  }
  if (iVar2 != 0) {
    if (in_EAX < (uint)((*(int *)(unaff_ESI + 8) - iVar2) / 0x3c)) {
      FUN_001bf120(unaff_ESI,local_4,in_EAX * 0x3c + *(int *)(unaff_ESI + 4),*(int *)(unaff_ESI + 8)
                  );
    }
  }
  FUN_0006a540();
  return;
}
