/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E39B86C322C30EC58EA456134332D1624E7A40336C604D88D7711058E23B4C74
 * Entry: 0x000637c0, Ghidra index: 1078, label: FUN_000637c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000637c0(int param_1,undefined4 param_2)

{
  int *unaff_EBX;
  int unaff_ESI;
  int iVar1;
  
  iVar1 = *(int *)(unaff_ESI + 4);
  if ((iVar1 == 0) || (*(int *)(unaff_ESI + 8) - iVar1 >> 3 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1 - iVar1 >> 3;
  }
  FUN_001e10c0(param_1,param_2);
  *unaff_EBX = *(int *)(unaff_ESI + 4) + iVar1 * 8;
  return;
}
