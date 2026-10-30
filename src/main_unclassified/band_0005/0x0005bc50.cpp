/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0646D9DA9BEC3B6CBD49E59F146B8A46AD16D574418210EA334E01877F8FC84D
 * Entry: 0x0005bc50, Ghidra index: 931, label: FUN_0005bc50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0005bc50(void)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int unaff_EBX;
  int iVar4;
  int unaff_EDI;
  
  uVar1 = *(uint *)(unaff_EDI + 4);
  uVar2 = 0;
  uVar3 = 0;
  if (uVar1 != 0) {
    if (uVar1 != 0) goto LAB_0005bc64;
    iVar4 = 0;
    while (*(int *)(iVar4 + 4) != unaff_EBX) {
      uVar3 = uVar3 + 1;
      if (uVar1 <= uVar3) {
        return uVar2;
      }
LAB_0005bc64:
      iVar4 = *(int *)(*(int *)(unaff_EDI + 8) + uVar3 * 4);
    }
    if (uVar3 != 0xffffffff) {
      if (uVar3 < uVar1) {
        iVar4 = *(int *)(*(int *)(unaff_EDI + 8) + uVar3 * 4);
      }
      else {
        iVar4 = 0;
      }
      if ((*(byte *)(iVar4 + 0x20) & 1) != 0) {
        uVar2 = *(undefined4 *)(iVar4 + 0xc);
      }
    }
  }
  return uVar2;
}
