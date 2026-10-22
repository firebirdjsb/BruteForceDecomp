/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AD7DB73500D135020D5235D5323E801CC95BE816181704AFAB6CF6C3F2F83527
 * Entry: 0x0004af50, Ghidra index: 605, label: FUN_0004af50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_0004af50(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 4);
  if ((iVar1 == 0) || (*(int *)(unaff_EDI + 8) - iVar1 >> 3 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_2 - iVar1 >> 3;
  }
  FUN_0004aff0(unaff_EDI,param_2,1,param_3);
  *param_1 = *(int *)(unaff_EDI + 4) + iVar1 * 8;
  return param_1;
}
