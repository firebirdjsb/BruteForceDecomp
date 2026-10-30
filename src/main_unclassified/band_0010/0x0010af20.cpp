/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1A007D52BFA47B7DAB4521CCF11ED625D81941E39208881859D2541689A601E5
 * Entry: 0x0010af20, Ghidra index: 3440, label: FUN_0010af20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0010af20(void)

{
  int iVar1;
  undefined4 in_EAX;
  int iVar2;
  int unaff_EBX;
  
  iVar1 = *(int *)(unaff_EBX + 4);
  iVar2 = FUN_000ff730(unaff_EBX,iVar1,*(undefined4 *)(iVar1 + 4),in_EAX);
  FUN_000b2a50();
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}
