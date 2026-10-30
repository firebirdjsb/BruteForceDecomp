/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 80E634EF951EBA0F3D4A37BFD59C000B52391E90B51FED0B69327E15B8D21726
 * Entry: 0x001828f0, Ghidra index: 5182, label: FUN_001828f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001828f0(undefined4 param_1)

{
  int unaff_EBX;
  int iVar1;
  int iVar2;
  
  if (*(int *)(unaff_EBX + 0x40) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(unaff_EBX + 0x44) - *(int *)(unaff_EBX + 0x40) >> 2;
  }
  iVar1 = 0;
  if (0 < iVar2) {
    do {
      if (*(int *)(*(int *)(*(int *)(unaff_EBX + 0x40) + iVar1 * 4) + 0x38) != 0) {
        FUN_001816d0(param_1);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar2);
  }
  return;
}
