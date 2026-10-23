/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4C80A189E430A8F768FCD33438AAAFE2BE39565B4D3E61F72C3856A69F596E9C
 * Entry: 0x0009eb30, Ghidra index: 1884, label: FUN_0009eb30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00402b7c;
extern uint32_t DAT_0040620c;
extern uint32_t DAT_0040d7d0;
undefined4 FUN_0009eb30(int *param_1,byte *param_2,int *param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int iVar5;
  int *piVar6;
  byte *pbVar7;
  bool bVar8;
  
  pbVar7 = &DAT_0040620c;
  pbVar4 = param_2;
  do {
    bVar1 = *pbVar4;
    bVar8 = bVar1 < *pbVar7;
    if (bVar1 != *pbVar7) {
LAB_0009eb6c:
      iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_0009eb71;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar8 = bVar1 < pbVar7[1];
    if (bVar1 != pbVar7[1]) goto LAB_0009eb6c;
    pbVar4 = pbVar4 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_0009eb71:
  if (iVar5 != 0) {
    pbVar7 = &DAT_00402b7c;
    pbVar4 = param_2;
    do {
      bVar1 = *pbVar4;
      bVar8 = bVar1 < *pbVar7;
      if (bVar1 != *pbVar7) {
LAB_0009eba8:
        iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_0009ebad;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar8 = bVar1 < pbVar7[1];
      if (bVar1 != pbVar7[1]) goto LAB_0009eba8;
      pbVar4 = pbVar4 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_0009ebad:
    if (iVar5 != 0) {
      pbVar7 = &DAT_0040d7d0;
      pbVar4 = param_2;
      do {
        bVar1 = *pbVar4;
        bVar8 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_0009ebfb:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_0009ec00;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_0009ebfb;
        pbVar4 = pbVar4 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_0009ec00:
      if (iVar5 == 0) {
        if (param_1 == (int *)0x0) {
          piVar6 = (int *)0x0;
        }
        else {
          piVar6 = param_1 + 1;
        }
        *param_3 = (int)piVar6;
        (**(code **)(*param_1 + 4))(param_1);
        return 0;
      }
      puVar2 = (undefined4 *)param_1[4];
      if (puVar2 != (undefined4 *)0x0) {
        uVar3 = (**(code **)*puVar2)(puVar2,param_2,param_3);
        return uVar3;
      }
      return 0x80004002;
    }
  }
  *param_3 = (int)param_1;
  (**(code **)(*param_1 + 4))(param_1);
  return 0;
}
