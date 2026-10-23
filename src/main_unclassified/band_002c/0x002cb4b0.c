/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7711F09CBF8A6D12F0BB890F930423093B73F664005F16F71E84CA5011433145
 * Entry: 0x002cb4b0, Ghidra index: 10145, label: FUN_002cb4b0
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
extern uint32_t PTR_LAB_0038e5dc;
extern uint32_t PTR_LAB_0038e5e0;
void FUN_002cb4b0(int param_1,int param_2,uint *param_3,undefined4 param_4,int *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  uint *puVar8;
  float10 fVar9;
  float fVar10;
  float fVar12;
  undefined1 auVar11 [16];
  undefined **local_bb0;
  float local_bac;
  float local_ba8;
  undefined4 local_b9c;
  undefined4 local_b98;
  undefined4 local_b94;
  undefined4 local_b90;
  float local_b8c;
  float local_b88;
  float local_b84;
  undefined4 local_b80;
  float local_b7c;
  float local_b78;
  float fStack_b74;
  undefined4 local_b70;
  float *local_b68;
  float local_b64;
  float *local_b60;
  float *local_b5c;
  float local_b58;
  float *local_b54;
  undefined1 local_b50 [1448];
  undefined1 local_5a8 [1448];
  
  FUN_002c96d0(local_5a8,param_4);
  FUN_002c96d0(local_b50,param_5[2]);
  iVar5 = *(int *)(param_5[3] + 0x90);
  iVar3 = *(int *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x24);
  iVar4 = *param_5;
  local_bb0 = &PTR_LAB_0038e5e0;
  iVar6 = (*param_3 & 0xffff) * 0x10;
  local_b8c = *(float *)(iVar6 + iVar4);
  local_b88 = *(float *)(iVar6 + 4 + iVar4);
  local_b84 = *(float *)(iVar6 + 8 + iVar4);
  pfVar7 = (float *)(iVar6 + iVar4);
  local_b90 = 0;
  local_b80 = 0;
  local_b70 = 0;
  local_b9c = 0;
  local_b98 = 0;
  local_b94 = 0;
  iVar4 = *(int *)(param_1 + 0x10);
  local_b78 = *(float *)(iVar4 + 100) * -1.0;
  fStack_b74 = *(float *)(iVar4 + 0x68) * -1.0;
  local_b7c = *(float *)(iVar4 + 0x60) * -1.0;
  local_bac = *(float *)(param_1 + 8);
  local_ba8 = 1.0 / local_bac;
  fVar10 = *(float *)(*(int *)(param_1 + 0x10) + 0x50);
  local_b5c = pfVar7;
  iVar4 = FUN_002dd8d0(&local_bb0,
                       *(float *)(&DAT_00469e20 +
                                 (*(uint *)(*(int *)(param_1 + 0x10) + 0x14) >> 0x16 & 0xff) * 4) +
                       fVar10,fVar10 * 0.5 + DAT_00469e18,local_5a8,local_b50,0,param_1 + 0x30,
                       *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                       *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  if (iVar4 != 0) {
    *(undefined4 *)(param_1 + 0x28) = 0x10;
  }
  fVar12 = *(float *)(iVar3 + 0x150);
  fVar10 = (float)(((float10)*(double *)(param_1 + 0x30) - (float10)*(double *)(param_1 + 0x18)) *
                   (float10)*(float *)(param_1 + 0xc) +
                  (float10)*(float *)(*(int *)(param_1 + 0x10) + 0x54));
  fVar9 = (float10)FUN_002b67e0(pfVar7);
  fVar9 = (float10)fVar10 * (float10)*(float *)(iVar5 + 0x154) +
          fVar9 * (float10)*(float *)(iVar5 + 0x154) + (float10)*(float *)(iVar5 + 0x150) +
          (float10)fVar12;
  fVar12 = *(float *)(&DAT_00469e20 +
                     (*(uint *)(*(int *)(param_1 + 0x10) + 0x14) >> 0x16 & 0xff) * 4) *
           *(float *)(&DAT_00469e20 +
                     (*(uint *)(*(int *)(param_1 + 0x10) + 0x14) >> 0x16 & 0xff) * 4);
  if (fVar10 * fVar10 < fVar12) {
    fVar12 = fVar10 * fVar10;
  }
  local_b88 = pfVar7[1];
  local_b8c = *pfVar7;
  local_b84 = pfVar7[2];
  local_b64 = -(fVar12 * *(float *)(*(int *)(param_5[3] + 0x90) + 0x48));
  local_bac = (float)fVar9;
  local_bb0 = &PTR_LAB_0038e5dc;
  local_b90 = 0;
  local_b80 = 0;
  local_b70 = 0;
  local_b9c = 0;
  local_b98 = 0;
  local_b94 = 0;
  local_b54 = &local_b7c;
  local_ba8 = (float)((float10)1.0 / fVar9);
  puVar8 = (uint *)((int *)(*(int *)(&DAT_003b86f0 + ((uint)param_3 & 0xc)) + (int)param_3) +
                   ((*(int *)(*(int *)(&DAT_003b86f0 + ((uint)param_3 & 0xc)) + (int)param_3) << 1)
                   >> 0x11));
  local_b68 = &local_b7c;
  while( true ) {
    pfVar7 = local_b54;
    local_b60 = (float *)((*(uint *)((int)puVar8 + *(int *)(&DAT_003b86e0 + ((uint)puVar8 & 0xc))) &
                          0xffff) * 0x10 + *param_5);
    uVar1 = *(undefined8 *)(local_b60 + 1);
    uVar2 = *(undefined8 *)(local_b5c + 1);
    *local_b54 = *local_b60 - *local_b5c;
    *(ulonglong *)(pfVar7 + 1) =
         CONCAT44((float)((ulonglong)uVar1 >> 0x20) - (float)((ulonglong)uVar2 >> 0x20),
                  (float)uVar1 - (float)uVar2);
    auVar11._0_4_ = *local_b68 * *local_b68;
    auVar11._4_4_ = 0;
    fVar10 = (float)*(undefined8 *)(local_b68 + 1);
    fVar12 = (float)((ulonglong)*(undefined8 *)(local_b68 + 1) >> 0x20);
    auVar11._8_4_ = fVar10 * fVar10;
    auVar11._12_4_ = fVar12 * fVar12;
    local_b58 = auVar11._8_4_ + auVar11._12_4_ + auVar11._0_4_;
    auVar11 = rsqrtss(auVar11,local_b58);
    fVar10 = auVar11._0_4_;
    local_b7c = local_b7c * fVar10;
    local_b78 = local_b78 * fVar10;
    fStack_b74 = fStack_b74 * fVar10;
    iVar5 = FUN_002dd650(&local_bb0,fVar10 * local_b58 * local_b64,0,local_5a8,local_b50,0,
                         (undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x18),
                         *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x30),
                         *(undefined4 *)(param_1 + 0x34));
    if (iVar5 != 0) {
      *(undefined4 *)(param_1 + 0x28) = 0x11;
    }
    if (puVar8 == param_3) break;
    puVar8 = (uint *)((int)puVar8 +
                     ((*(int *)(*(int *)(&DAT_003b86f0 + ((uint)puVar8 & 0xc)) + (int)puVar8) << 1)
                     >> 0x11) * 4 + *(int *)(&DAT_003b86f0 + ((uint)puVar8 & 0xc)));
  }
  return;
}
