/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 75A67FD597C3B86D3E2CBF19860AA318787A774E88EF6E8231682E28940A8D16
 * Entry: 0x001a6750, Ghidra index: 5362, label: FUN_001a6750
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a6750(void)

{
  int in_EAX;
  
  if (*(int *)(in_EAX + 4) == 0) {
    return 0;
  }
  return *(int *)(in_EAX + 8) - *(int *)(in_EAX + 4) >> 3;
}
