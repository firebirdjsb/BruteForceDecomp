/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 67B698F4D32F415698E63D97F652ABDDEC229E4A7C239838CB16AED300C1C861
 * Entry: 0x001a8110, Ghidra index: 5430, label: FUN_001a8110
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a8110(undefined4 param_1)

{
  int unaff_EBX;
  int iVar1;
  
  if (*(int *)(unaff_EBX + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(unaff_EBX + 8) - *(int *)(unaff_EBX + 4)) / 0x50;
    if (iVar1 != 0) goto LAB_001a814b;
  }
  FUN_001ad150(param_1);
LAB_001a814b:
  FUN_001b3280(0);
  return iVar1 * 0x50 + *(int *)(unaff_EBX + 4);
}
