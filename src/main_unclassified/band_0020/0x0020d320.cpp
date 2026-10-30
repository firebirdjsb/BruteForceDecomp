/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1DEBA383DE7051CBC02D25CB47AA35D124DAA61C0321DFA64F73F550A2EC845C
 * Entry: 0x0020d320, Ghidra index: 7368, label: FUN_0020d320
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1
FUN_0020d320(undefined4 param_1,char param_2,int *param_3,int param_4,int *param_5,int param_6,
            char *param_7,undefined4 param_8)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 local_8 [4];
  undefined4 local_4;
  
  uVar5 = 0;
  if ((*param_7 == '\0') && (*param_3 == *param_5)) {
    if (param_2 == '\0') {
      FUN_0020bc50();
      iVar3 = *(int *)(param_6 + 8);
      iVar6 = *(int *)(param_6 + 4);
      if (iVar6 != iVar3) {
        local_4 = 0;
        do {
          iVar2 = *(int *)(param_4 + 4);
          iVar4 = FUN_000e1910(param_4,iVar2,*(undefined4 *)(iVar2 + 4),local_8);
          FUN_000389d0();
          *(int *)(iVar2 + 4) = iVar4;
          **(int **)(iVar4 + 4) = iVar4;
          FUN_000d6ac0(param_1,*(int *)(*(int *)(param_4 + 4) + 4) + 8,param_8);
          iVar6 = iVar6 + 4;
        } while (iVar6 != iVar3);
      }
      uVar5 = 1;
    }
    else {
      puVar1 = *(undefined4 **)(param_4 + 4);
      if (puVar1 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        puVar7 = (undefined4 *)*puVar1;
      }
      if (puVar7 != puVar1) {
        do {
          iVar3 = FUN_001fb020();
          if (iVar3 != 0) {
            FUN_00074fb0();
          }
          puVar7 = (undefined4 *)*puVar7;
        } while (puVar7 != *(undefined4 **)(param_4 + 4));
        *param_7 = '\x01';
        return 0;
      }
    }
    *param_7 = '\x01';
  }
  return uVar5;
}
