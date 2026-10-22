/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F2B9FEA222D979581ECEAA64CBF6CC7C5F3A23638C67CED27D577713B4C79631
 * Entry: 0x00344cb6, Ghidra index: 12751, label: FUN_00344cb6
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00344cb6(int param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  uVar5 = param_3;
  iVar1 = param_1;
  if (param_3 < 0x3e9) {
    iVar2 = FUN_0034470a(param_1,param_2);
    if ((iVar2 != 0) && (iVar2 = FUN_003447d5(iVar1,uVar5), iVar2 != 0)) {
      puVar6 = *(undefined4 **)(iVar1 + 0x24);
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar6 = *param_4;
        param_4 = param_4 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar4 = uVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)param_4;
        param_4 = (undefined4 *)((int)param_4 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      *(int *)(iVar1 + 0x24) = *(int *)(iVar1 + 0x24) + uVar5;
      return 1;
    }
  }
  else {
    iVar2 = FUN_003449ff(param_1,param_2,&param_1);
    if (iVar2 != 0) {
      while( true ) {
        if (uVar5 == 0) {
          uVar3 = FUN_00344a56(iVar1,param_1);
          return uVar3;
        }
        param_2 = 1000;
        if (uVar5 < 0x3e9) {
          param_2 = uVar5;
        }
        iVar2 = FUN_0034470a(iVar1,4);
        if ((iVar2 == 0) || (iVar2 = FUN_003447d5(iVar1,param_2), iVar2 == 0)) break;
        puVar6 = param_4;
        puVar7 = *(undefined4 **)(iVar1 + 0x24);
        for (uVar5 = param_2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        for (uVar5 = param_2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        *(int *)(iVar1 + 0x24) = *(int *)(iVar1 + 0x24) + param_2;
        param_3 = param_3 - param_2;
        param_4 = (undefined4 *)((int)param_4 + param_2);
        uVar5 = param_3;
      }
    }
  }
  return 0;
}
