/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E4ADF40649832D23C2E40326E926A342BC41C2C2B2D82937242ADBD30C8674D6
 * Entry: 0x00240d90, Ghidra index: 7990, label: FUN_00240d90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00240d90(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x38;
}
