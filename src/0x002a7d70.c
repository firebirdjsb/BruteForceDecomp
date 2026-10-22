/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2FCA5D7D6EE28D498E732F49B4AF3CA3C4E7EB6DCD186CF246D763E63DA230AD
 * Entry: 0x002a7d70, Ghidra index: 9601, label: FUN_002a7d70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002a7d70(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20) + 1;
  *(int *)(param_1 + 0x20) = iVar1;
  return iVar1;
}
