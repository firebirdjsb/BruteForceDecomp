/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A58DD9CB86C1E65652F24C4C4AE6686B94C37DC3E83D1A22097BB30A967E5F8F
 * Entry: 0x002a4e70, Ghidra index: 9554, label: FUN_002a4e70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002a4e70(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x6c) + 1;
  *(int *)(param_1 + 0x6c) = iVar1;
  return iVar1;
}
