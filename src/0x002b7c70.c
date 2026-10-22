/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 81F20322253DBCE378FB59D729A7B523C1D6592ADE695DEA434714F266DBA40D
 * Entry: 0x002b7c70, Ghidra index: 9855, label: FUN_002b7c70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b86e0;
extern uint32_t DAT_003b86f0;
void FUN_002b7c70(float *param_1,int *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float *pfVar3;
  int iVar4;
  uint *puVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  uint *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_40;
  float local_3c;
  float fStack_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  float *local_10 [4];
  
  iVar7 = (int)(short)param_2[3];
  iVar9 = 0;
  if (iVar7 == 2) {
    local_34 = 0;
    FUN_002cdc50(&local_40);
    iVar7 = (param_2[5] & 0xffffU) * 0x10 + *param_2;
    pfVar3 = (float *)(iVar7 + (int)param_2);
    fVar15 = local_40 * *pfVar3 +
             fStack_38 * pfVar3[2] + local_3c * *(float *)(iVar7 + 4 + (int)param_2);
    fVar11 = (local_40 * *param_1 + fStack_38 * param_1[2] + local_3c * param_1[1]) - fVar15;
    fVar15 = (local_40 * param_1[8] + fStack_38 * param_1[10] + local_3c * param_1[9]) - fVar15;
    if (fVar11 * fVar15 < 0.0) {
      local_24 = 0;
      fVar15 = fVar11 / (fVar11 - fVar15);
      FUN_002b64b0(fVar15);
      FUN_002cd2b0(&local_30);
      if ((-1 < (int)((uint)local_18 | (uint)local_1c | (uint)local_20)) &&
         ((param_1[0x10] != 1.4013e-45 ||
          (local_40 * param_1[0xc] + fStack_38 * param_1[0xe] + local_3c * param_1[0xd] <= 0.0)))) {
        if (fVar11 < 0.0) {
          local_40 = local_40 * -1.0;
          local_3c = local_3c * -1.0;
          fStack_38 = fStack_38 * -1.0;
        }
        FUN_002b65a0(&local_40);
        (*(code *)**(undefined4 **)param_1[0x11])
                  (param_1[0x12],param_2,param_2 + 4,fVar15 * param_1[0x13],&local_40);
        return;
      }
    }
  }
  else {
    local_2c = param_1[0xd];
    local_30 = param_1[0xc];
    local_28 = param_1[0xe];
    if (0 < iVar7) {
      puVar10 = (uint *)(param_2 + 5);
      while( true ) {
        iVar4 = *param_2;
        pfVar3 = (float *)((*puVar10 & 0xffff) * 0x10 + iVar4 + (int)param_2);
        pfVar8 = (float *)((*(uint *)((int)puVar10 + *(int *)(&DAT_003b86e0 + ((uint)puVar10 & 0xc))
                                     ) & 0xffff) * 0x10 + iVar4 + (int)param_2);
        pfVar6 = (float *)((*(uint *)((int)puVar10 + *(int *)(&DAT_003b86f0 + ((uint)puVar10 & 0xc))
                                     ) & 0xffff) * 0x10 + iVar4 + (int)param_2);
        fVar15 = *pfVar3;
        uVar1 = *(undefined8 *)(pfVar3 + 1);
        uVar2 = *(undefined8 *)(pfVar8 + 1);
        fVar12 = *pfVar8 - fVar15;
        fVar16 = (float)uVar1;
        fVar13 = (float)uVar2 - fVar16;
        fVar17 = (float)((ulonglong)uVar1 >> 0x20);
        fVar14 = (float)((ulonglong)uVar2 >> 0x20) - fVar17;
        uVar1 = *(undefined8 *)(pfVar6 + 1);
        fVar15 = *pfVar6 - fVar15;
        fVar16 = (float)uVar1 - fVar16;
        fVar17 = (float)((ulonglong)uVar1 >> 0x20) - fVar17;
        fVar11 = fVar13 * fVar17 - fVar14 * fVar16;
        fVar14 = fVar14 * fVar15 - fVar12 * fVar17;
        fVar15 = fVar12 * fVar16 - fVar13 * fVar15;
        if ((local_30 * fVar11 + fVar14 * local_2c + fVar15 * local_28 <= -1e-06) &&
           (iVar4 = (*puVar10 & 0xffff) * 0x10 + *param_2, pfVar3 = (float *)(iVar4 + (int)param_2),
           fVar12 = fVar11 * *pfVar3 +
                    fVar14 * pfVar3[1] + fVar15 * *(float *)(iVar4 + 8 + (int)param_2),
           0.0 < (fVar11 * *param_1 + fVar14 * param_1[1] + fVar15 * param_1[2]) - fVar12)) break;
        iVar9 = iVar9 + 2;
        puVar10 = puVar10 + 8;
        if (iVar7 <= iVar9) {
          return;
        }
      }
      if (((fVar11 * param_1[8] + fVar14 * param_1[9] + fVar15 * param_1[10]) - fVar12 <= 0.0) &&
         (iVar7 = (short)param_2[3] + -1, -1 < iVar7)) {
        while( true ) {
          local_34 = 0;
          iVar9 = *param_2;
          pfVar3 = (float *)((*puVar10 & 0xffff) * 0x10 + iVar9 + (int)param_2);
          pfVar8 = (float *)((*(uint *)((int)puVar10 +
                                       *(int *)(&DAT_003b86e0 + ((uint)puVar10 & 0xc))) & 0xffff) *
                             0x10 + iVar9 + (int)param_2);
          pfVar6 = (float *)((*(uint *)((int)puVar10 +
                                       *(int *)(&DAT_003b86f0 + ((uint)puVar10 & 0xc))) & 0xffff) *
                             0x10 + iVar9 + (int)param_2);
          fVar15 = *pfVar3;
          uVar1 = *(undefined8 *)(pfVar3 + 1);
          uVar2 = *(undefined8 *)(pfVar8 + 1);
          fVar12 = *pfVar8 - fVar15;
          fVar16 = (float)uVar1;
          fVar13 = (float)uVar2 - fVar16;
          fVar17 = (float)((ulonglong)uVar1 >> 0x20);
          fVar14 = (float)((ulonglong)uVar2 >> 0x20) - fVar17;
          uVar1 = *(undefined8 *)(pfVar6 + 1);
          fVar15 = *pfVar6 - fVar15;
          fVar16 = (float)uVar1 - fVar16;
          fVar17 = (float)((ulonglong)uVar1 >> 0x20) - fVar17;
          fVar11 = fVar13 * fVar17 - fVar14 * fVar16;
          fVar14 = fVar14 * fVar15 - fVar12 * fVar17;
          fVar15 = fVar12 * fVar16 - fVar13 * fVar15;
          if (-1e-06 < fVar11 * local_30 + fVar14 * local_2c + fVar15 * local_28) break;
          iVar9 = (*puVar10 & 0xffff) * 0x10 + *param_2;
          pfVar3 = (float *)(iVar9 + (int)param_2);
          fVar12 = fVar11 * *pfVar3 +
                   fVar14 * pfVar3[1] + fVar15 * *(float *)(iVar9 + 8 + (int)param_2);
          fVar13 = (fVar11 * *param_1 + fVar14 * param_1[1] + fVar15 * param_1[2]) - fVar12;
          fVar12 = (fVar11 * param_1[8] + fVar14 * param_1[9] + fVar15 * param_1[10]) - fVar12;
          if (0.0 <= fVar13 * fVar12) {
            return;
          }
          local_14 = 0;
          fVar13 = fVar13 / (fVar13 - fVar12);
          fVar15 = 1.0 - fVar13;
          local_1c = fVar15 * param_1[1] + fVar13 * param_1[9];
          local_20 = fVar15 * *param_1 + fVar13 * param_1[8];
          local_18 = fVar13 * param_1[10] + fVar15 * param_1[2];
          FUN_002cd2b0(&local_20);
          iVar9 = 0;
          puVar5 = puVar10;
          while( true ) {
            if (2 < iVar9) {
              fVar15 = param_1[0x13];
              FUN_002b65a0(&local_40);
              pfVar3 = &local_40;
              (*(code *)**(undefined4 **)param_1[0x11])
                        (param_1[0x12],param_2,(uint)puVar10 & 0xfffffff0,fVar13 * fVar15);
              fVar15 = local_10[0][0x13];
              local_10[0][8] = *local_10[0] + local_10[0][0xc] * fVar15;
              *(ulonglong *)(local_10[0] + 9) =
                   CONCAT44((float)((ulonglong)*(undefined8 *)(local_10[0] + 1) >> 0x20) +
                            (float)((ulonglong)*(undefined8 *)(local_10[0] + 0xd) >> 0x20) * fVar15,
                            (float)*(undefined8 *)(local_10[0] + 1) +
                            (float)*(undefined8 *)(local_10[0] + 0xd) * fVar15);
              local_10[0][0x13] = (float)pfVar3;
              return;
            }
            if ((float)local_10[iVar9] <= 0.0) break;
            puVar5 = (uint *)((int)puVar5 + *(int *)(&DAT_003b86e0 + ((uint)puVar5 & 0xc)));
            iVar9 = iVar9 + 1;
          }
          iVar7 = iVar7 + -1;
          puVar10 = puVar5 + ((int)(*puVar5 << 1) >> 0x11);
          if (iVar7 < 0) {
            return;
          }
        }
      }
    }
  }
  return;
}
