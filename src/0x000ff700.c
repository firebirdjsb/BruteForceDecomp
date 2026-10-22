/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8CE3F4436F3D3E5084A13EF5913E5F42F9BBABADB9F500B8276D267D936262F0
 * Entry: 0x000ff700, Ghidra index: 3194, label: FUN_000ff700
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000ff700(int param_1)

{
  undefined4 in_EAX;
  int iVar1;
  undefined4 unaff_EBX;
  
  iVar1 = FUN_000ff730(unaff_EBX,param_1,*(undefined4 *)(param_1 + 4),in_EAX);
  FUN_000b2a50();
  *(int *)(param_1 + 4) = iVar1;
  **(int **)(iVar1 + 4) = iVar1;
  return;
}
