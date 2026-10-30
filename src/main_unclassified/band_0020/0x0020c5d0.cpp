/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5242EF65A14B486EEB60115647217D8B3527B9372CE2EFB4905C1D52B36F9BD1
 * Entry: 0x0020c5d0, Ghidra index: 7355, label: FUN_0020c5d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0020c5d0(int param_1,undefined4 param_2)

{
  int *unaff_EBX;
  int iVar1;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 4);
  if ((iVar1 == 0) || (*(int *)(unaff_EDI + 8) - iVar1 >> 5 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1 - iVar1 >> 5;
  }
  FUN_001c82c0(param_1,param_2);
  *unaff_EBX = iVar1 * 0x20 + *(int *)(unaff_EDI + 4);
  return;
}
