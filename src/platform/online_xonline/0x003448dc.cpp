/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A08C8B9A2A54646C81678EF8C125442B3A45676655C9C46E7C684CEE08E2D8E2
 * Entry: 0x003448dc, Ghidra index: 12743, label: FUN_003448dc
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_003448dc(int param_1,uint param_2,uint *param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint local_10;
  undefined4 *local_c;
  int local_8;
  
  iVar2 = FUN_00343a65(param_1,param_2,&local_8);
  if ((iVar2 != 0) &&
     (iVar2 = FUN_00343af7(param_1,&param_2,&local_c), puVar1 = param_3, iVar2 != 0)) {
    if (local_8 == 0) {
      *param_3 = param_2;
      if ((param_4 == 0) && (param_2 == 0)) {
        param_3[1] = 0;
      }
      else {
        param_3[1] = *(uint *)(param_1 + 0x24);
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + param_2;
      }
      return 1;
    }
    *param_3 = 0;
    param_3[1] = 0;
    iVar2 = FUN_003439f6(param_1,param_2,local_c,&param_3,&param_2);
    if (iVar2 != 0) {
      do {
        do {
          iVar2 = FUN_00343e46(param_3,param_2);
          if (iVar2 == 0) {
LAB_003449d8:
            uVar4 = FUN_00343dcb(param_1,param_3,param_2);
            return uVar4;
          }
          local_10 = 0;
          local_c = (undefined4 *)0x0;
          iVar2 = FUN_003448dc(param_3,4,&local_10,param_4);
        } while ((iVar2 == 0) || (local_10 == 0));
        if (param_4 != 0) {
          *puVar1 = local_10;
          puVar1[1] = (uint)local_c;
          goto LAB_003449d8;
        }
        uVar3 = FUN_00343ee6(param_3,puVar1[1],*puVar1 + local_10);
        puVar1[1] = uVar3;
        if (uVar3 == 0) {
          return 0;
        }
        puVar6 = local_c;
        puVar7 = (undefined4 *)(*puVar1 + uVar3);
        for (uVar5 = local_10 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        for (uVar3 = local_10 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        *puVar1 = *puVar1 + local_10;
      } while( true );
    }
  }
  return 0;
}
