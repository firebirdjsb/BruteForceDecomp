/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5B6E30E9647843887AE56434BB9D17F98A74C60B2EF4825B1D99939F8BA49338
 * Entry: 0x00136010, Ghidra index: 3884, label: FUN_00136010
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Removing unreachable block (ram,0x001360ca) */

int FUN_00136010(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_4 + 4) != 0) {
    FUN_0001d590(param_4);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(param_4 + 4));
  }
  *(undefined4 *)(param_4 + 4) = 0;
  *(undefined4 *)(param_4 + 8) = 0;
  *(undefined4 *)(param_4 + 0xc) = 0;
  iVar2 = (**(code **)(*param_1 + 0xf4))();
  iVar2 = **(int **)(*(int *)(iVar2 + 0x358) + 4);
  iVar3 = (**(code **)(*param_1 + 0xf4))();
  iVar3 = *(int *)(*(int *)(iVar3 + 0x358) + 4);
  while (iVar2 != iVar3) {
    iVar1 = *(int *)(iVar2 + 0x10);
    if ((((iVar1 != 0) && ((*(byte *)(iVar2 + 0x8c) & 4) != 0)) && (*(int *)(iVar2 + 0x70) == 1)) &&
       (*(int *)(*(int *)(iVar1 + 0xc) + 4) == 3)) {
      FUN_0008f6a0(iVar1);
      FUN_0005eab0();
    }
    FUN_0001c5d0();
  }
  if ((*(int *)(param_4 + 4) != 0) && (*(int *)(param_4 + 8) - *(int *)(param_4 + 4) >> 3 != 0)) {
    iVar2 = (**(code **)(*param_1 + 0x40))();
    FUN_001395c0(*(int *)(param_4 + 4),*(int *)(param_4 + 8),
                 *(int *)(param_4 + 8) - *(int *)(param_4 + 4) >> 3,*(undefined4 *)(iVar2 + 0x24),
                 *(undefined4 *)(iVar2 + 0x28),*(undefined4 *)(iVar2 + 0x2c),1);
  }
  if (*(int *)(param_4 + 4) != 0) {
    return *(int *)(param_4 + 8) - *(int *)(param_4 + 4) >> 3;
  }
  return 0;
}
