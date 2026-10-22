/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D5450068CB85F57F77C500D95FEB94C18D48CD213D1F9CF9E1960AB2209C931F
 * Entry: 0x001a6910, Ghidra index: 5368, label: FUN_001a6910
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a6910(void)

{
  int in_EAX;
  undefined4 in_ECX;
  int iVar1;
  
  if (*(int *)(in_EAX + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(in_EAX + 8) - *(int *)(in_EAX + 4) >> 4;
    if (iVar1 != 0) goto LAB_001a6938;
  }
  FUN_00241930(in_ECX);
LAB_001a6938:
  FUN_001b57a0(0);
  return iVar1 * 0x10 + *(int *)(in_EAX + 4);
}
