/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2D61499597D3C99254055184643A5B2FA8C9C5CC5ED97A516D59939337091EE9
 * Entry: 0x00182c40, Ghidra index: 5187, label: FUN_00182c40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00182c40(void)

{
  int *piVar1;
  int unaff_EBX;
  int iVar2;
  int iVar3;
  
  if (*(int *)(unaff_EBX + 0x40) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(unaff_EBX + 0x44) - *(int *)(unaff_EBX + 0x40) >> 2;
  }
  iVar2 = 0;
  if (0 < iVar3) {
    do {
      piVar1 = *(int **)(*(int *)(unaff_EBX + 0x40) + iVar2 * 4);
      if (piVar1[0xe] != 0) {
        (**(code **)(*piVar1 + 8))(1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  return 1;
}
