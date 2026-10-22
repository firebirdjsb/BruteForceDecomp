/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 494B69EC497CFAC3A007128086DC16B3DCCAAD542A7D1B67C4C06FE424C83B75
 * Entry: 0x00157aa0, Ghidra index: 4487, label: FUN_00157aa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00157aa0(int param_1,short *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_1 + *param_2 * 4) = param_3;
  *param_2 = *param_2 + 1;
  if (*(int *)(param_3 + 0x4c) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_3 + 0x50) - *(int *)(param_3 + 0x4c) >> 2;
  }
  iVar1 = 0;
  if (0 < iVar2) {
    do {
      FUN_00157aa0(param_1,param_2,*(undefined4 *)(*(int *)(param_3 + 0x4c) + iVar1 * 4));
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar2);
  }
  return;
}
