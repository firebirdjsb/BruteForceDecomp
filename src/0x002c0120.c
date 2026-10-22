/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B8166825E329640C3B9A607AB054BA6052FD5F3FB20726CB9292432BF8DA80CA
 * Entry: 0x002c0120, Ghidra index: 10007, label: FUN_002c0120
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c0120(void)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  
  iVar2 = *(int *)(in_EAX + 8);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x74);
    FUN_002c0220(iVar2,1,1);
    iVar2 = iVar1;
  }
  return;
}
