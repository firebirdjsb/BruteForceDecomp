/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 574AB0AC69C364F1841BAF4C662994DAD46570946D055C205A5BAF3DE38C7777
 * Entry: 0x0017ca40, Ghidra index: 5054, label: FUN_0017ca40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0017ca40(int param_1,undefined4 param_2)

{
  int *unaff_EBX;
  int unaff_ESI;
  int iVar1;
  
  iVar1 = *(int *)(unaff_ESI + 4);
  if ((iVar1 == 0) || (*(int *)(unaff_ESI + 8) - iVar1 >> 2 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1 - iVar1 >> 2;
  }
  FUN_000a7d80(param_1,param_2);
  *unaff_EBX = *(int *)(unaff_ESI + 4) + iVar1 * 4;
  return;
}
