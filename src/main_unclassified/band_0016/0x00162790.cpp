/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 76BE0B7213D7B1E6196DFC19ADCCF5382CC70EA2B520F5DA46BBCBB818F0DDF5
 * Entry: 0x00162790, Ghidra index: 4642, label: FUN_00162790
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00162790(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x144;
}
