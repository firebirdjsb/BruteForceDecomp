/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 889D76119E07E3D3EBC107A9222AFB85F1D73F2F036E542928599F539A7F1A0D
 * Entry: 0x001fe610, Ghidra index: 7232, label: FUN_001fe610
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001fe610(void)

{
  int iVar1;
  int *in_ECX;
  
  if ((*(byte *)((int)in_ECX + 0x3d) & 1) != 0) {
    FUN_001fe660();
    iVar1 = (**(code **)(*in_ECX + 0x4c))();
    if ((iVar1 != 0) && ((*(byte *)(iVar1 + 8) & 1) != 0)) {
      FUN_001fb020();
      FUN_001fe580();
    }
  }
  return 1;
}
