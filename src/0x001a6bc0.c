/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3418F8226CD12A6CA2C7068AA1165D860A54488BA9F094BC2EE9CE26DF2CC50B
 * Entry: 0x001a6bc0, Ghidra index: 5376, label: FUN_001a6bc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a6bc0(void)

{
  int in_EAX;
  int in_ECX;
  int iVar1;
  
  if (*(int *)(in_ECX + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x1c;
    if (iVar1 != 0) goto LAB_001a6bfb;
  }
  FUN_001b0dc0(in_EAX);
  in_EAX = 1;
LAB_001a6bfb:
  FUN_001b5820(iVar1 + in_EAX);
  return iVar1 * 0x1c + *(int *)(in_ECX + 4);
}
