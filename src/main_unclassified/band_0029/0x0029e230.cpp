/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BB39A434ABAECEF8B5CA29DA6D14309C1ED19FEC20FC53B288EE5F81EED9E2F6
 * Entry: 0x0029e230, Ghidra index: 9469, label: FUN_0029e230
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0029e230(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8) + 1;
  *(int *)(param_1 + 8) = iVar1;
  return iVar1;
}
