/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 64FD2A5C7351BDC0F38A6F027AD9EB727D86D727FA70F9EBEC20D5FFD9AA658B
 * Entry: 0x001a9710, Ghidra index: 5470, label: FUN_001a9710
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a9710(void)

{
  undefined4 in_EAX;
  int in_ECX;
  int iVar1;
  
  if (*(int *)(in_ECX + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0xc;
    if (iVar1 != 0) goto LAB_001a9748;
  }
  FUN_001aa320(in_EAX);
LAB_001a9748:
  FUN_002435b0(0,0,0);
  return *(int *)(in_ECX + 4) + iVar1 * 0xc;
}
