/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BB602CA5D316B5971A6F065ED25E3B8846FA996A30D7C55E81F68295D189CB29
 * Entry: 0x003445aa, Ghidra index: 12737, label: FUN_003445aa
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_003445aa(int param_1,uint param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 local_10;
  int local_c;
  undefined4 *local_8;
  
  iVar2 = FUN_00343a65(param_1,param_2,&local_c);
  if ((iVar2 != 0) &&
     (iVar2 = FUN_00343af7(param_1,&param_2,&local_10), piVar1 = param_3, uVar7 = param_2,
     iVar2 != 0)) {
    if (local_c == 0) {
      puVar6 = (undefined4 *)FUN_00343e85(param_1,param_2 + 1);
      *param_3 = (int)puVar6;
      if (puVar6 != (undefined4 *)0x0) {
        puVar9 = *(undefined4 **)(param_1 + 0x24);
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar6 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar6 = puVar6 + 1;
        }
        for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined1 *)puVar6 = *(undefined1 *)puVar9;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
        *(undefined1 *)(uVar7 + *param_3) = 0;
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + uVar7;
        return 1;
      }
    }
    else {
      *param_3 = 0;
      iVar2 = FUN_003439f6(param_1,param_2,local_10,&param_3,&param_2);
      if (iVar2 != 0) {
        iVar2 = FUN_00343e46(param_3,param_2);
        while( true ) {
          if (iVar2 == 0) {
            uVar5 = FUN_00343dcb(param_1,param_3,param_2);
            return uVar5;
          }
          iVar2 = FUN_003445aa(param_3,4,&local_8);
          if (iVar2 == 0) break;
          iVar2 = FUN_00343343(*piVar1);
          iVar3 = FUN_00343343(local_8);
          if (iVar3 != 0) {
            iVar4 = FUN_00343ee6(param_3,*piVar1,iVar3 + 1 + iVar2);
            *piVar1 = iVar4;
            if (iVar4 == 0) {
              return 0;
            }
            puVar6 = local_8;
            puVar9 = (undefined4 *)(iVar2 + iVar4);
            for (uVar7 = iVar3 + 1U >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *puVar9 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar9 = puVar9 + 1;
            }
            for (uVar7 = iVar3 + 1U & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined1 *)puVar9 = *(undefined1 *)puVar6;
              puVar6 = (undefined4 *)((int)puVar6 + 1);
              puVar9 = (undefined4 *)((int)puVar9 + 1);
            }
          }
          iVar2 = FUN_00343e46(param_3,param_2);
        }
        return 0;
      }
    }
  }
  return 0;
}
