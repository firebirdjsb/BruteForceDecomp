/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B4FB45A79D862BBFE5AF20D85BF1718D19F3FBAD102FC277DF78DC33FA37A272
 * Entry: 0x002cc340, Ghidra index: 10148, label: FUN_002cc340
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
extern uint32_t _DAT_00469f3c;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002cc340(int param_1,undefined4 param_2,uint *param_3,int param_4,int *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint *puVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_be0;
  float local_bdc;
  float fStack_bd8;
  undefined4 local_bd4;
  float *local_bd0;
  float *local_bcc;
  undefined **local_bc8;
  float local_bc4;
  float local_bc0;
  float local_bb4;
  undefined4 local_bb0;
  undefined4 local_bac;
  undefined4 local_ba8;
  float local_ba4;
  float local_ba0;
  float local_b9c;
  float local_b98;
  float local_b94;
  float local_b90;
  float local_b8c;
  float fStack_b88;
  undefined4 local_b84;
  undefined1 local_b80 [12];
  undefined4 local_b74;
  uint *local_b70 [2];
  float local_b68;
  undefined4 local_b64;
  float local_b60 [3];
  float guest_cross[3]; /* 3 x original FSTP m32fp stack outputs */
  undefined4 local_b54;
  undefined1 local_b50 [1448];
  undefined1 local_5a8 [1448];
  
  FUN_002c96d0(local_5a8,param_4);
  FUN_002c96d0(local_b50,param_5[2]);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x24);
  local_bc8 = &PTR_LAB_0038e5d4;
  local_ba4 = 0.0;
  local_b94 = 0.0;
  local_b84 = 0;
  local_b74 = 0;
  pfVar4 = (float *)((*param_3 & 0xffff) * 0x10 + *param_5);
  local_bb0 = 0;
  local_bac = 0;
  local_ba8 = 0;
  local_b9c = pfVar4[1];
  local_b98 = pfVar4[2];
  local_ba0 = *pfVar4;
  pfVar7 = (float *)((*(uint *)((int)param_3 + *(int *)(&DAT_003b86e0 + ((uint)param_3 & 0xc))) &
                     0xffff) * 0x10 + *param_5);
  uVar1 = *(undefined8 *)(pfVar7 + 1);
  local_b90 = *pfVar7 - *pfVar4;
  local_b8c = (float)uVar1 - (float)*(undefined8 *)(pfVar4 + 1);
  fStack_b88 = (float)((ulonglong)uVar1 >> 0x20) -
               (float)((ulonglong)*(undefined8 *)(pfVar4 + 1) >> 0x20);
  FUN_002b65a0(&local_b90);
  local_bc4 = *(float *)(param_1 + 8);
  local_bc0 = 1.0 / local_bc4;
  local_b54 = 0;
  fVar9 = *(float *)(*(int *)(param_1 + 0x10) + 0x50);
  local_bb4 = (*(float *)(&DAT_00469e20 +
                         (*(uint *)(*(int *)(param_1 + 0x10) + 0x14) >> 0x16 & 0xff) * 4) + fVar9) *
              0.5;
  FUN_00150930();
  iVar5 = param_5[2];
  local_bd0 = local_b60;
  local_be0 = local_b90 * *(float *)(iVar5 + 0x10) +
              *(float *)(iVar5 + 0x18) * fStack_b88 + *(float *)(iVar5 + 0x14) * local_b8c;
  local_bdc = *(float *)(iVar5 + 0x20) * local_b90 +
              *(float *)(iVar5 + 0x28) * fStack_b88 + *(float *)(iVar5 + 0x24) * local_b8c;
  fStack_bd8 = *(float *)(iVar5 + 0x30) * local_b90 +
               *(float *)(iVar5 + 0x38) * fStack_b88 + *(float *)(iVar5 + 0x34) * local_b8c;
  local_b60[0] = local_b60[0] - *(float *)(param_4 + 0x40);
  /* XBE 0x002CC579..0x002CC581 writes the 3 vector lanes
   * through MOVSS/MOVHPS, not a synthetic 64-bit member. */
  fVar10 = local_b60[1] - *(float *)(param_4 + 0x44);
  fVar12 = local_b60[2] - *(float *)(param_4 + 0x48);
  local_b64 = 0;
  /* XBE 0x002CC59E/0x002CC5B7/0x002CC5D0 stores three
   * distinct F32 results to adjacent guest stack locations.
   * Ghidra's later pointer-array lifetime in local_b70 must not
   * reuse these live float values as host pointers. */
  guest_cross[0] = fVar10 * fStack_bd8 - fVar12 * local_bdc;
  guest_cross[1] = fVar12 * local_be0 - fStack_bd8 * local_b60[0];
  guest_cross[2] = local_bdc * local_b60[0] - fVar10 * local_be0;
  FUN_002b73d0(param_5[2] + 0x10,guest_cross,local_b80);
  FUN_002b65a0(local_b80);
  iVar5 = FUN_002dd8d0(&local_bc8,
                       *(float *)(&DAT_00469e20 +
                                 (*(uint *)(*(int *)(param_1 + 0x10) + 0x14) >> 0x16 & 0xff) * 4) +
                       fVar9,fVar9 * 0.9 + DAT_00469e18,local_5a8,local_b50,0,param_1 + 0x30,
                       *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                       *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  if (iVar5 != 0) {
    *(undefined4 *)(param_1 + 0x28) = 0x30;
  }
  local_bc8 = &PTR_LAB_0038e5c8;
  local_ba8 = 0;
  local_b98 = 0.0;
  fStack_b88 = 0.0;
  local_bc4 = *(float *)(param_1 + 0xc);
  local_bc0 = 1.0 / local_bc4;
  local_bb4 = 0.0;
  local_bb0 = 0;
  local_bac = 0;
  local_b70[0] = param_3;
  local_bd0 = &local_be0;
  local_b70[1] = param_3 + ((int)(*param_3 << 1) >> 0x11);
  iVar5 = 0;
  do {
    pfVar4 = local_bd0;
    puVar3 = local_b70[iVar5];
    local_bd4 = 0;
    iVar6 = *param_5;
    pfVar8 = (float *)((*puVar3 & 0xffff) * 0x10 + iVar6);
    pfVar7 = (float *)((*(uint *)((int)puVar3 + *(int *)(&DAT_003b86e0 + ((uint)puVar3 & 0xc))) &
                       0xffff) * 0x10 + iVar6);
    local_bcc = (float *)((*(uint *)((int)puVar3 + *(int *)(&DAT_003b86f0 + ((uint)puVar3 & 0xc))) &
                          0xffff) * 0x10 + iVar6);
    uVar1 = *(undefined8 *)(pfVar7 + 1);
    uVar2 = *(undefined8 *)(pfVar8 + 1);
    *local_bd0 = *pfVar7 - *pfVar8;
    *(ulonglong *)(pfVar4 + 1) =
         CONCAT44((float)((ulonglong)uVar1 >> 0x20) - (float)((ulonglong)uVar2 >> 0x20),
                  (float)uVar1 - (float)uVar2);
    fVar12 = *pfVar7 - *pfVar8;
    fVar14 = (float)*(undefined8 *)(pfVar8 + 1);
    fVar11 = (float)*(undefined8 *)(pfVar7 + 1) - fVar14;
    fVar15 = (float)((ulonglong)*(undefined8 *)(pfVar8 + 1) >> 0x20);
    fVar10 = (float)((ulonglong)*(undefined8 *)(pfVar7 + 1) >> 0x20) - fVar15;
    fVar13 = *local_bcc - *pfVar8;
    fVar14 = (float)*(undefined8 *)(local_bcc + 1) - fVar14;
    fVar15 = (float)((ulonglong)*(undefined8 *)(local_bcc + 1) >> 0x20) - fVar15;
    fVar9 = fVar11 * fVar15 - fVar10 * fVar14;
    fVar10 = fVar10 * fVar13 - fVar12 * fVar15;
    fVar12 = fVar12 * fVar14 - fVar11 * fVar13;
    local_ba4 = fVar12 * local_bdc - fStack_bd8 * fVar10;
    local_ba0 = fStack_bd8 * fVar9 - fVar12 * local_be0;
    local_b9c = fVar10 * local_be0 - local_bdc * fVar9;
    FUN_002b65a0(&local_ba4);
    local_b90 = pfVar8[1];
    local_b94 = *pfVar8;
    local_b8c = pfVar8[2];
    local_bcc = (float *)-_DAT_00469f3c;
    iVar6 = FUN_002dd650(&local_bc8,local_bcc,0,local_5a8,local_b50,0,(undefined4 *)(param_1 + 0x30)
                         ,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                         *(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
    if (iVar6 != 0) {
      *(undefined4 *)(param_1 + 0x28) = 0x31;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 2);
  return;
}
