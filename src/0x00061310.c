/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8DBCDFB0DC94BB36F756D9D02D408C5F197F930E91491AA41240E80E67762719
 * Entry: 0x00061310, Ghidra index: 1018, label: FUN_00061310
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00061310(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x90) + 1;
  *(int *)(param_1 + 0x90) = iVar1;
  return iVar1;
}
