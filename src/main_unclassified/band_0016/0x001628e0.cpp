/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 427F3210287B52472A891C383178CFFD3BF0AF1EE74E6135B12DC0E5E5E59F55
 * Entry: 0x001628e0, Ghidra index: 4649, label: FUN_001628e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001628e0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x344;
}
