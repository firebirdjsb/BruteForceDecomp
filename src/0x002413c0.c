/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 32248C33348BAEB2F822DA8FF11B0263B4FAB4547613158FBCAC1B87C75F6E64
 * Entry: 0x002413c0, Ghidra index: 8006, label: FUN_002413c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002413c0(void)

{
  undefined4 in_EAX;
  int in_ECX;
  int iVar1;
  undefined4 in_stack_ffffffec;
  undefined4 in_stack_fffffff0;
  
  if (*(int *)(in_ECX + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0xc;
    if (iVar1 != 0) goto LAB_002413f8;
  }
  in_stack_ffffffec = 0x2413f3;
  FUN_001aa320(in_EAX);
  in_stack_fffffff0 = in_EAX;
LAB_002413f8:
  FUN_002435b0(0,in_stack_ffffffec,in_stack_fffffff0);
  return *(int *)(in_ECX + 4) + iVar1 * 0xc;
}
