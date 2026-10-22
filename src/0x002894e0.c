/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 879AE79305310F923FFDDADE6BEAE45E312E3BA5426B2A89770091469E426423
 * Entry: 0x002894e0, Ghidra index: 9125, label: FUN_002894e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002894e0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc) + 1;
  *(int *)(param_1 + 0xc) = iVar1;
  return iVar1;
}
