/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ED0AE8A2CCC58749F158F0110DD8B044DA580C3C3552A95687779F43F3E87058
 * Entry: 0x003443b5, Ghidra index: 12735, label: FUN_003443b5
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_003443b5(int param_1,uint param_2,uint *param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint local_14;
  undefined4 *local_10;
  undefined4 local_c;
  int local_8;
  
  iVar2 = FUN_00343a65(param_1,param_2,&local_8);
  if ((iVar2 != 0) &&
     (iVar2 = FUN_00343af7(param_1,&param_2,&local_c), puVar1 = param_3, uVar3 = param_2, iVar2 != 0
     )) {
    if (local_8 == 0) {
      *param_3 = param_2;
      if (param_2 == 0) {
        param_3[1] = 0;
      }
      else {
        puVar5 = (undefined4 *)FUN_00343e85(param_1,param_2 + 1);
        puVar1[1] = (uint)puVar5;
        if (puVar5 == (undefined4 *)0x0) {
          return 0;
        }
        puVar7 = *(undefined4 **)(param_1 + 0x24);
        for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar5 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar5 = puVar5 + 1;
        }
        for (uVar6 = uVar3 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puVar5 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar5 = (undefined4 *)((int)puVar5 + 1);
        }
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + uVar3;
        *(undefined1 *)(uVar3 + param_3[1]) = 0;
      }
      return 1;
    }
    *param_3 = 0;
    iVar2 = FUN_003439f6(param_1,param_2,local_c,&param_3,&param_2);
    if (iVar2 != 0) {
      while( true ) {
        do {
          iVar2 = FUN_00343e46(param_3,param_2);
          if (iVar2 == 0) {
            uVar4 = FUN_00343dcb(param_1,param_3,param_2);
            return uVar4;
          }
          iVar2 = FUN_003443b5(param_3,4,&local_14);
          if (iVar2 == 0) {
            return 0;
          }
        } while (local_14 == 0);
        uVar3 = FUN_00343ee6(param_3,puVar1[1],*puVar1 + local_14);
        puVar1[1] = uVar3;
        if (uVar3 == 0) break;
        puVar5 = local_10;
        puVar7 = (undefined4 *)(*puVar1 + uVar3);
        for (uVar6 = local_14 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        for (uVar3 = local_14 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        *puVar1 = *puVar1 + local_14;
      }
    }
  }
  return 0;
}
