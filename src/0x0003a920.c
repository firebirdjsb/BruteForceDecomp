/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 635269782BFF181FDC9413760954BB6F1B63BA9A611E0C72919391D1624EC977
 * Entry: 0x0003a920, Ghidra index: 413, label: FUN_0003a920
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0003a920(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int unaff_EBX;
  int *piVar2;
  uint uVar3;
  
  iVar1 = *(int *)(unaff_EBX + 4);
  uVar3 = 0;
  piVar2 = (int *)(iVar1 + 4);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if ((uint)((*(int *)(unaff_EBX + 8) - iVar1) / 0xc) <= uVar3) break;
    if (((param_2 == 0) || (*piVar2 == 0)) || (*piVar2 == param_2)) {
      *param_3 = *(undefined4 *)(iVar1 + 8 + uVar3 * 0xc);
      return 1;
    }
    uVar3 = uVar3 + 1;
    piVar2 = piVar2 + 3;
  }
  return 0;
}
