/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A31F3BDE58F4BC167EF12B6B7225DC4F02B29D1E7ADF9D1841A55E2355B7EFF3
 * Entry: 0x0003a8c0, Ghidra index: 412, label: FUN_0003a8c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0003a4a0(void);

void FUN_0003a8c0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  for (uVar3 = 0;
      (iVar1 = *(int *)(param_2 + 4), iVar1 != 0 &&
      (uVar3 < (uint)((*(int *)(param_2 + 8) - iVar1) / 0xc))); uVar3 = uVar3 + 1) {
    if (((param_3 == 0) || (iVar1 = *(int *)(iVar2 + iVar1 + 4), iVar1 == 0)) || (iVar1 == param_3))
    {
      FUN_0003a4a0();
    }
    iVar2 = iVar2 + 0xc;
  }
  return;
}
