/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ECEB7A298307EEA7FB6D0AF32D7D9E8BC6342391AA0EDEBC1D0CFDABB72B7785
 * Entry: 0x00170fd0, Ghidra index: 4843, label: FUN_00170fd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00170fd0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 100;
}
