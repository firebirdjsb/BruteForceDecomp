/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3EA190D5CE983ECBC0F099C2FAB8FF010AD81654EEFAA937ED5FC44425EA58AB
 * Entry: 0x0011c170, Ghidra index: 3618, label: FUN_0011c170
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
extern uint32_t DAT_0046d064;
extern uint32_t PTR_LAB_003a3fb4;
void FUN_0011c170(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  bool bVar8;
  int iStack_8c;
  undefined **ppuStack_84;
  /* x87 FSTP DWORD [ESP+0x1c] at 0x0011C269 stores a real float;
   * the stack slot is repurposed as a pointer only on a later branch. */
  float guest_delta_x;
  float fStack_80;
  float fStack_7c;
  int *piStack_78;
  undefined4 uStack_74;
  float fStack_70;
  undefined1 auStack_6c [108];
  
  iVar2 = (**(code **)(*param_2 + 0x1c))();
  if (iVar2 == 0) {
    uVar3 = -(uint)((*(byte *)((int)param_2 + 0x26) & 0x40) != 0) & (uint)param_2;
    if (((uVar3 != 0) && (iVar2 = *(int *)(uVar3 + 0x6c), iVar2 != 0)) && (iVar2 != -1)) {
      if (*(int *)(iVar2 + 0x10) != 0) {
        iVar2 = *(int *)(iVar2 + 8);
      }
      if (iVar2 != param_1[0x1b]) {
        piVar7 = (int *)0x0;
        if (*(int *)(param_2[3] + 4) == 0x14) {
          if (param_2[0x7e] == 0) {
            return;
          }
          bVar8 = param_2[0x6c] == 0;
          piVar7 = param_2;
        }
        else {
          if (param_2[0x6c] != 0) {
            return;
          }
          cVar1 = FUN_0010f970();
          if (cVar1 == '\0') {
            return;
          }
          if ((*(byte *)(param_2 + 0x6f) & 2) != 0) {
            return;
          }
          bVar8 = *(char *)((int)param_2 + 0x79) == '\x02';
        }
        if (bVar8) {
          iVar2 = (**(code **)(*param_2 + 0x40))();
          iVar4 = (**(code **)(*param_1 + 0x40))();
          fStack_7c = *(float *)(iVar2 + 0x2c) - *(float *)(iVar4 + 0x2c);
          fStack_80 = *(float *)(iVar2 + 0x28) - *(float *)(iVar4 + 0x28);
          guest_delta_x = *(float *)(iVar2 + 0x24) - *(float *)(iVar4 + 0x24);
          if (((-1.8 <= fStack_80) && (fStack_80 <= 1.0)) &&
             (fStack_7c * fStack_7c + guest_delta_x * guest_delta_x < 1.8)) {
            iVar2 = param_2[3];
            fStack_70 = fStack_7c;
            iStack_8c = FUN_00146340();
            if (piVar7 == (int *)0x0) {
              piVar5 = *(int **)(iVar2 + 0x15c);
              cVar1 = (**(code **)(*piVar5 + 0x38))(param_2,param_1);
              if (cVar1 == '\0') {
                return;
              }
              iVar2 = (**(code **)(*piVar5 + 0x40))();
              if ((iVar2 == 1) && ((iVar2 = piVar5[1], iVar2 == 0x14 || (iVar2 == 0x15)))) {
                puVar6 = (undefined4 *)0x0;
                if ((undefined4 *)param_1[0x157] != (undefined4 *)0x0) {
                  puVar6 = *(undefined4 **)param_1[0x157];
                }
                for (; puVar6 != (undefined4 *)param_1[0x157]; puVar6 = (undefined4 *)*puVar6) {
                  if (*(int *)(puVar6[2] + 0x2c) == 8) {
                    bVar8 = iVar2 == 0x14;
LAB_0011c488:
                    if (bVar8) {
                      iVar2 = 1;
                      *(float *)(puVar6[2] + 4) = (float)*(int *)(iStack_8c + 0x17c);
                      goto LAB_0011c4b3;
                    }
                  }
                  else if (*(int *)(puVar6[2] + 0x2c) == 0x10) {
                    bVar8 = iVar2 == 0x15;
                    goto LAB_0011c488;
                  }
                }
              }
              iVar2 = FUN_0014ce90(param_1[0xba],1,0);
              if (iVar2 == 0) goto LAB_0011c40c;
LAB_0011c4b3:
              FUN_0014a490();
              ppuStack_84 = &PTR_LAB_003a3fb4;
              uStack_74 = 0xffffffff;
              fStack_80 = 2.10195e-44;
              piStack_78 = param_1;
              fStack_7c = 0.0;
              FUN_001fe3d0(&ppuStack_84);
            }
            else {
              iStack_8c = FUN_0022b580();
              if (iStack_8c == 0) {
                return;
              }
              cVar1 = FUN_00122ed0(iStack_8c);
              if (cVar1 == '\0') {
                if (param_1[0x167] == 0) {
                  return;
                }
                iVar2 = FUN_0005c040();
                if (iVar2 == 0) {
                  return;
                }
                bVar8 = false;
                do {
                  cVar1 = FUN_00122ed0(iStack_8c);
                  if (cVar1 != '\0') {
                    bVar8 = true;
                  }
                  iVar2 = FUN_0005c070();
                } while (iVar2 != 0);
                if (!bVar8) {
                  return;
                }
              }
              iVar2 = FUN_0014ce90(param_1[0xba],piVar7[0x7e],0);
              if (iVar2 == 0) {
LAB_0011c40c:
                FUN_0011c6a0(param_1,iStack_8c,0);
                return;
              }
              piVar7[0x7e] = piVar7[0x7e] - iVar2;
              if (*(int *)(iStack_8c + 0x188) != DAT_0046d064) {
                FUN_0003f010();
                FUN_0017c020(auStack_6c);
              }
              ppuStack_84 = &PTR_LAB_003a3fb4;
              uStack_74 = 0xffffffff;
              fStack_80 = 2.10195e-44;
              piStack_78 = param_1;
              fStack_7c = 0.0;
              FUN_001fe3d0(&ppuStack_84);
              piVar5 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
              if (*piVar5 != 0x17506391) {
                piVar7[0x6a] = 0x41200000;
              }
            }
            FUN_0011c6a0(param_1,iStack_8c,iVar2);
            if (piVar7 == (int *)0x0) {
              FUN_000db3e0(param_2);
            }
          }
        }
      }
    }
  }
  return;
}
