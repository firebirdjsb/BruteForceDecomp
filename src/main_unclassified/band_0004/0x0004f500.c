/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F32DD4C5F5A5B4523459A6769383982EC28536864929598F99D9E82366A7A8C6
 * Entry: 0x0004f500, Ghidra index: 686, label: FUN_0004f500
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0004f500(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x70;
}
