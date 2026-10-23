/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C13863268AFCBBC97C58B629F7FD544FA2F2A2068161385724B1AB31A708467E
 * Entry: 0x00157f90, Ghidra index: 4492, label: FUN_00157f90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00157f90(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x4c) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) >> 2;
  }
  iVar1 = 0;
  if (0 < iVar2) {
    do {
      FUN_00157f90(*(undefined4 *)(*(int *)(param_1 + 0x4c) + iVar1 * 4),param_2);
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar2);
  }
  FUN_00157e10(param_1,param_2);
  return;
}
