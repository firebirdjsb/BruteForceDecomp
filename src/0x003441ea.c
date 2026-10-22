/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A83A53A59F62A372A2CB6229A25EBB61C99E07BDDAABEFEEC05859C479BB10C5
 * Entry: 0x003441ea, Ghidra index: 12733, label: FUN_003441ea
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004b13f4;
undefined4 FUN_003441ea(int param_1,uint param_2,uint *param_3,int param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint local_14;
  uint local_10;
  undefined4 local_c;
  int local_8;
  
  iVar1 = param_1;
  iVar3 = FUN_00343a65(param_1,param_2,&local_8);
  if ((iVar3 != 0) && (iVar3 = FUN_00343af7(iVar1,&param_2,&local_c), puVar2 = param_3, iVar3 != 0))
  {
    if (local_8 == 0) {
      if (param_2 == 0) {
        *param_3 = 0;
        param_3[1] = 0;
      }
      else {
        if (7 < **(byte **)(iVar1 + 0x24)) {
          FUN_00343377(iVar1,0xfffffc15);
          return 0;
        }
        uVar4 = param_2 - 1;
        *param_3 = uVar4 * 8 - (uint)**(byte **)(iVar1 + 0x24);
        *(int *)(iVar1 + 0x24) = *(int *)(iVar1 + 0x24) + 1;
        if (param_4 == 0) {
          if (*param_3 == 0) {
            param_3[1] = 0;
          }
          else {
            param_2 = uVar4;
            puVar7 = (undefined4 *)FUN_00343e85(iVar1,*param_3 + 7 >> 3);
            puVar2[1] = (uint)puVar7;
            if (puVar7 == (undefined4 *)0x0) {
              return 0;
            }
            puVar9 = *(undefined4 **)(iVar1 + 0x24);
            for (uVar8 = uVar4 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *puVar7 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar7 = puVar7 + 1;
            }
            for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
              *(undefined1 *)puVar7 = *(undefined1 *)puVar9;
              puVar9 = (undefined4 *)((int)puVar9 + 1);
              puVar7 = (undefined4 *)((int)puVar7 + 1);
            }
            if ((*puVar2 & 7) != 0) {
              pbVar5 = (byte *)((puVar2[1] - 1) + param_2);
              *pbVar5 = *pbVar5 & (&DAT_004b13f4)[*puVar2 & 7];
            }
            *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + param_2;
          }
        }
        else {
          param_3[1] = *(uint *)(iVar1 + 0x24);
          *(int *)(iVar1 + 0x24) = *(int *)(iVar1 + 0x24) + uVar4;
        }
      }
      return 1;
    }
    *param_3 = 0;
    iVar3 = FUN_003439f6(iVar1,param_2,local_c,&param_3,&param_1);
    if (iVar3 != 0) {
      do {
        do {
          iVar3 = FUN_00343e46(param_3,param_1);
          if (iVar3 == 0) {
LAB_003442d6:
            uVar6 = FUN_00343dcb(iVar1,param_3,param_1);
            return uVar6;
          }
          iVar3 = FUN_003441ea(param_3,3,&local_14,param_4);
        } while ((iVar3 == 0) || (local_14 == 0));
        if (param_4 != 0) {
          *puVar2 = local_14;
          puVar2[1] = local_10;
          goto LAB_003442d6;
        }
        uVar4 = FUN_00343ee6(param_3,puVar2[1],*puVar2 + 7 + local_14 >> 3);
        puVar2[1] = uVar4;
        if (uVar4 == 0) {
          return 0;
        }
        FUN_0034316b(uVar4,*puVar2,local_10,0,local_14);
        *puVar2 = *puVar2 + local_14;
        uVar4 = *puVar2 & 7;
        if (uVar4 != 0) {
          pbVar5 = (byte *)((*puVar2 >> 3) + puVar2[1]);
          *pbVar5 = *pbVar5 & (&DAT_004b13f4)[uVar4];
        }
      } while( true );
    }
  }
  return 0;
}
