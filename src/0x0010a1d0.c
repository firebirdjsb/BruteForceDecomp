/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 24CE66846F370E55F5B94DC3745DBA66665BB4D1E9ECEC928E44D3299BDFD4BD
 * Entry: 0x0010a1d0, Ghidra index: 3422, label: FUN_0010a1d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0010a1d0(uint param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int unaff_EBX;
  
  if (*(int *)(unaff_EBX + 0xa4) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_EBX + 0xa4));
  }
  *(undefined4 *)(unaff_EBX + 0xa0) = 0;
  if (0 < (int)param_1) {
    puVar1 = (undefined4 *)thunk_FUN_002ea01d(param_1 * 4);
    *(undefined4 **)(unaff_EBX + 0xa4) = puVar1;
    for (uVar2 = param_1 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar1 = *param_2;
      param_2 = param_2 + 1;
      puVar1 = puVar1 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar1 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    }
    *(uint *)(unaff_EBX + 0xa0) = param_1;
  }
  return;
}
