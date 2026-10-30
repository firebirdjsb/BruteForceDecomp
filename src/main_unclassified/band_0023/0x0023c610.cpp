/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DA5FE9A89A6DD054FBC710CA53924A05F2577F452F437E72FEACD85242117104
 * Entry: 0x0023c610, Ghidra index: 7932, label: FUN_0023c610
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0023c610(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return (*(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 4)) / 0x38;
}
