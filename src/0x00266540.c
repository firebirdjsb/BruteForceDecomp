/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CABC9D5086B49C0BB303E558801F5B2ED0E437AEB29A4FF0C0C765D2F05174D5
 * Entry: 0x00266540, Ghidra index: 8738, label: FUN_00266540
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Callee source declares FUN_000a3d50(void).  Xbox callback/register ABI remains
 * ABI_UNVERIFIED; this forward declaration is for C11 source inspection only. */
extern void FUN_000a3d50(void);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a5b38;
extern uint32_t PTR_LAB_00391530;
/* WARNING: Removing unreachable block (ram,0x002666ce) */

char FUN_00266540(int *param_1,int param_2,float param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int *unaff_EBX;
  int *piVar6;
  int iVar7;
  char local_4d;
  int *piStack_4c;
  int *piStack_48;
  undefined4 *local_44;
  int local_40 [4];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_8;
  int iStack_4;
  
  param_1[0xe] = DAT_004a5b38;
  DAT_004a5b38 = DAT_004a5b38 + 1;
  param_1[0xd] = 0;
  *param_1 = *(int *)(param_2 + 4);
  param_1[1] = *(int *)(param_2 + 8);
  param_1[2] = *(int *)(param_2 + 0x10);
  param_1[3] = *(int *)(param_2 + 0x14);
  param_1[4] = *(int *)(param_2 + 0x60);
  param_1[5] = *(int *)(param_2 + 100);
  param_1[6] = param_1[6] ^ (*(uint *)(param_2 + 0xc) ^ param_1[6]) & 0x7fffffff;
  param_1[8] = *(int *)(param_2 + 0x18);
  param_1[0xb] = *(int *)(param_2 + 0x1c);
  param_1[0xc] = 0;
  param_1[10] = 0;
  iVar7 = param_1[1];
  local_4d = '\x01';
  if (iVar7 != *param_1) {
    do {
      if ((*(uint *)(iVar7 + 0x44) >> 5 & 1) != 0) {
        local_4d = '\0';
      }
      if (*(int *)(iVar7 + 0x10) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(*(int *)(iVar7 + 0x10) + 100);
      }
      param_1[10] = param_1[10] + 1;
    } while (iVar7 != *param_1);
  }
  iVar7 = param_1[10];
  if (4 < iVar7) {
    return '\0';
  }
  if (local_4d != '\0') {
    if (iVar7 < 2) {
      param_1[9] = 0;
    }
    else {
      iVar4 = thunk_FUN_002ea01d(iVar7 * 0x3c);
      if (iVar4 == 0) {
        param_1[9] = 0;
      }
      else {
        FUN_0001fe40(iVar4,0x3c,iVar7,FUN_000a3d50);
        param_1[9] = iVar4;
      }
    }
    iVar7 = param_1[1];
    local_44 = (undefined4 *)(param_1[10] + -1);
    if (iVar7 != *param_1) {
      local_40[0] = (int)local_44 * 0x3c;
      local_40[1] = 0x1e2160b3;
      do {
        if ((*(int *)(iVar7 + 0x58) != 0) || (cVar3 = FUN_00253570(), cVar3 != '\0')) {
          piVar2 = *(int **)(iVar7 + 0x58);
          piVar5 = (int *)FUN_002ea01d(0x18);
          if (piVar5 != (int *)0x0) {
            piVar6 = (int *)0x0;
            piVar5[1] = 0;
            piVar5[3] = 1;
            *piVar5 = (int)&PTR_LAB_00391530;
            piVar5[4] = (int)param_1;
            piVar5[5] = (int)local_44;
            if ((param_1 != (int *)0x0) && (local_44 != (undefined4 *)0xffffffff)) {
              param_1[0xc] = param_1[0xc] + 1;
            }
            piStack_48 = piVar5;
            if (0.0 < param_3) {
              piStack_4c = (int *)(**(code **)(*piVar2 + 0x28))(piVar2,iVar7);
              if (piStack_4c == (int *)0x0) {
                cVar3 = FUN_00280100(&piStack_4c);
                if (cVar3 != '\0') goto LAB_00266767;
              }
              else {
                (**(code **)(*piStack_4c + 4))(piStack_4c);
LAB_00266767:
                iVar4 = FUN_002ea01d(0x20);
                if (iVar4 == 0) {
                  piVar6 = (int *)0x0;
                }
                else {
                  piVar6 = (int *)FUN_00280180(0,piVar5,param_3);
                  if (piVar6 != (int *)0x0) {
                    (**(code **)(*piVar5 + 8))(piVar5);
                    piStack_4c = piVar6;
                    (**(code **)(*piVar6 + 4))(piVar6);
                  }
                }
              }
              if (piStack_4c != (int *)0x0) {
                (**(code **)(*piStack_4c + 8))(piStack_4c);
              }
              if (piVar6 != (int *)0x0) {
                (**(code **)(*piVar6 + 8))(piVar6);
              }
            }
            (**(code **)(*piVar2 + 0x2c))(piVar2,iVar7,piStack_48);
            *(uint *)(iVar7 + 0x44) = *(uint *)(iVar7 + 0x44) | 0x20;
            FUN_00234f00();
            piVar2 = piStack_4c;
            if (*(int *)(iStack_8 + 0x24) != 0) {
              *(int *)((int)piStack_4c + *(int *)(iStack_8 + 0x24)) = iVar7;
              FUN_002333b0(local_40);
              puVar1 = (undefined4 *)(*(int *)(iStack_8 + 0x24) + 0x14 + (int)piVar2);
              local_44 = &uStack_30;
              *puVar1 = uStack_30;
              puVar1[1] = uStack_2c;
              puVar1[2] = uStack_28;
              puVar1[3] = uStack_24;
              puVar1[8] = uStack_10;
              puVar1[4] = uStack_20;
              puVar1[5] = uStack_1c;
              puVar1[6] = uStack_18;
              puVar1[7] = uStack_14;
              piVar5 = (int *)(iStack_4 + 0x20);
              piVar6 = (int *)(iStack_4 + 0x20 + *(int *)(iStack_8 + 0x2c) * 4);
              iVar4 = 0;
              if (piVar5 != piVar6) {
                do {
                  if (*piVar5 == iVar7) {
                    iVar4 = iVar4 + 1;
                  }
                  piVar5 = piVar5 + 1;
                } while (piVar5 != piVar6);
                if (iVar4 != 0) {
                  *(undefined1 *)(*(int *)(iStack_8 + 0x24) + 0x38 + (int)piVar2) = 1;
                  goto LAB_0026687b;
                }
              }
              *(undefined1 *)(*(int *)(iStack_8 + 0x24) + 0x38 + (int)piVar2) = 0;
            }
LAB_0026687b:
            (**(code **)(*unaff_EBX + 8))(unaff_EBX);
          }
        }
        if (*(int *)(iVar7 + 0x10) == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(*(int *)(iVar7 + 0x10) + 100);
        }
        local_44 = (undefined4 *)((int)local_44 + -1);
        local_40[0] = local_40[0] + -0x3c;
        if (iVar7 == *param_1) {
          return local_4d;
        }
      } while( true );
    }
  }
  return local_4d;
}
