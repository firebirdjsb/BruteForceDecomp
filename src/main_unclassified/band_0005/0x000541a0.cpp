/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FE9B13FBFA60864EC2A641FA4FC3C4D02C5815CDCE8426446730B254C4B2A332
 * Entry: 0x000541a0, Ghidra index: 787, label: FUN_000541a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000541a0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (param_3 - param_1) / 0x14;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_00054310(param_1);
    FUN_00054310(param_2 + iVar1 * -0x14);
    FUN_00054310(param_3 + iVar1 * -0x28);
    FUN_00054310(iVar1 * 0x14 + param_1);
    return;
  }
  FUN_00054310(param_1);
  return;
}
