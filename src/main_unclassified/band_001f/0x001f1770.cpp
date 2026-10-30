/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B99D8DD2D5398EFB9B2163097D42B4373E70D4FE11F56DE335CF28D3DA908301
 * Entry: 0x001f1770, Ghidra index: 6991, label: FUN_001f1770
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001f1770(void)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0x244) != -1) {
    iVar1 = 0;
    if (0 < *(int *)(unaff_EDI + 0x274)) {
      do {
        iVar2 = iVar1 * 0x10 + *(int *)(unaff_EDI + 0x268);
        if (*(int *)(iVar1 * 0x10 + 4 + *(int *)(unaff_EDI + 0x268)) != 0) {
          iVar1 = *(int *)(iVar2 + 4);
          while (iVar1 != 0) {
            XAPILIB__SetEvent(*(undefined4 *)(unaff_EDI + 0x28));
            XAPILIB__WaitForSingleObject(*(undefined4 *)(unaff_EDI + 0x2c),0x20);
            iVar1 = *(int *)(iVar2 + 4);
          }
          iVar1 = -1;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(unaff_EDI + 0x274));
    }
    *(undefined4 *)(unaff_EDI + 0x244) = 0xffffffff;
  }
  return 0;
}
