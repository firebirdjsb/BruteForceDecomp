/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5922E4B6E9403AD38ED0E7EEF00F4815737939BB1A42F6E23314771DE42C9E8C
 * Entry: 0x00230400, Ghidra index: 7748, label: FUN_00230400
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003bc6bc;
extern uint32_t PTR_LAB_00394848;
int FUN_00230400(int param_1,undefined4 param_2,undefined4 param_3,float *param_4,int param_5,
                undefined4 *param_6,int param_7)

{
  undefined8 uVar1;
  float fVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  float10 fVar9;
  float fStack_164;
  uint local_160;
  undefined1 local_134 [4];
  int local_130;
  int local_12c;
  undefined4 local_128;
  float fStack_124;
  undefined **local_120 [65];
  undefined4 local_1c;
  undefined1 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  undefined4 local_4;
  
  local_1c = 0;
  local_18 = 1;
  local_c = 0;
  local_120[0] = &PTR_LAB_00394848;
  local_14 = 0xfffffff8;
  local_4 = 0xffffffff;
  local_8 = *(int *)(param_1 + 0x6c);
  if (*(int *)(local_8 + 0x10) != 0) {
    local_8 = *(int *)(local_8 + 8);
  }
  local_10 = 0x400000;
  local_130 = 0;
  local_12c = 0;
  local_128 = 0;
  iVar5 = FUN_000dd8e0(*(undefined4 *)(param_1 + 8),param_3,param_4,*param_6,local_120,local_134,0,1
                       ,0);
  if (iVar5 < param_7) {
    param_7 = iVar5;
  }
  local_160 = 0;
  if (0 < param_7) {
    do {
      puVar3 = *(undefined4 **)(*(int *)(param_5 + 4) + local_160 * 4);
      if (((local_130 == 0) || ((uint)(local_12c - local_130 >> 2) <= local_160)) ||
         ((int)local_160 < 0)) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8 = *(int **)(local_130 + local_160 * 4);
      }
      iVar5 = *(int *)(param_1 + 0x1b0);
      if (iVar5 == 0) {
        puVar3[0xd] = 0;
        if (*(int *)(param_1 + 0x184) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x184) + 0x1c);
        }
      }
      else {
        if (*(int *)(iVar5 + 8) == 0) {
          if ((*(int *)(iVar5 + 0x10) == 0) ||
             (iVar5 = *(int *)(*(int *)(iVar5 + 0x10) + 0xb0),
             *(int *)(*(int *)(iVar5 + 0xc) + 4) != 3)) {
            iVar5 = 0;
          }
        }
        else {
          iVar5 = *(int *)(*(int *)(iVar5 + 8) + 0x1d4);
        }
        puVar3[0xd] = iVar5;
        iVar5 = *(int *)(*(int *)(param_1 + 0x1b0) + 8);
        if (iVar5 == 0) {
          iVar5 = *(int *)(*(int *)(param_1 + 0x1b0) + 0x10);
          if ((iVar5 == 0) ||
             (iVar5 = *(int *)(iVar5 + 0xb0), *(int *)(*(int *)(iVar5 + 0xc) + 4) != 3)) {
            iVar5 = 0;
          }
          uVar6 = (**(code **)(**(int **)(*(int *)(iVar5 + 8) + 0xbec) + 0xc))(iVar5);
        }
        else {
          iVar5 = *(int *)(iVar5 + 0x1d4);
          uVar6 = (**(code **)(**(int **)(*(int *)(iVar5 + 8) + 0xbec) + 0xc))(iVar5);
        }
      }
      puVar3[0xe] = uVar6;
      iVar5 = piVar8[5];
      iVar7 = piVar8[4];
      puVar3[1] = piVar8[3];
      puVar3[2] = iVar7;
      puVar3[3] = iVar5;
      iVar5 = piVar8[7];
      iVar7 = piVar8[6];
      puVar3[6] = piVar8[8];
      fStack_124 = DAT_003bc6bc;
      puVar3[4] = iVar7;
      puVar3[5] = iVar5;
      puVar3[0xf] = piVar8[2];
      puVar3[0x12] = *piVar8;
      *puVar3 = 0;
      uVar1 = *(undefined8 *)(param_4 + 1);
      puVar3[7] = fStack_124 * *param_4;
      puVar3[8] = fStack_124 * (float)uVar1;
      puVar3[9] = fStack_124 * (float)((ulonglong)uVar1 >> 0x20);
      puVar3[0x13] = 0x3f800000;
      puVar3[0x14] = piVar8[9];
      puVar3[0x15] = (uint)piVar8[10] >> 2 & 0x1f;
      fStack_164 = *(float *)(*(int *)(param_1 + 0x228) + 0x3c);
      iVar5 = *(int *)(param_1 + 0x1b0);
      if (iVar5 != 0) {
        if (*(int *)(iVar5 + 8) == 0) {
          if ((*(int *)(iVar5 + 0x10) == 0) ||
             (iVar5 = *(int *)(*(int *)(iVar5 + 0x10) + 0xb0),
             *(int *)(*(int *)(iVar5 + 0xc) + 4) != 3)) {
            iVar5 = 0;
          }
        }
        else {
          iVar5 = *(int *)(*(int *)(iVar5 + 8) + 0x1d4);
        }
        fVar9 = (float10)(**(code **)(**(int **)(iVar5 + 0x5a4) + 0x54))(param_1,fStack_164);
        fStack_164 = (float)fVar9;
      }
      if (0.0 < fStack_164) {
        iVar5 = *(int *)(*(int *)(param_1 + 0x228) + 0x34);
        fVar2 = 1.0 - (float)piVar8[9] / fStack_164;
        if (iVar5 != 1) {
          if (iVar5 == 2) {
            fVar2 = fVar2 * fVar2;
          }
          else if ((iVar5 != 3) || (0.5 <= fVar2)) {
            fVar2 = 1.0;
          }
          else {
            fVar2 = fVar2 + fVar2;
          }
        }
        puVar3[0x13] = fVar2 * (float)puVar3[0x13];
      }
      if ((*piVar8 == 2) &&
         (uVar4 = piVar8[1], (uVar4 & -(uint)((*(byte *)(uVar4 + 0x26) & 0x40) != 0)) != 0)) {
        if (puVar3[0x11] != uVar4) {
          FUN_0008f6a0(uVar4);
        }
        if (*(int *)(*(int *)(puVar3[0x11] + 0xc) + 4) == 3) {
          FUN_00115000();
          fVar9 = (float10)FUN_00125940();
          fVar2 = (float)puVar3[0x13];
          puVar3[0x13] = (float)(fVar9 * (float10)fVar2);
          iVar5 = *(int *)(param_1 + 0x1b0);
          if (iVar5 != 0) {
            if (*(int *)(iVar5 + 8) == 0) {
              if ((*(int *)(iVar5 + 0x10) == 0) ||
                 (iVar7 = *(int *)(*(int *)(iVar5 + 0x10) + 0xb0),
                 *(int *)(*(int *)(iVar7 + 0xc) + 4) != 3)) goto LAB_0023080c;
            }
            else {
              iVar7 = *(int *)(*(int *)(iVar5 + 8) + 0x1d4);
            }
            if (iVar7 != 0) {
              if (*(int *)(iVar5 + 8) == 0) {
                if ((*(int *)(iVar5 + 0x10) == 0) ||
                   (iVar5 = *(int *)(*(int *)(iVar5 + 0x10) + 0xb0),
                   *(int *)(*(int *)(iVar5 + 0xc) + 4) != 3)) {
                  iVar5 = 0;
                }
              }
              else {
                iVar5 = *(int *)(*(int *)(iVar5 + 8) + 0x1d4);
              }
              if (*(int *)(iVar5 + 0x7a8) != 0) {
                puVar3[0x13] = (float)(fVar9 * (float10)fVar2) * 3.0;
              }
            }
          }
        }
      }
      else if (puVar3[0x11] != 0) {
        FUN_0008f6a0(0);
      }
LAB_0023080c:
      local_160 = local_160 + 1;
    } while ((int)local_160 < param_7);
  }
  FUN_0022d2e0();
  if (local_130 == 0) {
    return param_7;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(local_130);
}
