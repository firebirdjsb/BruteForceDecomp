/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B0011A2A6628742D3A34D54C51BC37D1A3056A53B22CD71DE2FF399232929283
 * Entry: 0x001aaa70, Ghidra index: 5497, label: FUN_001aaa70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001aaa70(void)

{
  int in_EAX;
  
  if (*(int *)(in_EAX + 4) == 0) {
    return 0;
  }
  return *(int *)(in_EAX + 8) - *(int *)(in_EAX + 4) >> 5;
}
