/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 15425BDC6181D26769ED8DC9B109875FB952C113F66E24653BFEA9DDDDB74A9A
 * Entry: 0x0017c570, Ghidra index: 5049, label: FUN_0017c570
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0017c570(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x6c;
}
