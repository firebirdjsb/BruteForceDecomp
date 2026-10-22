/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D7679C07284AE4F201F80579D01D1692A3D3831564A42A84538F45ECF98126A0
 * Entry: 0x00182310, Ghidra index: 5174, label: FUN_00182310
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00182310(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int *local_8;
  int local_4;
  
  iVar3 = param_1;
  iVar1 = param_1 + 0x3c;
  if (*(int *)(param_1 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (*(undefined4 **)(param_1 + 0x34) == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = (undefined4 *)**(undefined4 **)(param_1 + 0x34);
    }
    puVar5 = *(undefined4 **)(param_1 + 0x34);
    iVar6 = param_1;
    for (; puVar4 != puVar5; puVar4 = (undefined4 *)*puVar4) {
      iVar2 = *(int *)(iVar3 + 0x40);
      local_8 = (int *)puVar4[2];
      if ((iVar2 == 0) ||
         ((uint)(*(int *)(iVar3 + 0x48) - iVar2 >> 2) <= (uint)(*(int *)(iVar3 + 0x44) - iVar2 >> 2)
         )) {
        FUN_000a7d80(*(undefined4 *)(iVar3 + 0x44),&local_8);
      }
      else {
        iVar6 = *(int *)(iVar3 + 0x44);
        FUN_0003efa0(iVar6,1,iVar1,param_1);
        *(int *)(iVar3 + 0x44) = iVar6 + 4;
        iVar6 = param_1;
      }
    }
    local_8 = (int *)(iVar6 + 4);
    local_4 = 4;
    do {
      puVar4 = (undefined4 *)*local_8;
      if (puVar4 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = (undefined4 *)*puVar4;
      }
      for (; puVar5 != puVar4; puVar5 = (undefined4 *)*puVar5) {
        iVar6 = *(int *)(iVar3 + 0x40);
        param_1 = puVar5[2];
        if ((iVar6 == 0) ||
           ((uint)(*(int *)(iVar3 + 0x48) - iVar6 >> 2) <=
            (uint)(*(int *)(iVar3 + 0x44) - iVar6 >> 2))) {
          FUN_000a7d80(*(undefined4 *)(iVar3 + 0x44),&param_1);
        }
        else {
          iVar6 = *(int *)(iVar3 + 0x44);
          FUN_0003efa0(iVar6,1,iVar1,param_1);
          *(int *)(iVar3 + 0x44) = iVar6 + 4;
        }
      }
      local_8 = local_8 + 3;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(int *)(param_1 + 0x40));
}
