/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F5184E75807EDF2B42234E758D364599C76EBA51C27E6BD47E75807F8279DE65
 * Entry: 0x000e3920, Ghidra index: 2822, label: FUN_000e3920
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e3920(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_3 - param_1 >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_000e3b50(param_1);
    FUN_000e3b50(param_2 + iVar1 * -4);
    FUN_000e3b50(param_3 + iVar1 * -8);
    FUN_000e3b50(iVar1 * 4 + param_1);
    return;
  }
  FUN_000e3b50(param_1);
  return;
}
