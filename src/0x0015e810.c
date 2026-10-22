/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 91F1490C1D778F931E87D0A9207FCB623DA59C04F9B6705B486EAF952FEF1024
 * Entry: 0x0015e810, Ghidra index: 4551, label: FUN_0015e810
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0015e810(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return (*(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 4)) / 0x1c;
}
