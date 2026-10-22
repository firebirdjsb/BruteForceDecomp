/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 33CF862DDD41FAF01BF4388CD2410CD17110E429D5B7F2F2E3BE8105722FA2CE
 * Entry: 0x001a7260, Ghidra index: 5393, label: FUN_001a7260
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a7260(void)

{
  undefined4 in_EAX;
  int in_ECX;
  int iVar1;
  
  if (*(int *)(in_ECX + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x18;
    if (iVar1 != 0) goto LAB_001a7299;
  }
  FUN_001ab1a0(in_EAX);
LAB_001a7299:
  FUN_001b2050();
  return *(int *)(in_ECX + 4) + iVar1 * 0x18;
}
