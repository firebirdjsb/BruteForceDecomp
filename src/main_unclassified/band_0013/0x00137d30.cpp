/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D10D0FA8D1092C78B774732371A22CF3C394EA4AC31BB68BFD8645F382FAE167
 * Entry: 0x00137d30, Ghidra index: 3918, label: FUN_00137d30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_00137d30(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 4);
  if (iVar1 != 0) {
    if ((*(int *)(unaff_EDI + 8) - iVar1) / 0x2c != 0) {
      iVar1 = (param_2 - iVar1) / 0x2c;
      goto LAB_00137d79;
    }
  }
  iVar1 = 0;
LAB_00137d79:
  FUN_001384c0(unaff_EDI,param_2,1,param_3);
  *param_1 = iVar1 * 0x2c + *(int *)(unaff_EDI + 4);
  return param_1;
}
