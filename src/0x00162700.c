/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C762B88CB7F8FC461382A5F6248A67AF4BF9C663D12D0948FD3C5588E3054BD0
 * Entry: 0x00162700, Ghidra index: 4639, label: FUN_00162700
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00162700(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x5c;
}
