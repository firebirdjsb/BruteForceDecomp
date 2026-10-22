/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 05D05A64276D23B6E6B156ED4B63F97E1DAA5C12659C1CBD8CEAC28DA75A3CDA
 * Entry: 0x0013f7b0, Ghidra index: 4061, label: FUN_0013f7b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0013f7b0(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  *(float *)(param_1 + 4) = *(float *)(in_ECX + 4) + *(float *)(param_1 + 4);
  iVar1 = *(int *)(in_ECX + 0xc);
  iVar2 = FUN_000ff730(in_ECX + 8,iVar1,*(undefined4 *)(iVar1 + 4),&param_1);
  FUN_000b2a50();
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}
