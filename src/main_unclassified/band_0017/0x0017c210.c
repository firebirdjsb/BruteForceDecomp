/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0DCE9B9E1D7D1240CAFF2C0A3F960BFD3E7FDB29E8E848EAA6FEAF125F451E1E
 * Entry: 0x0017c210, Ghidra index: 5043, label: FUN_0017c210
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0017c210(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x14;
}
