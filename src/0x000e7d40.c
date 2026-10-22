/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AA8C1FBE456960F0A43B8412BC7CC17312B40215858A8605BD55C86AB5DFDBD7
 * Entry: 0x000e7d40, Ghidra index: 2874, label: FUN_000e7d40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003c06dc;
extern uint32_t DAT_003c06de;
extern uint32_t DAT_003c06df;
extern uint32_t DAT_0041b4d0;
extern uint32_t DAT_0041b518;
extern uint32_t DAT_0041b690;
extern uint32_t DAT_0041b790;
extern uint32_t DAT_0041b818;
extern uint32_t DAT_0041d010;
extern uint32_t DAT_0041d028;
extern uint32_t DAT_0041d1a0;
extern uint32_t DAT_0041d1e0;
extern uint32_t DAT_0041d2e0;
extern uint32_t *DAT_00469868;
extern uint32_t DAT_00469a78;
extern uint32_t DAT_00469a7c;
extern uint32_t DAT_00469a80;
extern uint32_t DAT_00469a84;
extern uint32_t DAT_00469a88;
extern uint32_t DAT_00469a8c;
extern uint32_t DAT_00469a90;
extern uint32_t DAT_00469a94;
extern uint32_t DAT_00469a98;
extern uint32_t DAT_00469a9c;
extern uint32_t switchD_000e7d54_default[];
void FUN_000e7d40(int *param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  undefined4 in_EAX;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  bool bVar8;
  uint local_4;
  
  piVar5 = param_1;
  switch(in_EAX) {
  case 0:
    *(byte *)(*param_1 + 0x84) = *(byte *)(*param_1 + 0x84) & 0x7f;
    uVar6 = 0;
    if (DAT_00469a78 != 0) {
      do {
        (**(code **)(*(int *)(&DAT_0041d2e0)[uVar6] + 100))(*param_1);
        uVar6 = uVar6 + 1;
      } while (uVar6 < DAT_00469a78);
    }
    *(byte *)(*param_1 + 0x84) = *(byte *)(*param_1 + 0x84) | 0x80;
    return;
  case 1:
    uVar6 = 0;
    if (DAT_00469a7c != 0) {
      do {
        piVar5 = (int *)(&DAT_0041d1e0)[uVar6];
        if (*(int *)(piVar5[3] + 4) == 3) {
          *(undefined4 *)(piVar5[0x153] + 0x10) = 0x119;
          (**(code **)(*piVar5 + 100))(*param_1);
          *(undefined4 *)(piVar5[0x153] + 0x10) = 0xffffffff;
        }
        else {
          (**(code **)(*piVar5 + 100))(*param_1);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < DAT_00469a7c);
      return;
    }
    break;
  case 2:
    uVar6 = 0;
    if (DAT_00469a80 != 0) {
      do {
        if (*(int *)(*(int *)((&DAT_0041d1a0)[uVar6] + 0xc) + 4) == 3) {
          FUN_00116480((&DAT_0041d1a0)[uVar6],*param_1,2);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < DAT_00469a80);
      return;
    }
    break;
  case 3:
    uVar6 = 0;
    if (DAT_00469a84 != 0) {
      puVar7 = &DAT_0041d028;
      do {
        (**(code **)(*(int *)*puVar7 + 100))(*param_1);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 3;
      } while (uVar6 < DAT_00469a84);
      return;
    }
    break;
  case 4:
  case 7:
    break;
  case 5:
    uVar6 = 0;
    if (DAT_00469a88 != 0) {
      do {
        (**(code **)(*(int *)(&DAT_0041d010)[uVar6] + 100))(*param_1);
        uVar6 = uVar6 + 1;
      } while (uVar6 < DAT_00469a88);
      return;
    }
    break;
  case 6:
    local_4 = 0;
    if (DAT_00469a8c != 0) {
      param_1 = &DAT_0041b818;
      iVar4 = -1;
      do {
        piVar2 = (int *)*param_1;
        iVar1 = *(int *)(piVar2[3] + 4);
        if (iVar1 == 0x11) {
          if (iVar4 != 0x11) {
            FUN_002385a0();
            (**(code **)(*DAT_00469868 + 0x6c))(DAT_00469868);
            D3D8LTCG__D3DDevice_SetStreamSource_4(0);
            FUN_000907a0(0x1b,4);
          }
          if (DAT_003c06dc != '\0') {
            (**(code **)(*piVar2 + 100))(*piVar5);
          }
        }
        else {
          if (iVar4 == 0x11) {
            (**(code **)(*DAT_00469868 + 0x70))(DAT_00469868);
            FUN_00238630();
          }
          if (iVar1 == 3) {
            cVar3 = FUN_00210880(piVar2[0x153],0);
            if (cVar3 == '\0') {
              cVar3 = FUN_00210880(piVar2[0x153],0);
              if (cVar3 == '\0') {
                *(undefined4 *)(piVar2[0x153] + 0x10) = 0x119;
              }
              else {
                *(undefined4 *)(piVar2[0x153] + 0x10) = 0x80;
              }
            }
            else {
              *(undefined4 *)(piVar2[0x153] + 0x10) = 0x40;
            }
            FUN_00116480(piVar2,*piVar5,1);
            *(undefined4 *)(piVar2[0x153] + 0x10) = 0xffffffff;
          }
          else {
            (**(code **)(*piVar2 + 100))(*piVar5);
          }
        }
        local_4 = local_4 + 1;
        param_1 = param_1 + 3;
        iVar4 = iVar1;
      } while (local_4 < DAT_00469a8c);
      if (iVar1 == 0x11) {
        (**(code **)(*DAT_00469868 + 0x70))(DAT_00469868);
        FUN_00238630();
        return;
      }
    }
    break;
  case 8:
    if (DAT_003c06de != '\0') {
      FUN_000e5240(*(undefined4 *)(*(int *)(*param_1 + 0x80) + 0xb78),&DAT_0041b790,DAT_00469a90);
    }
    if (DAT_003c06df != '\0') {
      FUN_000e5730(*(undefined4 *)(*(int *)(*param_1 + 0x80) + 0xb78),*param_1);
    }
    break;
  case 9:
    uVar6 = 0;
    if (DAT_00469a94 != 0) {
      do {
        piVar5 = (int *)(&DAT_0041b690)[uVar6];
        *(undefined4 *)(piVar5[0x153] + 0x10) = 0xfffffeff;
        (**(code **)(*piVar5 + 100))(*param_1);
        uVar6 = uVar6 + 1;
        bVar8 = uVar6 < DAT_00469a94;
        *(undefined4 *)(piVar5[0x153] + 0x10) = 0xffffffff;
      } while (bVar8);
      return;
    }
    break;
  case 10:
    uVar6 = 0;
    if (DAT_00469a98 != 0) {
      piVar5 = &DAT_0041b518;
      do {
        piVar2 = (int *)*piVar5;
        *(undefined4 *)(piVar2[0x153] + 0x10) = 0xfffffeff;
        (**(code **)(*piVar2 + 100))(*param_1);
        uVar6 = uVar6 + 1;
        piVar5 = piVar5 + 3;
        bVar8 = uVar6 < DAT_00469a98;
        *(undefined4 *)(piVar2[0x153] + 0x10) = 0xffffffff;
      } while (bVar8);
      return;
    }
    break;
  case 0xb:
    uVar6 = 0;
    if (DAT_00469a9c != 0) {
      do {
        piVar5 = (int *)(&DAT_0041b4d0)[uVar6];
        (**(code **)(*piVar5 + 100))(*param_1);
        *(undefined4 *)(*param_1 + 0x88) = 3;
        (**(code **)(*piVar5 + 100))(*param_1);
        uVar6 = uVar6 + 1;
        bVar8 = uVar6 < DAT_00469a9c;
        *(undefined4 *)(*param_1 + 0x88) = 0;
      } while (bVar8);
      return;
    }
    break;
  default:
    goto switchD_000e7d54_default;
  }
switchD_000e7d54_default:
  return;
}
