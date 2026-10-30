/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 41D1DFFBB7459E245E69B11DE046CFE3DB40A23720F26B56C7B6D5BF8CA562DF
 * Entry: 0x002aa460, Ghidra index: 9644, label: FUN_002aa460
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002aa460(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x5c) + 1;
  *(int *)(param_1 + 0x5c) = iVar1;
  return iVar1;
}
