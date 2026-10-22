/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 941F09F620C0F5E2D8B9F60762969296351E7898DDD3CB8DEE8B712BAD574581
 * Entry: 0x0008ebb0, Ghidra index: 1736, label: FUN_0008ebb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0008ebb0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x28;
}
