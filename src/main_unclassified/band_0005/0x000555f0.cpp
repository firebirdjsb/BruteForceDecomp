/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 796029F0C4D20B160C1C71A09A40AAB958B55CC54D0D9E736BFCD36F0E0C3113
 * Entry: 0x000555f0, Ghidra index: 810, label: FUN_000555f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000555f0(void)

{
  int in_EAX;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x20) != in_EAX) {
    FUN_0008f6a0();
  }
  return;
}
