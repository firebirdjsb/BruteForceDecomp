/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4D8034ADBD10B7117317A9CC4965295C27F81B68B4E148ACC92DFA7CF091D33D
 * Entry: 0x00279010, Ghidra index: 8926, label: FUN_00279010
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00279010(void)

{
  int iVar1;
  undefined4 in_EAX;
  int iVar2;
  int unaff_EBX;
  
  iVar1 = *(int *)(unaff_EBX + 4);
  iVar2 = FUN_00129f40(unaff_EBX,iVar1,*(undefined4 *)(iVar1 + 4),in_EAX);
  FUN_0027a650();
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}
