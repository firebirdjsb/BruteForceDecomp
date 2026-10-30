/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4749961A9164EFFEF4BE9D98491AA1F9C6DAC633B28CF7EE7A67DBAB53B64301
 * Entry: 0x001445d0, Ghidra index: 4155, label: FUN_001445d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001445d0(int param_1,undefined4 param_2)

{
  int *unaff_EBX;
  int iVar1;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 4);
  if ((iVar1 == 0) || (*(int *)(unaff_EDI + 8) - iVar1 >> 3 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1 - iVar1 >> 3;
  }
  FUN_001bd760(param_1,1,param_2);
  *unaff_EBX = *(int *)(unaff_EDI + 4) + iVar1 * 8;
  return;
}
