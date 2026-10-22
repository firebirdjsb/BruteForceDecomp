/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C92B45325FADD821197A7FD384A2A888D9698296E9DC785F67AC4F0E02EEACFC
 * Entry: 0x0005eb10, Ghidra index: 992, label: FUN_0005eb10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0005eb10(int param_1,undefined4 param_2)

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
  FUN_001f7620(unaff_EDI,param_1,1,param_2);
  *unaff_EBX = *(int *)(unaff_EDI + 4) + iVar1 * 8;
  return;
}
