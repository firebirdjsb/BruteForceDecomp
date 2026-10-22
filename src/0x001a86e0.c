/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D3B433D07CA928501988204D97713DD0E5C69E9849A737395CD0F1B0E6DC508A
 * Entry: 0x001a86e0, Ghidra index: 5444, label: FUN_001a86e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a86e0(void)

{
  undefined4 in_EAX;
  int in_ECX;
  int iVar1;
  
  if (*(int *)(in_ECX + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x14;
    if (iVar1 != 0) goto LAB_001a8719;
  }
  FUN_001ade00(in_EAX);
LAB_001a8719:
  FUN_001b3bb0(0);
  return *(int *)(in_ECX + 4) + iVar1 * 0x14;
}
