/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BC0BAB61634FB34CBE856F62DF1860D08865D748EEB8C57380FA11A4C82C8F78
 * Entry: 0x0016d2e0, Ghidra index: 4791, label: FUN_0016d2e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0016d2e0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x34;
}
