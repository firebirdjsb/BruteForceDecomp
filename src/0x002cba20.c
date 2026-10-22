/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 39FDB1A9739E651BC0CE7379CB58589E29D6B812BABCE8AC9B5D0DA7A63B5DB7
 * Entry: 0x002cba20, Ghidra index: 10147, label: FUN_002cba20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b86e0;
extern uint32_t DAT_003b86f0;
extern uint32_t DAT_00469e18;
extern uint32_t DAT_00469e20;
extern uint32_t PTR_LAB_0038e5c8;
extern uint32_t PTR_LAB_0038e5d4;
extern uint32_t PTR_LAB_0038e5d8;
extern uint32_t _DAT_00469f3c;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002cba20(int param_1,uint *param_2,uint *param_3,int *param_4,int *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  uint *puVar12;
  float10 fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_c20;
  float local_bf8;
  float local_bf4;
  float fStack_bf0;
  undefined4 local_bec;
  float *local_be8;
  float *local_be4;
  undefined **local_be0;
  float local_bdc;
  float local_bd8;
  float local_bcc;
  float local_bc8;
  float local_bc4;
  float local_bc0;
  float local_bbc;
  float local_bb8;
  float fStack_bb4;
  float local_bb0;
  float local_bac;
  float local_ba8;
  float local_ba4;
  float fStack_ba0;
  float local_b9c;
  undefined8 local_b98;
  undefined4 local_b90;
  undefined4 local_b8c;
  uint *local_b84 [2];
  float local_b7c;
  undefined4 local_b78;
  float *local_b74;
  float local_b70 [3];
  undefined4 local_b64;
  float local_b60;
  undefined8 local_b5c;
  undefined4 local_b54;
  undefined1 local_b50 [1448];
  undefined1 local_5a8 [1448];
  
  FUN_002c96d0(local_5a8,param_4[2]);
  FUN_002c96d0(local_b50,param_5[2]);
  local_be4 = *(float **)(param_4[3] + 0x90);
  fVar3 = *(float *)((int)local_be4 + 0x154);
  iVar7 = *(int *)(param_5[3] + 0x90);
  fVar4 = *(float *)(iVar7 + 0x154);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x24);
  pfVar10 = (float *)((*param_2 & 0xffff) * 0x10 + *param_4);
  local_be0 = &PTR_LAB_0038e5d4;
  local_bbc = 0.0;
  local_bac = 0.0;
  local_b9c = 0.0;
  local_b8c = 0;
  pfVar5 = (float *)((*param_3 & 0xffff) * 0x10 + *param_5);
  pfVar8 = (float *)((*(uint *)((int)param_3 + *(int *)(&DAT_003b86e0 + ((uint)param_3 & 0xc))) &
                     0xffff) * 0x10 + *param_5);
  local_bc8 = *pfVar10;
  local_bc0 = pfVar10[2];
  local_bc4 = pfVar10[1];
  fStack_bb4 = pfVar5[1];
  local_bb0 = pfVar5[2];
  local_bb8 = *pfVar5;
  uVar1 = *(undefined8 *)(pfVar8 + 1);
  local_ba8 = *pfVar8 - *pfVar5;
  local_ba4 = (float)uVar1 - (float)*(undefined8 *)(pfVar5 + 1);
  fStack_ba0 = (float)((ulonglong)uVar1 >> 0x20) -
               (float)((ulonglong)*(undefined8 *)(pfVar5 + 1) >> 0x20);
  local_b74 = pfVar10;
  FUN_002b65a0(&local_ba8);
  local_bdc = *(float *)(param_1 + 8);
  local_bd8 = 1.0 / local_bdc;
  local_b54 = 0;
  local_b64 = 0;
  fVar14 = *(float *)(*(int *)(param_1 + 0x10) + 0x50);
  local_bcc = (*(float *)(&DAT_00469e20 +
                         (*(uint *)(*(int *)(param_1 + 0x10) + 0x14) >> 0x16 & 0xff) * 4) + fVar14)
              * 0.5;
  FUN_00150930();
  FUN_00150930();
  iVar6 = param_5[2];
  local_be8 = local_b70;
  local_bf8 = local_ba8 * *(float *)(iVar6 + 0x10) +
              *(float *)(iVar6 + 0x18) * fStack_ba0 + *(float *)(iVar6 + 0x14) * local_ba4;
  local_bf4 = *(float *)(iVar6 + 0x28) * fStack_ba0 +
              *(float *)(iVar6 + 0x24) * local_ba4 + *(float *)(iVar6 + 0x20) * local_ba8;
  fStack_bf0 = *(float *)(iVar6 + 0x38) * fStack_ba0 +
               *(float *)(iVar6 + 0x34) * local_ba4 + *(float *)(iVar6 + 0x30) * local_ba8;
  fVar15 = (float)local_b70._4_8_ - (float)local_b5c;
  fVar17 = SUB84(local_b70._4_8_,4) - (float)((ulonglong)local_b5c >> 0x20);
  local_b78 = 0;
  local_b84[0] = (uint *)(fVar15 * fStack_bf0 - fVar17 * local_bf4);
  local_b84[1] = (uint *)(fVar17 * local_bf8 - fStack_bf0 * (local_b70[0] - local_b60));
  local_b7c = local_bf4 * (local_b70[0] - local_b60) - fVar15 * local_bf8;
  FUN_002b73d0(param_5[2] + 0x10,local_b84,&local_b98);
  FUN_002b65a0(&local_b98);
  iVar6 = FUN_002dd8d0(&local_be0,
                       *(float *)(&DAT_00469e20 +
                                 (*(uint *)(*(int *)(param_1 + 0x10) + 0x14) >> 0x16 & 0xff) * 4) +
                       fVar14,fVar14 * 0.9 + DAT_00469e18,local_5a8,local_b50,0,param_1 + 0x30,
                       *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                       *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  if (iVar6 != 0) {
    *(undefined4 *)(param_1 + 0x28) = 0x30;
  }
  local_be0 = &PTR_LAB_0038e5c8;
  local_bc0 = 0.0;
  local_bb0 = 0.0;
  fStack_ba0 = 0.0;
  local_bdc = *(float *)(param_1 + 0xc);
  local_bd8 = 1.0 / local_bdc;
  local_bc8 = pfVar10[1];
  local_bcc = *pfVar10;
  local_bc4 = pfVar10[2];
  local_b84[0] = param_3;
  local_be8 = &local_bf8;
  local_b84[1] = param_3 + ((int)(*param_3 << 1) >> 0x11);
  local_c20 = 0.0;
  do {
    pfVar5 = local_be8;
    puVar12 = local_b84[(int)local_c20];
    local_bec = 0;
    iVar6 = *param_5;
    pfVar11 = (float *)((*puVar12 & 0xffff) * 0x10 + iVar6);
    pfVar9 = (float *)((*(uint *)((int)puVar12 + *(int *)(&DAT_003b86e0 + ((uint)puVar12 & 0xc))) &
                       0xffff) * 0x10 + iVar6);
    pfVar8 = (float *)((*(uint *)((int)puVar12 + *(int *)(&DAT_003b86f0 + ((uint)puVar12 & 0xc))) &
                       0xffff) * 0x10 + iVar6);
    uVar1 = *(undefined8 *)(pfVar9 + 1);
    uVar2 = *(undefined8 *)(pfVar11 + 1);
    *local_be8 = *pfVar9 - *pfVar11;
    *(ulonglong *)(pfVar5 + 1) =
         CONCAT44((float)((ulonglong)uVar1 >> 0x20) - (float)((ulonglong)uVar2 >> 0x20),
                  (float)uVar1 - (float)uVar2);
    fVar17 = *pfVar9 - *pfVar11;
    fVar19 = (float)*(undefined8 *)(pfVar11 + 1);
    fVar16 = (float)*(undefined8 *)(pfVar9 + 1) - fVar19;
    fVar20 = (float)((ulonglong)*(undefined8 *)(pfVar11 + 1) >> 0x20);
    fVar15 = (float)((ulonglong)*(undefined8 *)(pfVar9 + 1) >> 0x20) - fVar20;
    uVar1 = *(undefined8 *)(pfVar8 + 1);
    fVar18 = *pfVar8 - *pfVar11;
    fVar19 = (float)uVar1 - fVar19;
    fVar20 = (float)((ulonglong)uVar1 >> 0x20) - fVar20;
    fVar14 = fVar16 * fVar20 - fVar15 * fVar19;
    fVar15 = fVar15 * fVar18 - fVar17 * fVar20;
    fVar17 = fVar17 * fVar19 - fVar16 * fVar18;
    local_bbc = fVar17 * local_bf4 - fStack_bf0 * fVar15;
    local_bb8 = fStack_bf0 * fVar14 - fVar17 * local_bf8;
    fStack_bb4 = fVar15 * local_bf8 - local_bf4 * fVar14;
    FUN_002b65a0(&local_bbc);
    local_ba8 = pfVar11[1];
    local_bac = *pfVar11;
    local_ba4 = pfVar11[2];
    iVar6 = FUN_002dd650(&local_be0,-_DAT_00469f3c,0,local_5a8,local_b50,0,
                         (undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x18),
                         *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x30),
                         *(undefined4 *)(param_1 + 0x34));
    if (iVar6 != 0) {
      *(undefined4 *)(param_1 + 0x28) = 0x31;
    }
    local_c20 = (float)((int)local_c20 + 1);
  } while ((int)local_c20 < 2);
  fVar14 = *(float *)(*(int *)(param_1 + 0x10) + 0x54);
  fVar13 = (float10)fVar14 -
           ((float10)*(double *)(param_1 + 0x30) - (float10)*(double *)(param_1 + 0x18)) *
           (float10)*(float *)(param_1 + 0xc);
  local_c20 = (float)fVar13;
  if (fVar13 < (float10)0.003) {
    local_c20 = 0.003;
  }
  fVar15 = (float)*(undefined8 *)(pfVar10 + 1);
  fVar17 = (float)((ulonglong)*(undefined8 *)(pfVar10 + 1) >> 0x20);
  pfVar5 = (float *)((int)local_be4 + 0x154);
  local_be0 = &PTR_LAB_0038e5d8;
  local_bc0 = 0.0;
  local_bb0 = 0.0;
  fStack_ba0 = 0.0;
  local_b90 = 0;
  local_be4 = (float *)((*(uint *)((int)param_3 + *(int *)(&DAT_003b86e0 + ((uint)param_3 & 0xc))) &
                        0xffff) * 0x10 + *param_5);
  pfVar8 = (float *)((*param_3 & 0xffff) * 0x10 + *param_5);
  local_bcc = *pfVar10;
  local_bc4 = pfVar10[2];
  local_bc8 = pfVar10[1];
  local_bac = *pfVar8;
  fVar3 = (*(float *)(*(int *)(param_5[3] + 0x90) + 0x158) * *(float *)(iVar7 + 0x154) +
           *(float *)(*(int *)(param_5[3] + 0x90) + 0x150) +
          SQRT(fVar15 * fVar15 + fVar17 * fVar17 + *pfVar10 * *pfVar10) * *pfVar5 +
          *(float *)(*(int *)(param_4[3] + 0x90) + 0x150)) / local_c20 + fVar3 + fVar4;
  local_ba8 = pfVar8[1];
  local_ba4 = pfVar8[2];
  local_b9c = *local_be4 - *pfVar8;
  local_b98 = CONCAT44((float)((ulonglong)*(undefined8 *)(local_be4 + 1) >> 0x20) -
                       (float)((ulonglong)*(undefined8 *)(pfVar8 + 1) >> 0x20),
                       (float)*(undefined8 *)(local_be4 + 1) - (float)*(undefined8 *)(pfVar8 + 1));
  FUN_002b65a0(&local_b9c);
  local_bd8 = 1.0 / fVar3;
  fVar4 = *(float *)(&DAT_00469e20 + (*(uint *)(*(int *)(param_1 + 0x10) + 0x14) >> 0x16 & 0xff) * 4
                    );
  if (fVar14 < *(float *)(&DAT_00469e20 +
                         (*(uint *)(*(int *)(param_1 + 0x10) + 0x14) >> 0x16 & 0xff) * 4)) {
    fVar4 = fVar14;
  }
  fVar14 = *(float *)(*(int *)(param_5[3] + 0x90) + 0x48);
  puVar12 = (uint *)((int *)(*(int *)(&DAT_003b86f0 + ((uint)param_2 & 0xc)) + (int)param_2) +
                    ((*(int *)(*(int *)(&DAT_003b86f0 + ((uint)param_2 & 0xc)) + (int)param_2) << 1)
                    >> 0x11));
  local_bdc = fVar3;
  while( true ) {
    pfVar5 = (float *)((*(uint *)((int)puVar12 + *(int *)(&DAT_003b86e0 + ((uint)puVar12 & 0xc))) &
                       0xffff) * 0x10 + *param_4);
    uVar1 = *(undefined8 *)(pfVar5 + 1);
    local_bbc = *pfVar5 - *local_b74;
    local_bb8 = (float)uVar1 - (float)*(undefined8 *)(local_b74 + 1);
    fStack_bb4 = (float)((ulonglong)uVar1 >> 0x20) -
                 (float)((ulonglong)*(undefined8 *)(local_b74 + 1) >> 0x20);
    FUN_002b65a0(&local_bbc);
    iVar7 = FUN_002dd650(&local_be0,(fVar14 + fVar14) * fVar4 * -0.3,0,local_5a8,local_b50,0,
                         param_1 + 0x30,*(undefined4 *)(param_1 + 0x18),
                         *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x30),
                         *(undefined4 *)(param_1 + 0x34));
    if (iVar7 != 0) {
      *(undefined4 *)(param_1 + 0x28) = 0x32;
    }
    if (puVar12 == param_2) break;
    puVar12 = (uint *)((int)puVar12 +
                      ((*(int *)(*(int *)(&DAT_003b86f0 + ((uint)puVar12 & 0xc)) + (int)puVar12) <<
                       1) >> 0x11) * 4 + *(int *)(&DAT_003b86f0 + ((uint)puVar12 & 0xc)));
  }
  return;
}
