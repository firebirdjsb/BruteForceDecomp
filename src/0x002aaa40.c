/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BEB898BA15CF816BF1EB75EE8FAC3E2DABBAF25E83ED2ED7FCA6FEE916B3190C
 * Entry: 0x002aaa40, Ghidra index: 9650, label: FUN_002aaa40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002aaa40(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x38) + 1;
  *(int *)(param_1 + 0x38) = iVar1;
  return iVar1;
}
