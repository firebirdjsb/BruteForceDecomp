/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1BB7A9C9653E63E2BE680B7627D15F89B99C8CEBE8B7E11A68A8C0BA3B98EDA7
 * Entry: 0x002ca850, Ghidra index: 10143, label: FUN_002ca850
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
extern uint32_t PTR_LAB_0038e5c0;
extern uint32_t PTR_LAB_0038e5c4;
extern uint32_t PTR_LAB_0038e5cc;
extern uint32_t _DAT_00469f3c;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002ca850(int param_1,uint *param_2,uint *param_3,int *param_4,int *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  uint uVar10;
  float *pfVar11;
  int iVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float *local_c68 [4];
  /* Original XBE x87 FSTP writes scalar F32 transformed-vector
   * values before the same guest stack words are recycled as
   * traversal pointers later. Keep these disjoint C lifetimes.
   * TODO/ABI_UNVERIFIED: full SIMD/x87 and guest pointer ABI. */
  float guest_transform_x;
  float guest_transform_y;
  float guest_cross_x;
  float guest_cross_y;
  undefined **local_c58;
  float local_c54;
  float local_c50;
  float local_c44;
  float local_c40;
  float local_c3c;
  undefined4 local_c38;
  float local_c34;
  float local_c30;
  float fStack_c2c;
  undefined4 local_c28;
  float local_c24;
  float local_c20;
  float local_c1c;
  undefined4 local_c18;
  float local_c14;
  float local_c10;
  float fStack_c0c;
  undefined4 local_c08;
  undefined4 local_c04;
  int *local_bfc;
  int *local_bf8;
  int *local_bf4;
  int *local_bf0;
  float *local_bec;
  undefined **local_be8;
  float local_be4;
  float local_be0;
  float local_bd4;
  float local_bd0;
  float local_bcc;
  undefined4 local_bc8;
  float local_bc4;
  undefined8 local_bc0;
  undefined4 local_bb8;
  undefined **local_bb4 [5];
  float local_ba0;
  float local_b9c;
  float local_b90;
  float local_b8c;
  float local_b88;
  undefined4 local_b84;
  float local_b80;
  float local_b7c;
  float local_b78;
  undefined4 local_b74;
  uint local_b70 [4];
  uint *local_b60 [4];
  undefined *local_b50 [362];
  undefined1 local_5a8 [1448];
  
  FUN_002c96d0(local_5a8,param_4[2]);
  FUN_002c96d0(local_b50,param_5[2]);
  local_c58 = &PTR_LAB_0038e5cc;
  local_c38 = 0;
  local_c28 = 0;
  local_c18 = 0;
  local_c08 = 0;
  fVar17 = *(float *)(*(int *)(param_4[3] + 0x90) + 0x154) +
           *(float *)(*(int *)(param_5[3] + 0x90) + 0x154);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x24);
  pfVar7 = (float *)((*(uint *)((int)param_2 + *(int *)(&DAT_003b86e0 + ((uint)param_2 & 0xc))) &
                     0xffff) * 0x10 + *param_4);
  pfVar9 = (float *)((*param_2 & 0xffff) * 0x10 + *param_4);
  pfVar11 = (float *)((*param_3 & 0xffff) * 0x10 + *param_5);
  pfVar8 = (float *)((*(uint *)((int)param_3 + *(int *)(&DAT_003b86e0 + ((uint)param_3 & 0xc))) &
                     0xffff) * 0x10 + *param_5);
  local_bec = &local_c34;
  uVar1 = *(undefined8 *)(pfVar7 + 1);
  local_c34 = *pfVar7 - *pfVar9;
  local_c30 = (float)uVar1 - (float)*(undefined8 *)(pfVar9 + 1);
  fStack_c2c = (float)((ulonglong)uVar1 >> 0x20) -
               (float)((ulonglong)*(undefined8 *)(pfVar9 + 1) >> 0x20);
  FUN_002b65a0(&local_c34);
  uVar1 = *(undefined8 *)(pfVar8 + 1);
  local_c14 = *pfVar8 - *pfVar11;
  local_c10 = (float)uVar1 - (float)*(undefined8 *)(pfVar11 + 1);
  fStack_c0c = (float)((ulonglong)uVar1 >> 0x20) -
               (float)((ulonglong)*(undefined8 *)(pfVar11 + 1) >> 0x20);
  FUN_002b65a0(&local_c14);
  local_c40 = pfVar9[1];
  local_c3c = pfVar9[2];
  local_c44 = *pfVar9;
  local_c24 = *pfVar11;
  local_c20 = pfVar11[1];
  local_c1c = pfVar11[2];
  local_c54 = *(float *)(param_1 + 8);
  local_c50 = 1.0 / local_c54;
  iVar5 = param_5[2];
  fVar14 = local_c14 * *(float *)(iVar5 + 0x10) +
           *(float *)(iVar5 + 0x18) * fStack_c0c + *(float *)(iVar5 + 0x14) * local_c10;
  fVar18 = *(float *)(iVar5 + 0x28) * fStack_c0c +
           *(float *)(iVar5 + 0x24) * local_c10 + *(float *)(iVar5 + 0x20) * local_c14;
  iVar12 = param_4[2];
  fVar15 = *(float *)(iVar5 + 0x38) * fStack_c0c +
           *(float *)(iVar5 + 0x34) * local_c10 + *(float *)(iVar5 + 0x30) * local_c14;
  guest_transform_x = local_c34 * *(float *)(iVar12 + 0x10) +
                      *(float *)(iVar12 + 0x18) * fStack_c2c +
                      *(float *)(iVar12 + 0x14) * local_c30;
  guest_transform_y = *(float *)(iVar12 + 0x28) * fStack_c2c +
                      *(float *)(iVar12 + 0x24) * local_c30 +
                      *(float *)(iVar12 + 0x20) * local_c34;
  iVar5 = *(int *)(param_1 + 0x10);
  fVar16 = *(float *)(iVar12 + 0x38) * fStack_c2c +
           *(float *)(iVar12 + 0x34) * local_c30 + *(float *)(iVar12 + 0x30) * local_c34;
  guest_cross_x = guest_transform_y * fVar15 - fVar16 * fVar18;
  guest_cross_y = fVar16 * fVar14 - fVar15 * guest_transform_x;
  bVar13 = -(guest_cross_x * *(float *)(iVar5 + 0x60) +
             guest_cross_y * *(float *)(iVar5 + 100) +
             (fVar18 * guest_transform_x - guest_transform_y * fVar14) * *(float *)(iVar5 + 0x68)
             ) <= 0.0;
  if (bVar13) {
    local_c04 = 0x3f800000;
  }
  else {
    local_c04 = 0xbf800000;
  }
  uVar10 = (uint)bVar13;
  iVar5 = FUN_002dd8d0(&local_c58,
                       *(undefined4 *)
                        (&DAT_00469e20 +
                        (*(uint *)(*(int *)(param_1 + 0x10) + 0x14) >> 0x16 & 0xff) * 4),
                       DAT_00469e18,local_5a8,local_b50,0,param_1 + 0x30,
                       *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                       *(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
  if ((float)iVar5 != 0.0) {
    *(undefined4 *)(param_1 + 0x28) = 0x40;
  }
  local_b88 = fStack_c2c;
  local_ba0 = fVar17 + fVar17 + 1e-10;
  local_b8c = local_c30;
  local_b78 = fStack_c0c;
  local_b9c = 1.0 / local_ba0;
  local_b90 = local_c34;
  local_b7c = local_c10;
  local_b80 = local_c14;
  local_bb4[4] = &PTR_LAB_0038e5c4;
  local_b84 = 0;
  local_b74 = 0;
  iVar5 = FUN_002dd650(local_bb4 + 4,0x2edbe6ff,0,local_5a8,local_b50,0,
                       (undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x18),
                       *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x30),
                       *(undefined4 *)(param_1 + 0x34));
  if ((float)iVar5 != 0.0) {
    *(undefined4 *)(param_1 + 0x28) = 0x41;
  }
  local_b60[1] = param_2;
  local_be4 = fVar17 + 1e-10;
  local_b60[3] = param_3;
  local_b60[0] = param_2 + ((int)(*param_2 << 1) >> 0x11);
  local_c68[0] = &local_c14;
  local_c68[3] = &local_c34;
  local_b60[2] = param_3 + ((int)(*param_3 << 1) >> 0x11);
  local_b70[1] = 1 - uVar10;
  local_b70[3] = 1 - uVar10;
  local_c68[1] = &local_c14;
  local_c68[2] = &local_c34;
  local_bb4[2] = (undefined **)local_5a8;
  local_bb4[0] = local_b50;
  local_bb4[1] = local_b50;
  local_bfc = param_5;
  local_bf8 = param_5;
  iVar5 = 0;
  local_b70[0] = uVar10;
  local_b70[2] = uVar10;
  local_bb4[3] = (undefined **)local_5a8;
  local_bf4 = param_4;
  local_bf0 = param_4;
  local_be8 = &PTR_LAB_0038e5c0;
  local_bc8 = 0;
  local_be0 = 1.0 / (fVar17 + 1e-10);
  local_bb8 = 0;
  iVar12 = 0;
  do {
    pfVar7 = *(float **)((int)local_c68 + iVar12);
    local_bd0 = pfVar7[1];
    if (*(int *)((int)local_b70 + iVar12) == 0) {
      local_bd0 = local_bd0 * -1.0;
      local_bcc = pfVar7[2] * -1.0;
      local_bd4 = *pfVar7 * -1.0;
    }
    else {
      local_bcc = pfVar7[2];
      local_bd4 = *pfVar7;
    }
    puVar3 = *(uint **)((int)local_b60 + iVar12);
    piVar4 = *(int **)(*(int *)((int)&local_bf0 + iVar5) + 4);
    iVar6 = *piVar4;
    pfVar9 = (float *)((*puVar3 & 0xffff) * 0x10 + iVar6 + (int)piVar4);
    pfVar8 = (float *)((*(uint *)((int)puVar3 + *(int *)(&DAT_003b86e0 + ((uint)puVar3 & 0xc))) &
                       0xffff) * 0x10 + iVar6 + (int)piVar4);
    pfVar7 = (float *)((*(uint *)((int)puVar3 + *(int *)(&DAT_003b86f0 + ((uint)puVar3 & 0xc))) &
                       0xffff) * 0x10 + iVar6 + (int)piVar4);
    fVar17 = *pfVar9;
    uVar1 = *(undefined8 *)(pfVar9 + 1);
    uVar2 = *(undefined8 *)(pfVar8 + 1);
    fVar14 = *pfVar8 - fVar17;
    fVar18 = (float)uVar1;
    fVar15 = (float)uVar2 - fVar18;
    fVar19 = (float)((ulonglong)uVar1 >> 0x20);
    fVar16 = (float)((ulonglong)uVar2 >> 0x20) - fVar19;
    uVar1 = *(undefined8 *)(pfVar7 + 1);
    fVar17 = *pfVar7 - fVar17;
    fVar18 = (float)uVar1 - fVar18;
    fVar19 = (float)((ulonglong)uVar1 >> 0x20) - fVar19;
    local_bc4 = fVar15 * fVar19 - fVar16 * fVar18;
    local_bc0 = CONCAT44(fVar14 * fVar18 - fVar15 * fVar17,fVar16 * fVar17 - fVar14 * fVar19);
    FUN_002b65a0(&local_bc4);
    iVar6 = FUN_002dd650(&local_be8,
                         -(_DAT_00469f3c *
                          *(float *)(*(int *)(*(int *)((int)local_bb4 + iVar12) + 4) + 0x48)),0,
                         *(int *)((int)local_bb4 + iVar12),
                         *(undefined4 *)((int)local_bb4 + iVar5 + 0xc),0,param_1 + 0x30,
                         *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                         *(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
    if (iVar6 != 0) {
      *(undefined4 *)(param_1 + 0x28) = 0x42;
    }
    iVar5 = iVar5 + -4;
    iVar12 = iVar12 + 4;
  } while (-0xd < iVar5);
  return;
}
