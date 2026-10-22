/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BC8D87571B988AEF2409EF562E6A7716602FA56A74B72218D3F5729B0F5E7C9B
 * Entry: 0x00042a90, Ghidra index: 512, label: FUN_00042a90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00042a90(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_EBX;
  undefined4 *puVar3;
  
  iVar2 = param_2;
  FUN_00042b60(&param_2,param_2 + 0x18,*(undefined4 *)(unaff_EBX + 8),param_2,param_2);
  puVar1 = *(undefined4 **)(unaff_EBX + 8);
  for (puVar3 = puVar1 + -6; puVar3 != puVar1; puVar3 = puVar3 + 6) {
    (**(code **)*puVar3)(0);
  }
  *(int *)(unaff_EBX + 8) = *(int *)(unaff_EBX + 8) + -0x18;
  *param_1 = iVar2;
  return;
}
