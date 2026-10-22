/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BBB5A2E30CD59F8B0DCEDE4E37FACC6DC398A0BEC6E9202BD8A43F6A074350D8
 * Entry: 0x001a6c80, Ghidra index: 5378, label: FUN_001a6c80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a6c80(void)

{
  int in_EAX;
  undefined4 in_ECX;
  int iVar1;
  
  if (*(int *)(in_EAX + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(in_EAX + 8) - *(int *)(in_EAX + 4) >> 5;
    if (iVar1 != 0) goto LAB_001a6ca8;
  }
  FUN_001b0f00(in_ECX);
LAB_001a6ca8:
  FUN_001b58e0(0,0);
  return iVar1 * 0x20 + *(int *)(in_EAX + 4);
}
