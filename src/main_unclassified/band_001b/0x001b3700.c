/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BAEF08C48BC0010454F51C1FEE2DC1C58F975D9E125905CA2A2DA8E8A6D5B3D0
 * Entry: 0x001b3700, Ghidra index: 5643, label: FUN_001b3700
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001b3700(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return (*(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 4)) / 0x3c;
}
