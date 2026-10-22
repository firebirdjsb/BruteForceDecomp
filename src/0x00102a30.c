/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9A0E8C6CB29807F33FCF20EA8F3DAC56E883E80FB0B98A5B865751724BDE2F0D
 * Entry: 0x00102a30, Ghidra index: 3277, label: FUN_00102a30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00102a30(int *param_1)

{
  int unaff_EBX;
  int iVar1;
  int iVar2;
  
  if (*(int *)(unaff_EBX + 0x90) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(unaff_EBX + 0x94) - *(int *)(unaff_EBX + 0x90) >> 2;
  }
  iVar1 = 0;
  if (0 < iVar2) {
    do {
      (**(code **)(*param_1 + 0x38))(*(int *)(unaff_EBX + 0x90) + iVar1 * 4);
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar2);
  }
  return 1;
}
