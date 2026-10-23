/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7A7624DCB469B18D61843BF0C8B8FA962C521177486D9873B38D991C649973A2
 * Entry: 0x001627f0, Ghidra index: 4644, label: FUN_001627f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001627f0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x1b8;
}
