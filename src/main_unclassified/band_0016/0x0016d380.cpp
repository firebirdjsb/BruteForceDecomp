/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A2E716EBC2567A3A47401F8456D9BF13512E1D88CFD27072A252D3717A9592DB
 * Entry: 0x0016d380, Ghidra index: 4793, label: FUN_0016d380
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_0016d380(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 4);
  if (iVar1 != 0) {
    if ((*(int *)(unaff_EDI + 8) - iVar1) / 0x14 != 0) {
      iVar1 = (param_2 - iVar1) / 0x14;
      goto LAB_0016d3c9;
    }
  }
  iVar1 = 0;
LAB_0016d3c9:
  FUN_0016d4d0(param_2,param_3);
  *param_1 = *(int *)(unaff_EDI + 4) + iVar1 * 0x14;
  return param_1;
}
