/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 68F438B2926D4FBCD0C66D5BF9C360AE1983228E068E7ABA8A9E6CD61DE0D56B
 * Entry: 0x002a0430, Ghidra index: 9507, label: FUN_002a0430
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00403bd8;
extern uint32_t DAT_00403be4;
undefined4 FUN_002a0430(int *param_1,int *param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  int *piVar7;
  bool bVar8;
  undefined1 local_140 [20];
  int iStack_12c;
  byte abStack_118 [88];
  int aiStack_c0 [45];
  int *piStack_c;
  int *piStack_4;
  
  iVar3 = (**(code **)(*param_1 + 0x10))(param_1,local_140,0x140,0);
  if (iVar3 < 0) {
    return 0;
  }
  if (param_2 != (int *)0x0) {
    iVar3 = 1;
    piVar7 = aiStack_c0;
    do {
      piVar2 = piStack_c;
      if (piVar7[1] == 0x8000080) {
        pbVar6 = &DAT_00403be4;
        pbVar4 = abStack_118 + *piVar7;
        do {
          bVar1 = *pbVar4;
          bVar8 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_002a04b8:
            iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_002a04bd;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar8 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_002a04b8;
          pbVar4 = pbVar4 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_002a04bd:
        if (iVar5 == 0) {
          (**(code **)(*piStack_c + 0x1c))(piStack_c,piVar7[3] + iStack_12c,0);
          iVar5 = (**(code **)(*param_2 + 0xc))(param_2,piVar2);
          if (iVar5 < 0) {
            return 0;
          }
        }
      }
      iVar3 = iVar3 + 1;
      piVar7 = piVar7 + 0xb;
    } while (iVar3 < 5);
  }
  if (piStack_4 != (int *)0x0) {
    iVar3 = 1;
    piVar7 = aiStack_c0;
    do {
      piVar2 = piStack_c;
      if (piVar7[1] == 0x8000080) {
        pbVar6 = &DAT_00403bd8;
        pbVar4 = abStack_118 + *piVar7;
        do {
          bVar1 = *pbVar4;
          bVar8 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_002a0555:
            iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_002a055a;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar8 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_002a0555;
          pbVar4 = pbVar4 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_002a055a:
        if (iVar5 == 0) {
          (**(code **)(*piStack_c + 0x1c))(piStack_c,piVar7[3] + iStack_12c,0);
          iVar5 = (**(code **)(*piStack_4 + 0x20))(piStack_4,piVar2);
          if (iVar5 < 0) {
            return 0;
          }
        }
      }
      iVar3 = iVar3 + 1;
      piVar7 = piVar7 + 0xb;
    } while (iVar3 < 5);
  }
  return 1;
}
