/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2E6A6BD36F7525AEA14FEAEEE788742D482E3898753D57AED96E3B3C913C74B3
 * Entry: 0x0010f920, Ghidra index: 3538, label: FUN_0010f920
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0010f920(void)

{
  int in_EAX;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xdc) != in_EAX) {
    FUN_0008f6a0();
  }
  return;
}
