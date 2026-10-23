/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F22115AB0EDB21EED4C5620072E1EEE5C2A09C3021E2345D2C6E735B4DCC8FC1
 * Entry: 0x001a8280, Ghidra index: 5433, label: FUN_001a8280
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a8280(undefined4 param_1)

{
  int iVar1;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(unaff_EDI + 8) - *(int *)(unaff_EDI + 4)) / 0x28;
    if (iVar1 != 0) goto LAB_001a82bb;
  }
  FUN_001ad580(param_1);
LAB_001a82bb:
  FUN_001b3530(0);
  return *(int *)(unaff_EDI + 4) + iVar1 * 0x28;
}
