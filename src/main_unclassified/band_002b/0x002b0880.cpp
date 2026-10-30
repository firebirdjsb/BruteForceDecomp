/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AAFBC744D4617C0DB8A6BBCA3F714A428BE39F8A81BC60C52DBF8DCEA24F4D0E
 * Entry: 0x002b0880, Ghidra index: 9727, label: FUN_002b0880
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002b0880(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x80) + 1;
  *(int *)(param_1 + 0x80) = iVar1;
  return iVar1;
}
