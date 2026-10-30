/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E5A6C5DF153BA856C27C66E1129DD7E6622FF2AEDDF7774DB15C9E27FD377344
 * Entry: 0x00052fe0, Ghidra index: 763, label: FUN_00052fe0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00053630(int param_1);

int * FUN_00052fe0(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 4);
  if (iVar1 != 0) {
    if ((*(int *)(unaff_EDI + 8) - iVar1) / 0x14 != 0) {
      iVar1 = (param_2 - iVar1) / 0x14;
      goto LAB_00053029;
    }
  }
  iVar1 = 0;
LAB_00053029:
  FUN_00053630(param_2,param_3);
  *param_1 = *(int *)(unaff_EDI + 4) + iVar1 * 0x14;
  return param_1;
}
