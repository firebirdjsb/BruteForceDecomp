/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 33B011BB73890DCD6C3026F951510E1E8F572F66172FD34A759CD76FCBA60F6F
 * Entry: 0x000753c0, Ghidra index: 1344, label: FUN_000753c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000753c0(int param_1,undefined4 param_2)

{
  int *unaff_EBX;
  int iVar1;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 4);
  if ((iVar1 == 0) || (*(int *)(unaff_EDI + 8) - iVar1 >> 2 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1 - iVar1 >> 2;
  }
  FUN_00075780(param_1,1,param_2);
  *unaff_EBX = *(int *)(unaff_EDI + 4) + iVar1 * 4;
  return;
}
