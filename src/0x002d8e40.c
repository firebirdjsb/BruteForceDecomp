/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B3AE974AA4B632FB10A3FC1711064F6D45A3FDF5348B258C98457AFDB63F0B4E
 * Entry: 0x002d8e40, Ghidra index: 10253, label: FUN_002d8e40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b86e0;
extern uint32_t DAT_003b86f0;
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_002d8e40(uint *param_1,uint *param_2,int *param_3,int *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  uint *puVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  uint *puVar9;
  uint *puVar10;
  float10 fVar11;
  float10 fVar12;
  undefined1 in_XMM0 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_110;
  float local_10c;
  float local_108;
  float fStack_104;
  undefined4 local_100;
  float *local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  undefined4 local_ec;
  float local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  float local_d8;
  float local_d4;
  float fStack_d0;
  undefined4 local_cc;
  float *local_c8;
  float *local_c4;
  undefined4 local_b4;
  float local_b0;
  float local_ac;
  float fStack_a8;
  undefined4 local_a4;
  undefined1 local_a0 [12];
  undefined4 local_94;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  undefined1 local_68 [104];
  
  in_ECX[1] = in_ECX[1] + -1;
  if ((in_ECX[1] < 0) && (iVar3 = FUN_002c15b0(param_1,param_2), iVar3 != 0)) {
    return 2;
  }
  local_a4 = 0;
  local_dc = 0;
  FUN_00150930();
  FUN_002b7360(param_4[2] + 0x10,&local_e8,&local_b0);
  iVar3 = *param_4;
  pfVar6 = (float *)((*param_2 & 0xffff) * 0x10 + iVar3);
  pfVar7 = (float *)((*(uint *)((int)param_2 + *(int *)(&DAT_003b86f0 + ((uint)param_2 & 0xc))) &
                     0xffff) * 0x10 + iVar3);
  pfVar8 = (float *)((*(uint *)((int)param_2 + *(int *)(&DAT_003b86e0 + ((uint)param_2 & 0xc))) &
                     0xffff) * 0x10 + iVar3);
  local_c4 = (float *)((*(uint *)((int)(param_2 + ((int)(*param_2 * 2) >> 0x11)) +
                                 *(int *)(&DAT_003b86f0 +
                                         ((uint)(param_2 + ((int)(*param_2 * 2) >> 0x11)) & 0xc))) &
                       0xffff) * 0x10 + iVar3);
  local_100 = 0;
  uVar1 = *(undefined8 *)(pfVar8 + 1);
  local_10c = *pfVar8 - *pfVar6;
  local_108 = (float)uVar1 - (float)*(undefined8 *)(pfVar6 + 1);
  fStack_104 = (float)((ulonglong)uVar1 >> 0x20) -
               (float)((ulonglong)*(undefined8 *)(pfVar6 + 1) >> 0x20);
  local_fc = &local_b0;
  local_cc = 0;
  local_d8 = local_b0 - *pfVar6;
  local_d4 = local_ac - (float)*(undefined8 *)(pfVar6 + 1);
  fStack_d0 = fStack_a8 - (float)((ulonglong)*(undefined8 *)(pfVar6 + 1) >> 0x20);
  local_b4 = 0;
  uVar1 = *(undefined8 *)(pfVar7 + 1);
  fVar14 = *pfVar7 - *pfVar6;
  fVar15 = (float)uVar1 - (float)*(undefined8 *)(pfVar6 + 1);
  fVar17 = (float)((ulonglong)uVar1 >> 0x20) -
           (float)((ulonglong)*(undefined8 *)(pfVar6 + 1) >> 0x20);
  local_c8 = (float *)local_a0;
  local_94 = 0;
  fVar16 = (float)*(undefined8 *)(local_c4 + 1) - (float)*(undefined8 *)(pfVar6 + 1);
  fVar18 = (float)((ulonglong)*(undefined8 *)(local_c4 + 1) >> 0x20) -
           (float)((ulonglong)*(undefined8 *)(pfVar6 + 1) >> 0x20);
  local_e8 = fVar16 * fStack_104 - fVar18 * local_108;
  fVar18 = fVar18 * local_10c - fStack_104 * (*local_c4 - *pfVar6);
  fVar16 = local_108 * (*local_c4 - *pfVar6) - fVar16 * local_10c;
  local_e4 = CONCAT44(fVar16,fVar18);
  local_90 = local_d4 * (fStack_104 * fVar14 - fVar17 * local_10c) +
             fStack_d0 * (fVar15 * local_10c - local_108 * fVar14) +
             (fVar17 * local_108 - fStack_104 * fVar15) * local_d8;
  local_8c = local_d4 * fVar18 + fStack_d0 * fVar16 + local_e8 * local_d8;
  FUN_002cd2b0(&local_b0);
  FUN_002cd2b0(&local_b0);
  if (local_78 <= 0.0) {
    if (local_e8 <= 0.0) {
      if ((local_90 < 0.0) && (local_8c < 0.0)) {
        iVar3 = param_3[4];
        *(undefined2 *)(iVar3 + 0x1a) = 0;
        *(uint **)(iVar3 + 0x14) = param_1;
        iVar3 = param_4[4];
        *(uint **)(iVar3 + 0x14) = param_2;
        *(undefined2 *)(iVar3 + 0x1a) = 5;
        in_ECX[3] = (int)local_ac;
        in_ECX[4] = (int)fStack_a8;
        in_ECX[2] = (int)local_b0;
        return 3;
      }
      local_ec = 0;
      local_f8 = fStack_d0 * local_108 - local_d4 * fStack_104;
      local_f4 = fStack_104 * local_d8 - fStack_d0 * local_10c;
      local_f0 = local_d4 * local_10c - local_108 * local_d8;
      fVar11 = (float10)FUN_0010ff10(&local_10c);
      fVar12 = (float10)FUN_0010ff10(&local_f8);
      fVar12 = fVar12 * (float10)(float)((float10)1.0 / fVar11);
      local_110 = (float)fVar12;
      if (fVar12 <= (float10)1e-10) {
        *(float *)(*in_ECX + 0x54) = -*(float *)(*in_ECX + 0x50);
        local_84 = 0;
        FUN_002b70c0();
        FUN_002b65a0(&local_90);
        pfVar6 = (float *)(*in_ECX + 0x60);
        *pfVar6 = local_90;
        fVar18 = local_8c;
      }
      else {
        auVar13 = rsqrtss(in_XMM0,local_110);
        local_fc = auVar13._0_4_;
        *(float *)(*in_ECX + 0x54) = (float)local_fc * local_110 - *(float *)(*in_ECX + 0x50);
        local_c4 = (float *)local_110;
        FUN_002b66b0();
        FUN_002c9620();
        pfVar6 = (float *)(*in_ECX + 0x60);
        fVar18 = -((float)local_fc * (float)((float10)1.0 / fVar11));
        local_88 = local_f0 * fVar18;
        *pfVar6 = fVar18 * local_f8;
        fVar18 = local_f4 * fVar18;
      }
      pfVar6[1] = fVar18;
      pfVar6[2] = local_88;
      local_dc = 0;
      local_c8 = (float *)(param_4[2] + 0x50);
      local_c4 = &local_e8;
      uVar1 = *(undefined8 *)(param_3[2] + 0x54);
      uVar2 = *(undefined8 *)(param_4[2] + 0x54);
      local_e8 = *(float *)(param_3[2] + 0x50) - *local_c8;
      fVar18 = (float)uVar1 - (float)uVar2;
      fVar16 = (float)((ulonglong)uVar1 >> 0x20) - (float)((ulonglong)uVar2 >> 0x20);
      local_e4 = CONCAT44(fVar16,fVar18);
      iVar3 = *in_ECX;
      *(float *)(iVar3 + 0x58) =
           local_e8 * *(float *)(iVar3 + 0x60) +
           fVar16 * *(float *)(iVar3 + 0x68) + fVar18 * *(float *)(iVar3 + 100);
      FUN_002b73d0(param_3[2] + 0x10,&local_f8,&local_f8);
      local_110 = local_110 * 1e-06;
      local_c8 = (float *)((*param_1 & 0xffff) * 0x10 + *param_3);
      puVar10 = (uint *)(*(int *)(&DAT_003b86f0 + ((uint)param_1 & 0xc)) + (int)param_1);
      puVar9 = (uint *)0x0;
      puVar5 = puVar10 + ((*(int *)(*(int *)(&DAT_003b86f0 + ((uint)param_1 & 0xc)) + (int)param_1)
                          << 1) >> 0x11);
      local_c4 = &local_e8;
      while( true ) {
        pfVar6 = local_c4;
        puVar5 = (uint *)(*(int *)(&DAT_003b86f0 + ((uint)puVar5 & 0xc)) + (int)puVar5);
        local_dc = 0;
        pfVar7 = (float *)((*puVar5 & 0xffff) * 0x10 + *param_3);
        uVar1 = *(undefined8 *)(pfVar7 + 1);
        uVar2 = *(undefined8 *)(local_c8 + 1);
        *local_c4 = *pfVar7 - *local_c8;
        *(ulonglong *)(pfVar6 + 1) =
             CONCAT44((float)((ulonglong)uVar1 >> 0x20) - (float)((ulonglong)uVar2 >> 0x20),
                      (float)uVar1 - (float)uVar2);
        fVar18 = (float)local_e4 * local_f4 + local_e4._4_4_ * local_f0 + local_e8 * local_f8;
        if (0.0 < fVar18) {
          local_fc = &local_e8;
          auVar13._0_4_ = local_e8 * local_e8;
          auVar13._4_4_ = 0;
          auVar13._8_4_ = (float)local_e4 * (float)local_e4;
          auVar13._12_4_ = local_e4._4_4_ * local_e4._4_4_;
          local_80 = auVar13._8_4_ + auVar13._12_4_ + auVar13._0_4_;
          auVar13 = rsqrtss(auVar13,local_80);
          local_90 = auVar13._0_4_;
          fVar18 = local_90 * fVar18;
          local_7c = local_80;
          if (local_110 < fVar18) {
            puVar9 = puVar5;
            local_110 = fVar18;
          }
        }
        if (puVar5 == puVar10) break;
        puVar5 = puVar5 + ((int)(*puVar5 << 1) >> 0x11);
      }
      if (puVar9 == (uint *)0x0) {
LAB_002d965d:
        iVar3 = param_3[4];
        *(undefined2 *)(iVar3 + 0x1a) = 0;
        *(uint **)(iVar3 + 0x14) = param_1;
        iVar3 = param_4[4];
        *(uint **)(iVar3 + 0x14) = param_2;
        *(undefined2 *)(iVar3 + 0x1a) = 1;
        return 1;
      }
      if (local_110 < 0.003) {
        FUN_002cd4c0(local_68,param_2,puVar9,param_4,param_3);
        iVar3 = FUN_002cd7d0();
        if ((iVar3 == 0) || (local_70 < 0.0)) goto LAB_002d965d;
      }
      uVar4 = FUN_002d6f30(puVar9,param_2,param_3,param_4);
      return uVar4;
    }
  }
  else if ((local_e8 <= 0.0) || (local_8c <= 0.0)) {
    uVar4 = FUN_002d6520(in_ECX,param_1,param_4);
    return uVar4;
  }
  uVar4 = FUN_002d6520(in_ECX,param_1,param_4);
  return uVar4;
}
