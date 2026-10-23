/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F43C17D713D9244E56804CF9E3F3AE2A461314926521A4DFE0C3BF3C90AA4E48
 * Entry: 0x001a8ce0, Ghidra index: 5449, label: FUN_001a8ce0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a8ce0(void)

{
  undefined4 in_EAX;
  int in_ECX;
  int iVar1;
  
  if (*(int *)(in_ECX + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x88;
    if (iVar1 != 0) goto LAB_001a8d19;
  }
  FUN_001af1f0(in_EAX);
LAB_001a8d19:
  FUN_001b4770(0);
  return iVar1 * 0x88 + *(int *)(in_ECX + 4);
}
