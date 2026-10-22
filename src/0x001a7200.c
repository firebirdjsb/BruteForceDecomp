/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CFD72854BA6B530DAA47C118954CFA698622F2CBC0894DF92615CF8A51DD946B
 * Entry: 0x001a7200, Ghidra index: 5392, label: FUN_001a7200
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a7200(void)

{
  undefined4 in_EAX;
  int in_ECX;
  int iVar1;
  
  if (*(int *)(in_ECX + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x18;
    if (iVar1 != 0) goto LAB_001a7239;
  }
  FUN_001ab060(in_EAX);
LAB_001a7239:
  FUN_001b1fa0(0);
  return *(int *)(in_ECX + 4) + iVar1 * 0x18;
}
