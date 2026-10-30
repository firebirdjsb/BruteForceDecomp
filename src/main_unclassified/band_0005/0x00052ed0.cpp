/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AA3ADD389A890B7DF255A6D13B2A83220EB827A2F884E4B57C335EE01D2DE880
 * Entry: 0x00052ed0, Ghidra index: 759, label: FUN_00052ed0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00053080(int param_1);

void FUN_00052ed0(int param_1,undefined4 param_2)

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
  FUN_00053080(param_1,param_2);
  *unaff_EBX = *(int *)(unaff_ESI + 4) + iVar1 * 4;
  return;
}
