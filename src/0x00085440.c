/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 448EEC5A4774324CA8083EA71FD5520BB083B466C7B43E56CF2DEC308EFB4F99
 * Entry: 0x00085440, Ghidra index: 1557, label: FUN_00085440
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00085440(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x4c;
}
