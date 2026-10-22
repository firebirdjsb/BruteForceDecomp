/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5FFCDCFF5F66BCB0DE5B141BD86142B162BF2C242C2898A1EB83D776A810A499
 * Entry: 0x001ac4f0, Ghidra index: 5523, label: FUN_001ac4f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001ac4f0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x68;
}
