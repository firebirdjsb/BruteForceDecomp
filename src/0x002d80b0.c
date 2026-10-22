/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FC0CE00850278F14A637E17205A36B1E0C404D68F24D4D86D962A5C2C6089A66
 * Entry: 0x002d80b0, Ghidra index: 10249, label: FUN_002d80b0
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

undefined4 FUN_002d80b0(uint *param_1,undefined4 param_2,int *param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int *piVar11;
  int iVar12;
  uint *puVar13;
  undefined4 uVar14;
  int *in_ECX;
  int iVar15;
  float *pfVar16;
  uint *puVar17;
  float *pfVar18;
  uint *puVar19;
  float fVar20;
  undefined1 in_XMM0 [16];
  undefined1 auVar21 [16];
  int *local_7c;
  uint *local_74;
  float local_70;
  float local_6c;
  float fStack_68;
  undefined4 local_64;
  float *local_60;
  int local_5c;
  undefined4 local_58;
  int local_54;
  uint *local_50;
  float local_4c;
  undefined4 local_44;
  int *local_40;
  float local_3c;
  undefined4 local_34;
  float *local_30;
  float local_2c;
  float local_28;
  float local_18 [5];
  float *local_4;
  
  in_ECX[1] = in_ECX[1] + -1;
  if ((in_ECX[1] < 0) && (iVar12 = FUN_002c15b0(param_1,param_2), iVar12 != 0)) {
    return 2;
  }
  local_4c = (float)param_2;
  local_50 = param_1;
  pfVar16 = local_18;
  iVar12 = 2;
  do {
    *pfVar16 = 0.0;
    pfVar16 = pfVar16 + 4;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  FUN_00150930();
  FUN_00150930();
  iVar12 = (*param_1 & 0xffff) * 0x10;
  fVar20 = local_18[1] - *(float *)(iVar12 + *param_3);
  iVar12 = iVar12 + *param_3;
  fVar4 = local_18[2] - *(float *)(iVar12 + 4);
  fVar3 = local_18[3] - *(float *)(iVar12 + 8);
  local_2c = fVar20 * fVar20 + fVar4 * fVar4 + fVar3 * fVar3;
  if (local_2c < 1e-06 == (local_2c == 1e-06)) {
    local_60 = local_18 + 1;
    local_40 = param_3;
    local_3c = (float)param_4;
    local_28 = 0.0;
    local_30 = (float *)0x0;
    local_74 = (uint *)0x0;
    local_58 = 0;
    local_7c = (int *)0x0;
    local_54 = 0;
    local_4 = &local_70;
    iVar12 = 4;
    local_5c = 0;
    do {
      pfVar16 = local_4;
      puVar19 = *(uint **)((int)&local_50 + local_5c);
      piVar11 = *(int **)((int)&local_40 + local_5c);
      pfVar18 = (float *)((*puVar19 & 0xffff) * 0x10 + *piVar11);
      local_64 = 0;
      uVar1 = *(undefined8 *)(local_60 + 1);
      uVar2 = *(undefined8 *)(pfVar18 + 1);
      *local_4 = *local_60 - *pfVar18;
      *(ulonglong *)(pfVar16 + 1) =
           CONCAT44((float)((ulonglong)uVar1 >> 0x20) - (float)((ulonglong)uVar2 >> 0x20),
                    (float)uVar1 - (float)uVar2);
      puVar19 = (uint *)((int)puVar19 + *(int *)(&DAT_003b86f0 + ((uint)puVar19 & 0xc)));
      puVar13 = puVar19 + ((int)(*puVar19 << 1) >> 0x11);
      iVar15 = *(int *)(&DAT_003b86f0 + ((uint)puVar13 & 0xc));
      while( true ) {
        puVar17 = (uint *)(iVar15 + (int)puVar13);
        iVar15 = (*(uint *)(iVar15 + (int)puVar13) & 0xffff) * 0x10;
        pfVar16 = (float *)(iVar15 + *piVar11);
        fVar20 = (fStack_68 * pfVar16[2] +
                 local_6c * pfVar16[1] + local_70 * *(float *)(iVar15 + *piVar11)) -
                 (local_70 * *pfVar18 + fStack_68 * pfVar18[2] + local_6c * pfVar18[1]);
        if (0.0 < fVar20) {
          in_XMM0 = rsqrtss(in_XMM0,(*pfVar16 - *pfVar18) * (*pfVar16 - *pfVar18) +
                                    (pfVar16[1] - pfVar18[1]) * (pfVar16[1] - pfVar18[1]) +
                                    (pfVar16[2] - pfVar18[2]) * (pfVar16[2] - pfVar18[2]));
          fVar20 = in_XMM0._0_4_ * fVar20;
          if (local_28 < fVar20) {
            local_28 = fVar20;
            local_58 = *(undefined4 *)((int)&local_50 + iVar12);
            local_30 = local_60;
            local_54 = *(int *)((int)&local_40 + iVar12);
            local_7c = piVar11;
            local_74 = puVar17;
          }
        }
        if (puVar17 == puVar19) break;
        puVar13 = puVar17 + ((int)(*puVar17 << 1) >> 0x11);
        iVar15 = *(int *)(&DAT_003b86f0 + ((uint)puVar13 & 0xc));
      }
      local_5c = local_5c + 4;
      local_60 = local_60 + -4;
      iVar12 = iVar12 + -4;
    } while (local_5c < 5);
    if (local_74 != (uint *)0x0) {
      piVar11 = (int *)local_7c[1];
      pfVar16 = (float *)((*local_74 & 0xffff) * 0x10 + *piVar11 + (int)piVar11);
      pfVar18 = (float *)((*(uint *)((int)local_74 +
                                    *(int *)(&DAT_003b86e0 + ((uint)local_74 & 0xc))) & 0xffff) *
                          0x10 + *piVar11 + (int)piVar11);
      local_44 = 0;
      uVar1 = *(undefined8 *)(pfVar18 + 1);
      local_50 = (uint *)(*pfVar18 - *pfVar16);
      local_4c = (float)uVar1 - (float)*(undefined8 *)(pfVar16 + 1);
      local_34 = 0;
      local_40 = (int *)(*pfVar16 - *local_30);
      local_3c = (float)*(undefined8 *)(pfVar16 + 1) - (float)*(undefined8 *)(local_30 + 1);
      iVar12 = *in_ECX;
      if (local_3c * local_4c +
          ((float)((ulonglong)*(undefined8 *)(pfVar16 + 1) >> 0x20) -
          (float)((ulonglong)*(undefined8 *)(local_30 + 1) >> 0x20)) *
          ((float)((ulonglong)uVar1 >> 0x20) -
          (float)((ulonglong)*(undefined8 *)(pfVar16 + 1) >> 0x20)) +
          (float)local_40 * (float)local_50 < 0.0) {
        if (*(int *)(local_54 + 0x10) != (*(uint *)(iVar12 + 0x14) >> 8 & 3) * 0x1c + 0x18 + iVar12)
        {
          *(uint *)(iVar12 + 0x14) = *(uint *)(iVar12 + 0x14) ^ 0x100;
        }
        uVar14 = FUN_002d8e40(local_58,local_74,local_54,local_7c);
        return uVar14;
      }
      if (local_7c[4] != (*(uint *)(iVar12 + 0x14) >> 8 & 3) * 0x1c + 0x18 + iVar12) {
        *(uint *)(iVar12 + 0x14) = *(uint *)(iVar12 + 0x14) ^ 0x100;
      }
      uVar14 = FUN_002d80b0(local_74,local_58,local_7c,local_54);
      return uVar14;
    }
    iVar12 = param_3[4];
    *(uint **)(iVar12 + 0x14) = param_1;
    *(undefined2 *)(iVar12 + 0x1a) = 0;
    iVar12 = *(int *)(param_4 + 0x10);
    *(undefined4 *)(iVar12 + 0x14) = param_2;
    *(undefined2 *)(iVar12 + 0x1a) = 0;
    auVar21 = rsqrtss(in_XMM0,local_2c);
    fVar20 = auVar21._0_4_;
    *(float *)(*in_ECX + 0x54) = fVar20 * local_2c - *(float *)(*in_ECX + 0x50);
    pfVar16 = (float *)((*param_1 & 0xffff) * 0x10 + *param_3);
    iVar12 = *in_ECX;
    uVar1 = *(undefined8 *)(pfVar16 + 1);
    *(float *)(iVar12 + 0x60) = (*pfVar16 - local_18[1]) * fVar20;
    *(ulonglong *)(iVar12 + 100) =
         CONCAT44(((float)((ulonglong)uVar1 >> 0x20) - local_18[3]) * fVar20,
                  ((float)uVar1 - local_18[2]) * fVar20);
    iVar12 = param_3[2];
    fVar20 = *(float *)(iVar12 + 0x20);
    iVar15 = *in_ECX;
    fVar3 = *(float *)(iVar15 + 0x60);
    fVar4 = *(float *)(iVar12 + 0x28);
    fVar5 = *(float *)(iVar12 + 0x24);
    fVar6 = *(float *)(iVar12 + 0x30);
    fVar7 = *(float *)(iVar15 + 0x60);
    fVar8 = *(float *)(iVar12 + 0x38);
    fVar9 = *(float *)(iVar12 + 0x34);
    fVar10 = *(float *)(iVar15 + 100);
    *(float *)(iVar15 + 0x60) =
         *(float *)(iVar12 + 0x10) * *(float *)(iVar15 + 0x60) +
         *(float *)(iVar12 + 0x14) * *(float *)(iVar15 + 100) +
         *(float *)(iVar12 + 0x18) * *(float *)(iVar15 + 0x68);
    *(float *)(iVar15 + 100) =
         fVar5 * *(float *)(iVar15 + 100) + fVar4 * *(float *)(iVar15 + 0x68) + fVar20 * fVar3;
    *(float *)(iVar15 + 0x68) = fVar9 * fVar10 + fVar8 * *(float *)(iVar15 + 0x68) + fVar6 * fVar7;
    uVar1 = *(undefined8 *)(param_3[2] + 0x54);
    uVar2 = *(undefined8 *)(*(int *)(param_4 + 8) + 0x54);
    iVar12 = *in_ECX;
    *(float *)(iVar12 + 0x58) =
         (*(float *)(param_3[2] + 0x50) - *(float *)(*(int *)(param_4 + 8) + 0x50)) *
         *(float *)(iVar12 + 0x60) +
         ((float)((ulonglong)uVar1 >> 0x20) - (float)((ulonglong)uVar2 >> 0x20)) *
         *(float *)(iVar12 + 0x68) + ((float)uVar1 - (float)uVar2) * *(float *)(iVar12 + 100);
    return 1;
  }
  return 2;
}
