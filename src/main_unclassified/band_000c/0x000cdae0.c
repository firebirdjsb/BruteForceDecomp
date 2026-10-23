/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E52FD1CAB95E65B191B664CD31A8196738E8CFB6A072AD0DEE7B8BAC02592CD4
 * Entry: 0x000cdae0, Ghidra index: 2539, label: FUN_000cdae0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000cdae0(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBX;
  
  iVar1 = *(int *)(unaff_EBX + 4);
  iVar2 = FUN_000ff730(unaff_EBX,iVar1,*(undefined4 *)(iVar1 + 4),&stack0x00000004);
  FUN_000b2a50();
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}
