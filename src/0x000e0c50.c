/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4A1F5FFC521D63163D04331E02549DF107FEFD949614C7EBF6C4A8C3C06DF0F6
 * Entry: 0x000e0c50, Ghidra index: 2758, label: FUN_000e0c50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000e0c50(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x44;
}
