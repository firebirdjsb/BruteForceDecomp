/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1FA74C73214196D541046AD1E4CCB7E93B89D4631D798EA9A0E48E6ED2D5B18E
 * Entry: 0x002c19e0, Ghidra index: 10035, label: FUN_002c19e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b86e0;
extern uint32_t _DAT_00000000;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002c19e0(int *param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  short sVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  float10 fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_f4;
  int local_f0;
  uint local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  float local_dc;
  float local_d8;
  float fStack_d4;
  uint local_d0;
  float local_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float *local_bc;
  float *local_b8;
  float local_b4;
  float local_b0;
  float fStack_ac;
  undefined4 local_a8;
  uint local_a4;
  int local_a0 [10];
  uint local_78;
  undefined1 local_70 [108];
  
  local_f4 = 1e+20;
  local_f0 = 3;
  iVar9 = 3;
  uVar10 = param_3;
  uVar12 = param_2;
  while( true ) {
    do {
      FUN_00150930();
      FUN_00150930();
      fVar14 = (local_dc - local_cc) * (local_dc - local_cc) +
               (local_d8 - local_c8) * (local_d8 - local_c8) +
               (fStack_d4 - fStack_c4) * (fStack_d4 - fStack_c4);
      if (fVar14 < local_f4) {
        iVar11 = *(int *)(param_4 + 0x10);
        *(uint *)(iVar11 + 0x14) = uVar12;
        *(undefined2 *)(iVar11 + 0x1a) = 0;
        iVar11 = *(int *)(param_5 + 0x10);
        *(uint *)(iVar11 + 0x14) = uVar10;
        *(undefined2 *)(iVar11 + 0x1a) = 0;
        local_f4 = fVar14;
      }
      uVar10 = uVar10 + *(int *)(&DAT_003b86e0 + (uVar10 & 0xc));
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    uVar12 = uVar12 + *(int *)(&DAT_003b86e0 + (uVar12 & 0xc));
    local_f0 = local_f0 + -1;
    if (local_f0 == 0) break;
    iVar9 = 3;
    uVar10 = param_3;
  }
  local_a0[0] = param_4;
  local_a0[7] = param_4;
  local_a0[1] = param_5;
  local_a0[6] = param_5;
  local_a0[2] = param_2;
  local_a0[5] = param_2;
  local_a0[3] = param_3;
  local_a0[4] = param_3;
  local_b8 = &local_dc;
  local_ec = 0;
  do {
    uVar5 = *(undefined4 *)((int)local_a0 + local_ec + 0x10);
    iVar9 = *(int *)((int)local_a0 + local_ec + 0x18);
    local_c0 = 0.0;
    FUN_002cdbd0();
    uVar10 = *(uint *)((int)local_a0 + local_ec + 8);
    iVar11 = *(int *)((int)local_a0 + local_ec);
    local_e8 = 3;
    do {
      local_a8 = 0;
      local_d0 = 0;
      FUN_00150930();
      iVar8 = *(int *)(iVar9 + 8);
      local_bc = (float *)(iVar8 + 0x10);
      fVar14 = *local_b8 - *(float *)(iVar8 + 0x40);
      fVar15 = (float)*(undefined8 *)(local_b8 + 1) - (float)*(undefined8 *)(iVar8 + 0x44);
      fVar16 = (float)((ulonglong)*(undefined8 *)(local_b8 + 1) >> 0x20) -
               (float)((ulonglong)*(undefined8 *)(iVar8 + 0x44) >> 0x20);
      local_b4 = *local_bc * fVar14 + *(float *)(iVar8 + 0x20) * fVar15 +
                 *(float *)(iVar8 + 0x30) * fVar16;
      local_b0 = (float)*(undefined8 *)(iVar8 + 0x14) * fVar14 +
                 (float)*(undefined8 *)(iVar8 + 0x24) * fVar15 +
                 (float)*(undefined8 *)(iVar8 + 0x34) * fVar16;
      fStack_ac = (float)((ulonglong)*(undefined8 *)(iVar8 + 0x14) >> 0x20) * fVar14 +
                  (float)((ulonglong)*(undefined8 *)(iVar8 + 0x24) >> 0x20) * fVar15 +
                  (float)((ulonglong)*(undefined8 *)(iVar8 + 0x34) >> 0x20) * fVar16;
      FUN_002cd2b0(&local_b4);
      if ((-1 < (int)(local_78 | local_a0[9] | local_a0[8])) &&
         (fVar14 = local_b4 * local_cc + local_b0 * local_c8 + fStack_ac * fStack_c4 + local_c0,
         fVar14 = fVar14 * fVar14, fVar14 * 1.000001 < local_f4)) {
        iVar8 = *(int *)(iVar11 + 0x10);
        *(uint *)(iVar8 + 0x14) = uVar10;
        *(undefined2 *)(iVar8 + 0x1a) = 0;
        iVar8 = *(int *)(iVar9 + 0x10);
        *(undefined4 *)(iVar8 + 0x14) = uVar5;
        *(undefined2 *)(iVar8 + 0x1a) = 2;
        local_f4 = fVar14;
      }
      uVar10 = uVar10 + *(int *)(&DAT_003b86e0 + (uVar10 & 0xc));
      local_e8 = local_e8 + -1;
    } while (local_e8 != 0);
    local_ec = local_ec + 4;
  } while ((int)local_ec < 8);
  local_bc = &local_cc;
  local_b8 = &local_dc;
  local_f0 = 0;
  do {
    local_ec = *(uint *)((int)local_a0 + local_f0 + 0x10);
    local_a4 = *(uint *)((int)local_a0 + local_f0 + 8);
    iVar9 = *(int *)((int)local_a0 + local_f0);
    iVar11 = *(int *)((int)local_a0 + local_f0 + 0x18);
    local_e4 = 3;
    do {
      local_c0 = 0.0;
      local_d0 = 0;
      FUN_00150930();
      pfVar7 = local_bc;
      iVar8 = *(int *)(iVar9 + 8);
      uVar1 = *(undefined8 *)(iVar8 + 0x14);
      fVar14 = *local_b8 - *(float *)(iVar8 + 0x40);
      fVar15 = (float)*(undefined8 *)(local_b8 + 1) - (float)*(undefined8 *)(iVar8 + 0x44);
      fVar16 = (float)((ulonglong)*(undefined8 *)(local_b8 + 1) >> 0x20) -
               (float)((ulonglong)*(undefined8 *)(iVar8 + 0x44) >> 0x20);
      uVar2 = *(undefined8 *)(iVar8 + 0x24);
      uVar3 = *(undefined8 *)(iVar8 + 0x34);
      *local_bc = *(float *)(iVar8 + 0x10) * fVar14 + *(float *)(iVar8 + 0x20) * fVar15 +
                  *(float *)(iVar8 + 0x30) * fVar16;
      *(ulonglong *)(pfVar7 + 1) =
           CONCAT44((float)((ulonglong)uVar1 >> 0x20) * fVar14 +
                    (float)((ulonglong)uVar2 >> 0x20) * fVar15 +
                    (float)((ulonglong)uVar3 >> 0x20) * fVar16,
                    (float)uVar1 * fVar14 + (float)uVar2 * fVar15 + (float)uVar3 * fVar16);
      local_e0 = 3;
      uVar10 = local_a4;
      do {
        FUN_002cd190(&local_cc);
        if ((-1 < (int)((uint)local_b0 | (uint)local_b4)) &&
           (fVar13 = (float10)FUN_002cdcb0(&local_cc),
           (float10)1.000001 * fVar13 < (float10)local_f4)) {
          iVar8 = *(int *)(iVar9 + 0x10);
          local_f4 = (float)fVar13;
          *(uint *)(iVar8 + 0x14) = uVar10;
          *(undefined2 *)(iVar8 + 0x1a) = 1;
          iVar8 = *(int *)(iVar11 + 0x10);
          *(uint *)(iVar8 + 0x14) = local_ec;
          *(undefined2 *)(iVar8 + 0x1a) = 0;
        }
        uVar10 = uVar10 + *(int *)(&DAT_003b86e0 + (uVar10 & 0xc));
        local_e0 = local_e0 + -1;
      } while (local_e0 != 0);
      local_ec = local_ec + *(int *)(&DAT_003b86e0 + (local_ec & 0xc));
      local_e4 = local_e4 + -1;
    } while (local_e4 != 0);
    local_f0 = local_f0 + 4;
  } while (local_f0 < 8);
  local_e8 = 3;
  do {
    local_e4 = 3;
    uVar10 = param_3;
    do {
      FUN_002cd4c0(local_70,param_2,uVar10,param_4,param_5);
      FUN_002cd7d0();
      if (((-1 < (int)((uint)local_d8 | (uint)local_dc)) && (-1 < (int)(local_d0 | (uint)fStack_d4))
          ) && (fVar13 = (float10)FUN_002cd710(local_70),
               (float10)1.000001 * fVar13 < (float10)local_f4)) {
        local_f4 = (float)fVar13;
        iVar9 = *(int *)(param_4 + 0x10);
        *(uint *)(iVar9 + 0x14) = param_2;
        *(undefined2 *)(iVar9 + 0x1a) = 1;
        iVar9 = *(int *)(param_5 + 0x10);
        *(uint *)(iVar9 + 0x14) = uVar10;
        *(undefined2 *)(iVar9 + 0x1a) = 1;
      }
      uVar10 = uVar10 + *(int *)(&DAT_003b86e0 + (uVar10 & 0xc));
      local_e4 = local_e4 + -1;
    } while (local_e4 != 0);
    param_2 = param_2 + *(int *)(&DAT_003b86e0 + (param_2 & 0xc));
    local_e8 = local_e8 + -1;
  } while (local_e8 != 0);
  iVar9 = *(int *)(param_5 + 0x10);
  iVar11 = *(int *)(param_4 + 0x10);
  local_f4 = (float)param_5;
  iVar8 = iVar9;
  if ((*(short *)(iVar9 + 0x1a) == 0) && (*(short *)(iVar11 + 0x1a) != 0)) {
    local_f4 = (float)param_4;
    iVar8 = iVar11;
    param_4 = param_5;
    iVar11 = iVar9;
  }
  iVar9 = *param_1;
  if (*(int *)(param_4 + 0x10) != (*(uint *)(iVar9 + 0x14) >> 8 & 3) * 0x1c + 0x18 + iVar9) {
    *(uint *)(iVar9 + 0x14) = *(uint *)(iVar9 + 0x14) ^ 0x100;
  }
  uVar5 = *(undefined4 *)(iVar11 + 0x14);
  uVar6 = *(undefined4 *)(iVar8 + 0x14);
  if (*(short *)(iVar11 + 0x1a) == 0) {
    sVar4 = *(short *)(iVar8 + 0x1a);
    if (sVar4 == 0) {
      FUN_002d80b0(uVar5,uVar6,param_4,local_f4);
      return;
    }
    if (sVar4 == 1) {
      FUN_002d8d60(param_1,uVar5,uVar6);
      return;
    }
    if (sVar4 == 2) {
      FUN_002d6520(param_1,uVar5,local_f4);
      return;
    }
  }
  else if ((*(short *)(iVar11 + 0x1a) == 1) && (*(short *)(iVar8 + 0x1a) == 1)) {
    FUN_002d6f30(uVar5,uVar6,param_4,local_f4);
    return;
  }
  _DAT_00000000 = 0;
  return;
}
