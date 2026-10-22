/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0F95EB44ED5D09C81800DF52C7155CCAE51B0B78FCDBCB2847578434B86AD7FF
 * Entry: 0x0017a270, Ghidra index: 5005, label: FUN_0017a270
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0017a270(undefined4 param_1)

{
  int iVar1;
  int unaff_EBX;
  int iVar2;
  
  if (*(int **)(unaff_EBX + 4) == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = **(int **)(unaff_EBX + 4);
  }
  iVar1 = FUN_0017a380(unaff_EBX,iVar2,*(undefined4 *)(iVar2 + 4),param_1);
  FUN_0017a410();
  *(int *)(iVar2 + 4) = iVar1;
  **(int **)(iVar1 + 4) = iVar1;
  return;
}
