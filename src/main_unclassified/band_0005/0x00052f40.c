/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 06C568519BF546C652B5C04389F7C8AE08FC44FA5F96EAA593231FC366CDD492
 * Entry: 0x00052f40, Ghidra index: 761, label: FUN_00052f40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_00052f40(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 4);
  if (iVar1 != 0) {
    if ((*(int *)(unaff_EDI + 8) - iVar1) / 0xc != 0) {
      iVar1 = (param_2 - iVar1) / 0xc;
      goto LAB_00052f87;
    }
  }
  iVar1 = 0;
LAB_00052f87:
  FUN_00053330(param_2,param_3);
  *param_1 = *(int *)(unaff_EDI + 4) + iVar1 * 0xc;
  return param_1;
}
