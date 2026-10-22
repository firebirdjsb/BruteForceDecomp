/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4EDDE141461DDC54221804BBE2AAA9BCE6875DB5026FD010943F858FAE05673D
 * Entry: 0x001a8ab0, Ghidra index: 5447, label: FUN_001a8ab0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a8ab0(void)

{
  undefined4 in_EAX;
  int in_ECX;
  int iVar1;
  
  if (*(int *)(in_ECX + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x48;
    if (iVar1 != 0) goto LAB_001a8ae9;
  }
  FUN_001aebb0(in_EAX);
LAB_001a8ae9:
  FUN_001b42e0(0);
  return *(int *)(in_ECX + 4) + iVar1 * 0x48;
}
