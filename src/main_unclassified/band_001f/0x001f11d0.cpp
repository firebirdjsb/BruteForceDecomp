/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A95C3D8411A542CDBEA1C087BEF7E4DB3EBEA8EFA48B1B4E083261E98E426AC1
 * Entry: 0x001f11d0, Ghidra index: 6987, label: FUN_001f11d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001f11d0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_ESI;
  
  iVar1 = 0;
  if (0 < *(int *)(unaff_ESI + 0x25c)) {
    iVar3 = 0;
    do {
      *(undefined4 *)(*(int *)(unaff_ESI + 0x250) + 4 + iVar3) = 0;
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0x10;
    } while (iVar1 < *(int *)(unaff_ESI + 0x25c));
  }
  *(undefined4 *)(unaff_ESI + 600) = 0;
  *(undefined4 *)(unaff_ESI + 0x254) = 0;
  iVar1 = 0;
  if (0 < *(int *)(unaff_ESI + 0x274)) {
    iVar3 = 0;
    do {
      *(undefined4 *)(*(int *)(unaff_ESI + 0x268) + 4 + iVar3) = 0;
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0x10;
    } while (iVar1 < *(int *)(unaff_ESI + 0x274));
  }
  *(undefined4 *)(unaff_ESI + 0x270) = 0;
  *(undefined4 *)(unaff_ESI + 0x26c) = 0;
  iVar1 = FUN_002f2b3f(unaff_ESI + 0x34,0x80000000,1,0,3,0x28000000,0);
  *(int *)(unaff_ESI + 0x240) = iVar1;
  if (iVar1 != -1) {
    *(undefined4 *)(unaff_ESI + 4) = 3;
    uVar2 = XAPILIB__GetFileSize(iVar1,0);
    *(undefined4 *)(unaff_ESI + 0x23c) = uVar2;
    iVar1 = 0;
    if (0 < *(int *)(unaff_ESI + 0x25c)) {
      iVar3 = 0;
      do {
        *(undefined4 *)(*(int *)(unaff_ESI + 0x250) + 4 + iVar3) = 1;
        iVar1 = iVar1 + 1;
        iVar3 = iVar3 + 0x10;
      } while (iVar1 < *(int *)(unaff_ESI + 0x25c));
    }
    *(undefined4 *)(*(int *)(unaff_ESI + 600) * 0x10 + 4 + *(int *)(unaff_ESI + 0x250)) = 1;
    XAPILIB__SetEvent(*(undefined4 *)(unaff_ESI + 0x20));
    iVar1 = *(int *)(*(int *)(unaff_ESI + 600) * 0x10 + 4 + *(int *)(unaff_ESI + 0x250));
    while (iVar1 != 2) {
      XAPILIB__WaitForSingleObject(*(undefined4 *)(unaff_ESI + 0x18),0xffffffff);
      iVar1 = *(int *)(*(int *)(unaff_ESI + 600) * 0x10 + 4 + *(int *)(unaff_ESI + 0x250));
    }
    return 0;
  }
  *(undefined4 *)(unaff_ESI + 8) = 3;
  return 0x80004005;
}
