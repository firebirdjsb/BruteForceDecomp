/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C1AB05F9667B591B1898FBF34C043D80E6EF4AB12E4BC4858AE143547C6E2420
 * Entry: 0x00077350, Ghidra index: 1395, label: FUN_00077350
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00077350(int param_1,undefined4 param_2)

{
  int *unaff_EBX;
  int iVar1;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 4);
  if ((iVar1 == 0) || (*(int *)(unaff_EDI + 8) - iVar1 >> 4 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1 - iVar1 >> 4;
  }
  FUN_00077420(unaff_EDI,param_1,1,param_2);
  *unaff_EBX = iVar1 * 0x10 + *(int *)(unaff_EDI + 4);
  return;
}
