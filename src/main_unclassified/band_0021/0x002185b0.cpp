/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 07F926184646787EF6391265CC6D8970916132A28256D728521BB35EAB601E17
 * Entry: 0x002185b0, Ghidra index: 7475, label: FUN_002185b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_002185b0(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 4);
  if (iVar1 != 0) {
    if ((*(int *)(unaff_EDI + 8) - iVar1) / 0x14 != 0) {
      iVar1 = (param_2 - iVar1) / 0x14;
      goto LAB_002185f9;
    }
  }
  iVar1 = 0;
LAB_002185f9:
  FUN_00218790(unaff_EDI,param_2,1,param_3);
  *param_1 = *(int *)(unaff_EDI + 4) + iVar1 * 0x14;
  return param_1;
}
