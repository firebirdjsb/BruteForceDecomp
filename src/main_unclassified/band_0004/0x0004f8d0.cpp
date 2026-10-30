/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6AD9EF55AD2D2A3B0A7C2243293CC5A1E3120B96EEC7BF5DC648B316B9EC0BCE
 * Entry: 0x0004f8d0, Ghidra index: 696, label: FUN_0004f8d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00050250(int param_1,int param_2,uint param_3);

void FUN_0004f8d0(int param_1,undefined4 param_2)

{
  int *unaff_EBX;
  int iVar1;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 4);
  if ((iVar1 == 0) || (*(int *)(unaff_EDI + 8) - iVar1 >> 7 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1 - iVar1 >> 7;
  }
  FUN_00050250(unaff_EDI,param_1,1,param_2);
  *unaff_EBX = iVar1 * 0x80 + *(int *)(unaff_EDI + 4);
  return;
}
