/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 58FB9207C4B4739C0DCF2E7FD003047DE875ED0584C23CB047DE4EDFE6BFCF17
 * Entry: 0x002c9f30, Ghidra index: 10141, label: FUN_002c9f30
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
extern uint32_t PTR_LAB_0038e5d0;
extern uint32_t _DAT_00469f3c;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002c9f30(int param_1,uint *param_2,uint *param_3,int *param_4,int *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint *puVar8;
  float fVar10;
  float fVar11;
  undefined1 auVar9 [16];
  float local_c24;
  float local_c20;
  float *local_c1c;
  float *local_c18;
  float *local_c14;
  float local_c10;
  float local_c0c;
  float fStack_c08;
  undefined4 local_c04;
  float local_c00;
  float local_bfc;
  float local_bf8;
  undefined4 local_bf4;
  float local_bf0;
  float local_bec;
  float local_be8;
  undefined4 local_be4;
  undefined **local_be0;
  float local_bdc;
  float local_bd8;
  undefined4 local_bcc;
  undefined4 local_bc8;
  undefined4 local_bc4;
  undefined4 local_bc0;
  float local_bbc;
  float local_bb8;
  float local_bb4;
  undefined4 local_bb0;
  undefined4 local_bac;
  undefined4 local_ba8;
  undefined4 local_ba4;
  undefined4 local_ba0;
  float local_b94;
  float local_b90;
  float local_b8c;
  float *local_b88;
  undefined **local_b84;
  float local_b80;
  float local_b7c;
  float local_b70;
  float local_b6c;
  float local_b68;
  undefined4 local_b64;
  float local_b60;
  float local_b5c;
  float local_b58;
  undefined4 local_b54;
  undefined1 local_b50 [4];
  int local_b4c;
  undefined1 local_5a8 [4];
  int local_5a4;
  
  FUN_002c96d0(local_5a8,param_4[2]);
  FUN_002c96d0(local_b50,param_5[2]);
  local_c14 = (float *)(*(float *)(local_b4c + 0x154) + *(float *)(local_5a4 + 0x154));
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x24);
  local_be0 = &PTR_LAB_0038e5c8;
  local_bc0 = 0;
  local_bb0 = 0;
  local_ba0 = 0;
  iVar5 = (*param_2 & 0xffff) * 0x10;
  local_bc8 = *(undefined4 *)(iVar5 + 4 + *param_4);
  puVar6 = (undefined4 *)(iVar5 + *param_4);
  local_bc4 = puVar6[2];
  local_bcc = *puVar6;
  iVar5 = (*param_3 & 0xffff) * 0x10;
  local_ba8 = *(undefined4 *)(iVar5 + 4 + *param_5);
  puVar6 = (undefined4 *)(iVar5 + *param_5);
  local_ba4 = puVar6[2];
  local_bac = *puVar6;
  FUN_002cdc50(&local_bbc);
  FUN_002b65a0(&local_bbc);
  local_bdc = *(float *)(param_1 + 8);
  local_bd8 = 1.0 / local_bdc;
  iVar5 = *(int *)(param_1 + 0x10);
  fVar10 = *(float *)(iVar5 + 0x50);
  local_c24 = fVar10 * 0.5 + DAT_00469e18;
  local_c20 = fVar10 + *(float *)(iVar5 + 0x54);
  iVar5 = FUN_002dd8d0(&local_be0,
                       *(float *)(&DAT_00469e20 + (*(uint *)(iVar5 + 0x14) >> 0x16 & 0xff) * 4) +
                       fVar10,local_c24,local_5a8,local_b50,&local_c20,
                       (undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x18),
                       *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x30),
                       *(undefined4 *)(param_1 + 0x34));
  if (iVar5 != 0) {
    *(undefined4 *)(param_1 + 0x28) = 0x20;
  }
  local_b5c = local_bb8;
  local_b60 = local_bbc;
  local_b58 = local_bb4;
  local_b84 = &PTR_LAB_0038e5d0;
  local_b64 = 0;
  local_b54 = local_bb0;
  iVar5 = *(int *)(param_1 + 0x10);
  uVar7 = *(uint *)(iVar5 + 0x14) >> 0x16 & 0xff;
  if (*(float *)(iVar5 + 0x54) <= *(float *)(&DAT_00469e20 + uVar7 * 4)) {
    fVar10 = *(float *)(iVar5 + 0x54);
  }
  else {
    fVar10 = *(float *)(&DAT_00469e20 + uVar7 * 4);
  }
  local_be4 = 0;
  local_bf4 = 0;
  iVar3 = param_5[2];
  local_c18 = *(float **)(iVar3 + 0x30);
  local_c20 = *(float *)(iVar3 + 0x38);
  local_c1c = (float *)(((*(float *)(iVar5 + 0x50) * 0.1 + fVar10) *
                        -(_DAT_00469f3c * *(float *)(*(int *)(param_5[3] + 0x90) + 0x48))) /
                       *(float *)(&DAT_00469e20 + uVar7 * 4));
  local_c24 = *(float *)(iVar3 + 0x34);
  local_bf0 = local_bbc * *(float *)(iVar3 + 0x10) +
              *(float *)(iVar3 + 0x14) * local_bb8 + *(float *)(iVar3 + 0x18) * local_bb4;
  local_bec = local_bbc * *(float *)(iVar3 + 0x20) +
              local_bb8 * *(float *)(iVar3 + 0x24) + local_bb4 * *(float *)(iVar3 + 0x28);
  local_be8 = local_bbc * (float)local_c18 + local_bb8 * local_c24 + local_bb4 * local_c20;
  FUN_002b73d0(param_4[2] + 0x10,&local_bf0,&local_c00);
  pfVar4 = local_c1c;
  local_b80 = (float)local_c14 + 1e-10;
  local_b7c = 1.0 / local_b80;
  local_c18 = (float *)((*param_2 & 0xffff) * 0x10 + *param_4);
  puVar8 = (uint *)((int *)(*(int *)(&DAT_003b86f0 + ((uint)param_2 & 0xc)) + (int)param_2) +
                   ((*(int *)(*(int *)(&DAT_003b86f0 + ((uint)param_2 & 0xc)) + (int)param_2) << 1)
                   >> 0x11));
  local_c14 = &local_c10;
  local_b90 = (float)(((float10)*(double *)(param_1 + 0x30) - (float10)*(double *)(param_1 + 0x18))
                     * (float10)local_b80);
  local_b88 = &local_c10;
  while( true ) {
    local_c1c = (float *)((*(uint *)((int)puVar8 + *(int *)(&DAT_003b86e0 + ((uint)puVar8 & 0xc))) &
                          0xffff) * 0x10 + *param_4);
    local_c04 = 0;
    uVar1 = *(undefined8 *)(local_c1c + 1);
    uVar2 = *(undefined8 *)(local_c18 + 1);
    *local_c14 = *local_c1c - *local_c18;
    *(ulonglong *)(local_c14 + 1) =
         CONCAT44((float)((ulonglong)uVar1 >> 0x20) - (float)((ulonglong)uVar2 >> 0x20),
                  (float)uVar1 - (float)uVar2);
    auVar9._0_4_ = *local_b88 * *local_b88;
    auVar9._4_4_ = 0;
    fVar10 = (float)*(undefined8 *)(local_b88 + 1);
    fVar11 = (float)((ulonglong)*(undefined8 *)(local_b88 + 1) >> 0x20);
    auVar9._8_4_ = fVar10 * fVar10;
    auVar9._12_4_ = fVar11 * fVar11;
    local_b94 = auVar9._8_4_ + auVar9._12_4_ + auVar9._0_4_;
    auVar9 = rsqrtss(auVar9,local_b94);
    local_c20 = auVar9._0_4_;
    local_c24 = local_c20 * (local_c10 * local_c00 + local_c0c * local_bfc + fStack_c08 * local_bf8)
    ;
    if (local_c24 < local_b90) {
      local_b70 = local_c20 * local_c10;
      local_b6c = local_c0c * local_c20;
      local_b68 = fStack_c08 * local_c20;
      local_b8c = local_b94;
      iVar5 = FUN_002dd650(&local_b84,pfVar4,0,local_5a8,local_b50,&local_c24,
                           (undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x18),
                           *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x30),
                           *(undefined4 *)(param_1 + 0x34));
      if (iVar5 != 0) {
        *(undefined4 *)(param_1 + 0x28) = 0x21;
      }
    }
    if (puVar8 == param_2) break;
    puVar8 = (uint *)((int)puVar8 +
                     ((*(int *)(*(int *)(&DAT_003b86f0 + ((uint)puVar8 & 0xc)) + (int)puVar8) << 1)
                     >> 0x11) * 4 + *(int *)(&DAT_003b86f0 + ((uint)puVar8 & 0xc)));
  }
  return;
}
