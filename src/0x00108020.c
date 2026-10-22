/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 80AE239AAA917D78E4DC4BB101CD38B68D0A2071FAE289EF39513CD8BE41F10D
 * Entry: 0x00108020, Ghidra index: 3381, label: FUN_00108020
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Removing unreachable block (ram,0x0010815b) */

void FUN_00108020(int param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  *(undefined4 *)(param_1 + 4) = 0;
  if ((param_2 != (int *)0x0) && (iVar3 = (**(code **)(*param_2 + 4))(), iVar3 == 1)) {
    cVar2 = FUN_00107dd0();
    if ((cVar2 == '\0') && (cVar2 = FUN_00107a40(), cVar2 == '\0')) {
      if ((*(byte *)(param_2 + 10) & 4) != 0) {
        *(byte *)(param_2 + 10) = *(byte *)(param_2 + 10) & 0xfb;
        (**(code **)(*param_2 + 0x28))();
      }
      iVar3 = *(int *)(param_1 + 0x28);
      if (iVar3 != 0) {
        iVar1 = *(int *)(iVar3 + 0x30);
        for (iVar3 = *(int *)(iVar3 + 0x2c); iVar3 != iVar1; iVar3 = iVar3 + 0x18) {
          cVar2 = FUN_00107bc0(param_1);
          if (cVar2 != '\0') {
            *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
            uVar4 = FUN_001e97c0();
            FUN_002eaa70(uVar4);
            FUN_0008ed00();
            uVar4 = FUN_001e97c0();
            FUN_002eaa70(uVar4);
            FUN_0008ed00();
            FUN_000fb6e0(1,10);
          }
        }
        FUN_0010a7d0();
        if (*(int *)(param_1 + 4) < 1) {
          return;
        }
        if ((*(byte *)(param_2 + 10) & 4) != 0) {
          return;
        }
        *(byte *)(param_2 + 10) = *(byte *)(param_2 + 10) | 4;
        (**(code **)(*param_2 + 0x28))();
        return;
      }
    }
    else if ((*(byte *)(param_2 + 10) & 4) != 0) {
      *(byte *)(param_2 + 10) = *(byte *)(param_2 + 10) & 0xfb;
      (**(code **)(*param_2 + 0x28))();
    }
    FUN_0010a7d0();
  }
  return;
}
