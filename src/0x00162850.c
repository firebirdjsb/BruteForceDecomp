/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E4328B0000BD841983BDED690EA6F965A4EEF6B64DCDF86183D3F83D878F6E04
 * Entry: 0x00162850, Ghidra index: 4646, label: FUN_00162850
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00162850(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x3c;
}
