/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F423124CAB7FC1A99DEC3D8779AA8AB7D4BE935AB6BAC38C63E4863EAF8F4802
 * Entry: 0x002b11d0, Ghidra index: 9734, label: FUN_002b11d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002b11d0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40) + 1;
  *(int *)(param_1 + 0x40) = iVar1;
  return iVar1;
}
