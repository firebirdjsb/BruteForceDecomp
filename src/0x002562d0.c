/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8D8791C4C506301CD466F5BE7C47A3E3024276F2D0B440EA0531317958326A4E
 * Entry: 0x002562d0, Ghidra index: 8433, label: FUN_002562d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002562d0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 100) + 1;
  *(int *)(param_1 + 100) = iVar1;
  return iVar1;
}
